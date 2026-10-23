/* sub_606B8800
 * address: 0x606B8800   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606B8800(int a1)
{
  ColliderBase *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60C1B0DC;
  v2 = (ColliderBase *)(a1 + 6632);
  FIELD_U32(a1, 7224) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 7224);
  sub_60237560(a1 + 7224);
  sead__IDisposer__dtor(v3);
  SolidOnTopCollider_dtor(v2);
  *(_DWORD *)a1 = off_60C1AF88;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6264));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
