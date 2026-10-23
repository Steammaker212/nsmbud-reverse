/* sub_60092F60
 * address: 0x60092F60   size: 2156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60092F60(int a1)
{
  int v2; // r1
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // r6
  int v6; // r1
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r6
  int v10; // r1
  _DWORD *v11; // r5
  int v12; // r0
  int v13; // r6
  int v14; // r1
  _DWORD *v15; // r5
  int v16; // r0
  int v17; // r6
  int v18; // r0
  unsigned int v19; // r0
  int v20; // r5
  StateBase *CurrentState; // r0
  int v22; // r6
  StateBase *v23; // r0
  int v24; // r6
  StateBase *v25; // r0
  int v26; // r6
  StateBase *v27; // r0
  int v28; // r6
  StateBase *v29; // r0
  int v30; // r6
  StateBase *v31; // r0
  int v32; // r6
  StateBase *v33; // r0
  int v34; // r6
  StateBase *v35; // r0
  int v36; // r6
  StateBase *v37; // r0
  int v38; // r6
  StateBase *v39; // r0
  int v40; // r6
  unsigned int v41; // r0
  _DWORD *v42; // r7
  int v43; // r0
  StateBase *v44; // r0
  int v45; // r6
  StateBase *v46; // r0
  int v47; // r5
  StateBase *v48; // r0
  int v49; // r6
  StateBase *v50; // r0
  int v51; // r6
  StateBase *v52; // r0
  int v53; // r6
  StateBase *v54; // r0
  int v55; // r6
  float v56; // s2
  float v57; // s0
  int v58; // r0
  int v59; // r1

  sub_600FFFEC();
  ((void (__fastcall *)(int))loc_601008C8)(a1);
  v3 = (_DWORD *)(a1 + 15276);
  v2 = FIELD_U32(a1, 15276);
  if ( v2 >= 1 )
  {
    *v3 = v2 - 1;
    v4 = PlayerMgr_instance;
    v5 = FIELD_U32(PlayerMgr_instance, 32);
    if ( v5 )
    {
      if ( v2 < 3 || (FIELD_U32(v5, 6900) & 1) != 0 )
      {
        FIELD_U32(v5, 9572) = 127;
        *v3 = 0;
      }
      if ( !PlayerMgr_hasPlayer(v4, 0) )
      {
        FIELD_U32(v5, 9572) = 0;
        *v3 = 0;
      }
    }
  }
  v7 = (_DWORD *)(a1 + 15280);
  v6 = FIELD_U32(a1, 15280);
  if ( v6 > 0 )
  {
    *v7 = v6 - 1;
    v8 = PlayerMgr_instance;
    v9 = FIELD_U32(PlayerMgr_instance, 36);
    if ( v9 )
    {
      if ( v6 < 3 || (FIELD_U32(v9, 6900) & 1) != 0 )
      {
        FIELD_U32(v9, 9572) = 127;
        *v7 = 0;
      }
      if ( !PlayerMgr_hasPlayer(v8, 1u) )
      {
        FIELD_U32(v9, 9572) = 0;
        *v7 = 0;
      }
    }
  }
  v11 = (_DWORD *)(a1 + 15284);
  v10 = FIELD_U32(a1, 15284);
  if ( v10 >= 1 )
  {
    *v11 = v10 - 1;
    v12 = PlayerMgr_instance;
    v13 = FIELD_U32(PlayerMgr_instance, 40);
    if ( v13 )
    {
      if ( v10 < 3 || (FIELD_U32(v13, 6900) & 1) != 0 )
      {
        FIELD_U32(v13, 9572) = 127;
        *v11 = 0;
      }
      if ( !PlayerMgr_hasPlayer(v12, 2u) )
      {
        FIELD_U32(v13, 9572) = 0;
        *v11 = 0;
      }
    }
  }
  v15 = (_DWORD *)(a1 + 15288);
  v14 = FIELD_U32(a1, 15288);
  if ( v14 >= 1 )
  {
    *v15 = v14 - 1;
    v16 = PlayerMgr_instance;
    v17 = FIELD_U32(PlayerMgr_instance, 44);
    if ( v17 )
    {
      if ( v14 < 3 || (FIELD_U32(v17, 6900) & 1) != 0 )
      {
        FIELD_U32(v17, 9572) = 127;
        *v15 = 0;
      }
      if ( !PlayerMgr_hasPlayer(v16, 3u) )
      {
        FIELD_U32(v17, 9572) = 0;
        *v15 = 0;
      }
    }
  }
  v18 = FIELD_U32(a1, 8420);
  if ( v18 )
  {
    v19 = FIELD_S8(v18, 84);
    if ( v19 <= 3 )
    {
      v20 = *(_DWORD *)(a1 + 4 * v19 + 9460);
      if ( v20 <= (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 892))(a1) - 16 )
      {
        FIELD_U32(a1, 8420) = 0;
        FIELD_U32(a1, 9076) = 0;
        FIELD_U32(a1, 256) = 0;
      }
    }
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v22 == (*(int (**)(void))(dword_60C85E94 + 8))() && FIELD_U32(a1, 9436) <= 3u )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85F94);
    FIELD_U32(a1, 9436) = -1;
  }
  if ( FIELD_U8(a1, 15262) )
  {
    v23 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23);
    if ( v24 == (*(int (**)(void))(dword_60C85E94 + 8))()
      || (v25 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v26 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v25, 0x0) + 2))(v25),
          v26 == (*(int (**)(void))(dword_60C85F54 + 8))()) )
    {
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C822C0);
    }
  }
  v27 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v28 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v27, 0x0) + 2))(v27);
  if ( v28 == (*(int (**)(void))(dword_60C820A0 + 8))() )
    goto LABEL_47;
  v29 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v30 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v29, 0x0) + 2))(v29);
  if ( v30 == (*(int (**)(void))(dword_60C820C0 + 8))() )
    goto LABEL_47;
  v31 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v32 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v31, 0x0) + 2))(v31);
  if ( v32 == (*(int (**)(void))(dword_60C820E0 + 8))() )
    goto LABEL_47;
  v33 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v34 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v33, 0x0) + 2))(v33);
  if ( v34 == (*(int (**)(void))(dword_60C82100 + 8))()
    || (v35 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v36 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v35, 0x0) + 2))(v35),
        v36 == (*(int (**)(void))(dword_60C82120 + 8))())
    || (v37 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v38 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v37, 0x0) + 2))(v37),
        v38 == (*(int (**)(void))(dword_60C82140 + 8))())
    || (v39 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v40 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v39, 0x0) + 2))(v39),
        v40 == (*(int (**)(void))(dword_60C82160 + 8))()) )
  {
LABEL_47:
    v42 = (_DWORD *)(a1 + 15240);
    v41 = FIELD_U32(a1, 15240);
    if ( v41 <= 3 )
    {
      v43 = *(_DWORD *)(PlayerMgr_instance + 4 * v41 + 32);
      if ( v43 )
      {
        if ( sub_607B8A50(v43, a1) )
        {
          ((void (__fastcall *)(int))loc_60093838)(a1);
        }
        else
        {
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C82080);
          *v42 = -1;
        }
      }
    }
  }
  else
  {
    v42 = (_DWORD *)(a1 + 15240);
  }
  if ( *v42 >= 4u )
  {
    v48 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v49 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v48, 0x0) + 2))(v48);
    if ( v49 == (*(int (**)(void))(dword_60C82220 + 8))() )
      goto LABEL_85;
    v50 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v51 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v50, 0x0) + 2))(v50);
    if ( v51 == (*(int (**)(void))(dword_60C82080 + 8))() )
      goto LABEL_85;
    if ( *v42 >= 4u )
    {
      v52 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v53 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v52, 0x0) + 2))(v52);
      if ( v53 == (*(int (**)(void))(dword_60C82060 + 8))() )
        goto LABEL_85;
      v54 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v55 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v54, 0x0) + 2))(v54);
      if ( v55 == (*(int (**)(void))(dword_60C82080 + 8))() )
        goto LABEL_85;
    }
  }
  v44 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v45 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v44, 0x0) + 2))(v44);
  if ( v45 == (*(int (**)(void))(dword_60C821E0 + 8))()
    || (v46 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v47 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v46, 0x0) + 2))(v46),
        v47 == (*(int (**)(void))(dword_60C821C0 + 8))())
    || FIELD_U8(a1, 15264) )
  {
LABEL_85:
    v56 = FIELD_F32(a1, 108);
    v57 = FIELD_F32(dword_60CC6484, 208) + -96.0;
    if ( v56 < v57 || (v57 = FIELD_F32(dword_60CC6484, 216) + 96.0, v56 > v57) )
    {
      FIELD_F32(a1, 108) = v57;
      v58 = FIELD_U32(a1, 112);
      v59 = FIELD_U32(a1, 116);
      FIELD_F32(a1, 584) = v57;
      FIELD_U32(a1, 588) = v58;
      FIELD_U32(a1, 592) = v59;
      FIELD_F32(a1, 608) = v57;
      FIELD_U32(a1, 612) = v58;
      FIELD_U32(a1, 616) = v59;
    }
  }
  if ( sub_60235E50(a1 + 15396) == 1 )
    sub_60236A80(a1 + 15396, a1 + 15300, 1);
  if ( sub_60235E50(a1 + 15460) == 1 )
    sub_60236A80(a1 + 15460, a1 + 15300, 1);
  if ( sub_60235E50(a1 + 15524) == 1 )
    sub_60236A80(a1 + 15524, a1 + 15300, 1);
  if ( sub_60235E50(a1 + 15588) == 1 )
    sub_60236A80(a1 + 15588, a1 + 15300, 1);
  if ( sub_60235E50(a1 + 15652) == 1 )
    sub_60236A80(a1 + 15652, a1 + 15300, 1);
  if ( sub_60235E50(a1 + 15716) == 1 )
    sub_60236A80(a1 + 15716, a1 + 15300, 1);
  if ( sub_60235E50(a1 + 15780) == 1 )
    sub_60236A80(a1 + 15780, a1 + 15300, 1);
  if ( sub_60235E50(a1 + 15844) == 1 )
    sub_60236A80(a1 + 15844, a1 + 15300, 1);
  ShapedCollider_execute(a1 + 8272);
  return CircularCollider_execute(a1 + 8928);
}
