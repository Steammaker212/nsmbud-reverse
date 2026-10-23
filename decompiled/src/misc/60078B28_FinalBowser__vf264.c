/* FinalBowser__vf264
 * address: 0x60078B28   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A9420
// 
// Overridden by: None
int __fastcall FinalBowser__vf264(int a1)
{
  int v2; // r6
  int v3; // r5
  float v4; // r0
  Vec2 v6; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  FIELD_U16(a1, 6276) = 15;
  v2 = a1 + 7504;
  v3 = a1 + 26128;
  sub_602F31A0(a1 + 26128, a1 + 7504, 0);
  sub_602F322C(v3, v2, 0, 0);
  v4 = FIELD_F32(a1, 7508);
  position.x = FIELD_F32(a1, 7504);
  position.y = v4;
  mapPositionToScreen(&v6, &position);
  sub_60813570(a1 + 6332, "SE_OBJ_PNGN_ICE_FREEZE", &v6, 0);
  FIELD_U32(a1, 7524) = 0;
  FIELD_U32(a1, 7528) = 0;
  sub_60236D10(a1 + 25660, 1);
  return sub_60236D10(a1 + 25596, 1);
}
