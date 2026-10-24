/* sub_6045D054
 * address: 0x6045D054   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6045D054(Actor *a1)
{
  FIELD_U32(a1, 0x0) = (int)off_60BFB234;
  PlayerLookTarget_vf0(&a1[79].id);
  a1[77].parent = (Actor *)EffectWrapper_vtable;
  sub_60237560((int)&a1[77].parent);
  sead__IDisposer__dtor(&a1[77].parent);
  a1[76].field_20.previous = (sead_ListNode *)EffectWrapper_vtable;
  sub_60237560((int)&a1[76].field_20);
  sead__IDisposer__dtor(&a1[76].field_20.previous);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  return StageActor__dtor(a1);
}
