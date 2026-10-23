/* sub_606A8BCC
 * address: 0x606A8BCC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606A8BCC(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C19DB0;
  ShapedCollider_dtor((ColliderBase *)(a1 + 7248));
  FIELD_U32(a1, 6352) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6352));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6352));
  FIELD_U32(a1, 6332) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6332));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6332));
  FIELD_U32(a1, 6312) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6312));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6312));
  FIELD_U32(a1, 6292) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6292));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6292));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
