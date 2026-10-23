/* sub_600A35DC
 * address: 0x600A35DC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_600A35DC(Actor *a1)
{
  ActiveCollider *p_parent; // r5
  int *v3; // r6

  FIELD_U32(a1, 0x0) = (int)off_60BC8360;
  p_parent = (ActiveCollider *)&a1[80].parent;
  a1[84].field_30 = (int)EffectWrapper_vtable;
  v3 = &a1[84].field_30;
  sub_60237560((int)&a1[84].field_30);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 0x0) = (int)off_60BC99D0;
  ActiveCollider_dtor(p_parent);
  a1[79].id = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[79].id);
  sead__IDisposer__dtor(&a1[79].id);
  a1[77].field_40 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[77].field_40);
  sead__IDisposer__dtor(&a1[77].field_40);
  LightSource__dtor(&a1[76].field_20.previous);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&a1[8].id);
  return StageActor__dtor(a1);
}
