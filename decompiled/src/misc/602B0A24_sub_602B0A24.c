/* sub_602B0A24
 * address: 0x602B0A24   size: 1272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_602B0A24(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r4
  int v4; // r0
  int v5; // r7
  _DWORD *v6; // r4
  unsigned int v7; // r0
  unsigned int v8; // r3
  float *v9; // r1
  int v10; // s0
  int v11; // r3
  float *v12; // r2
  float v13; // s2
  float v14; // s0
  float v15; // s8
  float v16; // s3
  float v17; // s4
  float v18; // s14
  float v19; // s10
  float v20; // s11
  float v21; // s7
  int v22; // r6
  int v23; // r2
  int v24; // r0
  int v25; // r5
  int *result; // r0
  int v27; // r7
  unsigned int v28; // r0
  unsigned int v29; // r2
  int v30; // r1
  int v31; // s2
  int v32; // r2
  float *v33; // r3
  float *v34; // r1
  float v35; // s0
  float v36; // s2
  float v37; // s14
  float v38; // s10
  float v39; // s5
  float v40; // s6
  float v41; // s1
  float v42; // s13
  float v43; // s9
  int v44; // [sp+0h] [bp-A8h]
  int v45; // [sp+4h] [bp-A4h]
  unsigned __int64 v46; // [sp+8h] [bp-A0h] BYREF
  __int64 v47; // [sp+10h] [bp-98h] BYREF
  __int64 v48; // [sp+18h] [bp-90h]
  __int64 v49; // [sp+20h] [bp-88h]
  __int64 v50; // [sp+28h] [bp-80h]
  __int64 v51; // [sp+30h] [bp-78h]
  int v52; // [sp+38h] [bp-70h] BYREF
  int v53; // [sp+3Ch] [bp-6Ch]
  int v54; // [sp+40h] [bp-68h]
  float32x2_t v55; // [sp+48h] [bp-60h] BYREF
  __int64 v56; // [sp+50h] [bp-58h]
  __int64 v57; // [sp+58h] [bp-50h]
  __int64 v58; // [sp+60h] [bp-48h]
  __int64 v59; // [sp+68h] [bp-40h]
  __int64 v60; // [sp+70h] [bp-38h]

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60C90C54 + 8))();
  v54 = FIELD_U32(a1, 6856);
  v53 = FIELD_U32(a1, 6852);
  v52 = FIELD_U32(a1, 6848);
  v44 = v4;
  v45 = v3;
  if ( v3 == v4 )
  {
    v5 = 4;
    v52 = FIELD_U32(a1, 144);
    v53 = FIELD_U32(a1, 148);
    v54 = FIELD_U32(a1, 152);
    v6 = (_DWORD *)(a1 + 6344);
    do
    {
      v7 = *(v6 - 2);
      v8 = *(v6 - 1);
      v9 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
      v10 = v8 & 0xFFFFFF;
      v11 = (v7 >> 20) & 0xFF0;
      v12 = (float *)((char *)sinLutTable + ((*v6 >> 20) & 0xFF0));
      v13 = (float)(*v6 & 0xFFFFFF) * 0.000000059605;
      v14 = (float)(unsigned int)v10 * 0.000000059605;
      v15 = v12[2] + (float)(v13 * v12[3]);
      v16 = v9[2] + (float)(v14 * v9[3]);
      v17 = *v12 + (float)(v13 * v12[1]);
      v18 = *v9 + (float)(v14 * v9[1]);
      v19 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
      v20 = *(float *)((char *)&sinLutTable[2] + v11) + (float)(v19 * *(float *)((char *)&sinLutTable[3] + v11));
      v21 = *(float *)((char *)sinLutTable + v11) + (float)(v19 * *(float *)((char *)&sinLutTable[1] + v11));
      v55.n64_f32[0] = v16 * v15;
      *(float *)&v57 = v16 * v17;
      *(float *)&v59 = -v18;
      v55.n64_f32[1] = (float)((float)(v21 * v18) * v15) - (float)(v20 * v17);
      *((float *)&v57 + 1) = (float)(v20 * v15) + (float)((float)(v21 * v18) * v17);
      *((float *)&v59 + 1) = v21 * v16;
      *(float *)&v56 = (float)(v18 * (float)(v20 * v15)) + (float)(v21 * v17);
      *(float *)&v58 = (float)(v18 * (float)(v20 * v17)) - (float)(v21 * v15);
      *(float *)&v60 = v20 * v16;
      HIDWORD(v56) = *(v6 - 8);
      HIDWORD(v58) = *(v6 - 7);
      HIDWORD(v60) = *(v6 - 6);
      v22 = *(v6 - 9);
      (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v22 + 60))(v22, &v55);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v22 + 68))(v22, &v52);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 52))(v22);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 56))(v22);
      v6 += 11;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    v23 = FIELD_U32(a1, 164);
    v24 = FIELD_U32(a1, 6836);
    v46 = FIELD_U64(a1, 156);
    LODWORD(v47) = v23 + 10 * v24;
    v55.n64_u64[0] = 1065353216;
    LODWORD(v56) = 0;
    v57 = 0x3F80000000000000LL;
    LODWORD(v58) = 0;
    v59 = 0;
    LODWORD(v60) = 1065353216;
    HIDWORD(v56) = FIELD_U32(a1, 108);
    HIDWORD(v58) = FIELD_U32(a1, 112);
    HIDWORD(v60) = FIELD_U32(a1, 116);
    Mtx34_rotateY(&v55, (unsigned int *)&v46 + 1);
    Mtx34_rotateX(&v55, (unsigned int *)&v46);
    Mtx34_rotateZ(&v55, (unsigned int *)&v47);
    v25 = **(_DWORD **)(a1 + 6300);
    (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v25 + 60))(v25, &v55);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v25 + 68))(v25, &v52);
    (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 52))(v25);
    (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 56))(v25);
  }
  result = *(int **)(a1 + 6304);
  if ( result )
  {
    v27 = *result;
    if ( v45 == v44 )
    {
      v28 = FIELD_U32(a1, 6336);
      v29 = FIELD_U32(a1, 6340);
      v30 = (v29 >> 20) & 0xFF0;
      v31 = v29 & 0xFFFFFF;
      v32 = (v28 >> 20) & 0xFF0;
      v33 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 6344) >> 20) & 0xFF0));
      v34 = (float *)((char *)sinLutTable + v30);
      v35 = (float)(FIELD_U32(a1, 6344) & 0xFFFFFF) * 0.000000059605;
      v36 = (float)(unsigned int)v31 * 0.000000059605;
      v37 = (float)(v28 & 0xFFFFFF);
      v38 = v33[2] + (float)(v35 * v33[3]);
      v39 = v34[2] + (float)(v36 * v34[3]);
      v40 = *v33 + (float)(v35 * v33[1]);
      v41 = *v34 + (float)(v36 * v34[1]);
      v42 = *(float *)((char *)&sinLutTable[2] + v32)
          + (float)((float)(v37 * 0.000000059605) * *(float *)((char *)&sinLutTable[3] + v32));
      v43 = *(float *)((char *)sinLutTable + v32)
          + (float)((float)(v37 * 0.000000059605) * *(float *)((char *)&sinLutTable[1] + v32));
      *(float *)&v46 = v39 * v38;
      *(float *)&v48 = v39 * v40;
      *(float *)&v50 = -v41;
      *((float *)&v46 + 1) = (float)((float)(v43 * v41) * v38) - (float)(v42 * v40);
      *((float *)&v48 + 1) = (float)(v42 * v38) + (float)((float)(v43 * v41) * v40);
      *((float *)&v50 + 1) = v43 * v39;
      *(float *)&v47 = (float)(v41 * (float)(v42 * v38)) + (float)(v43 * v40);
      *(float *)&v49 = (float)(v41 * (float)(v42 * v40)) - (float)(v43 * v38);
      *(float *)&v51 = v42 * v39;
      HIDWORD(v47) = FIELD_U32(a1, 6312);
      HIDWORD(v49) = FIELD_U32(a1, 6316);
      HIDWORD(v51) = FIELD_U32(a1, 6320);
    }
    else
    {
      v46 = v55.n64_u64[0];
      v47 = v56;
      v48 = v57;
      v49 = v58;
      v50 = v59;
      v51 = v60;
    }
    (*(void (__fastcall **)(int, unsigned __int64 *))(*(_DWORD *)v27 + 60))(v27, &v46);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v27 + 68))(v27, &v52);
    (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 52))(v27);
    return (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v27 + 56))(v27);
  }
  return result;
}
