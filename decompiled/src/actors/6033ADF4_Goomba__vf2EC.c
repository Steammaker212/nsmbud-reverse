/* Goomba__vf2EC
 * address: 0x6033ADF4   size: 256   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033E5E8
// 
// Overridden by: None
int __fastcall Goomba__vf2EC(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r5

  FIELD_U8(a1, 6704) = 1;
  sub_602A3EFC(a1 + 6788, 24, 0.0625);
  if ( FIELD_U8(a1, 6705) )
    FIELD_U32(a1, 6860) = 30;
  if ( (FIELD_U8(a1, 2872) & 1) == 0 && !FIELD_U8(a1, 6701) )
  {
    result = FIELD_U8(a1, 6702);
    if ( !FIELD_U8(a1, 6702) )
      return result;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C942B8);
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 672))(a1);
  if ( !result )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60C942B8 + 8))();
    if ( v4 != result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C942B8);
  }
  return result;
}
