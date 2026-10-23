/* LargeGoomba_vf65
 * address: 0x60340C68   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf65(int a1, int a2)
{
  float v2; // s0
  int result; // r0
  StateBase *CurrentState; // r0
  int v6; // r5

  v2 = FIELD_F32(a2, 188);
  result = FIELD_U32(a1, 80);
  if ( v2 > 0.0 && result == 1 || v2 < 0.0 && !result )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60C945D8 + 8))();
    if ( v6 != result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C945D8);
  }
  return result;
}
