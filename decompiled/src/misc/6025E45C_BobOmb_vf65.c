/* BobOmb_vf65
 * address: 0x6025E45C   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall BobOmb_vf65(int a1, int a2, int a3)
{
  Actor *v6; // r7
  StateBase *v7; // r0
  int v8; // r5
  int ProfileId; // r0
  __int16 v10; // r2
  int v11; // r6
  void (__fastcall *v12)(int, State *); // r2
  State *v13; // r1
  StateBase *CurrentState; // r0
  int v15; // r6
  bool v16; // zf
  bool v17; // zf
  StateBase *v18; // r0
  int v19; // r5
  float v20; // s0
  int v21; // r0
  int v22; // r1

  if ( (FIELD_U8(a3, 153) & 2) != 0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v15 != (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
      (*(void (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &stru_60C8E1CC);
    goto LABEL_13;
  }
  v6 = *(Actor **)(a3 + 64);
  v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))()
    && (FIELD_U8(a3, 149) & 2) != 0
    && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 312))(a1, a2, a3) == 1 )
  {
LABEL_13:
    FIELD_U8(a2, 110) |= 2u;
    return;
  }
  ProfileId = Actor__getProfileId(v6);
  if ( ProfileId == 768 )
  {
    if ( FIELD_S32(a1, 6456) > 0 )
      return;
    v10 = FIELD_U16(a1, 6364);
    if ( (v10 & 4) == 0 )
    {
      FIELD_U16(a1, 6364) = v10 | 4;
      FIELD_U32(a1, 6456) = 240;
      v11 = **(_DWORD **)(FIELD_U32(a1, 6352) + 28);
      sub_6041838C((ModelAnimation *)(v11 + 4));
      AnimationCtrl_setRepeat((ModelAnimation *)(v11 + 4), 0);
      FIELD_U32(v11, 20) = 0;
      FIELD_U32(v11, 28) |= 2u;
      FIELD_U32(v11, 24) = 1065353216;
    }
    v12 = *(void (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192);
    v13 = (State *)&dword_60C8E274;
    goto LABEL_10;
  }
  v16 = ProfileId == 769;
  if ( ProfileId != 769 )
    v16 = ProfileId == 770;
  if ( !v16 )
  {
    v17 = ProfileId == 771;
    if ( ProfileId != 771 )
      v17 = ProfileId == 371;
    if ( !v17 )
    {
      v18 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
      if ( v19 == (*((int (**)(void))BobOmb_StateID_Walk._.vtable + 2))() )
      {
        if ( (v20 = FIELD_F32(a2, 188), v21 = FIELD_U32(a1, 80), v20 < 0.0) && !v21 || v20 > 0.0 && v21 == 1 )
        {
          v22 = FIELD_U32(a3, 64);
          if ( v22 )
          {
            if ( FIELD_U32(a1, 80) != sub_6000ADDC(a1, v22) )
            {
              v12 = *(void (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192);
              v13 = &BobOmb_StateID_Turn;
LABEL_10:
              v12(a1, v13);
              return;
            }
          }
        }
      }
      Enemy__collisionEnemy();
    }
  }
}
