/* sub_60285FA0
 * address: 0x60285FA0   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60285FA0(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  signed int v6; // [sp+4h] [bp-14h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C8F158 + 8))() )
  {
    sub_606D4384(&v6, FIELD_U8(a1, 6340));
    sub_606D465C(a1 + 6308, a1 + 6320);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6308);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 6312);
    sub_60285E04(a1);
  }
  return 1;
}
