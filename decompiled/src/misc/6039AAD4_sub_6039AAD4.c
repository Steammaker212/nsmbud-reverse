/* sub_6039AAD4
 * address: 0x6039AAD4   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039AAD4(int a1, int **a2)
{
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r7
  bool v7; // zf
  int *v8; // r0
  unsigned int v9; // r1
  int v10; // r0
  int v11; // r1

  v4 = 0;
  switch ( FIELD_U32(a1, 6436) )
  {
    case 1:
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v6 == (*(int (**)(void))(dword_60C97400 + 8))() || (v7 = sub_6039AC70(a1) == 1, v8 = 0, v7) )
      {
        FIELD_U8(a1, 6440) = 1;
        v8 = &dword_60C971C0;
      }
      break;
    case 3:
      v7 = sub_6039AC70(a1) == 1;
      v8 = 0;
      if ( v7 )
      {
        v9 = FIELD_U32(a1, 6452);
        v10 = FIELD_U32(a1, 6432);
        if ( v9 >= 2 )
          v9 = 0;
        v11 = *(unsigned __int16 *)(v10 + 8 * v9 + 4);
        FIELD_U32(a1, 6412) = v11;
        FIELD_U32(a1, 6416) = FIELD_U32(v10, 16);
        FIELD_U32(a1, 6420) = FIELD_U32(v10, 20);
        FIELD_U8(a1, 6440) = 1;
        v8 = (int *)&unk_60C973A0;
        if ( v11 == 3 )
          v8 = (int *)&unk_60C97360;
        if ( v11 == 2 )
          v8 = (int *)&unk_60C97320;
      }
      break;
    case 4:
      FIELD_U8(a1, 6440) = 1;
      v8 = &dword_60C97400;
      break;
    case 5:
      FIELD_U8(a1, 6440) = 1;
      v8 = (int *)&unk_60C97420;
      break;
    default:
      v8 = 0;
      break;
  }
  if ( FIELD_U8(a1, 6440) )
  {
    v4 = 1;
    *a2 = v8;
  }
  return v4;
}
