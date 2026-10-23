/* SE_BOSS_CMN_DAMAGE_FIRE_ref_39CEF4
 * address: 0x6039CEF4   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_CMN_DAMAGE_FIRE_ref_39CEF4(int a1)
{
  _WORD *v2; // r7
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  float v7; // r1
  int v8; // r5
  __int16 v9; // r6
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = (_WORD *)(a1 + 6354);
  if ( FIELD_S16(a1, 6354) <= 0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*(int (**)(void))(dword_60C972A0 + 8))() )
    {
      v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      if ( v6 != (*(int (**)(void))(dword_60C97480 + 8))() )
      {
        v7 = FIELD_F32(a1, 112);
        v8 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 108);
        position.y = v7;
        mapPositionToScreen(&out, &position);
        v9 = 0;
        sub_60813810(v8, (int)"SE_BOSS_CMN_DAMAGE_FIRE", (int)&out, 1, 0);
        if ( FIELD_S16(a1, 6352) - 1 > 0 )
          v9 = FIELD_U16(a1, 6352) - 1;
        FIELD_U16(a1, 6352) = v9;
        if ( v9 )
        {
          FIELD_U16(a1, 6576) = 24;
          FIELD_U32(a1, 6580) = 1065353216;
          sub_6041838C((ModelAnimation *)(FIELD_U32(a1, 6308) + 4));
          *(_DWORD *)(FIELD_U32(a1, 6308) + 24) = 1065353216;
          FIELD_U32(a1, 6360) = 4;
        }
        else
        {
          SE_VOC_SHA_DAMAGE_ref(a1, 0);
        }
        *v2 = 45;
        FIELD_U16(a1, 6356) = 120;
      }
    }
  }
  return 1;
}
