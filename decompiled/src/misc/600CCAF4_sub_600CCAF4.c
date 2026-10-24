/* sub_600CCAF4
 * address: 0x600CCAF4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_600CCAF4(Actor *a1)
{
  FIELD_U32(a1, 0x0) = (int)off_60BCAC90;
  LightSource__dtor(&a1[77].field_2C);
  a1[76].settings1 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[76].settings1);
  sead__IDisposer__dtor(&a1[76].settings1);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&FIELD_U32(a1 + (8) * 80, 0x8));
  return StageActor__dtor(a1);
}
