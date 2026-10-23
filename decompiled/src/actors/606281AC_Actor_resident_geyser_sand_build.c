/* Actor_resident_geyser_sand_build
 * address: 0x606281AC   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_resident_geyser_sand_build(ActorBuildInfo *a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1D58u);
  result = Actor_resident_geyser_sand_build_helper(v2, a1);
  *(_DWORD *)result = off_60C11E20;
  FIELD_U16(result, 7508) = 0;
  return result;
}
