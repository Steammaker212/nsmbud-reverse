/* MultiPlayCourseSelectScene_ctor
 * address: 0x607F1B88   size: 504   group: misc
 * sym: # MultiPlayCourseSelectScene_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MultiPlayCourseSelectScene_ctor(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"MultiPlayCourseSelectScene");
  *(_DWORD *)a1 = off_60C27420;
  FIELD_U32(a1, 192) = &off_60C274B0;
  FIELD_U32(a1, 196) = &off_60C274C0;
  FIELD_U32(a1, 200) = &off_60C274E4;
  FIELD_U32(a1, 204) = a1;
  FIELD_U32(a1, 208) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 212), (StateExecuter *)(a1 + 196), (StateBase *)&dword_60CC5F28);
  FIELD_U32(a1, 192) = &off_60C274A0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 228));
  FIELD_U32(a1, 244) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 248) = &byte_60ABC94D;
  FIELD_U32(a1, 228) = off_60C5E9A4;
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 260) = 1;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 264) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 296));
  FIELD_U32(a1, 296) = off_60C5E9A4;
  FIELD_U32(a1, 312) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 316) = &byte_60ABC94D;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 324) = 0;
  FIELD_U32(a1, 328) = 1;
  FIELD_U32(a1, 336) = 0;
  FIELD_U32(a1, 340) = 0;
  FIELD_U32(a1, 344) = 0;
  FIELD_U32(a1, 332) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 364));
  FIELD_U32(a1, 364) = off_60C5E9A4;
  FIELD_U32(a1, 380) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 384) = &byte_60ABC94D;
  FIELD_U32(a1, 388) = 0;
  FIELD_U32(a1, 392) = 0;
  FIELD_U32(a1, 396) = 1;
  FIELD_U32(a1, 404) = 0;
  FIELD_U32(a1, 408) = 0;
  FIELD_U32(a1, 412) = 0;
  FIELD_U32(a1, 400) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 432));
  FIELD_U32(a1, 432) = off_60C5E9A4;
  FIELD_U32(a1, 448) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 452) = &byte_60ABC94D;
  FIELD_U32(a1, 456) = 0;
  FIELD_U32(a1, 460) = 0;
  FIELD_U32(a1, 464) = 1;
  FIELD_U32(a1, 472) = 0;
  FIELD_U32(a1, 476) = 0;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 468) = off_60BD8394;
  FIELD_U32(a1, 504) = 1065353216;
  FIELD_U32(a1, 508) = 0;
  FIELD_U32(a1, 512) = 0;
  FIELD_U32(a1, 516) = 0;
  FIELD_U32(a1, 520) = 0;
  FIELD_U32(a1, 524) = 1065353216;
  FIELD_U32(a1, 528) = 0;
  FIELD_U32(a1, 532) = 0;
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 540) = 0;
  FIELD_U32(a1, 544) = 1065353216;
  FIELD_U32(a1, 548) = 0;
  FIELD_U32(a1, 500) = off_60C5D014;
  FIELD_U32(a1, 584) = 0;
  FIELD_U32(a1, 552) = 0;
  FIELD_U32(a1, 556) = 0;
  FIELD_U32(a1, 560) = 1092616192;
  FIELD_U32(a1, 564) = 0;
  FIELD_U32(a1, 568) = 0;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 1065353216;
  sub_6090C214(a1 + 588);
  sub_6090A654((_DWORD *)(a1 + 772));
  sub_6090C6DC(a1 + 860);
  sub_6045BF30();
  FIELD_U32(a1, 1460) = 0;
  return a1;
}
