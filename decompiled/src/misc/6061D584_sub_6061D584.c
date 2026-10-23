/* sub_6061D584
 * address: 0x6061D584   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6061D584(int a1)
{
  int v2; // s0
  ColliderBase *v3; // r1
  int v4; // t1
  int v6[6]; // [sp+0h] [bp-18h] BYREF

  lift_icebox_ref();
  FIELD_U32(a1, 144) = 1048576000;
  FIELD_U32(a1, 148) = 1048576000;
  FIELD_U32(a1, 152) = 1048576000;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  ((void (__fastcall *)(int, _DWORD, int *))loc_602F2F3C)(a1 + 6776, 0, &dword_60B3B98C);
  *(float *)&v2 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  *(float *)v6 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v6[1] = v2;
  sub_602F31A0(a1 + 6776, v6, 0);
  ShapedCollider_init((ShapedCollider *)(a1 + 6104), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB3600);
  FIELD_U32(a1, 6416) = sub_6061D7B0;
  FIELD_U32(a1, 6420) = sub_6061D7E4;
  FIELD_U32(a1, 6424) = sub_6061D818;
  ColliderBase_setType((ColliderBase *)(a1 + 6104), 30);
  v3 = (ColliderBase *)(a1 + 6104);
  v4 = FIELD_U32(a1, 6240);
  a1 += 6240;
  *(_DWORD *)a1 = v4 | 0x10;
  ColliderMgr_add(ColliderMgr_instance, v3);
  StateMgr__changeState((StateMgr *)(a1 - 156), (StateBase *)&dword_60CB3624);
  return 1;
}
