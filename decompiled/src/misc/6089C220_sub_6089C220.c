/* sub_6089C220
 * address: 0x6089C220   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089C220(int a1, int a2, int a3)
{
  int v6; // r0
  _DWORD *v7; // r6
  float32x4_t v8; // q8
  int v9; // r2
  unsigned int v10; // r3
  unsigned int v11; // r7
  int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r7
  int v15; // r2
  unsigned int v16; // r3
  unsigned int v17; // r7
  float v18; // s16
  float v19; // s18
  int v20; // r0
  int v21; // r1
  int v22; // r12
  __int64 *v23; // r3
  unsigned __int64 v24; // d19
  __int64 *v25; // r3
  unsigned __int64 v26; // d19
  __int64 *v27; // r3
  unsigned __int64 v28; // d19
  int v29; // r1
  unsigned __int64 *v30; // r3
  float32x4_t v31; // q9
  float32x4_t v32; // q9
  float32x4_t v33; // q0
  int v34; // r1
  float32x4_t v35; // q0
  int v36; // r0
  int v37; // r0
  __int64 v38; // d17
  int v39; // r0
  int result; // r0
  int v41; // r0
  int v42; // r0
  __int64 v43; // d17
  int v44; // r0
  __int64 v45; // [sp+10h] [bp-128h] BYREF
  __int64 v46; // [sp+18h] [bp-120h]
  __int64 v47; // [sp+20h] [bp-118h] BYREF
  unsigned __int64 v48; // [sp+28h] [bp-110h]
  __int64 v49; // [sp+30h] [bp-108h] BYREF
  unsigned __int64 v50; // [sp+38h] [bp-100h]
  __int64 v51; // [sp+40h] [bp-F8h] BYREF
  unsigned __int64 v52; // [sp+48h] [bp-F0h]
  float v53[4]; // [sp+B0h] [bp-88h] BYREF
  float32x4_t v54; // [sp+C0h] [bp-78h] BYREF
  _DWORD v55[4]; // [sp+E0h] [bp-58h] BYREF
  _DWORD v56[18]; // [sp+F0h] [bp-48h] BYREF

  v6 = FIELD_U32(a2, 136);
  v7 = *(_DWORD **)(a2 + 156);
  if ( !FIELD_U8(v6, 1874) )
    v7 = (_DWORD *)(a2 + 292);
  if ( FIELD_U8(v6, 2020) )
  {
    v8 = *(float32x4_t *)(a2 + 1024);
    v9 = FIELD_U32(a2, 964);
    v10 = FIELD_U32(a2, 968);
    v11 = FIELD_U32(a2, 972);
    LODWORD(v51) = FIELD_U32(a2, 960);
    HIDWORD(v51) = v9;
    v52 = __PAIR64__(v11, v10);
    v12 = FIELD_U32(a2, 980);
    v13 = FIELD_U32(a2, 984);
    v14 = FIELD_U32(a2, 988);
    LODWORD(v49) = FIELD_U32(a2, 976);
    HIDWORD(v49) = v12;
    v50 = __PAIR64__(v14, v13);
    v15 = FIELD_U32(a2, 996);
    v16 = FIELD_U32(a2, 1000);
    v17 = FIELD_U32(a2, 1004);
    LODWORD(v47) = FIELD_U32(a2, 992);
    HIDWORD(v47) = v15;
    v48 = __PAIR64__(v17, v16);
    v18 = FIELD_F32(a2, 916);
    v19 = FIELD_F32(a2, 924);
  }
  else
  {
    v20 = FIELD_U32(a2, 900);
    v21 = FIELD_U32(a2, 1056);
    v22 = FIELD_U32(v20, 148);
    v8 = *(float32x4_t *)FIELD_U32(a2, 1052);
    v23 = (__int64 *)(FIELD_U32(v20, 304) + 16 * v21);
    v24 = v23[1];
    v51 = *v23;
    v52 = v24;
    v25 = (__int64 *)(FIELD_U32(v20, 312) + 16 * v21);
    v26 = v25[1];
    v49 = *v25;
    v50 = v26;
    v27 = (__int64 *)(FIELD_U32(v20, 308) + 16 * v21);
    v28 = v27[1];
    v29 = v22 + 24 * v21;
    v47 = *v27;
    v48 = v28;
    v18 = FIELD_F32(v29, 12);
    v30 = (unsigned __int64 *)(*v7 + 16 * a3);
    v31.n128_u64[0] = *v30++;
    v19 = (float)(FIELD_F32(v20, 68) - FIELD_F32(v29, 8)) - FIELD_F32(v20, 72);
    v31.n128_u64[1] = *(unsigned int *)v30;
    v32 = vaddq_f32(*(float32x4_t *)FIELD_U32(a2, 1048), v31);
    *(_QWORD *)(*v7 + 16 * a3) = v32.n128_u64[0];
    *(_DWORD *)v30 = v32.n128_u32[2];
    v6 = FIELD_U32(a2, 136);
  }
  if ( FIELD_U8(v6, 2008) )
  {
    v33.n128_u32[3] = 0;
    v34 = v7[1] + 16 * a3;
    v33.n128_u64[0] = *(_QWORD *)v34;
    v33.n128_u32[2] = FIELD_U32(v34, 8);
    v35 = vmlaq_f32(v33, v8, (float32x4_t)vld1q_dup_f32((const float *)(v6 + 2024)));
    *(_QWORD *)v34 = v35.n128_u64[0];
    FIELD_U32(v34, 8) = v35.n128_u32[2];
    v6 = FIELD_U32(a2, 136);
  }
  if ( FIELD_U8(v6, 2009) )
  {
    ((void (__fastcall *)(int, float32x4_t *, _DWORD, __int64 *, float, float, __int64 *))loc_608840C8)(
      a1,
      &v54,
      *(_DWORD *)(FIELD_U32(a2, 900) + 348),
      &v51,
      v18,
      v19,
      &v47);
    v54 = vmulq_f32(v54, (float32x4_t)vld1q_dup_f32((const float *)(FIELD_U32(a2, 136) + 2028)));
    *(_QWORD *)(v7[3] + 16 * a3) = v54.n128_u64[0];
    *(_DWORD *)(v7[3] + 16 * a3 + 8) = v54.n128_u32[2];
    v6 = FIELD_U32(a2, 136);
  }
  if ( FIELD_U8(v6, 2010) )
  {
    ((void (__fastcall *)(int, float *, _DWORD, __int64 *, float, __int64 *))loc_60885664)(
      a1,
      v53,
      *(_DWORD *)(FIELD_U32(a2, 900) + 348),
      &v49,
      v19,
      &v47);
    *(float *)(v7[5] + 16 * a3) = v53[0];
    *(float *)(v7[5] + 16 * a3 + 4) = v53[1];
    *(float *)(v7[5] + 16 * a3 + 8) = v53[2];
  }
  if ( v7[6] )
  {
    v36 = FIELD_U32(a2, 136);
    if ( FIELD_U8(v36, 2012) || FIELD_U8(v36, 2014) )
    {
      v37 = FIELD_U32(a2, 900);
      v38 = FIELD_U32(v37, 1108);
      v45 = FIELD_U64(v37, 1100);
      v46 = v38;
      ((void (__fastcall *)(int, _DWORD *, _DWORD, __int64 *, float, float, float, int, __int64 *))loc_608845B4)(
        a1,
        v55,
        FIELD_U32(v37, 348),
        &v47,
        FIELD_F32(v37, 1148),
        v18,
        v19,
        v37 + 736,
        &v45);
      v39 = FIELD_U32(a2, 136);
      if ( FIELD_U8(v39, 2012) )
      {
        *(_DWORD *)(v7[6] + 16 * a3) = v55[0];
        *(_DWORD *)(v7[6] + 16 * a3 + 4) = v55[1];
        *(_DWORD *)(v7[6] + 16 * a3 + 8) = v55[2];
        v39 = FIELD_U32(a2, 136);
      }
      if ( FIELD_U8(v39, 2014) )
        *(_DWORD *)(v7[6] + 16 * a3 + 12) = v55[3];
    }
  }
  result = v7[7];
  if ( result )
  {
    v41 = FIELD_U32(a2, 136);
    if ( FIELD_U8(v41, 2013) || (result = FIELD_U8(v41, 2015)) != 0 )
    {
      v42 = FIELD_U32(a2, 900);
      v43 = FIELD_U32(v42, 1108);
      v45 = FIELD_U64(v42, 1100);
      v46 = v43;
      ((void (__fastcall *)(int, _DWORD *, _DWORD, __int64 *, float, float, float, int, __int64 *))loc_60884E08)(
        a1,
        v56,
        FIELD_U32(v42, 348),
        &v47,
        FIELD_F32(v42, 1148),
        v18,
        v19,
        v42 + 752,
        &v45);
      v44 = FIELD_U32(a2, 136);
      if ( FIELD_U8(v44, 2013) )
      {
        *(_DWORD *)(v7[7] + 16 * a3) = v56[0];
        *(_DWORD *)(v7[7] + 16 * a3 + 4) = v56[1];
        *(_DWORD *)(v7[7] + 16 * a3 + 8) = v56[2];
        v44 = FIELD_U32(a2, 136);
      }
      result = FIELD_U8(v44, 2015);
      if ( result )
      {
        result = v7[7] + 16 * a3;
        FIELD_U32(result, 12) = v56[3];
      }
    }
  }
  return result;
}
