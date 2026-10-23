/* sub_606CDF80
 * address: 0x606CDF80   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606CDF80(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60C1CCF8;
  FIELD_U32(a1, 7124) = off_60BC6E38;
  v2 = (_DWORD *)(a1 + 7124);
  sub_60002B6C((StageActor *)(a1 + 7124));
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 7104) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 7104));
  sead__IDisposer__dtor((_DWORD *)(a1 + 7104));
  FIELD_U32(a1, 7084) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 7084));
  sead__IDisposer__dtor((_DWORD *)(a1 + 7084));
  FIELD_U32(a1, 7064) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 7064));
  sead__IDisposer__dtor((_DWORD *)(a1 + 7064));
  *(_DWORD *)a1 = off_60C1C968;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6240));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
