/* sub_60092308
 * address: 0x60092308   size: 1252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60092308(ActiveCollider *a1, ActiveCollider *a2)
{
  char v2; // r12
  int owner; // r6
  int v6; // r7
  bool v7; // zf
  StateBase *CurrentState; // r0
  int v9; // r7
  StateBase *v10; // r0
  int v11; // r7
  StateBase *v12; // r0
  int v13; // r7
  float v14; // s0
  float v15; // s16
  float v16; // s0
  StateBase *v17; // r0
  int v18; // r9
  StateBase *v19; // r0
  int v20; // r9
  StateBase *v21; // r0
  int v22; // r8
  StateBase *v23; // r0
  int v24; // r7
  StateBase *v25; // r0
  int v26; // r7
  StateBase *v27; // r0
  int v28; // r7
  StateBase *v29; // r0
  int v30; // r7
  float v31; // s0
  float v32; // s16
  float v33; // s0
  float v34; // s0
  int v35; // r8
  int v36; // r9
  char v37; // r12

  owner = (int)FIELD_U32(a1, 0x40);
  if ( ((unsigned int)&dword_60C81104 & ~(1611211564 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( owner )
  {
    v6 = (**(int (__fastcall ***)(int, int *))owner)(owner, &dword_60C81100);
    if ( v6 )
      v6 = owner;
    v7 = v6 == 0;
    if ( v6 )
    {
      owner = (int)FIELD_U32(a2, 0x40);
      v7 = owner == 0;
    }
    if ( !v7 )
    {
      if ( FIELD_U8(owner, 533) == 3 )
      {
        if ( Actor__getProfileId((Actor *)owner) == 728 )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(owner + 6084));
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v9 == (*((int (**)(void))BobOmb_StateID_Kicked._._.vtable + 2))()
            || (v10 = StateMgr__getCurrentState((StateMgr *)(owner + 6084)),
                v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
                v11 == (*(int (**)(void))(dword_60C8E2E0 + 8))()) )
          {
            v12 = StateMgr__getCurrentState((StateMgr *)(owner + 6084));
            v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
            if ( v13 != (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
              sub_6025E064(owner);
            ActiveCollider_getCenterX(a1);
            v15 = v14;
            ActiveCollider_getCenterX(a2);
            sub_60063CC8(owner, v15 > v16);
          }
          else
          {
            v23 = StateMgr__getCurrentState((StateMgr *)(owner + 6084));
            v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23);
            if ( v24 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
            {
              SE_EMY_DOWN_ref_2A58B4(owner, FIELD_U32(a1, 0x40));
            }
            else
            {
              v25 = StateMgr__getCurrentState((StateMgr *)(owner + 6084));
              v26 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v25, 0x0) + 2))(v25);
              if ( v26 != (*(int (**)(void))(dword_60C810B8 + 8))() )
              {
                v27 = StateMgr__getCurrentState((StateMgr *)(owner + 6084));
                v28 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v27, 0x0) + 2))(v27);
                if ( v28 != (*(int (**)(void))(dword_60C810D8 + 8))() )
                {
                  v29 = StateMgr__getCurrentState((StateMgr *)(owner + 6084));
                  v30 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v29, 0x0) + 2))(v29);
                  if ( v30 != (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
                    sub_6025E064(owner);
                  if ( (FIELD_U8(owner, 2872) & 1) != 0 )
                  {
                    ActiveCollider_getCenterX(a1);
                    v32 = v31;
                    ActiveCollider_getCenterX(a2);
                    sub_60063C5C(owner, v32 > v33);
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( Actor__getProfileId((Actor *)owner) != 726 )
            goto LABEL_24;
          v17 = StateMgr__getCurrentState((StateMgr *)(owner + 6084));
          v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
          if ( v18 == (*(int (**)(void))(dword_60C81D6C + 8))()
            || (v19 = StateMgr__getCurrentState((StateMgr *)(owner + 6084)),
                v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19),
                v20 == (*(int (**)(void))(dword_60C81D4C + 8))())
            || (v21 = StateMgr__getCurrentState((StateMgr *)(owner + 6084)),
                v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21),
                v22 == (*(int (**)(void))(dword_60C81D8C + 8))()) )
          {
            sub_60088CF4(owner, FIELD_F32(owner, 108) < FIELD_F32(v6, 108), FIELD_U32(v6, 15240));
            goto LABEL_24;
          }
          v34 = FIELD_F32(v6, 108);
          v35 = 1;
          if ( v34 >= (float)(FIELD_F32(dword_60CC6484, 112) + 80.0) )
          {
            v35 = 0;
            if ( v34 <= (float)(FIELD_F32(dword_60CC6484, 120) + -80.0) )
            {
              v36 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, FIELD_U32(ActorMgr__instance, 27172));
              if ( ((unsigned int)&dword_60C81738 & ~(1611212636 << v37) & 1) == 0
                && _cxa_guard_acquire(&dword_60C81738) )
              {
                dword_60C81734 = (int)&off_60BC1FA8;
                _cxa_guard_release(&dword_60C81738);
              }
              if ( v36 && (**(int (__fastcall ***)(int, int *))v36)(v36, &dword_60C81734) == 1 )
              {
                if ( FIELD_F32(v36, 108) <= FIELD_F32(v6, 108) )
                  v35 = 1;
              }
              else
              {
                v35 = 1;
              }
            }
          }
          ((void (__fastcall *)(int, int))loc_60088C18)(owner, v35);
        }
        FIELD_U8(a2, 0x6E) |= 2u;
      }
LABEL_24:
      sub_600FFD78(a1, a2);
    }
  }
}
