/* sub_60357164
 * address: 0x60357164   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60357164(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  StateBase *CurrentState; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r5

  result = FIELD_U8(a1, 6432);
  if ( result != 1 )
  {
    if ( FIELD_U32(a1, 6300) == 5 )
    {
      v3 = *(_DWORD **)(a1 + 6332);
      v4 = v3[3];
      v5 = v3[2];
      v6 = v3[17];
      if ( v5 > v6 )
        v4 += 4 * v6;
      result = *(unsigned __int8 *)(*(_DWORD *)v4 + 28);
      if ( (result & 0x20) != 0 )
        return sub_60355C1C(a1, FIELD_U32(a1, 6304));
    }
    else
    {
      result = FIELD_U8(dword_60C9CF0C, 1361);
      if ( (result & 1) != 0 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v8 == (*(int (**)(void))(dword_60C95138 + 8))() )
          return sub_60355C1C(a1, 5);
        v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
        result = (*(int (**)(void))(dword_60C95098 + 8))();
        if ( v10 == result )
          return sub_60355C1C(a1, 5);
      }
    }
  }
  return result;
}
