/**
 * @file chem.h
 * @brief Various types for chemistry.
 * @author Ink
 * @date 2026-04-06
 *
 * Defines types used for the serialization in chemistry-related processes.
 */
#ifndef ARCHIMEDES__CHEM_CHEM_H__
#define ARCHIMEDES__CHEM_CHEM_H__

#include <archimedes/api.h>
#include <archimedes/std/heap.h>
#include <archimedes/std/int.h>

/**
 * @brief Elements of the periodic table where the ordinal is the atomic number.
 */
typedef enum {
  ARC_CHEM_THE_ELEMENT_OF_SURPRISE__,
  ARC_CHEM_HYDROGEN,
  ARC_CHEM_HELIUM,
  ARC_CHEM_LITHIUM,
  ARC_CHEM_BERYLLIUM,
  ARC_CHEM_BORON,
  ARC_CHEM_CARBON,
  ARC_CHEM_NITROGEN,
  ARC_CHEM_OXYGEN,
  ARC_CHEM_FLUORINE,
  ARC_CHEM_NEON,
  ARC_CHEM_SODIUM,
  ARC_CHEM_MAGNESIUM,
  ARC_CHEM_ALUMINIUM,
  ARC_CHEM_SILICON,
  ARC_CHEM_PHOSPHORUS,
  ARC_CHEM_SULFUR,
  ARC_CHEM_CHLORINE,
  ARC_CHEM_ARGON,
  ARC_CHEM_POTASSIUM,
  ARC_CHEM_CALCIUM,
  ARC_CHEM_SCANDIUM,
  ARC_CHEM_TITANIUM,
  ARC_CHEM_VANADIUM,
  ARC_CHEM_CHROMIUM,
  ARC_CHEM_MANGANESE,
  ARC_CHEM_IRON,
  ARC_CHEM_COBALT,
  ARC_CHEM_NICKEL,
  ARC_CHEM_COPPER,
  ARC_CHEM_ZINC,
  ARC_CHEM_GALLIUM,
  ARC_CHEM_GERMANIUM,
  ARC_CHEM_ARSENIC,
  ARC_CHEM_SELENIUM,
  ARC_CHEM_BROMINE,
  ARC_CHEM_KRYPTON,
  ARC_CHEM_RUBIDIUM,
  ARC_CHEM_STRONTIUM,
  ARC_CHEM_YTTRIUM,
  ARC_CHEM_ZIRCONIUM,
  ARC_CHEM_NIOBIUM,
  ARC_CHEM_MOLYBDENUM,
  ARC_CHEM_TECHNETIUM,
  ARC_CHEM_RUTHENIUM,
  ARC_CHEM_RHODIUM,
  ARC_CHEM_PALLADIUM,
  ARC_CHEM_SILVER,
  ARC_CHEM_CADMIUM,
  ARC_CHEM_INDIUM,
  ARC_CHEM_TIN,
  ARC_CHEM_ANTIMONY,
  ARC_CHEM_TELLURIUM,
  ARC_CHEM_IODINE,
  ARC_CHEM_XENON,
  ARC_CHEM_CESIUM,
  ARC_CHEM_BARIUM,
  ARC_CHEM_LANTHANUM,
  ARC_CHEM_CERIUM,
  ARC_CHEM_PRASEODYMIUM,
  ARC_CHEM_NEODYMIUM,
  ARC_CHEM_PROMETHIUM,
  ARC_CHEM_SAMARIUM,
  ARC_CHEM_EUROPIUM,
  ARC_CHEM_GADOLINIUM,
  ARC_CHEM_TERBIUM,
  ARC_CHEM_DYSPROSIUM,
  ARC_CHEM_HOLMIUM,
  ARC_CHEM_ERBIUM,
  ARC_CHEM_THULIUM,
  ARC_CHEM_YTTERBIUM,
  ARC_CHEM_LUTETIUM,
  ARC_CHEM_HAFNIUM,
  ARC_CHEM_TANTALUM,
  ARC_CHEM_TUNGSTEN,
  ARC_CHEM_RHENIUM,
  ARC_CHEM_OSMIUM,
  ARC_CHEM_IRIDIUM,
  ARC_CHEM_PLATINUM,
  ARC_CHEM_GOLD,
  ARC_CHEM_MERCURY,
  ARC_CHEM_THALLIUM,
  ARC_CHEM_LEAD,
  ARC_CHEM_BISMUTH,
  ARC_CHEM_POLONIUM,
  ARC_CHEM_ASTATINE,
  ARC_CHEM_RADON,
  ARC_CHEM_FRANCIUM,
  ARC_CHEM_RADIUM,
  ARC_CHEM_ACTINIUM,
  ARC_CHEM_THORIUM,
  ARC_CHEM_PROTACTINIUM,
  ARC_CHEM_URANIUM,
  ARC_CHEM_NEPTUNIUM,
  ARC_CHEM_PLUTONIUM,
  ARC_CHEM_AMERICIUM,
  ARC_CHEM_CURIUM,
  ARC_CHEM_BERKELIUM,
  ARC_CHEM_CALIFORNIUM,
  ARC_CHEM_EINSTEINIUM,
  ARC_CHEM_FERMIUM,
  ARC_CHEM_MENDELEVIUM,
  ARC_CHEM_NOBELIUM,
  ARC_CHEM_LAWRENCIUM,
  ARC_CHEM_RUTHERFORDIUM,
  ARC_CHEM_DUBNIUM,
  ARC_CHEM_SEABORGIUM,
  ARC_CHEM_BOHRIUM,
  ARC_CHEM_HASSIUM,
  ARC_CHEM_MEITNERIUM,
  ARC_CHEM_DARMSTADTIUM,
  ARC_CHEM_ROENTGENIUM,
  ARC_CHEM_COPERNICIUM,
  ARC_CHEM_NIHONIUM,
  ARC_CHEM_FLEROVIUM,
  ARC_CHEM_MOSCOVIUM,
  ARC_CHEM_LIVERMORIUM,
  ARC_CHEM_TENNESSINE,
  ARC_CHEM_OGANESSON
} arc_chem_ele_t;

