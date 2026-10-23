/* sub_6034973C
 * address: 0x6034973C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034973C(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  int v5; // r0
  int v6; // r5

  CarryableEnemy__vf298((int *)a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C949AC + 8))();
  if ( v3 == result )
  {
    result = SE_EMY_MECHAKOOPA_RESTART_ref(a1);
    if ( result == 1 )
    {
      v5 = sub_60271E94(a1);
      v6 = v5;
      if ( v5 )
        FIELD_U32(a1, 80) = FIELD_U32(v5, 80);
      if ( ((int (__fastcall *)(int, int))loc_602720FC)(a1, v5) == 1 )
        return SE_EMY_DOWN_ref_2723A8((_DWORD *)a1, v6, 1);
      else
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C949F0);
    }
  }
  return result;
}
