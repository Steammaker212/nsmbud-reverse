/* ParaGoomba__vf27C
 * address: 0x603637E8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033E5C0
// 
// Overridden by: None
int __fastcall ParaGoomba__vf27C(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  StateBase *v5; // r0
  int v6; // r5

  if ( FIELD_U8(a1, 6843) )
  {
    FIELD_F32(a1, 108) = FIELD_F32(a1, 376) + FIELD_F32(a1, 108);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60C95910 + 8))();
    if ( v3 != result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95910);
  }
  else
  {
    v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    result = (*(int (**)(void))(dword_60C94494 + 8))();
    if ( v6 != result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94494);
  }
  return result;
}
