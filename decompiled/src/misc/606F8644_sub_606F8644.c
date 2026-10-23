/* sub_606F8644
 * address: 0x606F8644   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606F8644(int a1)
{
  ActiveCollider *v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = off_60C20600;
  v2 = (ActiveCollider *)(a1 + 6180);
  FIELD_U32(a1, 8116) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 8116);
  sub_60237560(a1 + 8116);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 8012) = EffectWrapper_vtable;
  sub_60237560(a1 + 8012);
  sead__IDisposer__dtor((_DWORD *)(a1 + 8012));
  ShapedCollider_dtor((ColliderBase *)(a1 + 7336));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6888));
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
