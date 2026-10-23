/* sub_6095D8C0
 * address: 0x6095D8C0   size: 864   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095D8C0(int a1, unsigned int *a2, int a3)
{
  unsigned int *v3; // r9
  unsigned int v6; // r5
  unsigned int v7; // r0
  _DWORD *v8; // r0
  int v9; // r7
  _DWORD *v10; // r8
  int v11; // r0
  unsigned int v12; // r7
  __int64 v13; // r0
  _DWORD *v14; // r0
  int v15; // r1
  bool v16; // zf
  int v17; // r0
  int v18; // r2
  unsigned int v19; // r5
  __int64 v20; // r0
  _DWORD *v21; // r0
  float32x2_t v22; // d0
  float32x2_t v23; // d2
  bool v24; // zf
  int v25; // r0
  int v26; // r2
  unsigned int v27; // r0
  int v28; // r6
  int v29; // r5
  signed int v30; // r7
  int v31; // r0
  float v32; // s0
  int v33; // r0
  float *v34; // r0
  int v35; // r7
  signed int v36; // r5
  unsigned int *v37; // r8
  unsigned int v38; // r9
  int v39; // r6
  bool v40; // cc
  int (**v42)(); // [sp+8h] [bp-68h] BYREF
  const char *v43; // [sp+Ch] [bp-64h]
  unsigned int v44; // [sp+34h] [bp-3Ch]

  v3 = a2;
  FIELD_U32(a1, 456) = *a2;
  v6 = *a2;
  if ( (int)*a2 >= 1 )
  {
    v7 = 1396 * v6 + 8;
    if ( v7 < 1396 * v6 )
      v7 = -1;
    if ( !is_mul_ok(0x574u, v6) )
      v7 = -1;
    v8 = (_DWORD *)sub_608DE334(v7, a3, 4);
    if ( v8 )
    {
      v9 = 1396 * v6;
      v10 = v8 + 2;
      *v8 = 1396;
      v8[1] = v6;
      v11 = (int)(v8 + 2);
      do
      {
        v9 -= 1396;
        v11 = matrix_calc_type_ref(v11) + 1396;
      }
      while ( v9 );
      FIELD_U32(a1, 620) = v6;
      FIELD_U32(a1, 624) = v10;
    }
    v6 = *v3;
  }
  v12 = v6 + 1;
  v13 = 4LL * (v6 + 1);
  if ( !is_mul_ok(4u, v6 + 1) )
    HIDWORD(v13) = 1;
  if ( HIDWORD(v13) )
    LODWORD(v13) = -1;
  v14 = (_DWORD *)operator_new_8DE2C8(v13, a3, 4);
  v16 = v12 == 0;
  FIELD_U32(a1, 568) = v14;
  FIELD_U32(a1, 572) = v12;
  if ( v6 != -1 )
    v15 = 0;
  FIELD_U8(a1, 576) = 1;
  if ( v6 != -1 )
  {
    *v14 = v15;
    v16 = v6 == 0;
  }
  if ( !v16 )
  {
    v17 = 1;
    if ( (v6 & 1) != 0 )
    {
      *(_DWORD *)(FIELD_U32(a1, 568) + 4) = 0;
      v17 = 2;
    }
    if ( v6 != 1 )
    {
      do
      {
        *(_DWORD *)(FIELD_U32(a1, 568) + 4 * v17) = 0;
        v18 = FIELD_U32(a1, 568) + 4 * v17;
        v17 += 2;
        FIELD_U32(v18, 4) = 0;
      }
      while ( v12 != v17 );
    }
  }
  v19 = *v3;
  v20 = 4LL * *v3;
  if ( !is_mul_ok(*v3, 4u) )
    HIDWORD(v20) = 1;
  if ( HIDWORD(v20) )
    LODWORD(v20) = -1;
  v21 = (_DWORD *)operator_new_8DE2C8(v20, a3, 4);
  v24 = v19 == 0;
  FIELD_U32(a1, 608) = v21;
  FIELD_U32(a1, 612) = v19;
  FIELD_U8(a1, 616) = 1;
  if ( v19 )
  {
    *v21 = 0;
    v24 = v19 == 1;
  }
  if ( !v24 )
  {
    v25 = 1;
    if ( (v19 & 1) == 0 )
    {
      *(_DWORD *)(FIELD_U32(a1, 608) + 4) = 0;
      v25 = 2;
    }
    if ( v19 != 2 )
    {
      do
      {
        *(_DWORD *)(FIELD_U32(a1, 608) + 4 * v25) = 0;
        v26 = FIELD_U32(a1, 608) + 4 * v25;
        v25 += 2;
        FIELD_U32(v26, 4) = 0;
      }
      while ( v19 != v25 );
    }
  }
  v27 = *v3;
  if ( (int)*v3 >= 1 )
  {
    v28 = 0;
    v29 = 0;
    v30 = 0;
    do
    {
      v31 = FIELD_U32(a1, 568);
      if ( v29 )
        v32 = *(float *)(v31 + v29 - 4) + 500.0;
      else
        v32 = 10.0;
      *(float *)(v31 + v29) = v32;
      v33 = FIELD_U32(a1, 624);
      if ( FIELD_U32(a1, 620) > (unsigned int)v30 )
        v33 += v28;
      sub_6095F338(v33, a3);
      ++v30;
      v28 += 1396;
      *(_DWORD *)(FIELD_U32(a1, 608) + v29) = 0;
      v29 += 4;
      v27 = *v3;
    }
    while ( v30 < (int)*v3 );
  }
  v23.n64_u32[0] = 1184645120;
  v34 = (float *)(FIELD_U32(a1, 568) + 4 * v27);
  v22.n64_f32[0] = *(v34 - 1) + 500.0;
  *(_DWORD *)v34 = vmax_f32(v22, v23).n64_u32[0];
  v44 = *v3;
  Shadow_Map_ref();
  v42 = &sead__SafeStringBase__vtable;
  v43 = "depth_shadow";
  sub_60947360(a1, a1 + 416, (int *)&v42);
  if ( (int)*v3 >= 1 )
  {
    v35 = 0;
    v36 = 0;
    do
    {
      v37 = v3;
      v38 = FIELD_U32(a1, 620);
      v39 = FIELD_U32(a1, 624);
      sub_6017D524(&v42, "shadow_unit_%d", v36);
      v40 = v38 > v36;
      v3 = v37;
      if ( v40 )
        v39 += v35;
      sub_60947360(a1, v39, (int *)&v42);
      ++v36;
      v35 += 1396;
    }
    while ( v36 < (int)*v37 );
  }
  v42 = &sead__SafeStringBase__vtable;
  v43 = "shadow_map";
  return sub_60947360(a1, a1 + 632, (int *)&v42);
}
