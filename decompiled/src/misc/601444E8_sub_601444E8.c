/* sub_601444E8
 * address: 0x601444E8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601444E8(Actor *a1)
{
  sead_ListNode **p_next; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BD3600;
  p_next = &a1[79].field_20.next;
  ActiveCollider_dtor((ActiveCollider *)&a1[80].movementId);
  LightSource__dtor(p_next);
  a1[78].profile = (Profile *)EffectWrapper_vtable;
  sub_60237560((int)&a1[78].profile);
  sead__IDisposer__dtor(&a1[78].profile);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&a1[8].id);
  v3 = StageActor__dtor(a1);
  operator_delete(v3);
}
