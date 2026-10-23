/* SE_EMY_SR_MG_KILLER_SHOT_ref
 * address: 0x603D22B8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_EMY_SR_MG_KILLER_SHOT_ref(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  _BYTE *result; // r0
  float v5; // r1
  int v6; // r1
  float v7; // r1
  int v8; // r5
  Vec3 v9; // [sp+0h] [bp-30h] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 6100);
  v2 = FIELD_U32(a1, 6100);
  if ( !v2 || (result = (_BYTE *)(v2 - 1), (*v3 = result) == 0) )
  {
    v5 = FIELD_F32(a1, 112);
    v9.x = FIELD_F32(a1, 108);
    v9.y = v5;
    v9.z = sub_6000A3C4(EnemyCounterMaybe_instance);
    v6 = 12;
    *v3 = FIELD_U32(a1, 6104);
    if ( !FIELD_U8(a1, 20) )
      v6 = 10;
    result = sub_6032314C(&v9, v6, 0);
    if ( result )
    {
      v7 = FIELD_F32(a1, 112);
      v8 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v7;
      mapPositionToScreen(&out, &position);
      return (_BYTE *)BasicSoundActor2_play(v8, "SE_EMY_SR_MG_KILLER_SHOT", &out.x, 0);
    }
  }
  return result;
}
