/* sub_607BBAF0
 * address: 0x607BBAF0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BBAF0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0

  FIELD_U32(a1, 12404) = 5;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60CC4D24 + 8))() && FIELD_U32(a1, 9940) == 1 )
  {
    FIELD_U32(a1, 9940) = 0;
    FIELD_U32(a1, 12396) = 0;
    FIELD_U32(a1, 12400) = 4;
    FIELD_U32(a1, 12408) = 0;
  }
  else
  {
    result = 0;
    if ( (FIELD_U8(a1, 1215) & 2) == 0 )
      return result;
    Player_changeState(a1, (StateBase *)&dword_60CC4D24, 0);
    FIELD_U32(a1, 9940) = 0;
    FIELD_U32(a1, 12396) = 0;
    FIELD_U32(a1, 12400) = 4;
    FIELD_U32(a1, 12408) = 0;
  }
  PlayerBase_dispatchVirtual3(a1 + 11356, 38, 0.0);
  FIELD_U32(a1, 156) = 0;
  return 1;
}
