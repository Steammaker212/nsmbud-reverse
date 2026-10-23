/* sub_603CA2AC
 * address: 0x603CA2AC   size: 840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CA2AC(int a1)
{
  int v2; // r3
  int v3; // r6
  unsigned int v4; // r7
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r5
  int (__fastcall *v9)(int, float *); // r2
  int v10; // r10
  int (__fastcall *v11)(int, float *); // r2
  int v12; // r11
  float v13; // s0
  float32x2_t v14; // d1
  float32x2_t v15; // d0
  float v16; // s0
  float v17; // s12
  int result; // r0
  float v19; // [sp+4h] [bp-ACh] BYREF
  unsigned __int32 v20; // [sp+8h] [bp-A8h]
  float v21; // [sp+Ch] [bp-A4h]
  float v22; // [sp+10h] [bp-A0h] BYREF
  float v23; // [sp+14h] [bp-9Ch]
  float v24; // [sp+18h] [bp-98h]
  float v25; // [sp+1Ch] [bp-94h]
  float v26; // [sp+20h] [bp-90h]
  float v27; // [sp+24h] [bp-8Ch]
  float v28; // [sp+28h] [bp-88h]
  float v29; // [sp+2Ch] [bp-84h]
  float v30; // [sp+30h] [bp-80h]
  float v31; // [sp+34h] [bp-7Ch]
  float v32; // [sp+38h] [bp-78h]
  float v33; // [sp+3Ch] [bp-74h]
  _DWORD v34[4]; // [sp+40h] [bp-70h] BYREF
  unsigned int v35; // [sp+50h] [bp-60h] BYREF
  unsigned int v36; // [sp+54h] [bp-5Ch] BYREF
  unsigned int v37; // [sp+58h] [bp-58h] BYREF
  float32x2_t v38; // [sp+5Ch] [bp-54h] BYREF
  int v39; // [sp+64h] [bp-4Ch]
  int v40; // [sp+68h] [bp-48h]
  int v41; // [sp+6Ch] [bp-44h]
  int v42; // [sp+70h] [bp-40h]
  int v43; // [sp+74h] [bp-3Ch]
  int v44; // [sp+78h] [bp-38h]
  int v45; // [sp+7Ch] [bp-34h]
  int v46; // [sp+80h] [bp-30h]
  int v47; // [sp+84h] [bp-2Ch]
  int v48; // [sp+88h] [bp-28h]

  v2 = FIELD_U32(a1, 6324);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 156);
  v5 = FIELD_U32(a1, 112);
  v6 = FIELD_U32(a1, 116);
  v7 = FIELD_U32(a1, 108);
  v35 = v4;
  v36 = v2 + v3;
  v37 = FIELD_U32(a1, 164);
  v34[2] = FIELD_U32(a1, 6344);
  v34[1] = FIELD_U32(a1, 6340);
  v34[0] = FIELD_U32(a1, 6336);
  v38.n64_u64[0] = 1065353216;
  v39 = 0;
  v41 = 0;
  v42 = 1065353216;
  v43 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 1065353216;
  v40 = v7;
  v44 = v5;
  v48 = v6;
  Mtx34_rotateZ(&v38, &v37);
  Mtx34_rotateY(&v38, &v36);
  Mtx34_rotateX(&v38, &v35);
  v8 = **(_DWORD **)(a1 + 6308);
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v8 + 60))(v8, &v38);
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v8 + 68))(v8, v34);
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 52))(v8);
  v9 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v8 + 84);
  v22 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v23 = COERCE_FLOAT("mouth");
  v10 = v9(v8, &v22);
  if ( FIELD_U32(a1, 6300) )
  {
    v11 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v8 + 84);
    v22 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
    v23 = COERCE_FLOAT(&unk_60ABF3B9);
    v12 = v11(v8, &v22);
  }
  else
  {
    v12 = -1;
  }
  (*(void (__fastcall **)(int, int, float *, float *))(*(_DWORD *)v8 + 100))(v8, v10, &v22, &v19);
  v13 = FIELD_F32(a1, 11764);
  v19 = v13 * v19;
  v14.n64_u32[0] = 2.0;
  v21 = v13 * v21;
  v15.n64_f32[0] = FIELD_F32(a1, 17340) * (float)(v13 * *(float *)&v20);
  v20 = vmin_f32(v15, v14).n64_u32[0];
  (*(void (__fastcall **)(int, int, float *, float *))(*(_DWORD *)v8 + 96))(v8, v10, &v22, &v19);
  if ( v12 != -1 )
  {
    (*(void (__fastcall **)(int, int, float *, float *))(*(_DWORD *)v8 + 100))(v8, v12, &v22, &v19);
    *(float *)&v20 = FIELD_F32(a1, 17336) * *(float *)&v20;
    v16 = FIELD_F32(a1, 11908);
    v17 = FIELD_F32(a1, 11904);
    v25 = v25 + (float)((float)((float)(v16 * v23) + (float)(v22 * 0.0)) - (float)(v24 * v17));
    v29 = v29 + (float)((float)((float)(v16 * v27) + (float)(v26 * 0.0)) - (float)(v28 * v17));
    v33 = v33 + (float)((float)((float)(v16 * v31) + (float)(v30 * 0.0)) - (float)(v32 * v17));
    (*(void (__fastcall **)(int, int, float *, float *))(*(_DWORD *)v8 + 96))(v8, v12, &v22, &v19);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 56))(v8);
  (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)v8 + 108))(v8, v10, &v22);
  FIELD_F32(a1, 6312) = v25;
  FIELD_F32(a1, 6316) = v29;
  result = LODWORD(v33);
  FIELD_F32(a1, 6320) = v33;
  return result;
}
