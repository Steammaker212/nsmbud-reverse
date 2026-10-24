/* sub_605BE314
 * address: 0x605BE314   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605BE314(Actor *a1)
{
  int *v2; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60C1C540;
  a1[77].field_40 = (int)EffectWrapper_vtable;
  v2 = &a1[77].field_40;
  sub_60237560((int)&a1[77].field_40);
  sead__IDisposer__dtor(v2);
  a1[76].childCount = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[76].childCount);
  sead__IDisposer__dtor(&a1[76].childCount);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  v3 = StageActor__dtor(a1);
  operator_delete(v3);
}
