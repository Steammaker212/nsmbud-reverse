/* sub_6063A2D4
 * address: 0x6063A2D4   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6063A2D4(int a1)
{
  *(_DWORD *)a1 = off_60C12C18;
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6568));
  FIELD_U32(a1, 6448) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6448));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6448));
  FIELD_U32(a1, 6332) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6332));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6332));
  FIELD_U32(a1, 6216) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6216));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6216));
  FIELD_U32(a1, 6100) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6100));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6100));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
