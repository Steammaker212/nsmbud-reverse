/* BootScene_ctor_helper
 * address: 0x6048210C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BootScene_ctor_helper(int a1)
{
  *(_DWORD *)a1 = off_60BFD4AC;
  FIELD_U32(a1, 4) = &off_60BFD4E0;
  FIELD_U32(a1, 8) = &off_60BFD4F0;
  FIELD_U32(a1, 12) = &off_60BFD514;
  FIELD_U32(a1, 16) = a1;
  FIELD_U32(a1, 20) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 24), (StateExecuter *)(a1 + 8), (StateBase *)&dword_60C9EEDC);
  FIELD_U32(a1, 4) = &off_60BFD4D0;
  FIELD_U32(a1, 40) = &off_60BFD114;
  sub_60475900((sead_IDisposer *)(a1 + 40), a1 + 3568, 1)->vtable = (int)&off_60BFD114;
  FIELD_U32(a1, 3568) = 0;
  FIELD_U32(a1, 3572) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3576) = &byte_60B3BA34;
  FIELD_U32(a1, 3580) = 0;
  FIELD_U8(a1, 3584) = 0;
  FIELD_U8(a1, 3588) = 1;
  FIELD_U8(a1, 3589) = 0;
  FIELD_U8(a1, 3590) = 0;
  return a1;
}
