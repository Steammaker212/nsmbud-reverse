/* sub_603A047C
 * address: 0x603A047C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A047C(Enemy *a1, int a2, int a3)
{
  int v6; // r4
  int v7; // r0
  int v8; // r8
  bool v9; // zf
  StateBase *CurrentState; // r0
  int v11; // r6

  v6 = 0;
  if ( !a2 || (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 736))(a1) )
    return v6;
  v7 = FIELD_U32(a3, 136);
  v8 = FIELD_U32(a3, 64);
  v9 = v7 == 15;
  if ( v7 != 15 )
    v9 = v7 == 0;
  if ( v9 )
  {
    if ( a2 == 1 )
    {
      CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
      v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v11 != (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
      {
        v7 = FIELD_U32(a3, 136);
        goto LABEL_13;
      }
      SE_EMY_DOWN_ref_2723A8(a1, v8, 0);
    }
    else
    {
      if ( a2 != 3 )
        goto LABEL_13;
      Enemy_killSpin(a1, *(StageActor **)(a3 + 64));
    }
    return 1;
  }
LABEL_13:
  if ( v7 == 2 )
  {
    Enemy_killYoshi((int)a1, v8);
    return 1;
  }
  return v6;
}
