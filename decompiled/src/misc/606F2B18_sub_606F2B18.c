/* sub_606F2B18
 * address: 0x606F2B18   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606F2B18(Actor *a1)
{
  FIELD_U32(a1, 0x0) = (int)off_60C20414;
  sub_606F2C4C();
  a1[77].field_40 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[77].field_40);
  sead__IDisposer__dtor(&a1[77].field_40);
  a1[76].childCount = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[76].childCount);
  sead__IDisposer__dtor(&a1[76].childCount);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&a1[8].id);
  return StageActor__dtor(a1);
}
