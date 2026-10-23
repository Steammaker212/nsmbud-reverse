/* sub_600F27B0
 * address: 0x600F27B0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F27B0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r4
  const char *v5; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = a1 + 6332;
  if ( v3 == (*(int (**)(void))(dword_60C854E0 + 8))() )
  {
    sub_60813430(v4, "SE_BOSS_CMN_JUMP_L", 0);
    v5 = "SE_VOC_MOR_JUMP_L";
  }
  else
  {
    v5 = "SE_BOSS_CMN_JUMP_S";
  }
  return sub_60813430(v4, v5, 0);
}
