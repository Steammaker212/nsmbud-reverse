/* sub_605A5D8C
 * address: 0x605A5D8C   size: 1200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A5D8C(int a1)
{
  int v2; // r5
  float *v3; // r6
  float *v4; // r7
  int v5; // r0
  float v6; // s0
  int v7; // r0
  int v8; // r1
  int v9; // r2
  float v10; // s0
  float v11; // s4
  float v12; // s6
  float v13; // s8
  float v14; // s0
  float v15; // s0
  float v16; // s1
  float v17; // s2
  int v18; // r3
  float v19; // s0
  float v20; // s2
  ShapedColliderInfo v22; // [sp+4h] [bp-4Ch] BYREF

  if ( FIELD_U8(a1, 20) )
  {
    v2 = 2;
    if ( ((int (__fastcall *)(int))TerrainActor_initLocation)(a1) != 1 )
      return v2;
    v3 = (float *)(a1 + 6852);
    v4 = (float *)(a1 + 6856);
  }
  else
  {
    v5 = FIELD_U32(a1, 24);
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + -8.0;
    v3 = (float *)(a1 + 6852);
    FIELD_U32(a1, 6836) = 1;
    v6 = (float)BYTE1(v5) * 16.0;
    FIELD_F32(a1, 6852) = v6;
    FIELD_U32(a1, 6856) = 1098907648;
    v4 = (float *)(a1 + 6856);
    FIELD_U32(a1, 6860) = 1098907648;
    FIELD_U32(a1, 6812) = 0;
    FIELD_U32(a1, 6808) = 0;
    FIELD_U32(a1, 6804) = 0;
    FIELD_U32(a1, 6800) = 0;
    FIELD_U32(a1, 6796) = 0;
    FIELD_U32(a1, 6792) = 0;
    FIELD_F32(a1, 6816) = v6;
    FIELD_U32(a1, 6820) = -1048576000;
    FIELD_U32(a1, 6824) = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 6136), (StageActor *)a1, (ShapedColliderInfo *)(a1 + 6792));
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
    v7 = FIELD_U32(a1, 108);
    FIELD_U32(a1, 6112) = v7;
    v8 = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6116) = v8;
    v9 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 6120) = v9;
    FIELD_U32(a1, 6844) = v8;
    FIELD_U32(a1, 6848) = 1169915904;
    FIELD_U32(a1, 6124) = v7;
    FIELD_U32(a1, 6128) = v8;
    FIELD_U32(a1, 6132) = v9;
    FIELD_U32(a1, 568) |= 2u;
  }
  ++FIELD_U32(EnemyCounterMaybe_instance, 32);
  *v4 = *v4 - 8.0;
  sub_60002B50(a1 + 72256);
  v10 = *v3;
  v11 = 5.0;
  if ( FIELD_U32(a1, 20) < 0x10000000u )
    v11 = 6.0;
  v22.distToCenter.x = v10 * 0.5;
  v22.distToCenter.y = -v11;
  v22.field_8 = v10 * 0.5;
  v22.field_C = -v11;
  v22.topLeft.x = v10 * -0.5;
  v22.topLeft.y = v11;
  v22.bottomRight.x = v10 * 0.5;
  v22.bottomRight.y = -v11;
  v22.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 72328), (StageActor *)a1, &v22);
  FIELD_U32(a1, 72664) = a1 + 72984;
  FIELD_U32(a1, 72640) = &loc_605A6260;
  FIELD_U32(a1, 72644) = sub_605A6708;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 72328));
  v12 = *v4 * -0.5;
  v13 = *v3 + 256.0;
  v14 = *v4 + 256.0;
  FIELD_F32(a1, 492) = *v3 * 0.5;
  FIELD_F32(a1, 496) = v12;
  FIELD_F32(a1, 500) = v13;
  FIELD_F32(a1, 504) = v14;
  FIELD_F32(a1, 508) = v13;
  FIELD_F32(a1, 512) = v14;
  v15 = FIELD_F32(a1, 108);
  v16 = FIELD_F32(a1, 112);
  v17 = FIELD_F32(a1, 116);
  v18 = FIELD_U32(a1, 72272);
  if ( FIELD_U32(a1, 20) >> 28 )
  {
    sub_605C11C8(a1 + 72992, 0, 1, v18, v15, v16, v17);
    v19 = 20.0;
    v20 = 30.0;
  }
  else
  {
    sub_605C11C8(a1 + 72992, 0, 0, v18, v15, v16, v17);
    v19 = 40.0;
    v20 = 35.0;
  }
  FIELD_F32(a1, 89760) = v20;
  FIELD_F32(a1, 89764) = v19;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAFEC8);
  mario_brothers_yuka_ref(a1);
  ((void (__fastcall *)(int))loc_605A4EAC)(a1);
  sub_605C1DA0(a1 + 72992);
  v2 = 1;
  FIELD_U8(a1, 6892) = 1;
  FIELD_U32(a1, 89668) = 0;
  FIELD_U32(a1, 89664) = 0;
  FIELD_U32(a1, 89660) = 0;
  FIELD_U32(a1, 89656) = 0;
  FIELD_U32(a1, 89652) = 0;
  FIELD_U32(a1, 89648) = 0;
  FIELD_U32(a1, 89696) = 0;
  FIELD_U32(a1, 89692) = 0;
  FIELD_U32(a1, 89688) = 0;
  FIELD_U32(a1, 89684) = 0;
  FIELD_U32(a1, 89680) = 0;
  FIELD_U32(a1, 89676) = 0;
  FIELD_U32(a1, 89724) = 0;
  FIELD_U32(a1, 89720) = 0;
  FIELD_U32(a1, 89716) = 0;
  FIELD_U32(a1, 89712) = 0;
  FIELD_U32(a1, 89708) = 0;
  FIELD_U32(a1, 89704) = 0;
  FIELD_U32(a1, 89752) = 0;
  FIELD_U32(a1, 89748) = 0;
  FIELD_U32(a1, 89744) = 0;
  FIELD_U32(a1, 89740) = 0;
  FIELD_U32(a1, 89736) = 0;
  FIELD_U32(a1, 89732) = 0;
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 68))(a1, 0);
  FIELD_U32(a1, 89776) = FIELD_U32(a1, 108);
  return v2;
}
