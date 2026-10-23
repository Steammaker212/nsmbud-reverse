/* sub_606612DC
 * address: 0x606612DC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606612DC(int a1)
{
  ColliderBase *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60C14B2C;
  v2 = (ColliderBase *)(a1 + 6112);
  FIELD_U32(a1, 7060) = off_60BF144C;
  v3 = (_DWORD *)(a1 + 7060);
  sub_603797F8(a1 + 7060);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 6940) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6940));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6940));
  SolidOnTopCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
