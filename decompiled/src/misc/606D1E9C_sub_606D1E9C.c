/* sub_606D1E9C
 * address: 0x606D1E9C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606D1E9C(int a1)
{
  ColliderBase *v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = off_60C1DB6C;
  v2 = (ColliderBase *)(a1 + 12536);
  FIELD_U32(a1, 13192) = off_60BC6E38;
  v3 = (_DWORD *)(a1 + 13192);
  sub_60002B6C((StageActor *)(a1 + 13192));
  sead__IDisposer__dtor(v3);
  ShapedCollider_dtor(v2);
  ShapedCollider_dtor((ColliderBase *)(a1 + 11880));
  ShapedCollider_dtor((ColliderBase *)(a1 + 11224));
  ShapedCollider_dtor((ColliderBase *)(a1 + 10568));
  sub_606D21E0(a1 + 9468);
  sub_606D21E0(a1 + 8368);
  sub_606D21E0(a1 + 7268);
  sub_606D21E0(a1 + 6168);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
