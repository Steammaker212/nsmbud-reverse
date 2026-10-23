/* sub_6046850C
 * address: 0x6046850C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046850C(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  _DWORD *v4; // r0

  FIELD_U8(a1, 6198) = 1;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C9D3AC + 8))() )
    v4 = &dword_60B025FC[FIELD_U32(a1, 80)];
  else
    v4 = (_DWORD *)(a1 + 120);
  FIELD_U32(a1, 6104) = *v4;
  FIELD_U32(a1, 120) = 0;
  return 0;
}
