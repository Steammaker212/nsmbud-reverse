/* GameOverScene_ctor_helper
 * address: 0x604E3564   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GameOverScene_ctor_helper(int a1)
{
  *(_DWORD *)a1 = off_60BFEA18;
  FIELD_U32(a1, 4) = &off_60BFEA4C;
  FIELD_U32(a1, 8) = &off_60BFEA5C;
  FIELD_U32(a1, 12) = &off_60BFEA80;
  FIELD_U32(a1, 16) = a1;
  FIELD_U32(a1, 20) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 24), (StateExecuter *)(a1 + 8), (StateBase *)&dword_60CA56CC);
  FIELD_U32(a1, 4) = &off_60BFEA3C;
  FIELD_U32(a1, 40) = &off_60BFDC40;
  sub_60475900((sead_IDisposer *)(a1 + 40), a1 + 3568, 2)->vtable = (int)&off_60BFDC40;
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
  GameOverScene_ctor_helper_helper_4BA62C(a1 + 3608);
  GameOverScene_ctor_helper_helper_4BA62C(a1 + 7308);
  GameOverScene_ctor_helper_helper_4BA62C(a1 + 11008);
  GameOverScene_ctor_helper_helper_4BA62C(a1 + 14708);
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  FIELD_U8(a1, 20524) = 0;
  FIELD_U32(a1, 20520) = 0;
  return a1;
}