/**
 * @brief Type for the number of atoms or molecules within a chemical component.
 */
typedef arc_std_size_t arc_chem_coeff_t;

/**
 * @brief Data structure to represent atoms.
 */
typedef struct {
  arc_chem_ele_t element;
  arc_chem_coeff_t coeff;
} arc_chem_atom_t;

/**
 * @brief Data structure to represent molecules.
 */
typedef struct arc_chem_mol_s arc_chem_mol_t;

/**
 * @brief Type of a `arc_chem_mol_t` struct.
 * @see ARC_CHEM_ATOM
 * @see ARC_CHEM_GROUP
 */
typedef enum {
  /**
   * @brief Molecule is composed of a number of atom structs. `O2` is a molecule
   * of this type.
   */
  ARC_CHEM_ATOM,
  /**
   * @brief Molecule is composed of other molecule structs. `H2SO4` is a
   * molecule of this type, made from `H2` and `SO4`, which itself is made from
   * `S` and `O4`.
   */
  ARC_CHEM_GROUP
} arc_chem_mol_type_t;

/**
 * @brief Data structure for a group of molecules. Used when instantiating
 * molecules.
 */
struct arc_chem_group_s {
  arc_chem_mol_t *comps;
  arc_std_size_t n_comps;
};

struct arc_chem_mol_s {
  arc_chem_coeff_t coeff;
  /**
   * @brief Type of component making up the molecule. Should always define which
   * element in the `group` union is in use.
   */
  arc_chem_mol_type_t type;
  union {
    arc_chem_atom_t atom;
    struct arc_chem_group_s group;
  };
};

/**
 * @brief The size of a `ARC_CHEM_GROUP` type molecule when excluding
 * variable-length components.
 */
#define ARC_CHEM_MOL_STATIC_SIZE                                               \
  (sizeof(arc_chem_mol_t) + sizeof(arc_chem_coeff_t) + sizeof(arc_std_size_t))

/**
 * @brief Creates a molecule type at the `mol` pointer location.
 * @param mol Pointer to the molecule type to be created.
 * @param atom Atom to use for the molecule.
 * @param coeff How many of the atom to use.
 */
arc_out arc_chem_create_mol_from_atom(arc_chem_mol_t *mol, arc_chem_atom_t atom,
                                      arc_chem_coeff_t coeff);
/**
 * @brief Creates a molecule type at the `mol` pointer location.
 * @param out Pointer to the molecule type to be created.
 * @param len Number of vargs.
 * @param ... Components to include in the molecule.
 * TODO: Update docs
 */
arc_out arc_chem_create_mol_from_comps(arc_chem_mol_t *out,
                                       arc_chem_coeff_t coeff,
                                       arc_std_size_t len,
                                       arc_chem_mol_t *comps);
/**
 * @brief Creates a molecule type at the `mol` pointer location.
 * @param out Pointer to the molecule type to be created.
 * @param len Number of vargs.
 * @param ... Components to include in the molecule.
 * TODO: Update docs
 */
arc_out arc_chem_create_group_from_comps(struct arc_chem_group_s *out,
                                         arc_std_size_t len, ...);

/**
 * @brief Data structure to represent chemical equations.
 */
typedef struct {
  arc_chem_mol_t *reactants;
  arc_std_size_t n_reactants;
  arc_chem_mol_t *products;
  arc_std_size_t n_products;
} arc_chem_equ_t;

#endif /* ARCHIMEDES__CHEM_CHEM_H__ */
