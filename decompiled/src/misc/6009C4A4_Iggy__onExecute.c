/* Iggy__onExecute
 * address: 0x6009C4A4   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B169C
// 
// Overridden by: None
int __fastcall Iggy__onExecute(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int v5; // r1
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r6
  StateBase *v12; // r0
  int v13; // r6
  StateBase *v14; // r0
  int v15; // r6
  StateBase *v16; // r0
  int v17; // r5
  int v18; // r0
  int v19; // s2
  int v20; // s2
  _DWORD v22[8]; // [sp+0h] [bp-20h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C834AC + 8))() && FIELD_F32(a1, 8220) == 0.0 )
  {
    v5 = dword_60C8D904;
    FIELD_U32(a1, 8220) = FIELD_U32(dword_60C8D904, 888);
    FIELD_U32(a1, 8216) = 0;
    v22[0] = 0;
    v22[1] = 0;
    sub_60930F9C(v5 + 488, v22);
  }
  if ( sub_6009C7F8(a1) == 1 )
    FIELD_U8(a1, 8136) = 1;
  StateMgr__execute(v2);
  v6 = StateMgr__getCurrentState(v2);
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  if ( v7 != (*(int (**)(void))(dword_60C82808 + 8))() )
  {
    v8 = StateMgr__getCurrentState(v2);
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
    if ( v9 != (*(int (**)(void))(dword_60C83464 + 8))() )
    {
      v10 = StateMgr__getCurrentState(v2);
      v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
      if ( v11 != (*((int (**)(void))stru_60C7F5D0._._.vtable + 2))() )
      {
        v12 = StateMgr__getCurrentState(v2);
        v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
        if ( v13 != (*(int (**)(void))(dword_60C83488 + 8))() )
        {
          v14 = StateMgr__getCurrentState(v2);
          v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
          if ( v15 != (*((int (**)(void))stru_60C7F618._._.vtable + 2))() )
          {
            v16 = StateMgr__getCurrentState(v2);
            v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
            if ( v17 != (*((int (**)(void))stru_60C7F63C._._.vtable + 2))() )
            {
              CollisionMgr_process((_BYTE *)(a1 + 648));
              if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
                FIELD_U32(a1, 124) = 0;
            }
          }
        }
      }
    }
  }
  if ( !FIELD_U8(a1, 6220) )
  {
    v18 = FIELD_U32(a1, 7176);
    if ( (v18 & 1) != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
      FIELD_F64(a1, 7140) = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1152))(a1);
      FIELD_U32(a1, 7148) = v19;
      FIELD_F64(a1, 7156) = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1168))(a1);
      FIELD_U32(a1, 7164) = v20;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1172))(a1);
      sub_600B183C(a1);
      v18 = FIELD_U32(a1, 7176);
    }
    if ( (v18 & 2) != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1048))(a1);
      sub_600B189C(a1);
    }
  }
  if ( FIELD_U8(a1, 8206) )
    (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
      dword_60C7F538,
      "SE_AMB_BROOM_W8",
      0);
  return 1;
}
