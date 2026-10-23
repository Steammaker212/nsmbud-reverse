/* sub_6046FC4C
 * address: 0x6046FC4C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6046FC4C(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BFC53C;
  FIELD_U32(a1, 6868) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 6868);
  sub_60237560(a1 + 6868);
  sead__IDisposer__dtor(v2);
  *(_DWORD *)a1 = off_60BFB65C;
  FIELD_U32(a1, 6684) = EffectWrapper_vtable;
  sub_60237560(a1 + 6684);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6684));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6332));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
