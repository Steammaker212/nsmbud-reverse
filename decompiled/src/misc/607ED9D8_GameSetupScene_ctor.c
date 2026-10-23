/* GameSetupScene_ctor
 * address: 0x607ED9D8   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GameSetupScene_ctor(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"GameSetupScene");
  *(_DWORD *)a1 = off_60C26EBC;
  FIELD_U8(a1, 192) = 0;
  FIELD_U32(a1, 196) = &off_60C26F4C;
  FIELD_U32(a1, 200) = &off_60C26F5C;
  FIELD_U32(a1, 204) = &off_60C26F80;
  FIELD_U32(a1, 208) = a1;
  FIELD_U32(a1, 212) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 216), (StateExecuter *)(a1 + 200), (StateBase *)&dword_60CC5BAC);
  FIELD_U32(a1, 196) = &off_60C26F3C;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 232));
  FIELD_U32(a1, 248) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 252) = &byte_60ABC94D;
  FIELD_U32(a1, 232) = off_60C5E9A4;
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 260) = 0;
  FIELD_U32(a1, 264) = 1;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 280) = 0;
  FIELD_U32(a1, 268) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 300));
  FIELD_U32(a1, 300) = off_60C5E9A4;
  FIELD_U32(a1, 316) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 320) = &byte_60ABC94D;
  FIELD_U32(a1, 324) = 0;
  FIELD_U32(a1, 328) = 0;
  FIELD_U32(a1, 332) = 1;
  FIELD_U32(a1, 340) = 0;
  FIELD_U32(a1, 344) = 0;
  FIELD_U32(a1, 348) = 0;
  FIELD_U32(a1, 336) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 368));
  FIELD_U32(a1, 368) = off_60C5E9A4;
  FIELD_U32(a1, 384) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 388) = &byte_60ABC94D;
  FIELD_U32(a1, 392) = 0;
  FIELD_U32(a1, 396) = 0;
  FIELD_U32(a1, 400) = 1;
  FIELD_U32(a1, 408) = 0;
  FIELD_U32(a1, 412) = 0;
  FIELD_U32(a1, 416) = 0;
  FIELD_U32(a1, 404) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 436));
  FIELD_U32(a1, 436) = off_60C5E9A4;
  FIELD_U32(a1, 452) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 456) = &byte_60ABC94D;
  FIELD_U32(a1, 460) = 0;
  FIELD_U32(a1, 464) = 0;
  FIELD_U32(a1, 468) = 1;
  FIELD_U32(a1, 476) = 0;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 484) = 0;
  FIELD_U32(a1, 472) = off_60BD8394;
  FIELD_U32(a1, 508) = 1065353216;
  FIELD_U32(a1, 512) = 0;
  FIELD_U32(a1, 516) = 0;
  FIELD_U32(a1, 520) = 0;
  FIELD_U32(a1, 524) = 0;
  FIELD_U32(a1, 528) = 1065353216;
  FIELD_U32(a1, 532) = 0;
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 540) = 0;
  FIELD_U32(a1, 544) = 0;
  FIELD_U32(a1, 548) = 1065353216;
  FIELD_U32(a1, 552) = 0;
  FIELD_U32(a1, 504) = off_60C5D014;
  FIELD_U32(a1, 588) = 0;
  FIELD_U32(a1, 556) = 0;
  FIELD_U32(a1, 560) = 0;
  FIELD_U32(a1, 564) = 1092616192;
  FIELD_U32(a1, 568) = 0;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 584) = 1065353216;
  sub_6090C214(a1 + 592);
  sub_6090A654((_DWORD *)(a1 + 776));
  sub_6090C6DC(a1 + 864);
  GameSetupScene_ctor_helper_55B894(a1 + 1060);
  sub_60515690(a1 + 14376);
  GameSetupScene_ctor_helper_556930(a1 + 44352);
  GameSetupScene_ctor_helper(a1 + 63184);
  FIELD_U16(a1, 66760) = 0;
  FIELD_U8(a1, 66762) = 0;
  return a1;
}
