/* sub_6010C8C4
 * address: 0x6010C8C4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010C8C4(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  const char *v4; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C864E0 + 8))() )
    v4 = "SE_BOSS_CMN_JUMP_L";
  else
    v4 = "SE_BOSS_CMN_JUMP_S";
  sub_60813430(a1 + 6332, v4, 0);
  return sub_608134CC(a1 + 6332, "SE_VOC_ROY_JUMP_L", FIELD_S16(a1, 6640), 0);
}
