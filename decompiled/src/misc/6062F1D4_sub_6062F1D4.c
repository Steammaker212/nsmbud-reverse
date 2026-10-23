/* sub_6062F1D4
 * address: 0x6062F1D4   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6062F1D4(Actor *a1)
{
  Actor *v2; // r0

  FIELD_U32(a1, 0x0) = (int)off_60C123E4;
  LightSource__dtor(&a1[78].field_34);
  a1[76].settings1 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[76].settings1);
  sead__IDisposer__dtor(&a1[76].settings1);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&a1[8].id);
  v2 = StageActor__dtor(a1);
  operator_delete(v2);
}
