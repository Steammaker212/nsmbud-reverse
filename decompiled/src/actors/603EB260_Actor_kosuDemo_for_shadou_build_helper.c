/* Actor_kosuDemo_for_shadou_build_helper
 * address: 0x603EB260   size: 156   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kosuDemo_for_shadou_build_helper(int a1, int a2)
{
  sub_603E4258((sead_IDisposer *)a1);
  *(_DWORD *)a1 = &off_60BF912C;
  FIELD_U32(a1, 24) = a2;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 36) = &off_60BF9180;
  FIELD_U32(a1, 40) = &off_60BF9190;
  FIELD_U32(a1, 44) = &off_60BF91B4;
  FIELD_U32(a1, 48) = a1;
  FIELD_U32(a1, 52) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 56), (StateExecuter *)(a1 + 40), (StateBase *)&dword_60C99A48);
  FIELD_U32(a1, 36) = &off_60BF9170;
  return a1;
}
