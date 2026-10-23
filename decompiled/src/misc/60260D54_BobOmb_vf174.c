/* BobOmb_vf174
 * address: 0x60260D54   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf174(int a1, int a2, float *a3)
{
  int v5; // r6
  StateBase *CurrentState; // r0
  int v7; // r5
  StateBase *v8; // r0
  int v9; // r5
  StateBase *v10; // r0
  int v11; // r5
  StateBase *v12; // r0
  int v13; // r5
  _BOOL4 v14; // r1
  int v15; // s0
  __int16 v16; // r2
  int v17; // r7
  StateBase *v18; // r0
  int v19; // r5

  v5 = 0;
  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      if ( v9 != (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() && !sub_600025B8(a1) )
      {
        sub_602A3EFC(a1 + 6708, 24);
        v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
        v5 = 1;
        if ( v11 != (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
        {
          v12 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
          v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
          if ( v13 != (*((int (**)(void))BobOmb_StateID_EnemyGenerator._.vtable + 2))() )
          {
            v5 = 1;
            v14 = *a3 >= FIELD_F32(a1, 108);
            FIELD_U32(a1, 80) = v14;
            v15 = byte_60AFE3F4[v14];
            FIELD_U32(a1, 160) = Enemy_CommonRotations[v14];
            FIELD_F32(a1, 120) = (float)v15 * 0.75;
            FIELD_U32(a1, 124) = 1080033280;
            FIELD_U32(a1, 128) = 0;
            if ( FIELD_S32(a1, 6456) <= 0 )
            {
              v5 = 2;
              v16 = FIELD_U16(a1, 6364);
              if ( (v16 & 4) == 0 )
              {
                FIELD_U16(a1, 6364) = v16 | 4;
                FIELD_U32(a1, 6456) = 240;
                v17 = **(_DWORD **)(FIELD_U32(a1, 6352) + 28);
                sub_6041838C((ModelAnimation *)(v17 + 4));
                AnimationCtrl_setRepeat((ModelAnimation *)(v17 + 4), 0);
                FIELD_U32(v17, 20) = 0;
                FIELD_U32(v17, 28) |= 2u;
                FIELD_U32(v17, 24) = 1065353216;
              }
            }
            v18 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
            v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
            if ( v19 == (*(int (**)(void))(dword_60C8E274 + 8))() )
              (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 6084) + 24))(
                FIELD_U32(a1, 6084),
                FIELD_U32(a1, 6092));
            else
              (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E274);
          }
        }
      }
    }
  }
  return v5;
}
