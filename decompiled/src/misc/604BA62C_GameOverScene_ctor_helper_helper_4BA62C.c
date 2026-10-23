/* GameOverScene_ctor_helper_helper_4BA62C
 * address: 0x604BA62C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GameOverScene_ctor_helper_helper_4BA62C(int a1)
{
  *(_DWORD *)a1 = off_60BFE0F4;
  FIELD_U32(a1, 4) = &off_60BFE128;
  FIELD_U32(a1, 8) = &off_60BFE138;
  FIELD_U32(a1, 12) = &off_60BFE15C;
  FIELD_U32(a1, 16) = a1;
  FIELD_U32(a1, 20) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 24), (StateExecuter *)(a1 + 8), (StateBase *)&dword_60CA2580);
  FIELD_U32(a1, 4) = &off_60BFE118;
  FIELD_U32(a1, 40) = &off_60BFE174;
  sub_60475900((sead_IDisposer *)(a1 + 40), a1 + 3568, 4)->vtable = (int)&off_60BFE174;
  FIELD_U32(a1, 3568) = 0;
  FIELD_U32(a1, 3572) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3576) = &byte_60B3BA34;
  FIELD_U32(a1, 3580) = 0;
  FIELD_U8(a1, 3584) = 0;
  FIELD_U32(a1, 3588) = 0;
  FIELD_U32(a1, 3592) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3596) = &byte_60B3BA34;
  FIELD_U32(a1, 3600) = 0;
  FIELD_U8(a1, 3604) = 0;
  FIELD_U32(a1, 3608) = 0;
  FIELD_U32(a1, 3612) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3616) = &byte_60B3BA34;
  FIELD_U32(a1, 3620) = 0;
  FIELD_U8(a1, 3624) = 0;
  FIELD_U32(a1, 3628) = 0;
  FIELD_U32(a1, 3632) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3636) = &byte_60B3BA34;
  FIELD_U32(a1, 3640) = 0;
  FIELD_U8(a1, 3644) = 0;
  memset((void *)(a1 + 3648), 0, 50);
  return a1;
}
