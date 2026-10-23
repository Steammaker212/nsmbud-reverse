/* GameSetupScene_ctor_helper_556930
 * address: 0x60556930   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GameSetupScene_ctor_helper_556930(int a1)
{
  *(_DWORD *)a1 = off_60C00C60;
  FIELD_U32(a1, 4) = &off_60C00C94;
  FIELD_U32(a1, 8) = &off_60C00CA4;
  FIELD_U32(a1, 12) = &off_60C00CC8;
  FIELD_U32(a1, 16) = a1;
  FIELD_U32(a1, 20) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 24), (StateExecuter *)(a1 + 8), (StateBase *)&dword_60CAD468);
  FIELD_U32(a1, 4) = &off_60C00C84;
  FIELD_U32(a1, 44) = &off_60BFDC40;
  sub_60475900((sead_IDisposer *)(a1 + 44), a1 + 3572, 2)->vtable = (int)&off_60BFDC40;
  FIELD_U32(a1, 3572) = 0;
  FIELD_U32(a1, 3576) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3580) = &byte_60B3BA34;
  FIELD_U32(a1, 3584) = 0;
  FIELD_U8(a1, 3588) = 0;
  FIELD_U32(a1, 3592) = 0;
  FIELD_U32(a1, 3596) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3600) = &byte_60B3BA34;
  FIELD_U32(a1, 3604) = 0;
  FIELD_U8(a1, 3608) = 0;
  FIELD_U32(a1, 3612) = 0;
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  SE_SYS_DECIDE_ref_50208C(a1 + 5820);
  sub_60557FE4(a1 + 7900);
  FIELD_U32(a1, 11592) = 0;
  sub_6050A308(a1 + 11596);
  FIELD_U32(a1, 3616) = 0;
  FIELD_U32(a1, 3620) = 0;
  FIELD_U32(a1, 3624) = 0;
  FIELD_U32(a1, 3628) = 0;
  FIELD_U32(a1, 3632) = 0;
  FIELD_U32(a1, 3636) = 0;
  FIELD_U32(a1, 3640) = 0;
  FIELD_U32(a1, 3644) = 0;
  FIELD_U32(a1, 5696) = 0;
  FIELD_U32(a1, 5692) = 0;
  FIELD_U32(a1, 5688) = 0;
  FIELD_U32(a1, 5684) = 0;
  FIELD_U32(a1, 5680) = 0;
  FIELD_U32(a1, 5676) = 0;
  FIELD_U32(a1, 5672) = 0;
  FIELD_U8(a1, 18828) = 0;
  FIELD_U32(a1, 18824) = 0;
  FIELD_U32(a1, 18820) = 0;
  FIELD_U32(a1, 18816) = 0;
  FIELD_U32(a1, 18812) = 0;
  return a1;
}
