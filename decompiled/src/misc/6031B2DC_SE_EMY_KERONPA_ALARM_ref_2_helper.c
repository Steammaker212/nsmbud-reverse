/* SE_EMY_KERONPA_ALARM_ref_2_helper
 * address: 0x6031B2DC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KERONPA_ALARM_ref_2_helper(int a1, int a2)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v6; // r6

  result = FIELD_U8(a1, 12604);
  if ( !result )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 != (*(int (**)(void))(dword_60C93710 + 8))() )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93710);
    result = 12600;
    FIELD_U32(a1, 12600) = 1;
    if ( a2 == 1 )
    {
      FIELD_U32(a1, 12608) = 1048577;
      return 12608;
    }
  }
  return result;
}
