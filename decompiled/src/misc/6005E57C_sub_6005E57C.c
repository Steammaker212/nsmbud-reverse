/* sub_6005E57C
 * address: 0x6005E57C   size: 852   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005E57C(int a1)
{
  float v2; // s20
  float v3; // s18
  float v4; // s16
  int **v5; // r6
  float v6; // s4
  float v7; // s6
  float v8; // s2
  int result; // r0
  int v10; // r0
  int (__fastcall *v11)(int, float32x2_t *); // r2
  int v12; // r0
  int v13; // [sp+4h] [bp-9Ch] BYREF
  float32x2_t v14[6]; // [sp+8h] [bp-98h] BYREF
  float v15; // [sp+38h] [bp-68h] BYREF
  float v16; // [sp+3Ch] [bp-64h]
  float v17; // [sp+40h] [bp-60h]
  float32x2_t v18; // [sp+48h] [bp-58h] BYREF
  float v19; // [sp+50h] [bp-50h]
  float v20; // [sp+54h] [bp-4Ch]
  float v21; // [sp+58h] [bp-48h]
  float v22; // [sp+5Ch] [bp-44h]
  float v23; // [sp+60h] [bp-40h]
  float v24; // [sp+64h] [bp-3Ch]
  float v25; // [sp+68h] [bp-38h]
  float v26; // [sp+6Ch] [bp-34h]
  float v27; // [sp+70h] [bp-30h]
  float v28; // [sp+74h] [bp-2Ch]

  v2 = FIELD_F32(a1, 572);
  v3 = FIELD_F32(a1, 576);
  v4 = FIELD_F32(a1, 580);
  v18.n64_u64[0] = 1065353216;
  v19 = 0.0;
  v21 = 0.0;
  v22 = 1.0;
  v23 = 0.0;
  v25 = 0.0;
  v26 = 0.0;
  v27 = 1.0;
  v20 = FIELD_F32(a1, 108);
  v24 = FIELD_F32(a1, 112);
  v28 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v18, (unsigned int *)(a1 + 160));
  v20 = v20 + (float)((float)((float)(v3 * v18.n64_f32[1]) + (float)(v2 * v18.n64_f32[0])) + (float)(v4 * v19));
  v24 = v24 + (float)((float)((float)(v3 * v22) + (float)(v2 * v21)) + (float)(v4 * v23));
  v28 = v28 + (float)((float)((float)(v3 * v26) + (float)(v2 * v25)) + (float)(v4 * v27));
  Mtx34_rotateX(&v18, (unsigned int *)(a1 + 156));
  v20 = v20 + (float)((float)((float)-(float)(v2 * v18.n64_f32[0]) - (float)(v18.n64_f32[1] * v3)) - (float)(v19 * v4));
  v24 = v24 + (float)((float)((float)-(float)(v2 * v21) - (float)(v22 * v3)) - (float)(v23 * v4));
  v28 = v28 + (float)((float)((float)-(float)(v2 * v25) - (float)(v26 * v3)) - (float)(v27 * v4));
  Mtx34_rotateZ(&v18, (unsigned int *)(a1 + 164));
  v5 = (int **)(a1 + 7204);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7204) + 60))(**(_DWORD **)(a1 + 7204), &v18);
  sub_604218E0(*(_DWORD **)(a1 + 7204));
  v17 = FIELD_F32(a1, 152);
  v16 = FIELD_F32(a1, 148);
  v15 = FIELD_F32(a1, 144);
  if ( !FIELD_U8(a1, 6313) )
  {
    v6 = FIELD_F32(a1, 152);
    v7 = FIELD_F32(a1, 6700);
    v8 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
    v15 = v15 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.65);
    v16 = v16 + (float)(v8 * 0.65);
    v17 = v17 + (float)((float)(v7 - v6) * 0.65);
  }
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)**v5 + 68))(**v5, &v15);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v5 + 52))(**v5);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v5 + 56))(**v5);
  result = FIELD_U8(a1, 7840);
  if ( FIELD_U8(a1, 7840) )
  {
    v10 = **v5;
    v11 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v10 + 84);
    v14[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
    v14[0].n64_u32[1] = (unsigned __int32)"spine";
    v12 = v11(v10, v14);
    (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)**v5 + 108))(**v5, v12, v14);
    v13 = (int)(float)((float)(2147500000.0 * 90.0) / 180.0);
    Mtx34_rotateY(v14, (unsigned int *)&v13);
    v13 = (int)(float)((float)(2147500000.0 * 73.5) / 180.0);
    Mtx34_rotateX(v14, (unsigned int *)&v13);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7836) + 60))(**(_DWORD **)(a1 + 7836), v14);
    return sub_60421880(FIELD_U32(a1, 7836));
  }
  return result;
}
