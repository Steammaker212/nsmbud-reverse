/* sub_606F2BB0
 * address: 0x606F2BB0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606F2BB0(Actor *a1)
{
  Actor *v2; // r0

  FIELD_U32(a1, 0x0) = (int)off_60C20414;
  sub_606F2C4C();
  a1[77].field_40 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[77].field_40);
  sead__IDisposer__dtor(&a1[77].field_40);
  a1[76].childCount = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[76].childCount);
  sead__IDisposer__dtor(&a1[76].childCount);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  v2 = StageActor__dtor(a1);
  operator_delete(v2);
}
