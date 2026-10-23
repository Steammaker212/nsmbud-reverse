/* sub_60149F50
 * address: 0x60149F50   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60149F50(int a1)
{
  int v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = off_60BD41F8;
  v2 = a1 + 6480;
  FIELD_U32(a1, 11876) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 11876);
  sub_60237560(a1 + 11876);
  sead__IDisposer__dtor(v3);
  CollisionMgr_dtor(v2);
  *(_DWORD *)a1 = off_60BD2120;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6132));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
