/* sub_60730B7C
 * address: 0x60730B7C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60730B7C(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = off_60C22450;
  v2 = (_DWORD *)(a1 + 6344);
  FIELD_U32(a1, 7320) = off_60BC6E38;
  v3 = (_DWORD *)(a1 + 7320);
  sub_60002B6C((StageActor *)(a1 + 7320));
  sead__IDisposer__dtor(v3);
  ShapedCollider_dtor((ColliderBase *)(a1 + 6664));
  sub_60026BFC(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
