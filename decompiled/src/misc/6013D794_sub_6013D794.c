/* sub_6013D794
 * address: 0x6013D794   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013D794(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C87C00 + 8))();
  if ( v3 == result )
  {
    if ( *(float *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 20) <= 21.0 )
    {
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
    else
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C87C20);
      return sub_6013D830(a1);
    }
  }
  return result;
}
