/* SE_EMY_MAMEKURIBO_DEAD_ref_2535A0
 * address: 0x602535A0   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_MAMEKURIBO_DEAD_ref_2535A0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  int result; // r0
  float v5; // r1
  int v6; // r5
  StateBase *v7; // r0
  int v8; // r5
  bool v9; // zf
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  sub_602A3EFC(a1 + 6776, 24);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C8DF34 + 8))() )
  {
    result = FIELD_S8(a1, 6356);
    if ( result >= 0 )
    {
      if ( (unsigned __int8)result >= 4u )
        result = 0;
      SE_EMY_MAMEKURIBO_DEAD_ref_253344(a1, *(_DWORD *)(PlayerMgr_instance + 4 * result + 32));
      v5 = FIELD_F32(a1, 112);
      v6 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v5;
      mapPositionToScreen(&out, &position);
      return sub_60813810(v6, (int)"SE_EMY_MAMEKURIBO_DEAD", (int)&out, 0, 0);
    }
  }
  else
  {
    v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
    if ( v8 != (*(int (**)(void))(dword_60C8DF54 + 8))() )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DF54);
    result = FIELD_U8(a1, 6772);
    v9 = result == 0;
    if ( FIELD_U8(a1, 6772) )
    {
      result = FIELD_U8(a1, 2872);
      v9 = (result & 1) == 0;
    }
    if ( !v9 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DF54);
  }
  return result;
}
