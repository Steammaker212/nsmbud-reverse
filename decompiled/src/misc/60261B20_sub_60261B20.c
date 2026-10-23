/* sub_60261B20
 * address: 0x60261B20   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60261B20(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 != (*(int (**)(void))(dword_60C8E44C + 8))() )
    return BobOmb_vf156(a1, a2);
  FIELD_U8(a1, 84) = -1;
  return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E48C);
}
