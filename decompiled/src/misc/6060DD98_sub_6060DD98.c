/* sub_6060DD98
 * address: 0x6060DD98   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6060DD98(_DWORD *a1)
{
  int v2; // r0
  ColliderBase *v3; // r5
  int *v4; // r2
  int *v5; // r4
  int v6; // t1

  a1[143] = 0;
  a1[144] = 1090519040;
  a1[145] = 0;
  a1[123] = 0;
  a1[124] = 0;
  a1[125] = 1107296256;
  a1[126] = 1107296256;
  ((void (__fastcall *)(_DWORD *, _DWORD, int *))loc_602F2F3C)(a1 + 1698, 0, &dword_60B3B98C);
  v2 = a1[5] & 0xF;
  a1[1697] = v2;
  if ( v2 == 1 )
    ice_coin_ref(a1);
  else
    block_ice_ref_60E028(a1);
  a1[36] = 1065353216;
  a1[37] = 1065353216;
  a1[38] = 1065353216;
  sub_6060E120(a1);
  v3 = (ColliderBase *)(a1 + 1528);
  if ( a1[1697] == 1 )
    v4 = &dword_60CB2F64;
  else
    v4 = &dword_60CB2F40;
  ShapedCollider_init((ShapedCollider *)(a1 + 1528), (StageActor *)a1, (ShapedColliderInfo *)v4);
  a1[1607] = sub_6060E324;
  a1[1606] = sub_6060E358;
  a1[1608] = sub_6060E38C;
  v6 = a1[1562];
  v5 = a1 + 1562;
  *v5 = v6 | 0x10;
  ColliderBase_setType(v3, 30);
  ColliderMgr_add(ColliderMgr_instance, v3);
  StateMgr__changeState((StateMgr *)(v5 - 41), (StateBase *)&dword_60CB2EE4);
  return 1;
}
