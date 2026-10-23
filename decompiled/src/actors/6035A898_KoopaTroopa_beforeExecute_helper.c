/* KoopaTroopa_beforeExecute_helper
 * address: 0x6035A898   size: 220   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_beforeExecute_helper(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r0
  int *v6; // r4
  int v7; // t1
  int v8; // r1
  int v9; // r0

  result = FIELD_U32(a1, 7476);
  if ( result == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
    if ( v4 != result )
    {
      result = FIELD_U32(a1, 6352);
      if ( result )
      {
        v7 = FIELD_U32(a1, 7484);
        v6 = (int *)(a1 + 7484);
        v5 = v7;
        v8 = **(_DWORD **)(*(v6 - 166) + 44);
        if ( v7 && (v9 = v5 - 1, (*v6 = v9) != 0) )
        {
          FIELD_U32(v8, 24) = 0;
          return (int)sub_6041838C((ModelAnimation *)(v8 + 4));
        }
        else
        {
          FIELD_U32(v8, 24) = 1065353216;
          result = FIELD_U8(v8, 28);
          if ( (result & 0x24) != 0 )
          {
            result = ((240 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 10;
            *v6 = result;
          }
        }
      }
    }
  }
  return result;
}
