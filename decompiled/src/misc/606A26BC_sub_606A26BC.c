/* sub_606A26BC
 * address: 0x606A26BC   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606A26BC(int a1)
{
  *(_DWORD *)a1 = off_60C18EB8;
  ShapedCollider_dtor((ColliderBase *)(a1 + 7200));
  FIELD_U32(a1, 6308) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6308));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6308));
  FIELD_U32(a1, 6288) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6288));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6288));
  FIELD_U32(a1, 6268) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6268));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6268));
  FIELD_U32(a1, 6248) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6248));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6248));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
