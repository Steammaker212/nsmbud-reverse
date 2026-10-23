/* sub_6013FB0C
 * address: 0x6013FB0C   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013FB0C(int a1)
{
  int v2; // r0
  int v3; // r0
  float v4; // s0
  int v5; // r3
  int v6; // r5
  int v7; // r6
  int v8; // r7
  int v9; // r3
  int v10; // r4
  int v11; // r5
  int v12; // r6
  int (*v13)(); // r7
  int v14; // r0

  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 0;
  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 80) = v2 & 1;
  FIELD_U32(a1, 160) = dword_60AF1EC0[v2 & 1];
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 156) = -775480206;
  FIELD_U32(a1, 144) = 1050253722;
  v3 = BYTE2(v2);
  FIELD_U32(a1, 148) = 1050253722;
  FIELD_U32(a1, 152) = 1050253722;
  FIELD_U32(a1, 11840) = v3;
  v4 = 0.7 / (float)v3;
  FIELD_F32(a1, 11828) = v4;
  FIELD_F32(a1, 11832) = v4;
  FIELD_F32(a1, 11836) = v4;
  FIELD_U8(a1, 6100) = 0;
  v5 = unk_60BD31F4;
  v6 = unk_60BD31F8;
  v7 = unk_60BD31FC;
  v8 = unk_60BD3200;
  FIELD_U32(a1, 11852) = unk_60BD31F0;
  FIELD_U32(a1, 11856) = v5;
  FIELD_U32(a1, 11860) = v6;
  FIELD_U32(a1, 11864) = v7;
  FIELD_U32(a1, 11868) = v8;
  v9 = unk_60BD3208;
  v10 = unk_60BD320C;
  v11 = unk_60BD3210;
  v12 = unk_60BD3214;
  v13 = off_60BD3218;
  FIELD_U32(a1, 11872) = unk_60BD3204;
  FIELD_U32(a1, 11876) = v9;
  FIELD_U32(a1, 11880) = v10;
  FIELD_U32(a1, 11884) = v11;
  FIELD_U32(a1, 11888) = v12;
  FIELD_U32(a1, 11892) = v13;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)(a1 + 11852), 0);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1082130432;
  FIELD_U32(a1, 580) = 0;
  v14 = FIELD_U32(a1, 6124);
  FIELD_U32(a1, 620) = v14;
  FIELD_U32(v14, 16) = 1;
  *(_DWORD *)(FIELD_U32(a1, 6128) + 28) = 1;
  FIELD_U32(a1, 624) = FIELD_U32(a1, 6128);
  FIELD_U32(a1, 640) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87CC4);
  sub_6013FDC0(a1);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 11824) + 52))(**(_DWORD **)(a1 + 11824));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 11824) + 56))(**(_DWORD **)(a1 + 11824));
  CollisionMgr_init((CollisionMgr *)(a1 + 6472), (StateActor *)a1, &stru_60AF68D0, &stru_60AF68DC, &stru_60AF68E8);
  FIELD_U32(a1, 11900) = 0;
  return 11900;
}
