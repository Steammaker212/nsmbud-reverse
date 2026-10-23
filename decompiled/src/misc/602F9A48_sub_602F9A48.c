/* sub_602F9A48
 * address: 0x602F9A48   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F9A48(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r7
  int v9; // r6
  bool v10; // zf
  int v11; // r1
  StateBase *v12; // r0
  int v13; // r5
  int v14; // r1
  ActorScaler *v15; // r0
  int v16; // s2
  int v17; // r0
  _DWORD *v18; // r5
  int v19; // r0

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C92934 + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*(int (**)(void))(dword_60C92974 + 8))()) )
  {
    FIELD_U8(a1, 6500) = ((int (__fastcall *)(int))loc_602F9CF8)(a1);
  }
  else
  {
    FIELD_U8(a1, 6500) = 0;
    FIELD_U32(a1, 6484) = -1;
  }
  if ( !sub_602A588C(a1)
    && (v7 = StateMgr__getCurrentState(v2),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        v9 = 1,
        v8 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))())
    || (v9 = 0, sub_602A588C(a1) == 1) )
  {
    j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
    sub_604218E0(*(_DWORD **)(a1 + 6304));
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6308));
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6312));
    v10 = v9 == 1;
    v9 = 0;
    if ( v10 )
    {
      v9 = 1;
      v11 = FIELD_U32(a1, 6496);
      if ( v11 )
        FIELD_U32(a1, 6496) = v11 - 1;
    }
  }
  StateMgr__execute(v2);
  sub_602FA0D4(a1, v9);
  BGM_anim_ref_2(a1, v9);
  v12 = StateMgr__getCurrentState(v2);
  v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
  v14 = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
  v15 = (ActorScaler *)(a1 + 11904);
  if ( v13 == v14 )
  {
    FIELD_U32(a1, 11928) = 0;
    FIELD_F64(a1, 11908) = ((double (__fastcall *)(ActorScaler *))*(_DWORD *)FIELD_U32(v15, 0x0))(v15);
    FIELD_U32(a1, 11916) = v16;
  }
  else
  {
    ActorScaler_execute(v15);
  }
  sub_602A33AC((_BYTE *)a1);
  if ( v9 == 1 )
  {
    v18 = (_DWORD *)(a1 + 6520);
    v17 = FIELD_U32(a1, 6520);
    if ( !v17 || (v19 = v17 - 1, (*v18 = v19) == 0) )
    {
      sub_6071689C(TileMgr_instance, 2, 4, 0);
      *v18 = (200 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
    }
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  FIELD_U8(a1, 11900) = 0;
  return 1;
}
