/* sub_607D775C
 * address: 0x607D775C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D775C(int a1)
{
  int v3; // r2
  StateBase *v4; // r1
  StateBase *CurrentState; // r0
  int v6; // r5

  if ( !FIELD_U32(a1, 11360) )
  {
    v3 = 0;
    v4 = (StateBase *)&dword_60CC5614;
LABEL_9:
    Player_changeState(a1, v4, v3);
    return 1;
  }
  if ( (FIELD_U8(a1, 6906) & 0x80) != 0 || sub_60773298(a1) || sub_6075FC38(a1) )
    return 1;
  if ( (FIELD_U8(a1, 6900) & 1) == 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( ((int (__fastcall *)(int))loc_6075FA7C)(a1) )
      return 1;
    v3 = 1;
    v4 = &stru_60CC54D0;
    goto LABEL_9;
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60CC5488 + 8))()
    && sub_607868D4(a1 + 688, 0) == 1
    && FIELD_U32(a1, 80) != FIELD_U32(a1, 1248) )
  {
    sub_6078667C((_DWORD *)(a1 + 688), 9);
    if ( ((int (__fastcall *)(int))loc_607743E8)(a1) )
      return 1;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1016))(a1);
}
