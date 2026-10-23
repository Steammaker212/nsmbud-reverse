/* sub_602B8C28
 * address: 0x602B8C28   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602B8C28(Actor *a1)
{
  int v2; // r5
  int *p_settigns2; // r6
  Actor *v4; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BE3E5C;
  v2 = (int)&a1[79].field_40;
  a1[148].settigns2 = (int)EffectWrapper_vtable;
  p_settigns2 = &a1[148].settigns2;
  sub_60237560((int)&a1[148].settigns2);
  sead__IDisposer__dtor(p_settigns2);
  a1[147].vtable = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[147]);
  sead__IDisposer__dtor(&a1[147].vtable);
  CollisionMgr_dtor(v2);
  FIELD_U32(a1, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&a1[76].field_48);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&a1[8].id);
  v4 = StageActor__dtor(a1);
  operator_delete(v4);
}
