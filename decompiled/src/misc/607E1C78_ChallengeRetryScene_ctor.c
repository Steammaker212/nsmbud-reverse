/* ChallengeRetryScene_ctor
 * address: 0x607E1C78   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ChallengeRetryScene_ctor(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"ChallengeRetryScene");
  *(_DWORD *)a1 = off_60C26824;
  sub_6090A654((_DWORD *)(a1 + 192));
  sub_6090C6DC(a1 + 280);
  FIELD_U32(a1, 452) = &off_60C268B4;
  FIELD_U32(a1, 456) = &off_60C268C4;
  FIELD_U32(a1, 460) = &off_60C268E8;
  FIELD_U32(a1, 464) = a1;
  FIELD_U32(a1, 468) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 472), (StateExecuter *)(a1 + 456), (StateBase *)&dword_60CC59B0);
  FIELD_U32(a1, 452) = &off_60C268A4;
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
  sub_6090A654((_DWORD *)(a1 + 556));
  sub_6090C6DC(a1 + 644);
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  ChallengeRetryScene_ctor_helper(a1 + 2836);
  FIELD_U32(a1, 3448) = 0;
  return a1;
}
