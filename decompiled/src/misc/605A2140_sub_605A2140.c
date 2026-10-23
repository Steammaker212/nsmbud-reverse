/* sub_605A2140
 * address: 0x605A2140   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A2140(int a1)
{
  int v2; // r5
  float *v3; // r8
  float *v4; // r7
  int v5; // r0
  float v6; // s0
  int v7; // r0
  int v8; // r1
  int v9; // r2
  float v10; // s2
  float v11; // s0
  float v12; // s6
  float v13; // s3
  float v14; // s0
  float v15; // s8
  float v16; // s6
  float v17; // s2
  ShapedColliderInfo v19; // [sp+4h] [bp-4Ch] BYREF

  if ( !FIELD_U8(a1, 20) )
  {
    v5 = FIELD_U32(a1, 24);
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + -8.0;
    v3 = (float *)(a1 + 6852);
    FIELD_U32(a1, 6836) = 1;
    v6 = (float)BYTE1(v5) * 16.0;
    FIELD_F32(a1, 6852) = v6;
    FIELD_U32(a1, 6856) = 1103101952;
    v4 = (float *)(a1 + 6856);
    FIELD_U32(a1, 6860) = 1103101952;
    FIELD_U32(a1, 6812) = 0;
    FIELD_U32(a1, 6808) = 0;
    FIELD_U32(a1, 6804) = 0;
    FIELD_U32(a1, 6800) = 0;
    FIELD_U32(a1, 6796) = 0;
    FIELD_U32(a1, 6792) = 0;
    FIELD_F32(a1, 6816) = v6;
    FIELD_U32(a1, 6820) = -1044381696;
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
    goto LABEL_5;
  }
  v2 = 2;
  if ( ((int (__fastcall *)(int))TerrainActor_initLocation)(a1) == 1 )
  {
    v3 = (float *)(a1 + 6852);
    v4 = (float *)(a1 + 6856);
LABEL_5:
    ++FIELD_U32(EnemyCounterMaybe_instance, 32);
    *v4 = *v4 - 8.0;
    sub_60002B50(a1 + 72256);
    v10 = *v4;
    v11 = *v3 * -0.5;
    v12 = -*v4;
    v19.distToCenter.x = *v3 * 0.5;
    v19.distToCenter.y = v12;
    v19.field_8 = v19.distToCenter.x;
    v19.field_C = v12;
    v19.topLeft.x = v11;
    v19.topLeft.y = v10;
    v19.bottomRight.x = v19.distToCenter.x;
    v19.bottomRight.y = v12;
    v19.rotation = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 72328), (StageActor *)a1, &v19);
    FIELD_U32(a1, 72640) = sub_605A24B0;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 72328));
    v13 = *v3;
    v14 = *v4;
    v15 = *v3 + 256.0;
    v16 = *v4 * -0.5;
    v17 = *v4 + 256.0;
    FIELD_F32(a1, 492) = *v3 * 0.5;
    FIELD_F32(a1, 496) = v16;
    FIELD_F32(a1, 500) = v15;
    FIELD_F32(a1, 504) = v17;
    FIELD_F32(a1, 508) = v13;
    FIELD_F32(a1, 512) = v14;
    sub_605C11C8(
      a1 + 73008,
      0,
      2,
      FIELD_U32(a1, 72272),
      FIELD_F32(a1, 108),
      FIELD_F32(a1, 112),
      FIELD_F32(a1, 116));
    FIELD_U32(a1, 88000) = (FIELD_U32(a1, 20) >> 8) & 0xF;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAFEC8);
    koopaJr_clown_yuka_ref(a1);
    ((void (__fastcall *)(int))loc_605A4EAC)(a1);
    sub_605C1DA0(a1 + 73008);
    v2 = 1;
    FIELD_U8(a1, 6892) = 1;
    FIELD_U8(a1, 73004) = 0;
    FIELD_U32(a1, 73000) = 0;
    FIELD_U32(a1, 72996) = 0;
    FIELD_U32(a1, 72992) = 0;
    FIELD_U32(a1, 72988) = 0;
    FIELD_U32(a1, 72984) = 0;
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 68))(a1, 0);
  }
  return v2;
}
