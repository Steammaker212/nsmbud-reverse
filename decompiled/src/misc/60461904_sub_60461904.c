/* sub_60461904
 * address: 0x60461904   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60461904(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int result; // r0
  StateBase *v6; // r0
  int v7; // r5
  int v8; // r1
  int v9; // r1
  __int16 v10; // r0

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C9D2B8 + 8))();
  if ( v4 != result )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    result = (*(int (**)(void))(dword_60C9D2D8 + 8))();
    if ( v7 != result )
    {
      result = FIELD_U8(a1, 6258);
      if ( FIELD_U8(a1, 6258) )
      {
        result = a1 + 6236;
        v8 = FIELD_U32(a1, 6236);
        if ( !v8 )
          goto LABEL_11;
        *(_DWORD *)result = v8 - 1;
        if ( v8 > 180 )
          return result;
        if ( v8 == 1 )
        {
LABEL_11:
          FIELD_U8(a1, 19) = 1;
          return 1;
        }
        else
        {
          result = a1 + 6240;
          v9 = FIELD_U32(a1, 6240);
          if ( v9 )
          {
            *(_DWORD *)result = v9 - 1;
          }
          else
          {
            *(_DWORD *)result = 4;
            v10 = FIELD_U16(a1, 6248) ^ 1;
            FIELD_U16(a1, 6248) = v10;
            result = v10 == 0;
            FIELD_U8(a1, 535) = result;
          }
        }
      }
    }
  }
  return result;
}
