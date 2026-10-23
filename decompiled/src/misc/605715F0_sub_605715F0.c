/* sub_605715F0
 * address: 0x605715F0   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605715F0(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2
  StateBase *CurrentState; // r0
  int v6; // r6
  int result; // r0
  int v8; // r0

  v2 = FIELD_U32(a1, 6980);
  FIELD_U32(a1, 7396) = v2;
  FIELD_U32(a1, 108) = v2;
  v3 = FIELD_U32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 584) = v2;
  FIELD_U32(a1, 588) = v3;
  FIELD_U32(a1, 592) = v4;
  FIELD_U32(a1, 608) = v2;
  FIELD_U32(a1, 612) = v3;
  FIELD_U32(a1, 616) = v4;
  sub_60160948((_DWORD *)(a1 + 6120));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CAE2F8 + 8))();
  if ( v6 != result )
  {
    FIELD_U32(a1, 7368) = 0;
    v8 = FIELD_U32(a1, 7392);
    FIELD_U32(v8, 20) = 0;
    FIELD_U32(v8, 28) |= 2u;
    FIELD_U32(a1, 6432) = sub_605B348C;
    FIELD_U32(a1, 6436) = sub_605B3934;
    FIELD_U32(a1, 6440) = sub_605B4110;
    ColliderBase_setType((ColliderBase *)(a1 + 6120), 7);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE2F8);
  }
  return result;
}
