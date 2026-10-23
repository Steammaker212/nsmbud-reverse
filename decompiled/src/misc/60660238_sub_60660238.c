/* sub_60660238
 * address: 0x60660238   size: 968   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60660238(int a1)
{
  int v2; // r0
  bool v3; // zf
  unsigned int v4; // r0
  float v5; // s4
  float v6; // s16
  float *v7; // r11
  int v8; // r0
  int *v9; // r1
  float v10; // s6
  _DWORD *v11; // r3
  int v12; // r5
  int v13; // r5
  int v14; // r1
  float v15; // s2
  float v16; // s0
  int v17; // r1
  int v18; // r2
  SolidOnTopColliderInfo v20; // [sp+0h] [bp-80h] BYREF
  float v21; // [sp+18h] [bp-68h] BYREF
  int v22; // [sp+1Ch] [bp-64h]
  int v23; // [sp+20h] [bp-60h]
  int v24; // [sp+24h] [bp-5Ch]
  int v25; // [sp+28h] [bp-58h]
  int v26; // [sp+2Ch] [bp-54h]
  int v27; // [sp+30h] [bp-50h]
  int v28; // [sp+34h] [bp-4Ch]

  if ( Actor__getProfileId((Actor *)a1) == 202 )
    FIELD_U8(a1, 7056) = 1;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  if ( FIELD_S32(dword_60C96478, 96) >= 1 )
  {
    v2 = FIELD_U32(dword_60C96478, 104);
    v3 = v2 == 0;
    if ( v2 )
      v3 = (FIELD_U8(a1, 23) & 0x10) == 0;
    if ( !v3 )
      sub_603796A4(a1 + 7060);
  }
  v4 = FIELD_U32(a1, 20);
  v5 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 7024) = v5;
  v6 = (float)((v4 & 0xF) + 4) * 16.0;
  FIELD_F32(a1, 112) = v5 - v6;
  FIELD_U32(a1, 7028) = dword_60AF21E8[(v4 >> 8) & 1];
  FIELD_F32(a1, 7036) = v6;
  v20.field_0 = 0.0;
  *(float *)&v20.field_4 = v6;
  v20.field_8 = 0;
  v20.field_C = 0.0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0.0;
  v20.points = (Vec2 *)&v21;
  v20.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6112), (StageActor *)a1, &v20);
  sub_60160630((ColliderBase *)(a1 + 6112), 2);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
  ((void (__fastcall *)(int))loc_60660628)(a1);
  v7 = (float *)(a1 + 7032);
  v9 = (int *)(a1 + 6456);
  v8 = FIELD_U32(a1, 6456);
  v10 = (float)((float)((float)((float)(FIELD_F32(a1, 7032) * 0.5) + 14.0) / 14.0) * 14.0) + -4.0;
  *(float *)v8 = -(float)(v10 + 10.768);
  FIELD_U32(v8, 4) = -1054062150;
  v11 = (_DWORD *)(a1 + 6452);
  v12 = FIELD_U32(a1, 6456);
  if ( FIELD_U32(a1, 6452) > 1u )
    v12 += 8;
  *(float *)v12 = -v10;
  FIELD_U32(v12, 4) = 0;
  v13 = *v9;
  if ( *v11 > 2u )
    v13 += 16;
  *(float *)v13 = v10;
  FIELD_U32(v13, 4) = 0;
  v14 = *v9;
  if ( *v11 > 3u )
    v14 += 24;
  *(float *)v14 = v10 + 10.768;
  FIELD_U32(v14, 4) = -1054062150;
  v21 = 0.0;
  v22 = 0;
  v23 = 32;
  v24 = 0x20000;
  v25 = 0x8000000;
  v26 = 0x80000;
  v27 = 0x800000;
  v28 = 0x400000;
  sub_608337BC(a1 + 6984, &v21);
  FIELD_U32(a1, 6924) = (int)(float)((float)((float)(FIELD_F32(a1, 7028) + FIELD_F32(a1, 7028)) + 32.0) * 0.0625);
  FIELD_U32(a1, 6864) = 0;
  FIELD_F32(a1, 6868) = v6 + -8.0;
  FIELD_U32(a1, 6872) = 0;
  FIELD_U32(a1, 6928) = 2;
  FIELD_U32(a1, 6900) = 0;
  FIELD_U32(a1, 6904) = 0;
  FIELD_U32(a1, 6908) = 0;
  FIELD_U32(a1, 6920) = dword_60AF21F0[(FIELD_U32(a1, 20) >> 8) & 1];
  ((void (__fastcall *)(int))loc_60645374)(a1 + 6704);
  FIELD_U32(a1, 6972) = 1065353216;
  FIELD_U32(a1, 6976) = 1065353216;
  FIELD_U32(a1, 6980) = 1065353216;
  FIELD_U32(a1, 6960) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6964) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6968) = -985546752;
  FIELD_F32(a1, 7040) = (float)(v6 + -32.0) + 0.1;
  lift_kinoko_yoko_ref(a1);
  v15 = (float)(FIELD_F32(a1, 7040) * 0.0625) + -1.0;
  FIELD_F32(a1, 6964) = (float)(FIELD_F32(a1, 112) + 8.0) + (float)(FIELD_F32(a1, 7040) * 0.5);
  FIELD_F32(a1, 6976) = v15;
  v16 = *v7 + 32.0;
  FIELD_F32(a1, 6912) = *v7 * 0.0625;
  v17 = FIELD_U32(a1, 112);
  v18 = FIELD_U32(a1, 116);
  v21 = FIELD_F32(a1, 108);
  v22 = v17;
  v23 = v18;
  v21 = v21 - (float)(v16 * 0.5);
  sub_60645448(a1 + 6704, (int)&v21, v16);
  sub_60660AAC(a1);
  return 1;
}
