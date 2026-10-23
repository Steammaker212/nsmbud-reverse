/* sub_6059B974
 * address: 0x6059B974   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059B974(int a1, int a2)
{
  int v3; // r9
  float v4; // r3
  float v5; // r4
  int v6; // r5
  float v7; // r6
  float v8; // r7
  int v9; // r3
  float v10; // r4
  float v11; // r5
  float v12; // r6
  int v13; // r7
  float v14; // s0
  float v15; // s6
  float v16; // s0
  float v17; // s18
  float v18; // s16
  _BYTE v20[12]; // [sp+4h] [bp-ACh] BYREF
  float32x2_t v21[2]; // [sp+10h] [bp-A0h] BYREF
  float v22; // [sp+24h] [bp-8Ch]
  float v23; // [sp+34h] [bp-7Ch]
  float v24; // [sp+40h] [bp-70h]
  float v25; // [sp+44h] [bp-6Ch]
  float v26; // [sp+48h] [bp-68h]
  int v27; // [sp+4Ch] [bp-64h]
  float v28; // [sp+50h] [bp-60h]
  float v29; // [sp+54h] [bp-5Ch]
  float v30; // [sp+58h] [bp-58h]
  int v31; // [sp+5Ch] [bp-54h]
  float v32; // [sp+60h] [bp-50h]
  float v33; // [sp+64h] [bp-4Ch]
  float v34; // [sp+68h] [bp-48h]
  int v35; // [sp+6Ch] [bp-44h]
  unsigned int v36; // [sp+74h] [bp-3Ch] BYREF
  unsigned int v37; // [sp+78h] [bp-38h] BYREF
  unsigned int v38; // [sp+7Ch] [bp-34h] BYREF

  v3 = FIELD_U32(a1, 8);
  v4 = FIELD_F32(a2, 4);
  v5 = FIELD_F32(a2, 8);
  v6 = FIELD_U32(a2, 12);
  v7 = FIELD_F32(a2, 16);
  v8 = FIELD_F32(a2, 20);
  v24 = *(float *)a2;
  v25 = v4;
  v26 = v5;
  v27 = v6;
  v28 = v7;
  v29 = v8;
  v9 = FIELD_U32(a2, 28);
  v10 = FIELD_F32(a2, 32);
  v11 = FIELD_F32(a2, 36);
  v12 = FIELD_F32(a2, 40);
  v13 = FIELD_U32(a2, 44);
  v30 = FIELD_F32(a2, 24);
  v31 = v9;
  v32 = v10;
  v33 = v11;
  v34 = v12;
  v35 = v13;
  v14 = FIELD_F32(a1, 36);
  v15 = (float)(v14 * -0.5) + 1.0;
  v16 = v14 + 1.0;
  v24 = v24 * v15;
  v28 = v15 * v28;
  v32 = v15 * v10;
  v25 = v16 * v25;
  v29 = v16 * v29;
  v33 = v16 * v11;
  v26 = v15 * v26;
  v30 = v15 * v30;
  v34 = v15 * v12;
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 60))(v3);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
  (*(void (__fastcall **)(int, _DWORD, float32x2_t *, _BYTE *))(*(_DWORD *)v3 + 100))(v3, 0, v21, v20);
  v17 = FIELD_F32(a1, 20);
  v38 = FIELD_U32(a1, 24);
  v37 = FIELD_U32(a1, 28);
  Mtx34_rotateZ(v21, &v38);
  v18 = (float)(0.125 * v17) + 1.0;
  v36 = -v38;
  v21[0].n64_f32[1] = v18 * v21[0].n64_f32[1];
  v22 = v18 * v22;
  v23 = v18 * v23;
  Mtx34_rotateZ(v21, &v36);
  Mtx34_rotateZ(v21, &v37);
  v36 = -v37;
  v21[0].n64_f32[1] = v18 * v21[0].n64_f32[1];
  v22 = v18 * v22;
  v23 = v18 * v23;
  Mtx34_rotateZ(v21, &v36);
  (*(void (__fastcall **)(int, _DWORD, float32x2_t *, _BYTE *))(*(_DWORD *)v3 + 96))(v3, 0, v21, v20);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 56))(v3);
}
