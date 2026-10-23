/* sub_6031DE34
 * address: 0x6031DE34   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031DE34(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  _DWORD *v5; // r0
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C936EC + 8))();
  if ( v3 == result )
  {
    v5 = *(_DWORD **)(a1 + 7124);
    v6 = (int *)v5[3];
    v7 = v5[2];
    v8 = v5[17];
    if ( v7 > v8 )
      v6 += v8;
    result = *v6;
    FIELD_U32(result, 20) = 0;
    FIELD_U32(result, 28) |= 2u;
  }
  return result;
}
