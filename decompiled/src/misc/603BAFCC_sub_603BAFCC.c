/* sub_603BAFCC
 * address: 0x603BAFCC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603BAFCC(int a1)
{
  int v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BF5A28;
  v2 = a1 + 6488;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 22780));
  FIELD_U32(a1, 22656) = EffectWrapper_vtable;
  sub_60237560(a1 + 22656);
  sead__IDisposer__dtor((_DWORD *)(a1 + 22656));
  CollisionMgr_dtor(a1 + 17192);
  CollisionMgr_dtor(a1 + 11840);
  CollisionMgr_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
