/* sub_604E9E48
 * address: 0x604E9E48   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E9E48(int a1)
{
  *(_DWORD *)a1 = off_60BFEB5C;
  FIELD_U8(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 148) = -1;
  FIELD_U32(a1, 144) = -1;
  FIELD_U32(a1, 136) = off_60BFDB94;
  FIELD_U16(a1, 152) = 0;
  FIELD_U16(a1, 154) = 0;
  FIELD_U32(a1, 172) = -1;
  FIELD_U32(a1, 168) = -1;
  FIELD_U32(a1, 160) = off_60BFDB94;
  FIELD_U16(a1, 176) = 0;
  FIELD_U16(a1, 178) = 0;
  FIELD_U32(a1, 196) = -1;
  FIELD_U32(a1, 192) = -1;
  FIELD_U32(a1, 184) = off_60BFDB94;
  FIELD_U16(a1, 200) = 0;
  FIELD_U16(a1, 202) = 0;
  FIELD_U32(a1, 220) = -1;
  FIELD_U32(a1, 216) = -1;
  FIELD_U32(a1, 208) = off_60BFDB94;
  FIELD_U16(a1, 224) = 0;
  FIELD_U16(a1, 226) = 0;
  FIELD_U8(a1, 232) = 0;
  FIELD_U8(a1, 292) = 0;
  FIELD_U8(a1, 294) = 0;
  FIELD_U8(a1, 296) = 0;
  FIELD_U8(a1, 540) = 0;
  FIELD_U32(a1, 560) = 0;
  FIELD_U32(a1, 544) = -1;
  FIELD_U32(a1, 548) = -1;
  FIELD_U32(a1, 552) = -1;
  FIELD_U16(a1, 564) = 0;
  memset((void *)(a1 + 584), 0, 256);
  sub_60481848(a1 + 840);
  FIELD_U8(a1, 4512) = 0;
  FIELD_U8(a1, 33) = 0;
  FIELD_U8(a1, 32) = 0;
  FIELD_U8(a1, 34) = 0;
  *(_DWORD *)a1 = off_60BFEB94;
  FIELD_U32(a1, 4516) = &off_60BFEBF8;
  FIELD_U32(a1, 4520) = &off_60BFEC08;
  FIELD_U32(a1, 4524) = &off_60BFEC2C;
  FIELD_U32(a1, 4528) = a1;
  FIELD_U32(a1, 4532) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 4536), (StateExecuter *)(a1 + 4520), (StateBase *)&dword_60CA5D24);
  FIELD_U32(a1, 4516) = &off_60BFEBE8;
  FIELD_U32(a1, 4552) = 0;
  FIELD_U32(a1, 4556) = 0;
  FIELD_U32(a1, 4572) = 0;
  FIELD_U32(a1, 4576) = 0;
  FIELD_U32(a1, 4592) = -1;
  FIELD_U32(a1, 4596) = 0;
  FIELD_U32(a1, 4580) = 0;
  FIELD_U32(a1, 4584) = 0;
  FIELD_U32(a1, 4588) = 0;
  FIELD_U8(a1, 4569) = 0;
  FIELD_U8(a1, 4568) = 0;
  FIELD_U8(a1, 4565) = 0;
  FIELD_U8(a1, 4561) = 0;
  FIELD_U8(a1, 4564) = 0;
  FIELD_U8(a1, 4567) = 0;
  FIELD_U8(a1, 4566) = 0;
  FIELD_U8(a1, 4560) = 0;
  FIELD_U8(a1, 4563) = 0;
  FIELD_U8(a1, 4562) = 0;
  return a1;
}
