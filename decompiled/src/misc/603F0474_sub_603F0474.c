/* sub_603F0474
 * address: 0x603F0474   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F0474(int a1, int a2)
{
  int v4; // r6
  int v5; // r5
  int result; // r0
  StateBase *CurrentState; // r0
  int v8; // r4

  v4 = 6;
  do
  {
    v5 = a1;
    result = FIELD_U8(a1, 5762);
    a1 += 5752;
    if ( result )
    {
      result = FIELD_U32(v5, 5740);
      if ( result == a2 )
      {
        FIELD_U32(v5, 5748) = 480;
        FIELD_U32(v5, 5756) = 0;
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 40));
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        result = (*(int (__fastcall **)(int *))(dword_60CA559C + 8))(&dword_60CA559C);
        if ( v8 == result )
        {
          StateMgr__changeState((StateMgr *)(v5 + 40), &stru_60CA555C);
          FIELD_U32(v5, 5752) = -1;
          FIELD_U8(a1, 10) = 1;
          result = 0;
          FIELD_U8(v5, 5761) = 0;
        }
      }
    }
    --v4;
  }
  while ( v4 );
  return result;
}
