/* sub_603A1E88
 * address: 0x603A1E88   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A1E88(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r1
  int result; // r0
  float v8; // s0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v6 = (*(int (**)(void))(dword_60C8EA94 + 8))();
  result = 0;
  if ( v5 == v6 )
  {
    FIELD_U8(a1, 84) = -1;
    v8 = (float)byte_60AFE3F4[a2];
    FIELD_U32(a1, 80) = a2;
    FIELD_F32(a1, 120) = v8 * 2.5;
    (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &ShellEnemy_StateID_slide);
    return 1;
  }
  return result;
}
