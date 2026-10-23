/* sub_60688C18
 * address: 0x60688C18   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60688C18(int a1)
{
  ColliderBase *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60C17004;
  v2 = (ColliderBase *)(a1 + 6776);
  PlayerLookTarget_vf0((_DWORD *)(a1 + 7688));
  *(_DWORD *)a1 = off_60C16BA0;
  ShapedCollider_dtor(v2);
  ShapedCollider_dtor((ColliderBase *)(a1 + 6120));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
