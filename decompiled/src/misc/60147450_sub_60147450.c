/* sub_60147450
 * address: 0x60147450   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60147450(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C88164 & ~(1611953256 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88164) )
  {
    dword_60C88160 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C88164);
  }
  v4 = 0;
  if ( !v3 || (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C88160) != 1 )
    return v4;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 != (*(int (**)(void))(dword_60C880E0 + 8))()
    || *(float *)(**(_DWORD **)(FIELD_U32(v3, 6300) + 12) + 20) > 32.0 )
  {
    ((void (__fastcall *)(int))loc_60147BB0)(v3);
    return 1;
  }
  FIELD_U8(v3, 19) = 1;
  return 1;
}
