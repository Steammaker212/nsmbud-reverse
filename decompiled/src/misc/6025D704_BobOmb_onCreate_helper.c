/* BobOmb_onCreate_helper
 * address: 0x6025D704   size: 1036   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_onCreate_helper(float *a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r7
  unsigned int v4; // r6
  float v5; // r0
  float v6; // r1
  float v7; // r2
  float v8; // s16
  int v9; // r5
  float v10; // s2
  int v11; // r6
  int i; // r7
  int v13; // r0
  int v14; // r4
  int v15; // r0
  int result; // r0
  float v17; // s2
  float v18; // s6
  float v19; // s4
  float v20; // s8
  float v21; // s0
  _DWORD v22[2]; // [sp+0h] [bp-B0h] BYREF
  float v23[3]; // [sp+8h] [bp-A8h] BYREF
  float v24; // [sp+14h] [bp-9Ch]
  int v25; // [sp+24h] [bp-8Ch]
  int v26; // [sp+34h] [bp-7Ch]
  float32x2_t v27; // [sp+38h] [bp-78h] BYREF
  float v28; // [sp+40h] [bp-70h]
  float v29; // [sp+44h] [bp-6Ch]
  float v30; // [sp+48h] [bp-68h]
  float v31; // [sp+4Ch] [bp-64h]
  float v32; // [sp+50h] [bp-60h]
  float v33; // [sp+54h] [bp-5Ch]
  float v34; // [sp+58h] [bp-58h]
  float v35; // [sp+5Ch] [bp-54h]
  float v36; // [sp+60h] [bp-50h]
  float v37; // [sp+64h] [bp-4Ch]
  unsigned int v38; // [sp+68h] [bp-48h] BYREF
  unsigned int v39; // [sp+6Ch] [bp-44h] BYREF
  unsigned int v40; // [sp+70h] [bp-40h] BYREF

  v2 = *((_DWORD *)a1 + 39);
  v3 = *((_DWORD *)a1 + 40);
  v4 = *((_DWORD *)a1 + 41);
  v5 = a1[28];
  v6 = a1[29];
  v7 = a1[27];
  v40 = v4;
  v39 = v3;
  v38 = v2;
  v27.n64_u64[0] = 1065353216;
  v28 = 0.0;
  v30 = 0.0;
  v31 = 1.0;
  v32 = 0.0;
  v34 = 0.0;
  v35 = 0.0;
  v36 = 1.0;
  v29 = v7;
  v33 = v5;
  v37 = v6;
  Mtx34_rotateY(&v27, &v39);
  v8 = 0.0;
  v29 = v29 + (float)((float)((float)(v27.n64_f32[1] * 8.0) + (float)(v27.n64_f32[0] * 0.0)) + (float)(v28 * 0.0));
  v33 = v33 + (float)((float)((float)(v31 * 8.0) + (float)(v30 * 0.0)) + (float)(v32 * 0.0));
  v37 = v37 + (float)((float)((float)(v35 * 8.0) + (float)(v34 * 0.0)) + (float)(v36 * 0.0));
  Mtx34_rotateX(&v27, &v38);
  v29 = (float)(v29
              + (float)((float)((float)(v27.n64_f32[0] * 0.0) - (float)(v27.n64_f32[1] * 8.0)) + (float)(v28 * 0.0)))
      + (float)((float)((float)(v27.n64_f32[0] * 0.0) + (float)(v27.n64_f32[1] * 16.0)) + (float)(v28 * 0.0));
  v33 = (float)(v33 + (float)((float)((float)(v30 * 0.0) - (float)(v31 * 8.0)) + (float)(v32 * 0.0)))
      + (float)((float)((float)(v30 * 0.0) + (float)(v31 * 16.0)) + (float)(v32 * 0.0));
  v37 = (float)(v37 + (float)((float)((float)(v34 * 0.0) - (float)(v35 * 8.0)) + (float)(v36 * 0.0)))
      + (float)((float)((float)(v34 * 0.0) + (float)(v35 * 16.0)) + (float)(v36 * 0.0));
  Mtx34_rotateZ(&v27, &v40);
  v29 = v29 + (float)((float)((float)(v27.n64_f32[0] * 0.0) - (float)(v27.n64_f32[1] * 16.0)) + (float)(v28 * 0.0));
  v33 = v33 + (float)((float)((float)(v30 * 0.0) - (float)(v31 * 16.0)) + (float)(v32 * 0.0));
  v37 = v37 + (float)((float)((float)(v34 * 0.0) - (float)(v35 * 16.0)) + (float)(v36 * 0.0));
  v9 = **((_DWORD **)a1 + 1588);
  v10 = 1.0 - a1[1687];
  if ( v10 >= 0.0 )
  {
    v8 = 1.0 - a1[1687];
    if ( v10 > 1.0 )
      v8 = 1.0;
  }
  v23[0] = v8;
  v23[1] = v8;
  v23[2] = v8;
  v24 = v8;
  v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 120))(v9);
  if ( v11 >= 1 )
  {
    for ( i = 0; i != v11; ++i )
    {
      v13 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v9 + 132))(v9, i);
      if ( v13 )
        (*(void (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)v13 + 12))(v13, 0, v23);
    }
  }
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v9 + 60))(v9, &v27);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v9 + 68))(v9, a1 + 1678);
  (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 52))(v9);
  (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 56))(v9);
  v22[0] = &sead__SafeStringBase__vtable;
  v22[1] = "skl_root";
  v14 = **((_DWORD **)a1 + 1588);
  v15 = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v14 + 84))(v14, v22);
  (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)v14 + 108))(v14, v15, v23);
  a1[1618] = v24;
  *((_DWORD *)a1 + 1619) = v25;
  *((_DWORD *)a1 + 1620) = v26;
  result = *((unsigned __int8 *)a1 + 6364);
  if ( (result & 0xC) != 0 )
  {
    v17 = a1[144];
    v18 = a1[28];
    v19 = a1[145];
    v20 = a1[29];
    v21 = a1[27] + a1[143];
    a1[1624] = a1[1622];
    a1[1626] = v21;
    a1[1627] = v18 + v17;
    a1[1628] = v20 + v19;
    return LightMask__update((LightMask *)(a1 + 1623));
  }
  return result;
}
