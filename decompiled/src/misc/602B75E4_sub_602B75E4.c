/* sub_602B75E4
 * address: 0x602B75E4   size: 972   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B75E4(int a1)
{
  signed int v2; // r0
  int v3; // r1
  int *v4; // r5
  int *v5; // r1
  int v6; // s0
  int v7; // r0
  bool v8; // zf
  int v9; // r1
  ActiveColliderMgr *v10; // r7
  _BOOL4 v11; // r7
  TileCheck *v12; // r0
  float v13; // s2
  int v14; // r0
  _BYTE *v15; // r1
  int v16; // r0
  float *v17; // r6
  float v18; // s0
  int v19; // r0
  float v20; // s0
  int v21; // s2
  float v22; // s2
  _BYTE v24[4]; // [sp+8h] [bp-A8h] BYREF
  _DWORD v25[2]; // [sp+Ch] [bp-A4h] BYREF
  _DWORD v26[2]; // [sp+14h] [bp-9Ch] BYREF
  TileCheck v27; // [sp+1Ch] [bp-94h] BYREF
  _BYTE v28[8]; // [sp+68h] [bp-48h] BYREF
  int v29; // [sp+70h] [bp-40h]
  int v30; // [sp+74h] [bp-3Ch]
  int v31; // [sp+78h] [bp-38h]
  int (**v32)(); // [sp+94h] [bp-1Ch] BYREF

  sub_602B79E4();
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 6312) = v2;
  v3 = -596523235;
  v4 = (int *)(a1 + 6300);
  if ( !v2 )
    v3 = 596523235;
  FIELD_U32(a1, 160) = v3;
  if ( (FIELD_U8(a1, 20) & 0x10) != 0 )
  {
    v5 = dword_602B79B4;
    if ( *v4 == 1 )
      v5 = &dword_602B79B4[1];
    v6 = *v5;
    FIELD_U32(a1, 500) = *v5;
    FIELD_U32(a1, 504) = v6;
    FIELD_U32(a1, 508) = v6;
    FIELD_U32(a1, 512) = v6;
  }
  FIELD_U32(a1, 516) = 0;
  FIELD_U32(a1, 520) = 0;
  FIELD_U32(a1, 524) = 1126170624;
  FIELD_U32(a1, 528) = 1126170624;
  FIELD_F32(a1, 6336) = FIELD_F32(dword_60CC6484, 116)
                        + (float)((float)(FIELD_F32(dword_60CC6484, 56) + FIELD_F32(dword_60CC6484, 64)) * -0.5);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE40CC, a1 + 11736);
  v7 = *v4;
  v8 = *v4 == 1;
  if ( *v4 == 1 )
    v7 = 1;
  v9 = dword_60AFE658[2 * *v4 + 1];
  FIELD_U32(a1, 312) = dword_60AFE658[2 * *v4];
  FIELD_U32(a1, 316) = v9;
  if ( v8 )
    FIELD_U32(a1, 320) = v7;
  v10 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 188));
  }
  v27.field_0 = 1;
  v27.field_1 = 1;
  v27.field_2 = 1;
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&v27);
  v11 = 0;
  FIELD_U32(a1, 640) = 0;
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 624) = 0;
  CollisionMgr_init(
    (CollisionMgr *)(a1 + 6384),
    (StateActor *)a1,
    (CollisionMgr_Sensor *)&unk_60AFE668 + 3 * *v4,
    (CollisionMgr_Sensor *)&unk_60AFE668 + 3 * *v4 + 1,
    (CollisionMgr_Sensor *)&unk_60AFE668 + 3 * *v4 + 2);
  FIELD_U32(a1, 8936) |= 0x8000u;
  FIELD_U32(a1, 8928) |= 0x8000u;
  FIELD_U32(a1, 8912) |= 0x8000u;
  FIELD_U32(a1, 8920) |= 0x8000u;
  v30 = 0;
  v31 = 0;
  v32 = off_60BD4A6C;
  v12 = sub_6015D0AC(&v27);
  v27.field_1 = 0;
  v27.field_C = (int)&v32;
  v13 = FIELD_F32(a1, 112);
  v26[0] = FIELD_U32(a1, 108);
  v25[0] = v26[0];
  *(float *)&v26[1] = v13 + 48.0;
  *(float *)&v25[1] = (float)(v13 + 48.0) + -192.0;
  v14 = ((int (__fastcall *)(TileCheck *, _BYTE *, _DWORD *, _DWORD *, int))loc_6015D6F0)(v12, v28, v26, v25, 15);
  v15 = (_BYTE *)(a1 + 6319);
  if ( v14 )
  {
    *v15 = 1;
    v16 = v29;
    FIELD_U32(a1, 6340) = v29;
    FIELD_U32(a1, 6344) = v16;
  }
  else
  {
    v11 = *v15 == 0;
  }
  v17 = (float *)(a1 + 6340);
  if ( v11 )
  {
    ((void (__fastcall *)(_BYTE *, int, int, _DWORD))checkLiquidCollisions)(
      v24,
      a1 + 6340,
      a1 + 108,
      FIELD_U8(a1, 86));
    v18 = *v17;
    FIELD_F32(a1, 6344) = *v17;
  }
  else
  {
    v18 = *v17;
  }
  v19 = FIELD_U32(a1, 108);
  v20 = v18 + -3.0;
  FIELD_F32(a1, 112) = v20;
  FIELD_U32(a1, 116) = 1158184960;
  FIELD_U32(a1, 584) = v19;
  FIELD_F32(a1, 588) = v20;
  FIELD_U32(a1, 592) = 1158184960;
  FIELD_U32(a1, 608) = v19;
  FIELD_F32(a1, 612) = v20;
  FIELD_U32(a1, 616) = 1158184960;
  FIELD_F64(a1, 6356) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6352))(a1 + 6352);
  FIELD_U32(a1, 6364) = v21;
  v22 = (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  FIELD_F32(a1, 132) = v22 * 2.5;
  FIELD_F32(a1, 120) = v22 * 2.5;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90EDC);
  sub_602B7AF8(a1);
  return 1;
}
