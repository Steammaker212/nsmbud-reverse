/* sub_603334A8
 * address: 0x603334A8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603334A8(int *a1)
{
  int result; // r0
  bool v3; // zf
  StateBase *CurrentState; // r0
  int v5; // r7
  int v6; // r5
  int v7; // r0
  StateBase *v8; // r0
  int v9; // r6
  int v10; // r0

  result = a1[3];
  if ( result )
  {
    result = FIELD_U32(result, 12);
    v3 = result == 0;
    if ( result )
    {
      result = FIELD_U8(result, 32);
      v3 = (result & 2) == 0;
    }
    if ( !v3 )
    {
      result = *((unsigned __int8 *)a1 + 536);
      if ( !*((_BYTE *)a1 + 536) )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 1521));
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        v6 = 0;
        if ( v5 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        {
          StageActor__cullCheck((StageActor *)a1, 10);
          v6 = v7;
        }
        result = *((unsigned __int8 *)a1 + 536);
        if ( !*((_BYTE *)a1 + 536) )
        {
          v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 1521));
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
          result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
          if ( v9 != result )
          {
            result = *((unsigned __int8 *)a1 + 7007);
            if ( result != v6 )
            {
              v10 = *a1;
              if ( v6 == 1 )
                result = (*(int (__fastcall **)(int *))(v10 + 72))(a1);
              else
                result = (*(int (__fastcall **)(int *))(v10 + 76))(a1);
              *((_BYTE *)a1 + 7007) = v6;
            }
          }
        }
      }
    }
  }
  return result;
}
