/* ChallengeResultScene_ctor_helper
 * address: 0x60520BB0   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ChallengeResultScene_ctor_helper(int a1)
{
  *(_DWORD *)a1 = &off_60BFFED0;
  FIELD_U32(a1, 4) = &off_60BFFEE0;
  FIELD_U32(a1, 8) = &off_60BFFF04;
  FIELD_U32(a1, 12) = a1;
  FIELD_U32(a1, 16) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 20), (StateExecuter *)(a1 + 4), (StateBase *)&dword_60CA920C);
  *(_DWORD *)a1 = &off_60BFFEC0;
  FIELD_U32(a1, 36) = &off_60BFFF1C;
  sub_60475900((sead_IDisposer *)(a1 + 36), a1 + 3564, 11)->vtable = (int)&off_60BFFF1C;
  FIELD_U32(a1, 3564) = 0;
  FIELD_U32(a1, 3568) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3572) = &byte_60B3BA34;
  FIELD_U32(a1, 3576) = 0;
  FIELD_U8(a1, 3580) = 0;
  FIELD_U32(a1, 3584) = 0;
  FIELD_U32(a1, 3588) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3592) = &byte_60B3BA34;
  FIELD_U32(a1, 3596) = 0;
  FIELD_U8(a1, 3600) = 0;
  FIELD_U32(a1, 3604) = 0;
  FIELD_U32(a1, 3608) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3612) = &byte_60B3BA34;
  FIELD_U32(a1, 3616) = 0;
  FIELD_U8(a1, 3620) = 0;
  FIELD_U32(a1, 3624) = 0;
  FIELD_U32(a1, 3628) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3632) = &byte_60B3BA34;
  FIELD_U32(a1, 3636) = 0;
  FIELD_U8(a1, 3640) = 0;
  FIELD_U32(a1, 3644) = 0;
  FIELD_U32(a1, 3648) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3652) = &byte_60B3BA34;
  FIELD_U32(a1, 3656) = 0;
  FIELD_U8(a1, 3660) = 0;
  FIELD_U32(a1, 3664) = 0;
  FIELD_U32(a1, 3668) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3672) = &byte_60B3BA34;
  FIELD_U32(a1, 3676) = 0;
  FIELD_U8(a1, 3680) = 0;
  FIELD_U32(a1, 3684) = 0;
  FIELD_U32(a1, 3688) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3692) = &byte_60B3BA34;
  FIELD_U32(a1, 3696) = 0;
  FIELD_U8(a1, 3700) = 0;
  FIELD_U32(a1, 3704) = 0;
  FIELD_U32(a1, 3708) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3712) = &byte_60B3BA34;
  FIELD_U32(a1, 3716) = 0;
  FIELD_U8(a1, 3720) = 0;
  FIELD_U32(a1, 3724) = 0;
  FIELD_U32(a1, 3728) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3732) = &byte_60B3BA34;
  FIELD_U32(a1, 3736) = 0;
  FIELD_U8(a1, 3740) = 0;
  FIELD_U32(a1, 3744) = 0;
  FIELD_U32(a1, 3748) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3752) = &byte_60B3BA34;
  FIELD_U32(a1, 3756) = 0;
  FIELD_U8(a1, 3760) = 0;
  FIELD_U32(a1, 3764) = 0;
  FIELD_U32(a1, 3768) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3772) = &byte_60B3BA34;
  FIELD_U32(a1, 3776) = 0;
  FIELD_U8(a1, 3780) = 0;
  memset((void *)(a1 + 3784), 0, 84);
  ChallengeResultScene_ctor_helper_helper_3F625C();
  FIELD_U32(a1, 4300) = 0;
  FIELD_U32(a1, 4296) = 0;
  FIELD_U32(a1, 4304) = 1091357901;
  FIELD_U8(a1, 4314) = 0;
  FIELD_U16(a1, 4312) = 0;
  FIELD_U32(a1, 4308) = 0;
  FIELD_U32(a1, 4316) = 120;
  FIELD_U16(a1, 4320) = 0;
  memset((void *)(a1 + 3784), 0, 84);
  return a1;
}
