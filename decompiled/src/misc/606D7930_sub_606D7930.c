/* sub_606D7930
 * address: 0x606D7930   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606D7930(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60C1E1A8;
  FIELD_U32(a1, 7080) = off_60BE75C0;
  FIELD_U32(a1, 7104) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 7104);
  sub_60237560(a1 + 7104);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 6952) = off_60BE75C0;
  FIELD_U32(a1, 6976) = EffectWrapper_vtable;
  sub_60237560(a1 + 6976);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6976));
  ShapedCollider_dtor((ColliderBase *)(a1 + 6160));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
