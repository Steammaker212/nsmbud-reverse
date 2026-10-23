/* sub_600CCB70
 * address: 0x600CCB70   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600CCB70(Actor *a1)
{
  Actor *v2; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BCAC90;
  LightSource__dtor(&a1[77].field_2C);
  a1[76].settings1 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[76].settings1);
  sead__IDisposer__dtor(&a1[76].settings1);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&a1[8].id);
  v2 = StageActor__dtor(a1);
  operator_delete(v2);
}
