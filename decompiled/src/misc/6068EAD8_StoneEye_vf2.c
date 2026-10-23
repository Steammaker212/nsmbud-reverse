/* StoneEye_vf2
 * address: 0x6068EAD8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall StoneEye_vf2(int a1)
{
  *(_DWORD *)a1 = StoneEye_vtable;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6328));
  FIELD_U32(a1, 6220) = EffectWrapper_vtable;
  sub_60237560(a1 + 6220);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6220));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
