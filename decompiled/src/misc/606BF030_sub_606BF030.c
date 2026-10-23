/* sub_606BF030
 * address: 0x606BF030   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606BF030(int a1)
{
  ColliderBase *v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = off_60C1B7DC;
  v2 = (ColliderBase *)(a1 + 6160);
  FIELD_U32(a1, 6816) = off_60BC1440;
  FIELD_U32(a1, 7084) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 7084);
  sub_60237560(a1 + 7084);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 6964) = EffectWrapper_vtable;
  sub_60237560(a1 + 6964);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6964));
  FIELD_U32(a1, 6844) = EffectWrapper_vtable;
  sub_60237560(a1 + 6844);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6844));
  ShapedCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
