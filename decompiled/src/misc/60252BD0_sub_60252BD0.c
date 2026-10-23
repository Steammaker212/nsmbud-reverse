/* sub_60252BD0
 * address: 0x60252BD0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60252BD0(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int result; // r0
  float v7; // s0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C8DEF4 + 8))();
  if ( v5 == result )
  {
    v7 = FIELD_F32(a2, 188);
    result = FIELD_U32(a1, 80);
    if ( v7 > 0.0 && result == 1 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DF14);
    if ( v7 < 0.0 && !result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DF14);
  }
  return result;
}
