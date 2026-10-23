/* sub_605E9B64
 * address: 0x605E9B64   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E9B64(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int result; // r0
  bool v7; // cc
  int *v8; // r0
  int v9; // r1
  int v10; // r2
  bool v11; // vf
  int v12; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 332));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CB1C68 + 8))();
  if ( v5 == result )
  {
    result = FIELD_U32(a1, 228);
    if ( result )
    {
      result = FIELD_U32(a1, 36);
      v7 = result > (unsigned int)a2;
      if ( result > a2 )
      {
        v8 = *(int **)(a1 + 24);
        if ( v7 )
        {
          v9 = FIELD_U32(a1, 28);
          v10 = FIELD_U32(a1, 32) + a2;
          v11 = __OFSUB__(v10, v9);
          v12 = v10 - v9;
          if ( v12 < 0 != v11 )
            v12 = FIELD_U32(a1, 32) + a2;
          v8 += v12;
        }
        result = *v8;
        if ( result )
          return sub_605E1F9C(result);
      }
    }
  }
  return result;
}
