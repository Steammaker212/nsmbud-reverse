/* BossBase__vf2C8
 * address: 0x600266E0   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60051F68 : BoomBoomBase
//   - 0x60030F1C : SumoBrosBoss
//   - 0x600B68C0 : KoopalingBase
int __fastcall BossBase__vf2C8(int result)
{
  float v1; // s0
  int v2; // r1

  v1 = FIELD_F32(result, 112);
  v2 = FIELD_U32(result, 116);
  FIELD_U32(result, 7028) = FIELD_U32(result, 108);
  FIELD_F32(result, 7032) = v1 + -2.5;
  FIELD_U32(result, 7036) = v2;
  FIELD_U32(result, 7040) = 1109393408;
  FIELD_U32(result, 7044) = 1111490560;
  FIELD_U32(result, 7048) = 1109393408;
  return result;
}
