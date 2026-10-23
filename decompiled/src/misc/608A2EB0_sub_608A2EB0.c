/* sub_608A2EB0
 * address: 0x608A2EB0   size: 1484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_608A2EB0(float *a1, int a2, int a3, int a4, float a5, float *a6)
{
  float v8; // s16
  int v11; // r0
  float v12; // s25
  int v13; // r5
  float v14; // s22
  float v15; // s18
  float32x4_t v16; // q8
  float *v17; // r0
  float v18; // s6
  float32x4_t v19; // q0
  float v20; // s12
  float v21; // s4
  float v22; // s27
  float v23; // s12
  float v24; // s10
  float v25; // s20
  float v26; // s30
  float v27; // s18
  float v28; // s24
  float v29; // s26
  float v30; // s22
  float v31; // s26
  float v32; // s28
  float v33; // s30
  float v34; // s19
  float v35; // s17
  float v36; // s21
  float v37; // s16
  float v38; // s23
  float v39; // s29
  float v40; // s16
  float v41; // s31
  float v42; // s24
  float v43; // s25
  float v44; // s26
  float *v45; // r0
  float v46; // s18
  float v47; // s20
  float v48; // s17
  float v49; // s28
  float v50; // s22
  float v51; // s24
  float v52; // s20
  float v53; // s28
  float v54; // s16
  float v55; // s30
  float v56; // s17
  float v57; // s23
  float v58; // s21
  float v59; // s31
  float v60; // s26
  float v61; // s27
  float v62; // s0
  float v63; // s24
  float v64; // s26
  float v65; // s31
  float v66; // s28
  float v67; // s30
  float v68; // s17
  float v69; // s29
  float v70; // s0
  float v71; // s18
  float v72; // s16
  float v73; // s31
  float v74; // s24
  float v75; // s28
  float v76; // s30
  float v77; // s30
  float v78; // s22
  double v79; // d0
  __int64 v80; // d0
  __n128 result; // q0
  float v82; // [sp+4h] [bp-6Ch]
  float v83; // [sp+8h] [bp-68h]
  float v84; // [sp+Ch] [bp-64h]

  v8 = a5;
  v11 = FIELD_U32(a2, 348);
  v12 = FIELD_F32(a2, 72);
  v13 = FIELD_U32(v11, 452);
  v14 = (float)FIELD_S32(v13, 16);
  if ( FIELD_U8(v13, 2) )
  {
    v15 = *(float *)(FIELD_U32(v11, 16) + 112)
        + (float)((float)(1.0 - v12) * (float)(1.0 - *(float *)(FIELD_U32(v11, 16) + 112)));
    if ( v15 != 1.0 )
      v8 = (float)(1.0 - powf(v15, a5)) / (float)(1.0 - v15);
  }
  if ( *(_BYTE *)v13 )
  {
    v16.n128_u64[0] = 0x3EA0D84500000000LL;
    v16.n128_u64[1] = 0x3F16FC7A3F6D3112LL;
    v17 = (float *)(FIELD_U32(a3, 16) + 16 * a4);
    v18 = v14 * (float)(FIELD_F32(v13, 20) / 100.0);
    v19 = vmulq_n_f32(v16, v14);
    v20 = v14 * (float)(FIELD_F32(v13, 24) / 100.0);
    v21 = v20 + v20;
    v22 = v12 * v18;
    v23 = (float)(v18 * FIELD_F32(a2, 68)) - v20;
    v24 = (float)FIELD_S32(v13, 16);
    v25 = unk_60CC8290 / v24;
    v26 = (float)(v19.n128_f32[0] + v23) + (float)(v21 * *v17);
    v27 = (float)(v19.n128_f32[2] + v23) + (float)(v21 * v17[2]);
    v28 = (float)(v19.n128_f32[1] + v23) + (float)(v21 * v17[1]);
    v29 = v8 + v26;
    if ( FIELD_U8(v13, 1) )
    {
      v30 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v22 + (float)(v12 + v29), unk_60CC8290 / v24);
      v31 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v8 + v26, v25);
      v32 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v22 + v26, v25);
      v33 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v26, v25);
      v34 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v22 + (float)(v12 + (float)(v8 + v28)), v25);
      v35 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v8 + v28, v25);
      v36 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v22 + v28, v25);
      v37 = v8 + v27;
      v38 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v28, v25);
      v39 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v22 + (float)(v12 + v37), v25);
      v40 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v37, v25);
      v41 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v22 + v27, v25);
      v42 = (float)(v30 - v31) - (float)(v32 - v33);
      v43 = (float)(v34 - v35) - (float)(v36 - v38);
      v44 = (float)(v39 - v40) - (float)(v41 - ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v27, v25));
    }
    else
    {
      v57 = v29 * v25;
      v58 = v22 * v25;
      v59 = (float)(v26 * v25) + (float)(v22 * v25);
      v60 = (float)(v22 * v25) + (float)((float)(v29 * v25) + (float)(v12 * v25));
      v84 = ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v57,
              v60,
              v26 * v25,
              v59,
              1.6667,
              4.0);
      v61 = ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v57,
              v60,
              v26 * v25,
              v59,
              2.381,
              3.0);
      v82 = ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v57,
              v60,
              v26 * v25,
              v59,
              2.381,
              2.0);
      v83 = ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v57,
              v60,
              v26 * v25,
              v59,
              2.381,
              1.5);
      v62 = v8 + v28;
      v63 = v28 * v25;
      v64 = v62 * v25;
      v65 = v58 + (float)((float)(v62 * v25) + (float)(v12 * v25));
      v66 = ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v62 * v25,
              v65,
              v63,
              v63 + v58,
              1.6667,
              4.0);
      v67 = ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v64,
              v65,
              v63,
              v63 + v58,
              2.381,
              3.0);
      v68 = ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v64,
              v65,
              v63,
              v63 + v58,
              2.381,
              2.0);
      v69 = ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v64,
              v65,
              v63,
              v63 + v58,
              2.381,
              1.5);
      v70 = v8 + v27;
      v71 = v27 * v25;
      v72 = v70 * v25;
      v73 = v58 + (float)((float)(v70 * v25) + (float)(v12 * v25));
      v74 = ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v72,
              v58 + (float)(v72 + (float)(v12 * v25)),
              v71,
              v71 + v58,
              1.6667,
              4.0);
      v75 = v66 + v67;
      v76 = v74
          + ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v72,
              v58 + (float)(v72 + (float)(v12 * v25)),
              v71,
              v71 + v58,
              2.381,
              3.0);
      v77 = v76
          + ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v72,
              v58 + (float)(v72 + (float)(v12 * v25)),
              v71,
              v71 + v58,
              2.381,
              2.0);
      v42 = (float)((float)(v84 + v61) + v82) + v83;
      v43 = (float)(v75 + v68) + v69;
      v44 = v77
          + ((float (__fastcall *)(float, float, float, float, float, float))loc_608A3778)(
              v72,
              v73,
              v71,
              v71 + v58,
              2.381,
              1.5);
    }
  }
  else
  {
    v45 = (float *)(FIELD_U32(a3, 16) + 16 * a4);
    v46 = unk_60CC8290 / (float)FIELD_S32(v13, 16);
    v47 = v8 + (float)(v14 * *v45);
    v48 = v14 * v45[2];
    v49 = v14 * v45[1];
    if ( FIELD_U8(v13, 1) )
    {
      v50 = ((float (__fastcall *)(int, float, float))loc_608A3490)(
              v13,
              v12 + v47,
              unk_60CC8290 / (float)FIELD_S32(v13, 16));
      v51 = v8 + v49;
      v52 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v47, v46);
      v53 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v12 + (float)(v8 + v49), v46);
      v54 = v8 + v48;
      v55 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v51, v46);
      v56 = ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v12 + v54, v46);
      v42 = v50 - v52;
      v43 = v53 - v55;
      v44 = v56 - ((float (__fastcall *)(int, float, float))loc_608A3490)(v13, v54, v46);
    }
    else
    {
      v78 = v12 * v46;
      v79 = ((double (__fastcall *)(float, float))loc_608A3A30)(v47 * v46, (float)(v47 * v46) + (float)(v12 * v46));
      v42 = *(float *)&v79;
      v43 = ((float (__fastcall *)(float, float))loc_608A3A30)(
              (float)(v8 + v49) * v46,
              (float)((float)(v8 + v49) * v46) + (float)(v12 * v46));
      v44 = ((float (__fastcall *)(float, float))loc_608A3A30)(
              (float)(v8 + v48) * v46,
              (float)((float)(v8 + v48) * v46) + v78);
    }
  }
  v80 = *(_QWORD *)a1;
  result.n128_u64[1] = *((_QWORD *)a1 + 1);
  result.n128_f32[0] = *a1 + (float)(v42 * *a6);
  *(__n128 *)a1 = result;
  result.n128_f32[1] = *((float *)&v80 + 1) + (float)(v43 * a6[1]);
  *(__n128 *)a1 = result;
  result.n128_f32[2] = result.n128_f32[2] + (float)(v44 * a6[2]);
  *(_QWORD *)a1 = result.n128_u64[0];
  *((_QWORD *)a1 + 1) = result.n128_u32[2];
  return result;
}
