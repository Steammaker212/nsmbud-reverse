/* sub_606A8F0C
 * address: 0x606A8F0C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606A8F0C(int a1)
{
  int v2; // r5

  v2 = 2;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1) == 1 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 212))(a1) == 1 )
    {
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB9DA0);
      return 1;
    }
    v2 = 1;
    if ( !sub_606A8FA4(a1, FIELD_U8(a1, 28)) )
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB9D80);
  }
  return v2;
}
