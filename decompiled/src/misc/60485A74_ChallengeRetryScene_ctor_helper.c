/* ChallengeRetryScene_ctor_helper
 * address: 0x60485A74   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ChallengeRetryScene_ctor_helper(int a1)
{
  sub_604DE8F8(a1);
  *(_DWORD *)a1 = off_60BFD6F0;
  FIELD_U32(a1, 512) = &off_60BFD744;
  FIELD_U32(a1, 516) = &off_60BFD754;
  FIELD_U32(a1, 520) = &off_60BFD778;
  FIELD_U32(a1, 524) = a1;
  FIELD_U32(a1, 528) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 532), (StateExecuter *)(a1 + 516), (StateBase *)&dword_60C9F300);
  FIELD_U32(a1, 512) = &off_60BFD734;
  FIELD_U8(a1, 596) = 1;
  FIELD_U8(a1, 597) = 0;
  FIELD_U8(a1, 598) = 0;
  FIELD_U32(a1, 600) = 0;
  return a1;
}
