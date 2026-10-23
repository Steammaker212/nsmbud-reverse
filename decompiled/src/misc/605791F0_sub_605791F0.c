/* sub_605791F0
 * address: 0x605791F0   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605791F0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  char v5; // r12
  int v6; // r5
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CAECDC + 8))();
  if ( v3 != result )
  {
    v6 = FIELD_U32(a1, 56);
    if ( ((unsigned int)&dword_60C8DCF4 & ~(1616351824 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DCF4) )
    {
      dword_60C8DCF0 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8DCF4);
    }
    if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8DCF0) == 1 && !FIELD_U8(v6, 6336) )
    {
      sub_6024A0CC(v6, v7);
      FIELD_U32(a1, 108) = v7[0];
      FIELD_U32(a1, 112) = v7[1];
      result = -FIELD_U32(v6, 164);
      FIELD_U32(a1, 164) = result;
    }
    else
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAECDC);
    }
  }
  return result;
}
