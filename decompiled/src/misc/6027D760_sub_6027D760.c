/* sub_6027D760
 * address: 0x6027D760   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6027D760(int a1)
{
  *(_DWORD *)a1 = off_60BDD2DC;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8980));
  FIELD_U32(a1, 8692) = EffectWrapper_vtable;
  sub_60237560(a1 + 8692);
  sead__IDisposer__dtor((_DWORD *)(a1 + 8692));
  FIELD_U32(a1, 8588) = EffectWrapper_vtable;
  sub_60237560(a1 + 8588);
  sead__IDisposer__dtor((_DWORD *)(a1 + 8588));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
