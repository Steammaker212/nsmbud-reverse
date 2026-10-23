/* sub_6034F014
 * address: 0x6034F014   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034F014(int a1, int a2)
{
  float v2; // s0
  int result; // r0
  StateBase *CurrentState; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r5

  v2 = FIELD_F32(a2, 188);
  result = FIELD_U32(a1, 80);
  if ( v2 > 0.0 && result == 1 || v2 < 0.0 && !result )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 == (*(int (**)(void))(dword_60C94E30 + 8))() )
    {
      result = 0;
      FIELD_U32(a1, 120) = 0;
    }
    else
    {
      v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
      result = (*(int (**)(void))(dword_60C945D8 + 8))();
      if ( v8 != result )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C945D8);
    }
  }
  return result;
}
