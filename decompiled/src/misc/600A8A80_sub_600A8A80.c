/* sub_600A8A80
 * address: 0x600A8A80   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A8A80(int a1)
{
  int **v2; // r10
  int v3; // r5
  int i; // r6
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  unsigned int v8; // r3
  int v9; // r1
  int v10; // s2
  int v11; // s14
  float *v12; // r3
  float *v13; // r1
  float *v14; // r0
  float v15; // s14
  float v16; // s0
  float v17; // s2
  float v18; // s10
  float v19; // s5
  float v20; // s6
  float v21; // s1
  float v22; // s13
  float v23; // s9
  float v24; // r1
  float v25; // r2
  float v26; // s4
  float v27; // s6
  float v28; // s2
  int v29; // r0
  int (__fastcall *v30)(int, float32x2_t *); // r2
  int v31; // r5
  unsigned int v33; // [sp+4h] [bp-94h] BYREF
  float32x2_t v34[6]; // [sp+8h] [bp-90h] BYREF
  float v35; // [sp+38h] [bp-60h] BYREF
  float v36; // [sp+3Ch] [bp-5Ch]
  float v37; // [sp+40h] [bp-58h]
  float v38; // [sp+48h] [bp-50h] BYREF
  float v39; // [sp+4Ch] [bp-4Ch]
  float v40; // [sp+50h] [bp-48h]
  int v41; // [sp+54h] [bp-44h]
  float v42; // [sp+58h] [bp-40h]
  float v43; // [sp+5Ch] [bp-3Ch]
  float v44; // [sp+60h] [bp-38h]
  int v45; // [sp+64h] [bp-34h]
  float v46; // [sp+68h] [bp-30h]
  float v47; // [sp+6Ch] [bp-2Ch]
  float v48; // [sp+70h] [bp-28h]
  int v49; // [sp+74h] [bp-24h]

  v2 = (int **)(a1 + 7096);
  v3 = (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 7096) + 120))(**(_DWORD **)(a1 + 7096));
  if ( v3 >= 1 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)**v2 + 132))(**v2, i);
      if ( v5 )
      {
        v6 = FIELD_U32(a1, 8252);
        v38 = 1.0;
        v39 = 1.0;
        v40 = 1.0;
        v41 = v6;
        (*(void (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)v5 + 20))(v5, 0, &v38);
      }
    }
  }
  v7 = FIELD_U32(a1, 156);
  v8 = FIELD_U32(a1, 160);
  v9 = (v8 >> 20) & 0xFF0;
  v10 = v8 & 0xFFFFFF;
  v11 = v7 & 0xFFFFFF;
  v12 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 164) >> 20) & 0xFF0));
  v13 = (float *)((char *)sinLutTable + v9);
  v14 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v15 = (float)(unsigned int)v11;
  v16 = (float)(FIELD_U32(a1, 164) & 0xFFFFFF) * 0.000000059605;
  v17 = (float)(unsigned int)v10 * 0.000000059605;
  v18 = v12[2] + (float)(v16 * v12[3]);
  v19 = v13[2] + (float)(v17 * v13[3]);
  v20 = *v12 + (float)(v16 * v12[1]);
  v21 = *v13 + (float)(v17 * v13[1]);
  v22 = v14[2] + (float)((float)(v15 * 0.000000059605) * v14[3]);
  v23 = *v14 + (float)((float)(v15 * 0.000000059605) * v14[1]);
  v38 = v19 * v18;
  v42 = v19 * v20;
  v46 = -v21;
  v39 = (float)((float)(v23 * v21) * v18) - (float)(v22 * v20);
  v43 = (float)(v22 * v18) + (float)((float)(v23 * v21) * v20);
  v47 = v23 * v19;
  v40 = (float)(v21 * (float)(v22 * v18)) + (float)(v23 * v20);
  v44 = (float)(v21 * (float)(v22 * v20)) - (float)(v23 * v18);
  v48 = v22 * v19;
  v41 = FIELD_U32(a1, 108);
  v45 = FIELD_U32(a1, 112);
  v49 = FIELD_U32(a1, 116);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)**v2 + 60))(**v2, &v38);
  v24 = FIELD_F32(a1, 148);
  v25 = FIELD_F32(a1, 152);
  v35 = FIELD_F32(a1, 144);
  v36 = v24;
  v37 = v25;
  if ( !FIELD_U8(a1, 6313) )
  {
    v26 = FIELD_F32(a1, 152);
    v27 = FIELD_F32(a1, 6700);
    v28 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
    v35 = v35 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.7);
    v36 = v36 + (float)(v28 * 0.7);
    v37 = v37 + (float)((float)(v27 - v26) * 0.7);
  }
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)**v2 + 68))(**v2, &v35);
  sub_604218E0(*v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v2 + 52))(**v2);
  v29 = **v2;
  v30 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v29 + 84);
  v34[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v34[0].n64_u32[1] = (unsigned __int32)"Head";
  v31 = v30(v29, v34);
  v33 = FIELD_U32(a1, 7168);
  sub_604302C8(**v2, v31, v34);
  Mtx34_rotateZ(v34, &v33);
  (*(void (__fastcall **)(int, int, float32x2_t *, int *))(*(_DWORD *)**v2 + 96))(**v2, v31, v34, &dword_60B3B98C);
  return (*(int (__fastcall **)(int))(*(_DWORD *)**v2 + 56))(**v2);
}
