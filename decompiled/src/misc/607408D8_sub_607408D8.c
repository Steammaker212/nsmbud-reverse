/* sub_607408D8
 * address: 0x607408D8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607408D8(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C22E74;
  FIELD_U32(a1, 6376) = off_60C2313C;
  sub_60959BAC(a1 + 10232);
  sub_609175E4(a1 + 10008);
  sub_604794C0((_DWORD *)(a1 + 6376));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
