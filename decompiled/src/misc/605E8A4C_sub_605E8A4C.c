/* sub_605E8A4C
 * address: 0x605E8A4C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E8A4C(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r5
  int i; // r6
  int v5; // r1
  int v6; // r2
  int v7; // r0

  result = StateMgr__changeState((StateMgr *)(a1 + 332), (StateBase *)&dword_60CB1BE8);
  v3 = FIELD_U32(a1, 36);
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = FIELD_U32(a1, 28);
      v6 = FIELD_U32(a1, 32);
      if ( i + v6 >= v5 )
        v6 -= v5;
      v7 = *(_DWORD *)(FIELD_U32(a1, 24) + 4 * (i + v6));
      result = (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 464))(v7);
    }
  }
  return result;
}
