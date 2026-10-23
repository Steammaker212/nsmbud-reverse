/* sub_604AAEB4
 * address: 0x604AAEB4   size: 1212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AAEB4(int a1)
{
  int v2; // r5
  int v3; // r0

  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = &off_60BFDDF4;
  FIELD_U32(a1, 24) = &off_60BFDE04;
  FIELD_U32(a1, 28) = &off_60BFDE28;
  FIELD_U32(a1, 32) = a1;
  FIELD_U32(a1, 36) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 40), (StateExecuter *)(a1 + 24), (StateBase *)&dword_60CA1470);
  FIELD_U32(a1, 20) = &off_60BFDDE4;
  FIELD_U8(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 64) = &off_60BFDE40;
  sub_60475900((sead_IDisposer *)(a1 + 64), a1 + 3592, 7);
  FIELD_U32(a1, 64) = &off_60BFDE40;
  FIELD_U32(a1, 3592) = 0;
  FIELD_U32(a1, 3596) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3600) = &byte_60B3BA34;
  FIELD_U32(a1, 3604) = 0;
  FIELD_U8(a1, 3608) = 0;
  FIELD_U32(a1, 3612) = 0;
  FIELD_U32(a1, 3616) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3620) = &byte_60B3BA34;
  FIELD_U32(a1, 3624) = 0;
  FIELD_U8(a1, 3628) = 0;
  FIELD_U32(a1, 3632) = 0;
  FIELD_U32(a1, 3636) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3640) = &byte_60B3BA34;
  FIELD_U32(a1, 3644) = 0;
  FIELD_U8(a1, 3648) = 0;
  FIELD_U32(a1, 3652) = 0;
  FIELD_U32(a1, 3656) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3660) = &byte_60B3BA34;
  FIELD_U32(a1, 3664) = 0;
  FIELD_U8(a1, 3668) = 0;
  FIELD_U32(a1, 3672) = 0;
  FIELD_U32(a1, 3676) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3680) = &byte_60B3BA34;
  FIELD_U32(a1, 3684) = 0;
  FIELD_U8(a1, 3688) = 0;
  FIELD_U32(a1, 3692) = 0;
  FIELD_U32(a1, 3696) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3700) = &byte_60B3BA34;
  FIELD_U32(a1, 3704) = 0;
  FIELD_U8(a1, 3708) = 0;
  FIELD_U32(a1, 3712) = 0;
  FIELD_U32(a1, 3716) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3720) = &byte_60B3BA34;
  FIELD_U32(a1, 3724) = 0;
  FIELD_U8(a1, 3728) = 0;
  sub_604A3FE4(a1 + 3732);
  sub_604A3FE4(a1 + 24288);
  sub_604A3FE4(a1 + 44844);
  sub_604A3FE4(a1 + 65400);
  SE_SYS_DECIDE_ref_50208C(a1 + 85956);
  sub_6050A308(a1 + 88036);
  FIELD_U32(a1, 95252) = 0;
  v2 = 182268;
  v3 = a1 + 95256;
  do
  {
    v2 -= 2988;
    v3 = sub_604024E0(v3) + 2988;
  }
  while ( v2 );
  FIELD_U8(a1, 277524) = 0;
  FIELD_U8(a1, 277525) = 0;
  FIELD_U32(a1, 277528) = 7;
  FIELD_U32(a1, 277532) = 5;
  FIELD_U32(a1, 277536) = 0;
  FIELD_U32(a1, 277540) = -1;
  FIELD_U32(a1, 277544) = 7;
  FIELD_U8(a1, 277548) = 0;
  FIELD_U8(a1, 277549) = 0;
  FIELD_U32(a1, 277552) = 7;
  FIELD_U32(a1, 277556) = 5;
  FIELD_U32(a1, 277560) = 0;
  FIELD_U32(a1, 277564) = -1;
  FIELD_U32(a1, 277568) = 7;
  FIELD_U8(a1, 277572) = 0;
  FIELD_U8(a1, 277573) = 0;
  FIELD_U32(a1, 277576) = 7;
  FIELD_U32(a1, 277580) = 5;
  FIELD_U32(a1, 277584) = 0;
  FIELD_U32(a1, 277588) = -1;
  FIELD_U32(a1, 277592) = 7;
  FIELD_U8(a1, 277596) = 0;
  FIELD_U8(a1, 277597) = 0;
  FIELD_U32(a1, 277600) = 7;
  FIELD_U32(a1, 277604) = 5;
  FIELD_U32(a1, 277608) = 0;
  FIELD_U32(a1, 277612) = -1;
  FIELD_U32(a1, 277616) = 7;
  FIELD_U8(a1, 277620) = 0;
  FIELD_U8(a1, 277621) = 0;
  FIELD_U32(a1, 277624) = 7;
  FIELD_U32(a1, 277628) = 5;
  FIELD_U32(a1, 277632) = 0;
  FIELD_U32(a1, 277636) = -1;
  FIELD_U32(a1, 277640) = 7;
  FIELD_U8(a1, 277644) = 0;
  FIELD_U8(a1, 277645) = 0;
  FIELD_U32(a1, 277648) = 7;
  FIELD_U32(a1, 277652) = 5;
  FIELD_U32(a1, 277656) = 0;
  FIELD_U32(a1, 277660) = -1;
  FIELD_U32(a1, 277664) = 7;
  FIELD_U32(a1, 277668) = 0;
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  FIELD_U8(a1, 279706) = 0;
  FIELD_U16(a1, 279704) = 0;
  FIELD_U32(a1, 279700) = 0;
  FIELD_U32(a1, 279696) = 0;
  FIELD_U32(a1, 279692) = 0;
  FIELD_U32(a1, 279724) = 3;
  FIELD_U32(a1, 279736) = 0;
  FIELD_U32(a1, 279740) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 279720) = 0;
  FIELD_U32(a1, 279716) = 0;
  FIELD_U32(a1, 279712) = 0;
  FIELD_U32(a1, 279708) = 0;
  FIELD_U16(a1, 279732) = 0;
  FIELD_U32(a1, 279728) = 0;
  return a1;
}
