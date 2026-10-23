/* SE_OBJ_PNGN_ICE_BREAK_ref
 * address: 0x602C2F88   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICE_BREAK_ref(int a1)
{
  StateBase *CurrentState; // r0
  int result; // r0
  float v4; // r1
  float v5; // r1
  int v6; // r5
  Vec3 v7; // [sp+0h] [bp-28h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  CurrentState = *(StateBase **)(a1 + 6100);
  if ( !CurrentState )
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  FIELD_U32(a1, 12032) = CurrentState;
  result = sub_602C2BD4(a1);
  if ( !result )
  {
    v4 = FIELD_F32(a1, 6444);
    v7.x = FIELD_F32(a1, 6440);
    v7.y = v4;
    v7.z = 4500.0;
    EffectData_create(476, &v7, 0, a1 + 6452);
    EffectData_create(909, &v7, 0, 0);
    v5 = FIELD_F32(a1, 112);
    v6 = Global_BasicSoundActor2;
    v7.x = FIELD_F32(a1, 108);
    v7.y = v5;
    mapPositionToScreen(&out, &v7);
    BasicSoundActor2_play(v6, "SE_OBJ_PNGN_ICE_BREAK", &out.x, 0);
    return sub_602A74C0(a1);
  }
  return result;
}
