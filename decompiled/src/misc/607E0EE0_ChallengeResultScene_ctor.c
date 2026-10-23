/* ChallengeResultScene_ctor
 * address: 0x607E0EE0   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ChallengeResultScene_ctor(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"ChallengeResultScene");
  *(_DWORD *)a1 = off_60C2670C;
  sub_6090A654((_DWORD *)(a1 + 192));
  sub_6090C6DC(a1 + 280);
  FIELD_U32(a1, 452) = &off_60C2679C;
  FIELD_U32(a1, 456) = &off_60C267AC;
  FIELD_U32(a1, 460) = &off_60C267D0;
  FIELD_U32(a1, 464) = a1;
  FIELD_U32(a1, 468) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 472), (StateExecuter *)(a1 + 456), (StateBase *)&dword_60CC58C4);
  FIELD_U32(a1, 452) = &off_60C2678C;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 488));
  FIELD_U32(a1, 504) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 508) = &byte_60ABC94D;
  FIELD_U32(a1, 488) = off_60C5E9A4;
  FIELD_U32(a1, 512) = 0;
  FIELD_U32(a1, 516) = 0;
  FIELD_U32(a1, 520) = 1;
  FIELD_U32(a1, 528) = 0;
  FIELD_U32(a1, 532) = 0;
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 524) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 556));
  FIELD_U32(a1, 572) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 576) = &byte_60ABC94D;
  FIELD_U32(a1, 556) = off_60C5E9A4;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 584) = 0;
  FIELD_U32(a1, 588) = 1;
  FIELD_U32(a1, 596) = 0;
  FIELD_U32(a1, 600) = 0;
  FIELD_U32(a1, 604) = 0;
  FIELD_U32(a1, 592) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 624));
  FIELD_U32(a1, 640) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 644) = &byte_60ABC94D;
  FIELD_U32(a1, 624) = off_60C5E9A4;
  FIELD_U32(a1, 648) = 0;
  FIELD_U32(a1, 652) = 0;
  FIELD_U32(a1, 656) = 1;
  FIELD_U32(a1, 664) = 0;
  FIELD_U32(a1, 668) = 0;
  FIELD_U32(a1, 672) = 0;
  FIELD_U32(a1, 660) = off_60BD8394;
  sub_6090A654((_DWORD *)(a1 + 692));
  sub_6090C6DC(a1 + 780);
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  ChallengeResultScene_ctor_helper(a1 + 2972);
  ChallengeResultScene_ctor_helper_523680((sead_IDisposer *)(a1 + 7296));
  FIELD_U32(a1, 10852) = 0;
  return a1;
}
