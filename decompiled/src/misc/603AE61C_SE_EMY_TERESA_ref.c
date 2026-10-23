/* SE_EMY_TERESA_ref
 * address: 0x603AE61C   size: 920   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_TERESA_ref(int a1)
{
  int result; // r0
  int v3; // r0
  _WORD *v4; // r1
  int v5; // r2
  int v6; // r2
  float v7; // r1
  int v8; // r5
  float v9; // s0
  unsigned int v10; // r0
  int v11; // r1
  float *v12; // r1
  float *v13; // r3
  float v14; // s1
  float v15; // s3
  float v16; // s5
  float v17; // s7
  float v18; // s8
  float v19; // s10
  float v20; // s12
  float v21; // s14
  float v22; // s2
  float v23; // s0
  float v24; // s12
  float v25; // s8
  float v26; // s11
  float v27; // s14
  float v28; // s5
  float v29; // s1
  float v30; // s10
  float v31; // s4
  Vec3 v32; // [sp+0h] [bp-48h] BYREF
  int v33; // [sp+Ch] [bp-3Ch]
  float v34; // [sp+10h] [bp-38h]
  float v35; // [sp+14h] [bp-34h]
  float v36; // [sp+18h] [bp-30h]
  int v37; // [sp+1Ch] [bp-2Ch]
  float v38; // [sp+20h] [bp-28h]
  float v39; // [sp+24h] [bp-24h]
  float v40; // [sp+28h] [bp-20h]
  int v41; // [sp+2Ch] [bp-1Ch]
  Vec2 out; // [sp+30h] [bp-18h] BYREF

  result = sub_603ADD84((StateActor *)a1);
  if ( !result )
    return result;
  if ( (float)(FIELD_F32(result, 108) - FIELD_F32(a1, 108)) == 0.0 || FIELD_U8(PlayerMgr_instance, 156) )
    goto LABEL_4;
  if ( FIELD_U32(a1, 6656) )
  {
    if ( ((int (__fastcall *)(int))loc_603AE1DC)(a1) == 1 )
      goto LABEL_21;
  }
  else if ( ((int (__fastcall *)(int))loc_603AE00C)(a1) )
  {
LABEL_21:
    ((void (__fastcall *)(int))loc_603AE3AC)(a1);
    if ( FIELD_U16(a1, 6676) == 1 )
    {
      v7 = FIELD_F32(a1, 112);
      v8 = Global_BasicSoundActor1;
      v32.x = FIELD_F32(a1, 108);
      v32.y = v7;
      mapPositionToScreen(&out, &v32);
      BasicSoundActor1_playSound(v8, "SE_EMY_TERESA", (int)&out, 0);
    }
    v9 = FIELD_F32(a1, 120);
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + v9;
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
    FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
    if ( FIELD_U8(a1, 7082) && !FIELD_U8(a1, 7081) )
    {
      v10 = FIELD_U32(a1, 156);
      if ( v9 <= 0.0 )
      {
        v11 = 0;
        if ( v9 < 0.0 )
          v11 = 128;
      }
      else
      {
        v10 = -v10;
        v11 = 0;
      }
      v33 = FIELD_U32(a1, 6616);
      v12 = &sinLutTable[4 * v11];
      v13 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
      v14 = *v13;
      v15 = v13[1];
      v16 = v13[2];
      v17 = v13[3];
      v18 = *v12;
      v19 = v12[1];
      v20 = v12[2];
      v21 = v12[3];
      v22 = (float)(-0.00030118 * 0.0) + 1.0;
      v23 = (float)(0.024541 * 0.0) + 0.0;
      v37 = FIELD_U32(a1, 6620);
      v24 = v20 + (float)(v21 * 0.0);
      v25 = v18 + (float)(v19 * 0.0);
      v26 = (float)(v10 & 0xFFFFFF);
      v41 = FIELD_U32(a1, 6624);
      v27 = FIELD_F32(a1, 144);
      v28 = v16 + (float)((float)(v26 * 0.000000059605) * v17);
      v29 = v14 + (float)((float)(v26 * 0.000000059605) * v15);
      v32.x = (float)(v24 * v28) * v27;
      v34 = v27 * (float)(v24 * v29);
      v38 = -(float)(v25 * v27);
      v30 = FIELD_F32(a1, 148);
      v32.y = (float)((float)((float)(v23 * v25) * v28) - (float)(v22 * v29)) * v30;
      v35 = v30 * (float)((float)(v22 * v28) + (float)((float)(v23 * v25) * v29));
      v39 = (float)(v23 * v24) * v30;
      v31 = FIELD_F32(a1, 152);
      v32.z = (float)((float)(v25 * (float)(v22 * v28)) + (float)(v23 * v29)) * v31;
      v36 = v31 * (float)((float)(v25 * (float)(v22 * v29)) - (float)(v23 * v28));
      v40 = (float)(v22 * v24) * v31;
      sub_602372C0(a1 + 6688, 374, (__int64 *)&v32, 1);
    }
    goto LABEL_5;
  }
LABEL_4:
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 6680) = 4;
  FIELD_U16(a1, 6676) = 16;
  FIELD_U32(a1, 6896) = 3;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97B4C);
LABEL_5:
  v3 = sub_603ADD84((StateActor *)a1);
  if ( v3 )
    result = (float)(FIELD_F32(v3, 108) - FIELD_F32(a1, 108)) < 0.0;
  else
    result = 0;
  v4 = (_WORD *)(a1 + 6674);
  v5 = FIELD_U32(a1, 80);
  if ( v5 == result )
  {
    if ( !FIELD_U16(a1, 6674) )
      return result;
  }
  else if ( FIELD_U16(a1, 6674) )
  {
    result = FIELD_U32(a1, 80);
  }
  else
  {
    *v4 = 1;
    result = v5 ^ 1;
    FIELD_U32(a1, 80) = v5 ^ 1;
  }
  v6 = FIELD_U32(a1, 160) + dword_60B00B14[result];
  FIELD_U32(a1, 160) = v6;
  if ( (unsigned int)(v6 + 0x1FFFFFFF) >= 0x3FFFFFFF )
  {
    FIELD_U32(a1, 160) = dword_60B00B0C[result];
    result = 0;
    *v4 = 0;
  }
  return result;
}
