/* SE_EMY_REV_KOURA_FALL_ref_2
 * address: 0x6034E108   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_REV_KOURA_FALL_ref_2(int a1)
{
  _DWORD *v2; // r4
  int v3; // r0
  StateBase *CurrentState; // r0
  int v5; // r5
  StateBase *v6; // r0
  int v7; // r5
  int v8; // r5
  float v9; // r0
  StateBase *v11; // r0
  int v12; // r5
  Vec2 v13; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v2 = (_DWORD *)(a1 + 7780);
  if ( FIELD_U32(a1, 7780) )
  {
    v3 = a1 + 6524;
  }
  else
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 == (*(int (**)(void))(dword_60C94B90 + 8))()
      || (v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
          v7 == (*(int (**)(void))(dword_60C94BB0 + 8))()) )
    {
      sub_602A3EFC(a1 + 6524, 24, 0.0625);
      *v2 = 24;
      FIELD_U8(a1, 84) = -1;
      v8 = Global_BasicSoundActor1;
      v9 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      position.y = v9;
      mapPositionToScreen(&v13, &position);
      BasicSoundActor1_playSound(v8, "SE_EMY_REV_KOURA_FALL", (int)&v13, 0);
      FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C94BD0);
      return 1;
    }
    v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
    if ( v12 != (*(int (**)(void))(dword_60C94C80 + 8))() )
      JUMPOUT(0x603A280C);
    v3 = a1 + 6524;
  }
  sub_602A3EFC(v3, 24, 0.0625);
  return 1;
}
