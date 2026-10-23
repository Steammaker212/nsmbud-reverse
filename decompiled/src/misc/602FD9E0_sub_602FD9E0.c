/* sub_602FD9E0
 * address: 0x602FD9E0   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602FD9E0(int a1)
{
  ActiveCollider *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BE8B30;
  v2 = (ActiveCollider *)(a1 + 6304);
  CollisionMgr_dtor(a1 + 8552);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8128));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7824));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7520));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7216));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6912));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6608));
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
