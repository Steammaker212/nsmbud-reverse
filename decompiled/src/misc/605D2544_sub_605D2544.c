/* sub_605D2544
 * address: 0x605D2544   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_605D2544(Actor *a1)
{
  ActiveCollider *p_settigns2; // r5

  FIELD_U32(a1, 0x0) = (int)off_60C0AF80;
  p_settigns2 = (ActiveCollider *)&a1[76].settigns2;
  sub_60959BAC(&a1[81].childCount);
  a1[80].profile = (Profile *)EffectWrapper_vtable;
  sub_60237560((int)&a1[80].profile);
  sead__IDisposer__dtor(&a1[80].profile);
  ActiveCollider_dtor(p_settigns2);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&a1[8].id);
  return StageActor__dtor(a1);
}
