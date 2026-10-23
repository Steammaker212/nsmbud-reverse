/* sub_600427E0
 * address: 0x600427E0   size: 1188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600427E0(int a1, int a2, int a3)
{
  char v3; // r12
  Actor *v5; // r7
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int v7; // r4
  int v8; // r6
  StateMgr *v9; // r9
  StateBase *CurrentState; // r0
  int v11; // r4
  int v12; // r0
  StateBase *v13; // r0
  int v14; // r4
  StateBase *v15; // r0
  int v16; // r4
  int vtable; // r0
  float v18; // s0
  StateBase *v19; // r0
  int v20; // r4
  StateBase *v21; // r0
  int v22; // r4
  StateBase *v23; // r0
  int v24; // r4
  StateBase *v25; // r0
  int v26; // r4
  StateBase *v27; // r0
  int v28; // r4
  StateBase *v29; // r0
  int v30; // r4
  StateBase *v31; // r0
  int v32; // r4
  StateBase *v33; // r0
  int v34; // r4
  StateBase *v35; // r0
  int v36; // r4
  StateBase *v37; // r0
  int v38; // r4
  StateBase *v39; // r0
  int v40; // r4
  StateBase *v41; // r0
  int v42; // r4

  v5 = *(Actor **)(a3 + 64);
  v6 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C80058 & ~(1610885128 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C80058) )
  {
    dword_60C80054 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C80058);
  }
  if ( v6 )
  {
    v7 = (**v6)(v6, &dword_60C80054);
    if ( v7 )
      v7 = (int)v6;
  }
  else
  {
    v7 = 0;
  }
  if ( Actor__getProfileId(v5) == 521 && v5 )
  {
    v8 = BYTE1(v5[88].settings1);
    v9 = (StateMgr *)(v7 + 6084);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v12 = (*(int (**)(void))(dword_60C80268 + 8))();
    if ( v8 )
    {
      if ( v11 == v12
        || (v13 = StateMgr__getCurrentState(v9),
            v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13),
            v14 == (*(int (**)(void))(dword_60C80288 + 8))()) )
      {
        v15 = StateMgr__getCurrentState((StateMgr *)&v5[76].heap);
        v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
        if ( v16 == (*((int (**)(void))BobOmb_StateID_Walk._.vtable + 2))() )
        {
          vtable = v5[1].vtable;
          v18 = FIELD_F32(a2, 84) - *(float *)&v5[1].movementId;
          if ( !vtable && v18 > 0.0 || vtable == 1 && v18 < 0.0 )
            (*(void (__fastcall **)(Actor *, State *))(FIELD_U32(v5, 0x0) + 192))(v5, &BobOmb_StateID_Turn);
        }
        else
        {
          v23 = StateMgr__getCurrentState((StateMgr *)&v5[76].heap);
          v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23);
          if ( v24 != (*((int (**)(void))BobOmb_StateID_Turn._.vtable + 2))() )
          {
            v25 = StateMgr__getCurrentState((StateMgr *)&v5[76].heap);
            v26 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v25, 0x0) + 2))(v25);
            if ( v26 != (*((int (**)(void))BobOmb_StateID_BowserJrW7_2._.vtable + 2))() )
              *(float *)&v5[1].childCount = *(float *)&v5[1].childCount * -0.5;
          }
        }
      }
    }
    else if ( v11 == v12
           || (v19 = StateMgr__getCurrentState(v9),
               v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19),
               v20 == (*(int (**)(void))(dword_60C80288 + 8))()) )
    {
      v21 = StateMgr__getCurrentState((StateMgr *)&v5[76].heap);
      v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
      if ( v22 == (*((int (**)(void))BobOmb_StateID_Walk._.vtable + 2))() )
      {
        v5[1].childCount = dword_60AF5270[v5[1].vtable];
        v5[1].field_2C = 1077936128;
        v5[1].field_30 = 0;
      }
    }
    v27 = StateMgr__getCurrentState(v9);
    v28 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v27, 0x0) + 2))(v27);
    if ( v28 == (*(int (**)(void))(dword_60C80248 + 8))() )
      goto LABEL_35;
    v29 = StateMgr__getCurrentState(v9);
    v30 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v29, 0x0) + 2))(v29);
    if ( v30 == (*(int (**)(void))(dword_60C80188 + 8))()
      || (v31 = StateMgr__getCurrentState(v9),
          v32 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v31, 0x0) + 2))(v31),
          v32 == (*(int (**)(void))(dword_60C801A8 + 8))()) )
    {
      v33 = StateMgr__getCurrentState((StateMgr *)&v5[76].heap);
      v34 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v33, 0x0) + 2))(v33);
      if ( v34 == (*((int (**)(void))BobOmb_StateID_Walk._.vtable + 2))() )
        goto LABEL_35;
      v35 = StateMgr__getCurrentState((StateMgr *)&v5[76].heap);
      v36 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v35, 0x0) + 2))(v35);
      if ( v36 == (*((int (**)(void))BobOmb_StateID_Turn._.vtable + 2))()
        || (v37 = StateMgr__getCurrentState((StateMgr *)&v5[76].heap),
            v38 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v37, 0x0) + 2))(v37),
            v38 == (*(int (**)(void))(dword_60C8E274 + 8))())
        || (v39 = StateMgr__getCurrentState((StateMgr *)&v5[76].heap),
            v40 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v39, 0x0) + 2))(v39),
            v40 == (*(int (**)(void))(dword_60C8E2E0 + 8))())
        || (v41 = StateMgr__getCurrentState((StateMgr *)&v5[76].heap),
            v42 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v41, 0x0) + 2))(v41),
            v42 == (*((int (**)(void))BobOmb_StateID_Kicked._._.vtable + 2))()) )
      {
LABEL_35:
        sub_6025DE4C(v5);
      }
    }
  }
  Enemy__collisionEnemy();
}
