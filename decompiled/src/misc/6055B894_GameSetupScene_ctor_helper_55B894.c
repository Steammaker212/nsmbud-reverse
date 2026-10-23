/* GameSetupScene_ctor_helper_55B894
 * address: 0x6055B894   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GameSetupScene_ctor_helper_55B894(int a1)
{
  *(_DWORD *)a1 = &off_60C00FD8;
  FIELD_U32(a1, 4) = &off_60C00FE8;
  FIELD_U32(a1, 8) = &off_60C0100C;
  FIELD_U32(a1, 12) = a1;
  FIELD_U32(a1, 16) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 20), (StateExecuter *)(a1 + 4), (StateBase *)&dword_60CADBF4);
  *(_DWORD *)a1 = &off_60C00FC8;
  FIELD_U32(a1, 36) = &off_60BFD114;
  sub_60475900((sead_IDisposer *)(a1 + 36), a1 + 3564, 1)->vtable = (int)&off_60BFD114;
  FIELD_U32(a1, 3564) = 0;
  FIELD_U32(a1, 3568) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3572) = &byte_60B3BA34;
  FIELD_U32(a1, 3576) = 0;
  FIELD_U8(a1, 3580) = 0;
  FIELD_U32(a1, 3584) = 0;
  FIELD_U32(a1, 3588) = 0;
  FIELD_U32(a1, 3592) = 0;
  FIELD_U32(a1, 3596) = 0;
  FIELD_U32(a1, 3600) = 0;
  FIELD_U32(a1, 3604) = 0;
  SE_SYS_DECIDE_ref_50208C(a1 + 3608);
  sub_6045BF30();
  sub_6050A308(a1 + 6092);
  FIELD_U8(a1, 13308) = 0;
  FIELD_U8(a1, 13309) = 0;
  FIELD_U8(a1, 13310) = 1;
  FIELD_U32(a1, 13312) = -1;
  FIELD_U32(a1, 3584) = 0;
  FIELD_U32(a1, 3588) = 0;
  FIELD_U32(a1, 3592) = 0;
  FIELD_U32(a1, 3596) = 0;
  FIELD_U32(a1, 3600) = 0;
  FIELD_U32(a1, 3604) = 0;
  return a1;
}
