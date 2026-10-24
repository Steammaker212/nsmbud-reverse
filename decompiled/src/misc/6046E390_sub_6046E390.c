/* sub_6046E390
 * address: 0x6046E390   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6046E390(Actor *a1)
{
  FIELD_U32(a1, 0x0) = (int)off_60BFC3FC;
  PlayerLookTarget_vf0(&a1[78].id);
  FIELD_U32(a1 + (76) * 80, 0x40) = (int)EffectWrapper_vtable;
  sub_60237560((int)&FIELD_U32(a1 + (76) * 80, 0x40));
  sead__IDisposer__dtor(&FIELD_U32(a1 + (76) * 80, 0x40));
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  return StageActor__dtor(a1);
}
