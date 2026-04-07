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

#include "archimedes/api.h"
#include "archimedes/std/int.h"
#include <archimedes/std/heap.h>

/**
 * @brief Elements of the periodic table where the ordinal is the atomic number.
 */
typedef enum {
  THE_ELEMENT_OF_SURPRISE__,
  HYDROGEN,
  HELIUM,
  LITHIUM,
  BERYLLIUM,
  BORON,
  CARBON,
  NITROGEN,
  OXYGEN,
  FLUORINE,
  NEON,
  SODIUM,
  MAGNESIUM,
  ALUMINIUM,
  SILICON,
  PHOSPHORUS,
  SULFUR,
  CHLORINE,
  ARGON,
  POTASSIUM,
  CALCIUM,
  SCANDIUM,
  TITANIUM,
  VANADIUM,
  CHROMIUM,
  MANGANESE,
  IRON,
  COBALT,
  NICKEL,
  COPPER,
  ZINC,
  GALLIUM,
  GERMANIUM,
  ARSENIC,
  SELENIUM,
  BROMINE,
  KRYPTON,
  RUBIDIUM,
  STRONTIUM,
  YTTRIUM,
  ZIRCONIUM,
  NIOBIUM,
  MOLYBDENUM,
  TECHNETIUM,
  RUTHENIUM,
  RHODIUM,
  PALLADIUM,
  SILVER,
  CADMIUM,
  INDIUM,
  TIN,
  ANTIMONY,
  TELLURIUM,
  IODINE,
  XENON,
  CESIUM,
  BARIUM,
  LANTHANUM,
  CERIUM,
  PRASEODYMIUM,
  NEODYMIUM,
  PROMETHIUM,
  SAMARIUM,
  EUROPIUM,
  GADOLINIUM,
  TERBIUM,
  DYSPROSIUM,
  HOLMIUM,
  ERBIUM,
  THULIUM,
  YTTERBIUM,
  LUTETIUM,
  HAFNIUM,
  TANTALUM,
  TUNGSTEN,
  RHENIUM,
  OSMIUM,
  IRIDIUM,
  PLATINUM,
  GOLD,
  MERCURY,
  THALLIUM,
  LEAD,
  BISMUTH,
  POLONIUM,
  ASTATINE,
  RADON,
  FRANCIUM,
  RADIUM,
  ACTINIUM,
  THORIUM,
  PROTACTINIUM,
  URANIUM,
  NEPTUNIUM,
  PLUTONIUM,
  AMERICIUM,
  CURIUM,
  BERKELIUM,
  CALIFORNIUM,
  EINSTEINIUM,
  FERMIUM,
  MENDELEVIUM,
  NOBELIUM,
  LAWRENCIUM,
  RUTHERFORDIUM,
  DUBNIUM,
  SEABORGIUM,
  BOHRIUM,
  HASSIUM,
  MEITNERIUM,
  DARMSTADTIUM,
  ROENTGENIUM,
  COPERNICIUM,
  NIHONIUM,
  FLEROVIUM,
  MOSCOVIUM,
  LIVERMORIUM,
  TENNESSINE,
  OGANESSON
} arc_chem_ele_t;

/**
 * @brief Data structure to represent atoms.
 */
typedef struct {
  arc_chem_ele_t element;
  arc_std_uint32_t count;
} arc_chem_atom_t;

/**
 * @brief Data structure to represent molecules.
 */
typedef struct arc_chem_mol_s arc_chem_mol_t;
struct arc_chem_mol_s {
  enum { ATOM, GROUP } type;
  union {
    arc_chem_atom_t atom;
    struct {
      arc_chem_mol_t *components;
      arc_size_t count;
    } group;
  };
  arc_std_uint32_t coefficient;
};

/**
 * @brief Creates a molecule type at the `mol` pointer location.
 * @param mol Pointer to the molecule type to be created.
 * @param atom Atom to use for the molecule.
 * @param coefficient How many of the atom to use.
 * TODO: @return docs
 */
arc_out arc_chem_create_mol_from_atom(arc_chem_mol_t *mol, arc_chem_atom_t atom,
                                      arc_std_uint32_t coefficient);
/**
 * @brief Creates a molecule type at the `mol` pointer location.
 * @param out Pointer to the molecule type to be created.
 * @param va_Atom to use for the molecule.
 * TODO: @return docs
 */
arc_out arc_chem_create_mol_from_comps(arc_chem_mol_t *out, ...);

/**
 * @brief Data structure to represent chemical equations.
 */
typedef struct {
  arc_chem_mol_t *reactants;
  arc_size_t n_reactants;
  arc_chem_mol_t *products;
  arc_size_t n_products;
} arc_chem_equ_t;

#endif /* ARCHIMEDES__CHEM_CHEM_H__ */
