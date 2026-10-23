/* sub_604A3FE4
 * address: 0x604A3FE4   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A3FE4(int a1)
{
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = &off_60BFDD14;
  FIELD_U32(a1, 8) = &off_60BFDD24;
  FIELD_U32(a1, 12) = &off_60BFDD48;
  FIELD_U32(a1, 16) = a1;
  FIELD_U32(a1, 20) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 24), (StateExecuter *)(a1 + 8), (StateBase *)&dword_60CA10D0);
  FIELD_U32(a1, 4) = &off_60BFDD04;
  FIELD_U8(a1, 40) = 0;
  FIELD_U32(a1, 44) = 0;
  sub_604A4178(a1 + 48);
  SE_SYS_DECIDE_ref_50208C(a1 + 3936);
  sub_6050A308(a1 + 6016);
  sub_6050A308(a1 + 13232);
  FIELD_U32(a1, 20480) = 0;
  FIELD_U32(a1, 20484) = 0;
  FIELD_U32(a1, 20488) = 0;
  FIELD_U32(a1, 20492) = 3;
  FIELD_U32(a1, 20496) = 0;
  FIELD_U8(a1, 20500) = 0;
  FIELD_U8(a1, 20501) = 0;
  FIELD_U32(a1, 20512) = 2139095039;
  FIELD_U32(a1, 20516) = 2139095039;
  FIELD_U32(a1, 20520) = -8388609;
  FIELD_U32(a1, 20524) = -8388609;
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 20476) = 0;
  FIELD_U32(a1, 20472) = 0;
  FIELD_U32(a1, 20468) = 0;
  FIELD_U32(a1, 20464) = 0;
  FIELD_U32(a1, 20460) = 0;
  FIELD_U32(a1, 20456) = 0;
  FIELD_U32(a1, 20452) = 0;
  FIELD_U32(a1, 20448) = 0;
  FIELD_U16(a1, 20552) = 0;
  FIELD_U32(a1, 20548) = 0;
  FIELD_U32(a1, 20544) = 0;
  FIELD_U32(a1, 20540) = 0;
  FIELD_U32(a1, 20536) = 0;
  FIELD_U32(a1, 20532) = 0;
  FIELD_U32(a1, 20528) = 0;
  return a1;
}
