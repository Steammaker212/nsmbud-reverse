/* SE_EMY_DOWN_ref_302C70
 * address: 0x60302C70   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_302C70(int a1)
{
  float v2; // r0
  int v3; // r5
  _BOOL4 v4; // r7
  int result; // r0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  sub_6030309C();
  if ( FIELD_U8(a1, 7034) )
  {
    v2 = FIELD_F32(a1, 6984);
    position.x = FIELD_F32(a1, 6980);
    position.y = v2;
    v3 = Global_BasicSoundActor1;
    mapPositionToScreen(&out, &position);
    sub_60813810(v3, (int)"SE_EMY_DOWN", (int)&out, 1, 0);
    v4 = FIELD_F32(a1, 108) < FIELD_F32(a1, 6980);
    sub_602A6C70((float *)a1, v4);
    sub_602A6024(a1, v4, -1, -1);
  }
  result = FIELD_U8(a1, 7033);
  if ( !FIELD_U8(a1, 7033) )
  {
    throw_wait_ref(a1);
    return Animation_update(**(_DWORD **)(FIELD_U32(a1, 6952) + 12));
  }
  return result;
}
