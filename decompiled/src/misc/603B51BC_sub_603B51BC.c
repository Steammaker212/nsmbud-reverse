/* sub_603B51BC
 * address: 0x603B51BC   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B51BC(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int result; // r0
  _BYTE *v6; // r7
  StateBase *v7; // r0
  int v8; // r5
  int v9; // r1
  _DWORD *v10; // r3
  int v11; // r5
  int v12; // r2
  unsigned int v13; // r6
  unsigned int *v14; // r4
  int v15; // t1
  int v16; // t1
  int v17; // t1
  int v18; // r1

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
  if ( v4 != result )
  {
    result = sub_602A588C(a1);
    if ( !result )
    {
      result = sub_600025B8(a1);
      if ( !result )
      {
        v6 = (_BYTE *)(a1 + 11940);
        if ( FIELD_U8(a1, 11940) )
          goto LABEL_9;
        v7 = StateMgr__getCurrentState(v2);
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
        if ( v8 != (*(int (**)(void))(dword_60C98060 + 8))() && FIELD_U8(dword_60C9CF0C, 1361) )
        {
          *v6 = 1;
          FIELD_U32(a1, 11936) = 0;
          FIELD_U32(a1, 11932) = 0x8000000;
        }
        result = (unsigned __int8)*v6;
        if ( *v6 )
        {
LABEL_9:
          result = a1 + 11936;
          v9 = FIELD_U32(a1, 11936);
          v10 = (_DWORD *)(a1 + 11932);
          v11 = FIELD_U32(a1, 11932);
          if ( v9 < 57344 )
          {
            v12 = FIELD_U32(a1, 11932);
          }
          else
          {
            v12 = v11 - 0x2000000;
            v13 = v11 - 0x2000000;
            *v10 = v11 - 0x2000000;
            if ( v11 - 0x2000000 < 0 )
            {
              if ( v11 == -2113929216 )
              {
                v15 = FIELD_U32(a1, 11928);
                v14 = (unsigned int *)(a1 + 11928);
                *v14 = v15 ^ 0x80000000;
                v12 = 0x80000000;
                goto LABEL_18;
              }
              v13 = 0x2000000 - v11;
            }
            if ( v13 <= 0x2000000 )
            {
              v12 = 0x2000000;
              *v10 = 0x2000000;
              v16 = FIELD_U32(a1, 11928);
              v14 = (unsigned int *)(a1 + 11928);
              *v14 = v16 + 0x2000000;
              goto LABEL_20;
            }
          }
          v17 = FIELD_U32(a1, 11928);
          v14 = (unsigned int *)(a1 + 11928);
          *v14 = v17 + v12;
          if ( v12 < 0 )
          {
LABEL_18:
            if ( v12 != 0x80000000 )
              v12 = -v12;
          }
LABEL_20:
          v18 = v9 + HIWORD(v12);
          *(_DWORD *)result = v18;
          if ( v18 >= 0x10000 )
          {
            *v14 = 0;
            *(_DWORD *)result = 0;
            *v6 = 0;
          }
        }
      }
    }
  }
  return result;
}
