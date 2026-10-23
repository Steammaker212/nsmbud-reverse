/* sub_60123C5C
 * address: 0x60123C5C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60123C5C(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = off_60BD0CBC;
  v2 = (_DWORD *)(a1 + 7008);
  FIELD_U32(a1, 9484) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 9484);
  sub_60237560(a1 + 9484);
  sead__IDisposer__dtor(v3);
  nullsub_407(a1 + 9420);
  ColliderBase_dtor((ColliderBase *)(a1 + 8432));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8128));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7824));
  *(_DWORD *)a1 = off_60BCB52C;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7348));
  sub_60026BFC(v2);
  ColliderBase_dtor((ColliderBase *)(a1 + 6336));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
