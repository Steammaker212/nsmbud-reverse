/* sub_603AA80C
 * address: 0x603AA80C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603AA80C(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1
  _BOOL4 result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60C97858 + 8))();
  result = 0;
  if ( v3 != v4 )
    return FIELD_F32(a1, 108) >= (float)((float)(FIELD_F32(dword_60CC6484, 112) + FIELD_F32(dword_60CC6484, 104))
                                         + 1024.0);
  return result;
}
