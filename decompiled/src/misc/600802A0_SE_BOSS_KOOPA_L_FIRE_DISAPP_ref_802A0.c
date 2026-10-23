/* SE_BOSS_KOOPA_L_FIRE_DISAPP_ref_802A0
 * address: 0x600802A0   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_BOSS_KOOPA_L_FIRE_DISAPP_ref_802A0(int a1)
{
  int v2; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  float v5; // r1
  int v6; // r0
  StateBase *v7; // r0
  int v8; // r6
  float v9; // r1
  unsigned int result; // r0
  StateBase *v11; // r0
  int v12; // r6
  float v13; // r1
  Vec2 v14; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 2872);
  if ( (v2 & 1) != 0 )
  {
    if ( !(FIELD_U32(a1, 20) & 0xF0 | v2 & 0x200) )
      goto LABEL_7;
  }
  else if ( (v2 & 0x200) == 0 )
  {
    goto LABEL_7;
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C818E8 + 8))() )
  {
    v5 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&v14, &position);
    sub_60813570(a1 + 6668, "SE_BOSS_KOOPA_L_FIRE_DISAPP", &v14, 0);
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C818E8);
  }
LABEL_7:
  v6 = FIELD_U32(a1, 2872);
  if ( (v6 & 0x10400) == 0x400 )
  {
    if ( !(FIELD_U32(a1, 20) & 0xF0 | v6 & 0x20000) )
      goto LABEL_13;
  }
  else if ( (v6 & 0x20000) == 0 )
  {
    goto LABEL_13;
  }
  v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 != (*(int (**)(void))(dword_60C818E8 + 8))() )
  {
    v9 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&v14, &position);
    sub_60813570(a1 + 6668, "SE_BOSS_KOOPA_L_FIRE_DISAPP", &v14, 0);
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C818E8);
  }
LABEL_13:
  result = FIELD_U32(a1, 2872);
  if ( ((result & 0x440000) == 0 || (result & 0x10000000) != 0)
    && ((result & 0x880000) == 0 || (result & 0x20000000) != 0) )
  {
    if ( result < 0x40000000 )
      return result;
    goto LABEL_21;
  }
  if ( (FIELD_U32(a1, 20) & 0xF0) != 0 || result >> 30 )
  {
LABEL_21:
    v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
    result = (*(int (**)(void))(dword_60C818E8 + 8))();
    if ( v12 != result )
    {
      v13 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      position.y = v13;
      mapPositionToScreen(&v14, &position);
      sub_60813570(a1 + 6668, "SE_BOSS_KOOPA_L_FIRE_DISAPP", &v14, 0);
      return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C818E8);
    }
  }
  return result;
}
