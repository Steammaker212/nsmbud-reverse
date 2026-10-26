/* ResultScene_ctor
 * address: 0x607F4BFC   size: 592   group: misc
 * sym: # ResultScene_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ResultScene_ctor(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"ResultScene");
  *(_DWORD *)a1 = off_60C276C0;
  FIELD_U32(a1, 192) = &off_60C27750;
  FIELD_U32(a1, 196) = &off_60C27760;
  FIELD_U32(a1, 200) = &off_60C27784;
  FIELD_U32(a1, 204) = a1;
  FIELD_U32(a1, 208) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 212), (StateExecuter *)(a1 + 196), (StateBase *)&dword_60CC6260);
  FIELD_U32(a1, 192) = &off_60C27740;
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
  FIELD_U32(a1, 312) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 316) = &byte_60ABC94D;
  FIELD_U32(a1, 296) = off_60C5E9A4;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 324) = 0;
  FIELD_U32(a1, 328) = 1;
  FIELD_U32(a1, 336) = 0;
  FIELD_U32(a1, 340) = 0;
  FIELD_U32(a1, 344) = 0;
  FIELD_U32(a1, 332) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 364));
  FIELD_U32(a1, 380) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 384) = &byte_60ABC94D;
  FIELD_U32(a1, 364) = off_60C5E9A4;
  FIELD_U32(a1, 388) = 0;
  FIELD_U32(a1, 392) = 0;
  FIELD_U32(a1, 396) = 1;
  FIELD_U32(a1, 404) = 0;
  FIELD_U32(a1, 408) = 0;
  FIELD_U32(a1, 412) = 0;
  FIELD_U32(a1, 400) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 432));
  FIELD_U32(a1, 448) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 452) = &byte_60ABC94D;
  FIELD_U32(a1, 432) = off_60C5E9A4;
  FIELD_U32(a1, 456) = 0;
  FIELD_U32(a1, 460) = 0;
  FIELD_U32(a1, 464) = 1;
  FIELD_U32(a1, 472) = 0;
  FIELD_U32(a1, 476) = 0;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 468) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 500));
  FIELD_U32(a1, 516) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 520) = &byte_60ABC94D;
  FIELD_U32(a1, 500) = off_60C5E9A4;
  FIELD_U32(a1, 524) = 0;
  FIELD_U32(a1, 528) = 0;
  FIELD_U32(a1, 532) = 1;
  FIELD_U32(a1, 540) = 0;
  FIELD_U32(a1, 544) = 0;
  FIELD_U32(a1, 548) = 0;
  FIELD_U32(a1, 536) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 568));
  FIELD_U32(a1, 584) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 588) = &byte_60ABC94D;
  FIELD_U32(a1, 568) = off_60C5E9A4;
  FIELD_U32(a1, 592) = 0;
  FIELD_U32(a1, 596) = 0;
  FIELD_U32(a1, 600) = 1;
  FIELD_U32(a1, 608) = 0;
  FIELD_U32(a1, 612) = 0;
  FIELD_U32(a1, 616) = 0;
  FIELD_U32(a1, 604) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 636));
  FIELD_U32(a1, 652) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 656) = &byte_60ABC94D;
  FIELD_U32(a1, 636) = off_60C5E9A4;
  FIELD_U32(a1, 660) = 0;
  FIELD_U32(a1, 664) = 0;
  FIELD_U32(a1, 668) = 1;
  FIELD_U32(a1, 676) = 0;
  FIELD_U32(a1, 680) = 0;
  FIELD_U32(a1, 684) = 0;
  FIELD_U32(a1, 672) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 704));
  FIELD_U32(a1, 720) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 724) = &byte_60ABC94D;
  FIELD_U32(a1, 704) = off_60C5E9A4;
  FIELD_U32(a1, 728) = 0;
  FIELD_U32(a1, 732) = 0;
  FIELD_U32(a1, 736) = 1;
  FIELD_U32(a1, 744) = 0;
  FIELD_U32(a1, 748) = 0;
  FIELD_U32(a1, 752) = 0;
  FIELD_U32(a1, 740) = off_60BD8394;
  sub_6090A654((_DWORD *)(a1 + 772));
  sub_6090C6DC(a1 + 860);
  FIELD_U32(a1, 1036) = 0;
  return a1;
}
