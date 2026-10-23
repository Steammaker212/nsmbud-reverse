/* sub_60599800
 * address: 0x60599800   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_60599800(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  int v4; // r0
  _DWORD *v5; // r1
  float v7; // s0

  if ( (FIELD_U8(a1, 6262) & 2) == 0 )
    return (void *)sub_605E1C54(a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 13452));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60CAF9DC + 8))();
  v5 = (_DWORD *)(a1 + 13468);
  if ( v3 == v4 )
  {
    *v5 = 1;
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 13452) + 24))(
      FIELD_U32(a1, 13452),
      FIELD_U32(a1, 13460));
    return (void *)sub_605E1C54(a1);
  }
  *v5 = 3;
  StateMgr__changeState((StateMgr *)(a1 + 13452), (StateBase *)&dword_60CAFA3C);
  FIELD_U32(a1, 6264) |= 0x400000u;
  sub_605D79D0(a1, &unk_60CB1788, 0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  v7 = 1.0 - sub_6059BB74(a1 + 8036);
  if ( v7 >= 0.0 )
  {
    if ( v7 > 1.0 )
      v7 = 1.0;
  }
  else
  {
    v7 = 0.0;
  }
  FIELD_F32(a1, 100) = (float)(v7 * 0.15) + -0.045;
  FIELD_U32(a1, 104) = 0;
  return &unk_60B05ABC;
}
