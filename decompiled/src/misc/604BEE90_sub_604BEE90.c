/* sub_604BEE90
 * address: 0x604BEE90   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BEE90(int a1)
{
  sub_604DE8F8(a1);
  *(_DWORD *)a1 = off_60BFE2B0;
  FIELD_U32(a1, 496) = &off_60BFE2A0;
  FIELD_U32(a1, 500) = &off_60BFE308;
  FIELD_U32(a1, 504) = &off_60BFE318;
  FIELD_U32(a1, 508) = &off_60BFE33C;
  FIELD_U32(a1, 512) = a1;
  FIELD_U32(a1, 516) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 520), (StateExecuter *)(a1 + 504), (StateBase *)&dword_60CA27B8);
  FIELD_U32(a1, 500) = &off_60BFE2F8;
  SE_SYS_DECIDE_ref_50208C(a1 + 564);
  sub_6050A308(a1 + 2688);
  FIELD_U32(a1, 9904) = off_60BFE2D4;
  FIELD_U32(a1, 9908) = 0;
  FIELD_U32(a1, 9912) = 0;
  sub_605084E4(a1 + 9916);
  sub_605084E4(a1 + 13672);
  sub_605084E4(a1 + 17428);
  sub_60509B54(a1 + 21232);
  sub_60509B54(a1 + 24812);
  sub_60509B54(a1 + 28392);
  sub_60509B54(a1 + 31972);
  FIELD_U32(a1, 35552) = 0;
  memset((void *)(a1 + 21184), 0, 48);
  FIELD_U8(a1, 35560) = 1;
  FIELD_U8(a1, 35562) = 0;
  FIELD_U8(a1, 35561) = 0;
  FIELD_U8(a1, 35564) = 0;
  FIELD_U8(a1, 35563) = 0;
  FIELD_U8(a1, 35578) = 0;
  FIELD_U16(a1, 35576) = 0;
  FIELD_U32(a1, 35572) = 0;
  FIELD_U32(a1, 35568) = 0;
  sub_60506DB0(a1 + 35580);
  sub_60506DB0(a1 + 39200);
  sub_60506DB0(a1 + 42820);
  sub_60506DB0(a1 + 46440);
  FIELD_U32(a1, 50156) = -1;
  FIELD_U32(a1, 50152) = -1;
  FIELD_U32(a1, 50144) = off_60BFDB94;
  FIELD_U16(a1, 50160) = 0;
  FIELD_U16(a1, 50162) = 0;
  FIELD_U32(a1, 50180) = -1;
  FIELD_U32(a1, 50176) = -1;
  FIELD_U32(a1, 50168) = off_60BFDB94;
  FIELD_U16(a1, 50184) = 0;
  FIELD_U16(a1, 50186) = 0;
  FIELD_U32(a1, 50204) = -1;
  FIELD_U32(a1, 50200) = -1;
  FIELD_U32(a1, 50192) = off_60BFDB94;
  FIELD_U16(a1, 50208) = 0;
  FIELD_U16(a1, 50210) = 0;
  FIELD_U32(a1, 50228) = -1;
  FIELD_U32(a1, 50224) = -1;
  FIELD_U32(a1, 50216) = off_60BFDB94;
  FIELD_U16(a1, 50232) = 0;
  FIELD_U16(a1, 50234) = 0;
  FIELD_U32(a1, 35568) = 0;
  FIELD_U32(a1, 35572) = 0;
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 540) = 0;
  FIELD_U32(a1, 544) = 0;
  FIELD_U32(a1, 548) = 0;
  FIELD_U32(a1, 552) = 0;
  FIELD_U32(a1, 556) = 0;
  FIELD_U32(a1, 560) = 0;
  memset((void *)(a1 + 2644), 0, 44);
  return a1;
}
