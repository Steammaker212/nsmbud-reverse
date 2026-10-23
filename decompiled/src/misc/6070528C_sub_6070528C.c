/* sub_6070528C
 * address: 0x6070528C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6070528C(int a1)
{
  *(_DWORD *)a1 = off_60C20CB0;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6448));
  FIELD_U32(a1, 6324) = EffectWrapper_vtable;
  sub_60237560(a1 + 6324);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6324));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
