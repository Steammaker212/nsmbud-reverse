/* KaniboTama__vf90
 * address: 0x6031119C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x6000401C
// 
// Overridden by: None
float __fastcall KaniboTama__vf90(int a1, float a2)
{
  float result; // s0

  FIELD_U8(a1, 6412) = 0;
  result = a2 * 0.5;
  FIELD_F32(a1, 124) = result;
  return result;
}
