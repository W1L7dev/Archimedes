#include <archimedes/api.h>
#include <archimedes/chem/chem.h>
#include <archimedes/err/err.h>
#include <archimedes/std/heap.h>
#include <archimedes/std/mem.h>
#include <archimedes/std/varg.h>

arc_out arc_chem_create_mol_from_atom(arc_chem_mol_t *mol, arc_chem_atom_t atom,
                                      arc_chem_coeff_t coeff) {
  mol->type = ARC_CHEM_ATOM;
  mol->coeff = coeff;
  mol->atom = atom;

  return ARC_SUCCESS;
}
arc_out arc_chem_create_mol_from_comps(arc_chem_mol_t *out,
                                       arc_chem_coeff_t coeff,
                                       arc_std_size_t len,
                                       arc_chem_mol_t *comps) {
  out->coeff = coeff;
  out->type = ARC_CHEM_GROUP;
  struct arc_chem_group_s group = {comps, len};
  out->group = group;

  return ARC_SUCCESS;
}
arc_out arc_chem_create_group_from_comps(struct arc_chem_group_s *out,
                                         arc_std_size_t len, ...) {
  // Get components through vargs
  arc_std_va_list_t vcomps;
  ARC_STD_VA_START(vcomps, len);

  // Find size and allocate memory
  arc_std_size_t size = 0;
  for (int i = 0; i < len; ++i) {
    size += sizeof(ARC_STD_VA_ARG(vcomps, arc_chem_mol_t));
  }

  out->comps = (arc_chem_mol_t *)arc_std_malloc(size);
  if (out->comps) {
    ARC_STD_VA_END(vcomps);
    return arc_err_set(ARC_ERR_MEM_ALLOC);
  }
  // Copy vargs to allocated `out->comps`
  for (int i = 0; i < len; ++i) {
    arc_chem_mol_t mol = ARC_STD_VA_ARG(vcomps, arc_chem_mol_t);
    arc_std_memcpy(out->comps, vcomps, sizeof(mol));
  }

  out->n_comps = len;

  ARC_STD_VA_END(vcomps);
  return arc_err_set(ARC_ERR_NONE);
}
