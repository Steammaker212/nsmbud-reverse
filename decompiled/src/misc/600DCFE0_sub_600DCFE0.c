/* sub_600DCFE0
 * address: 0x600DCFE0   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DCFE0(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  StateBase *v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // s2
  int v17; // s2

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C84B1C + 8))() )
  {
    v5 = StateMgr__getCurrentState(v2);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60C83464 + 8))() )
    {
      v7 = StateMgr__getCurrentState(v2);
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
      if ( v8 != (*((int (**)(void))stru_60C7F5D0._._.vtable + 2))() )
      {
        v9 = StateMgr__getCurrentState(v2);
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
        if ( v10 != (*(int (**)(void))(dword_60C83488 + 8))() )
        {
          v11 = StateMgr__getCurrentState(v2);
          v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
          if ( v12 != (*((int (**)(void))stru_60C7F618._._.vtable + 2))() )
          {
            v13 = StateMgr__getCurrentState(v2);
            v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
            if ( v14 != (*((int (**)(void))stru_60C7F63C._._.vtable + 2))() )
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
    v15 = FIELD_U32(a1, 7176);
    if ( (v15 & 1) != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
      FIELD_F64(a1, 7140) = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1152))(a1);
      FIELD_U32(a1, 7148) = v16;
      FIELD_F64(a1, 7156) = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1168))(a1);
      FIELD_U32(a1, 7164) = v17;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1172))(a1);
      sub_600B183C(a1);
      v15 = FIELD_U32(a1, 7176);
    }
    if ( (v15 & 2) != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1048))(a1);
      sub_600B189C(a1);
    }
  }
  return 1;
}
