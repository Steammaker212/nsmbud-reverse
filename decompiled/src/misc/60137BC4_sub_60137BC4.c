/* sub_60137BC4
 * address: 0x60137BC4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60137BC4(Actor *a1)
{
  ActiveCollider *p_next; // r5

  FIELD_U32(a1, 0x0) = (int)off_60BD2474;
  p_next = (ActiveCollider *)&a1[80].field_20.next;
  sub_60026BFC(&a1[84].childCount);
  FIELD_U32(a1, 0x0) = (int)FireballBase_vtable;
  ActiveCollider_dtor(p_next);
  LightSource__dtor(&a1[79].field_2C);
  a1[78].settings1 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[78].settings1);
  sead__IDisposer__dtor(&a1[78].settings1);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&a1[8].id);
  return StageActor__dtor(a1);
}
