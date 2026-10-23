/* Actor_geyser_sand_build
 * address: 0x606250AC   size: 28   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_geyser_sand_build(int a1)
{
  int v2; // r0

  v2 = operator_new(0x1D58u);
  return Actor_resident_geyser_sand_build_helper(v2, a1);
}
