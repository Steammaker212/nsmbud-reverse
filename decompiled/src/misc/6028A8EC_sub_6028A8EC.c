/* sub_6028A8EC
 * address: 0x6028A8EC   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6028A8EC(int a1, int a2, int a3)
{
  unsigned __int16 *v6; // r4
  unsigned __int16 v7; // r0
  StateBase *CurrentState; // r0
  int v10; // r5
  StateBase *v11; // r0
  int v12; // r5
  int v13; // r7
  float v14; // r1
  const char *v15; // r1
  float v16; // s0
  Vec2 v17; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v6 = (unsigned __int16 *)(a1 + 6596);
  v7 = FIELD_U16(a1, 6596) + 1;
  *v6 = v7;
  if ( v7 > 2u )
    return Enemy__collisionFireball((float *)a1, a2, a3);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v10 == (*(int (**)(void))(dword_60C8F30C + 8))() && !FIELD_U8(a1, 6605) )
    return Enemy__collisionFireball((float *)a1, a2, a3);
  v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
  if ( v12 == (*(int (**)(void))(dword_60C8F2CC + 8))() && FIELD_U8(a1, 6605) != 2 )
    return Enemy__collisionFireball((float *)a1, a2, a3);
  v13 = Global_BasicSoundActor1;
  v14 = FIELD_F32(a1, 112);
  if ( *v6 == 1 )
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v14;
    mapPositionToScreen(&v17, &position);
    v15 = "SE_EMY_BIG_PAKKUN_DAMAGE_1";
  }
  else
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v14;
    mapPositionToScreen(&v17, &position);
    v15 = "SE_EMY_BIG_PAKKUN_DAMAGE_2";
  }
  BasicSoundActor1_playSound(v13, v15, (int)&v17, 0);
  v16 = *(float *)(FIELD_U32(a3, 64) + 108);
  FIELD_U32(a1, 80) = *(float *)(FIELD_U32(a2, 64) + 108) >= v16;
  (*(void (__fastcall **)(int, void *, float))(*(_DWORD *)a1 + 192))(a1, &unk_60C8F2EC, v16);
  return 0;
}
