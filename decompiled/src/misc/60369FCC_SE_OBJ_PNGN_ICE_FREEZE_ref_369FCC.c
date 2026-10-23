/* SE_OBJ_PNGN_ICE_FREEZE_ref_369FCC
 * address: 0x60369FCC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICE_FREEZE_ref_369FCC(int a1, int a2, int a3)
{
  StateBase *CurrentState; // r0
  int v6; // r7
  int v7; // r6
  int v8; // r5
  float v9; // r1
  int v10; // r6
  Vec2 v12; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v7 = 0;
  if ( v6 != (*(int (**)(void))(dword_60C95D98 + 8))() )
  {
    FIELD_U8(a1, 84) = *(_BYTE *)(FIELD_U32(a3, 64) + 84);
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
    v9 = FIELD_F32(a1, 112);
    v10 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&v12, &position);
    BasicSoundActor2_play(v10, "SE_OBJ_PNGN_ICE_FREEZE", &v12.x, 0);
    v7 = 1;
    if ( v8 == 1 )
      StateMgrExt_changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C95D98);
  }
  return v7;
}
