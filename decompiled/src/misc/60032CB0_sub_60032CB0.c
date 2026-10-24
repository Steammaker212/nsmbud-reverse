/* sub_60032CB0
 * address: 0x60032CB0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60032CB0(Actor *a1)
{
  FIELD_U32(a1, 0x0) = (int)off_60BC3DE8;
  PlayerLookTarget_vf0(&a1[80].settigns2);
  a1[79].vtable = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[79]);
  sead__IDisposer__dtor(&a1[79].vtable);
  FIELD_U32(a1, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&a1[76].field_48);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&FIELD_U32(a1 + (8) * 80, 0x8));
  return StageActor__dtor(a1);
}
