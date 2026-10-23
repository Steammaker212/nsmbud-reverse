/* sub_604E52B8
 * address: 0x604E52B8   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E52B8(int a1)
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
  *(_DWORD *)a1 = off_60BFEA98;
  FIELD_U32(a1, 4516) = &off_60BFEAF4;
  FIELD_U32(a1, 4520) = &off_60BFEB04;
  FIELD_U32(a1, 4524) = &off_60BFEB28;
  FIELD_U32(a1, 4528) = a1;
  FIELD_U32(a1, 4532) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 4536), (StateExecuter *)(a1 + 4520), (StateBase *)&dword_60CA598C);
  FIELD_U32(a1, 4516) = &off_60BFEAE4;
  FIELD_U32(a1, 4552) = 0;
  FIELD_U32(a1, 4556) = 0;
  FIELD_U8(a1, 4560) = 0;
  FIELD_U32(a1, 4564) = -1;
  FIELD_U32(a1, 4568) = 0;
  FIELD_U32(a1, 4572) = 0;
  sub_60506DB0(a1 + 4576);
  sub_60506DB0(a1 + 8196);
  sub_60506DB0(a1 + 11816);
  sub_60506DB0(a1 + 15436);
  sub_60506DB0(a1 + 19056);
  sub_60506DB0(a1 + 22676);
  sub_60506DB0(a1 + 26296);
  sub_60506DB0(a1 + 29916);
  sub_60506DB0(a1 + 33536);
  sub_60506DB0(a1 + 37156);
  sub_6050AC00(a1 + 40776);
  sub_6050E1E8(a1 + 44360);
  sub_6050E1E8(a1 + 48028);
  sub_6050E1E8(a1 + 51696);
  sub_6050E1E8(a1 + 55364);
  sub_6050EEAC(a1 + 59032);
  FIELD_U32(a1, 62856) = -1;
  FIELD_U32(a1, 62860) = 0;
  FIELD_U32(a1, 62864) = 0;
  FIELD_U32(a1, 4556) = 0;
  return a1;
}
