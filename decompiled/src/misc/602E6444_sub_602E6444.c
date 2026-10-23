/* sub_602E6444
 * address: 0x602E6444   size: 1744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E6444(_DWORD **a1, float *a2, unsigned int *a3, float *a4, int a5)
{
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float v12; // s3
  float v13; // s3
  float v14; // s8
  int i; // r4
  int v16; // r7
  float v17; // s8
  int v18; // r0
  void (__fastcall *v19)(int, unsigned int *); // r2
  _DWORD *v20; // r0
  int v21; // r2
  unsigned int v23[3]; // [sp+0h] [bp-D8h] BYREF
  float32x2_t v24[6]; // [sp+Ch] [bp-CCh] BYREF
  _DWORD v25[3]; // [sp+3Ch] [bp-9Ch] BYREF
  float32x2_t v26; // [sp+48h] [bp-90h] BYREF
  float v27; // [sp+50h] [bp-88h]
  float v28; // [sp+54h] [bp-84h]
  float v29; // [sp+58h] [bp-80h]
  float v30; // [sp+5Ch] [bp-7Ch]
  float v31; // [sp+60h] [bp-78h]
  float v32; // [sp+64h] [bp-74h]
  float v33; // [sp+68h] [bp-70h]
  float v34; // [sp+6Ch] [bp-6Ch]
  float v35; // [sp+70h] [bp-68h]
  float v36; // [sp+74h] [bp-64h]
  float32x2_t v37; // [sp+78h] [bp-60h] BYREF
  float v38; // [sp+80h] [bp-58h]
  float v39; // [sp+84h] [bp-54h]
  float v40; // [sp+88h] [bp-50h]
  float v41; // [sp+8Ch] [bp-4Ch]
  float v42; // [sp+90h] [bp-48h]
  float v43; // [sp+94h] [bp-44h]
  float v44; // [sp+98h] [bp-40h]
  float v45; // [sp+9Ch] [bp-3Ch]
  float v46; // [sp+A0h] [bp-38h]
  float v47; // [sp+A4h] [bp-34h]

  ((void (*)(void))loc_602E6B18)();
  sub_604218E0(*a1);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**a1 + 52))(**a1);
  v37.n64_u64[0] = 1065353216;
  v38 = 0.0;
  v40 = 0.0;
  v41 = 1.0;
  v42 = 0.0;
  v44 = 0.0;
  v45 = 0.0;
  v46 = 1.0;
  v39 = *a2;
  v43 = a2[1];
  v47 = a2[2];
  Mtx34_rotateY(&v37, a3 + 1);
  Mtx34_rotateX(&v37, a3);
  Mtx34_rotateZ(&v37, a3 + 2);
  v9 = *a4;
  v10 = a4[1];
  v11 = a4[2];
  v39 = v39
      + (float)((float)((float)-(float)(*a4 * v37.n64_f32[0]) - (float)(v37.n64_f32[1] * v10)) - (float)(v38 * v11));
  v43 = v43 + (float)((float)((float)-(float)(v9 * v40) - (float)(v41 * v10)) - (float)(v42 * v11));
  v47 = v47 + (float)((float)((float)-(float)(v9 * v44) - (float)(v45 * v10)) - (float)(v46 * v11));
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**a1 + 60))(**a1, &v37);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**a1 + 68))(**a1, a5);
  memset(v25, 0, sizeof(v25));
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(*(_DWORD *)**a1 + 100))(**a1, 21, &v26, v25);
  if ( *((_BYTE *)a1 + 8) )
  {
    v24[0].n64_u32[0] = (unsigned __int32)a1[6];
    Mtx34_rotateY(&v26, (unsigned int *)v24);
  }
  v12 = *((float *)a1 + 5);
  v28 = v28 + (float)((float)((float)(v12 * v26.n64_f32[1]) + (float)(v26.n64_f32[0] * 0.0)) + (float)(v27 * 0.0));
  v32 = v32 + (float)((float)((float)(v12 * v30) + (float)(v29 * 0.0)) + (float)(v31 * 0.0));
  v36 = v36 + (float)((float)((float)(v12 * v34) + (float)(v33 * 0.0)) + (float)(v35 * 0.0));
  if ( *((_BYTE *)a1 + 68) )
  {
    v13 = *((float *)a1 + 3);
    v14 = *((float *)a1 + 4);
  }
  else
  {
    v13 = *((float *)a1 + 12);
    v26.n64_f32[0] = v13 * v26.n64_f32[0];
    v29 = v13 * v29;
    v33 = v13 * v33;
    v14 = v13;
  }
  v26.n64_f32[1] = v13 * v26.n64_f32[1];
  v30 = v13 * v30;
  v34 = v13 * v34;
  v27 = v14 * v27;
  v31 = v14 * v31;
  v35 = v14 * v35;
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(*(_DWORD *)**a1 + 96))(**a1, 21, &v26, v25);
  for ( i = 0; i != 16; ++i )
  {
    v16 = byte_60AFECA4[i];
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(*(_DWORD *)**a1 + 100))(**a1, v16, &v26, v25);
    v17 = *((float *)a1 + 8);
    v28 = v28 + (float)((float)((float)(v26.n64_f32[1] * 0.0) + (float)(v17 * v26.n64_f32[0])) + (float)(v27 * 0.0));
    v32 = v32 + (float)((float)((float)(v30 * 0.0) + (float)(v17 * v29)) + (float)(v31 * 0.0));
    v36 = v36 + (float)((float)((float)(v34 * 0.0) + (float)(v17 * v33)) + (float)(v35 * 0.0));
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(*(_DWORD *)**a1 + 96))(**a1, v16, &v26, v25);
  }
  if ( *((_BYTE *)a1 + 8) )
  {
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(*(_DWORD *)**a1 + 100))(**a1, 1, &v26, v25);
    v28 = v28 + (float)((float)((float)(v26.n64_f32[1] * 0.0) - (float)(v26.n64_f32[0] * 10.5)) + (float)(v27 * 0.0));
    v32 = v32 + (float)((float)((float)(v30 * 0.0) - (float)(v29 * 10.5)) + (float)(v31 * 0.0));
    v36 = v36 + (float)((float)((float)(v34 * 0.0) - (float)(v33 * 10.5)) + (float)(v35 * 0.0));
    v24[0].n64_u32[0] = (unsigned __int32)a1[6];
    Mtx34_rotateY(&v26, (unsigned int *)v24);
    v28 = v28 + (float)((float)((float)(v26.n64_f32[1] * 0.0) + (float)(v26.n64_f32[0] * 10.5)) + (float)(v27 * 0.0));
    v32 = v32 + (float)((float)((float)(v30 * 0.0) + (float)(v29 * 10.5)) + (float)(v31 * 0.0));
    v36 = v36 + (float)((float)((float)(v34 * 0.0) + (float)(v33 * 10.5)) + (float)(v35 * 0.0));
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(*(_DWORD *)**a1 + 96))(**a1, 1, &v26, v25);
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(*(_DWORD *)**a1 + 100))(**a1, 11, &v26, v25);
    v28 = v28 + (float)((float)((float)(v26.n64_f32[1] * 0.0) - (float)(v26.n64_f32[0] * 10.5)) + (float)(v27 * 0.0));
    v32 = v32 + (float)((float)((float)(v30 * 0.0) - (float)(v29 * 10.5)) + (float)(v31 * 0.0));
    v36 = v36 + (float)((float)((float)(v34 * 0.0) - (float)(v33 * 10.5)) + (float)(v35 * 0.0));
    v24[0].n64_u32[0] = (unsigned __int32)a1[6];
    Mtx34_rotateY(&v26, (unsigned int *)v24);
    v28 = v28 + (float)((float)((float)(v26.n64_f32[1] * 0.0) + (float)(v26.n64_f32[0] * 10.5)) + (float)(v27 * 0.0));
    v32 = v32 + (float)((float)((float)(v30 * 0.0) + (float)(v29 * 10.5)) + (float)(v31 * 0.0));
    v36 = v36 + (float)((float)((float)(v34 * 0.0) + (float)(v33 * 10.5)) + (float)(v35 * 0.0));
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(*(_DWORD *)**a1 + 96))(**a1, 11, &v26, v25);
  }
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**a1 + 56))(**a1);
  if ( a1[16] == (_DWORD *)1 )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*a1[1] + 52))(*a1[1]);
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**a1 + 108))(**a1, 21, v24);
    v23[0] = 0x40000000;
    Mtx34_rotateY(v24, v23);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*a1[1] + 60))(*a1[1], v24);
    v18 = *a1[1];
    v19 = *(void (__fastcall **)(int, unsigned int *))(*(_DWORD *)v18 + 68);
    v23[0] = (unsigned int)a1[12];
    v23[1] = v23[0];
    v23[2] = v23[0];
    v19(v18, v23);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*a1[1] + 56))(*a1[1]);
    v20 = *a1;
    v21 = 0;
  }
  else
  {
    v20 = *a1;
    v21 = 1;
  }
  return (*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)*v20 + 136))(*v20, 1, v21);
}
