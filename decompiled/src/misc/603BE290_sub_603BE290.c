/* sub_603BE290
 * address: 0x603BE290   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BE290(int a1, int a2, float *a3)
{
  int v5; // r7
  StateBase *CurrentState; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r5
  StateBase *v10; // r0
  int v11; // r5
  _BOOL4 v12; // r1
  int v13; // r2

  v5 = 0;
  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() && !sub_600025B8(a1) )
    {
      if ( FIELD_U32(a1, 6352) != 2 )
        JUMPOUT(0x603A280C);
      sub_602A3EFC(a1 + 6524, 24, 0.0625);
      v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      if ( v9 == (*(int (**)(void))(dword_60C9841C + 8))() )
      {
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98330);
      }
      else
      {
        v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
        v5 = 1;
        if ( v11 == (*(int (**)(void))(dword_60C98310 + 8))() )
          return v5;
      }
      v5 = 1;
      v12 = *a3 >= FIELD_F32(a1, 108);
      v13 = byte_60AFE3F4[v12];
      FIELD_U32(a1, 80) = v12;
      FIELD_F32(a1, 120) = (float)v13 * 0.75;
      FIELD_U32(a1, 124) = 1080033280;
      FIELD_U32(a1, 128) = 0;
      if ( FIELD_U8(a1, 6054) )
        FIELD_U32(a1, 124) = 1071644672;
    }
  }
  return v5;
}
