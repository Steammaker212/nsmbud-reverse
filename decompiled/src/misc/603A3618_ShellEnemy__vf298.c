/* ShellEnemy__vf298
 * address: 0x603A3618   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : 0x60272ED0
// 
// Overridden by: None
int __fastcall ShellEnemy__vf298(Enemy *a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  int v5; // r0
  int v6; // r5
  int *v7; // r1

  CarryableEnemy__vf298(&FIELD_U32(a1, 0x0));
  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C976FC + 8))();
  if ( v3 == result )
  {
    result = (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 0x2D8))(a1);
    if ( result == 1 )
    {
      v5 = sub_60271E94((int)a1);
      v6 = v5;
      if ( v5 )
        FIELD_U32(a1, 0x50) = FIELD_U32(v5, 0x50);
      if ( ((int (__fastcall *)(Enemy *, int))loc_602720FC)(a1, v5) == 1 )
      {
        return SE_EMY_DOWN_ref_2723A8(a1, v6, 1);
      }
      else
      {
        v7 = (int *)&unk_60C97744;
        if ( a1[1]._._._.field_56 )
          v7 = &dword_60C9778C;
        return (*(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, v7);
      }
    }
  }
  return result;
}
