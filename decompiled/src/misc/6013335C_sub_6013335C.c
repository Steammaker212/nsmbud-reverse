/* sub_6013335C
 * address: 0x6013335C   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6013335C(int a1)
{
  int v2; // r0
  int v3; // r0
  float v4; // s0
  int v5; // r0
  int v6; // r2
  int v7; // r12
  unsigned int v8; // r3
  unsigned int v9; // r6
  int v10; // r1
  _DWORD **v11; // r5
  float32x2_t v12; // [sp+8h] [bp-50h] BYREF
  int v13; // [sp+10h] [bp-48h]
  int v14; // [sp+14h] [bp-44h]
  int v15; // [sp+18h] [bp-40h]
  int v16; // [sp+1Ch] [bp-3Ch]
  int v17; // [sp+20h] [bp-38h]
  int v18; // [sp+24h] [bp-34h]
  int v19; // [sp+28h] [bp-30h]
  int v20; // [sp+2Ch] [bp-2Ch]
  int v21; // [sp+30h] [bp-28h]
  int v22; // [sp+34h] [bp-24h]
  unsigned int v23; // [sp+38h] [bp-20h] BYREF
  unsigned int v24; // [sp+3Ch] [bp-1Ch] BYREF
  unsigned int v25; // [sp+40h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 80) = v2 & 1;
  FIELD_U32(a1, 156) = -536870912;
  FIELD_U32(a1, 160) = dword_60AF1EC0[v2 & 1];
  FIELD_U32(a1, 144) = 1050253722;
  v3 = BYTE2(v2);
  FIELD_U32(a1, 148) = 1050253722;
  FIELD_U32(a1, 152) = 1050253722;
  FIELD_U32(a1, 6512) = v3;
  v4 = 0.7 / (float)v3;
  FIELD_F32(a1, 6500) = v4;
  FIELD_F32(a1, 6504) = v4;
  FIELD_F32(a1, 6508) = v4;
  v5 = FIELD_U32(a1, 6124);
  FIELD_U32(a1, 620) = v5;
  FIELD_U32(v5, 16) = 1;
  *(_DWORD *)(FIELD_U32(a1, 6128) + 28) = 1;
  FIELD_U32(a1, 624) = FIELD_U32(a1, 6128);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 6584) = 0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD1E94, 0);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C875A4);
  v6 = FIELD_U32(a1, 108);
  v7 = FIELD_U32(a1, 112);
  v8 = FIELD_U32(a1, 156);
  v9 = FIELD_U32(a1, 160);
  v10 = FIELD_U32(a1, 116);
  v25 = FIELD_U32(a1, 164);
  v24 = v9;
  v23 = v8;
  v12.n64_u64[0] = 1065353216;
  v13 = 0;
  v15 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 1065353216;
  v14 = v6;
  v16 = 1065353216;
  v17 = 0;
  v18 = v7;
  v22 = v10;
  Mtx34_rotateY(&v12, &v24);
  Mtx34_rotateX(&v12, &v23);
  Mtx34_rotateZ(&v12, &v25);
  v11 = (_DWORD **)(a1 + 6472);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6472) + 60))(**(_DWORD **)(a1 + 6472), &v12);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v11 + 68))(**v11, a1 + 6444);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v11 + 52))(**v11);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v11 + 56))(**v11);
  CollisionMgr_init((CollisionMgr *)(a1 + 6600), (StateActor *)a1, &stru_60AF65E0, &stru_60AF65EC, &stru_60AF65F8);
}
