/* sub_6077931C
 * address: 0x6077931C   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077931C(int a1)
{
  int v2; // r7
  int ActorSlotChecked; // r0
  float v4; // s16
  float v5; // s18
  float v6; // s20
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  int result; // r0
  bool v12; // zf
  StateBase *CurrentState; // r0
  int v14; // r6
  StateBase *v15; // r0
  int v16; // r6
  StateBase *v17; // r0
  int v18; // r5
  float v19; // s0

  v2 = 0;
  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  v4 = 0.0;
  if ( ActorSlotChecked )
  {
    v5 = 0.0;
    v6 = 0.0;
    if ( (FIELD_U8(ActorSlotChecked, 1231) & 4) != 0 )
    {
      v2 = 1;
      v6 = FIELD_F32(ActorSlotChecked, 116) + 0.0;
      v5 = FIELD_F32(ActorSlotChecked, 112) + 0.0;
      v4 = FIELD_F32(ActorSlotChecked, 108) + 0.0;
    }
  }
  else
  {
    v5 = 0.0;
    v6 = 0.0;
  }
  v7 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
  v8 = v7 == 0;
  if ( v7 )
    v8 = (FIELD_U8(v7, 1231) & 4) == 0;
  if ( !v8 )
  {
    ++v2;
    v6 = v6 + FIELD_F32(v7, 116);
    v5 = v5 + FIELD_F32(v7, 112);
    v4 = v4 + FIELD_F32(v7, 108);
  }
  v9 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
  v10 = v9 == 0;
  if ( v9 )
    v10 = (FIELD_U8(v9, 1231) & 4) == 0;
  if ( !v10 )
  {
    ++v2;
    v6 = v6 + FIELD_F32(v9, 116);
    v5 = v5 + FIELD_F32(v9, 112);
    v4 = v4 + FIELD_F32(v9, 108);
  }
  result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
  v12 = result == 0;
  if ( result )
    v12 = (FIELD_U8(result, 1231) & 4) == 0;
  if ( !v12 )
  {
    ++v2;
    v6 = v6 + FIELD_F32(result, 116);
    v5 = v5 + FIELD_F32(result, 112);
    v4 = v4 + FIELD_F32(result, 108);
  }
  if ( v2 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 36));
    v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v14 == (*(int (**)(void))(dword_60CBFAD4 + 8))() && (result = FIELD_U32(a1, 52), result > 0)
      || (v15 = StateMgr__getCurrentState((StateMgr *)(a1 + 36)),
          v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15),
          result = (*(int (**)(void))(dword_60CBFAF4 + 8))(),
          v16 == result)
      || (v17 = StateMgr__getCurrentState((StateMgr *)(a1 + 36)),
          v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17),
          result = (*(int (**)(void))(dword_60CBFB14 + 8))(),
          v18 == result) )
    {
      v19 = 1.0 / (float)v2;
      FIELD_F32(a1, 228) = v4 * v19;
      FIELD_F32(a1, 232) = v5 * v19;
      FIELD_F32(a1, 236) = v6 * v19;
    }
    else
    {
      FIELD_F32(a1, 228) = v4 / (float)v2;
    }
  }
  return result;
}
