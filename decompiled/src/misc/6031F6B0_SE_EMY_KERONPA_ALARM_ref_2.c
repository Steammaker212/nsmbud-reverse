/* SE_EMY_KERONPA_ALARM_ref_2
 * address: 0x6031F6B0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SE_EMY_KERONPA_ALARM_ref_2(int a1)
{
  float v2; // r1
  int v3; // r5
  int v4; // r6
  _DWORD *result; // r0
  int v6; // r1
  int v7; // r1
  Vec2 v8; // [sp+8h] [bp+0h] BYREF
  Vec3 position; // [sp+10h] [bp+8h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 8);
  v4 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v8, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v4, "SE_EMY_KERONPA_ALARM", v3, &v8, 0);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7124));
  result = (_DWORD *)(a1 + 12996);
  v6 = FIELD_U32(a1, 12996);
  if ( !v6 || (v7 = v6 - 1, (*result = v7) == 0) )
  {
    FIELD_U32(a1, 340) |= 0x1000u;
    return (_DWORD *)SE_EMY_KERONPA_ALARM_ref_2_helper(a1, 0);
  }
  return result;
}
