/* sub_607A81AC
 * address: 0x607A81AC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A81AC(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9680));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60CC4B0C + 8))();
  result = 0;
  if ( v3 == v4 && FIELD_U32(a1, 9704) == 3 )
  {
    FIELD_U32(a1, 9704) = 4;
    STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref_78A964(PlayerMgr_instance, FIELD_S8(a1, 84));
    FIELD_U32(a1, 9712) = 80;
    return 1;
  }
  return result;
}
