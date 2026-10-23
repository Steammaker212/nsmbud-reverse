/* sub_6015C120
 * address: 0x6015C120   size: 1116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015C120(int a1, int a2, _BYTE *a3, _DWORD *a4, int a5, int a6)
{
  float v9; // s1
  float v10; // s0
  unsigned int v11; // r9
  int v12; // r0
  bool v13; // zf
  unsigned int v14; // r0
  float *v15; // r0
  float v16; // s0
  int v17; // r3
  int v18; // r7
  float v19; // s1
  float v20; // s0
  unsigned int v21; // r0
  float *v22; // r2
  unsigned int v23; // r1
  float v24; // s6
  float v25; // s4
  int v26; // s8
  float v27; // s12
  float v28; // s2
  float v29; // s0
  float *v30; // r0
  float v31; // s8
  float v32; // s7
  float v33; // s9
  float v34; // s11
  float v35; // s13
  float *v36; // r0
  float v37; // s14
  float v38; // s11
  float v39; // s4
  float v40; // s6
  float v41; // s1
  float v42; // s5
  float v43; // s10
  float v44; // s8
  float v45; // s7
  float v46; // s3
  float v47; // s8
  float v48; // s2
  float v49; // s14
  float v50; // s7
  float v51; // s0
  float v52; // s6
  float v53; // s8
  float v54; // s18
  float v55; // s20
  float v56; // s0
  float v57; // s2
  float v58; // s1
  float v59; // s0
  unsigned int v60; // r4
  int v61; // r0
  bool v62; // zf
  int v63; // r1
  float v65; // [sp+0h] [bp-80h] BYREF
  float v66; // [sp+4h] [bp-7Ch]
  float v67; // [sp+8h] [bp-78h]
  float v68; // [sp+Ch] [bp-74h]
  float v69; // [sp+10h] [bp-70h] BYREF
  float v70; // [sp+14h] [bp-6Ch]
  _DWORD v71[4]; // [sp+18h] [bp-68h] BYREF
  float v72[2]; // [sp+28h] [bp-58h] BYREF
  float v73[2]; // [sp+30h] [bp-50h] BYREF
  float v74[18]; // [sp+38h] [bp-48h] BYREF

  if ( !*a3 )
  {
    v12 = (*(int (__fastcall **)(int, float *, _DWORD *))(*(_DWORD *)a1 + 40))(a1, v73, a4);
    v13 = v12 == 1;
    if ( v12 == 1 )
      v13 = LOBYTE(v73[0]) == 0;
    if ( v13 )
    {
      if ( a2 )
      {
        *(_BYTE *)a2 = 15;
        FIELD_U32(a2, 4) = *a4;
        FIELD_U32(a2, 8) = a4[1];
        v14 = 0;
        FIELD_U32(a2, 12) = 0;
LABEL_47:
        FIELD_U32(a2, 16) = v14;
        v63 = FIELD_U32(a1, 308);
        FIELD_U32(a2, 24) = FIELD_U32(a1, 304);
        FIELD_U32(a2, 28) = v63;
        FIELD_U32(a2, 32) = a1;
      }
      return 1;
    }
  }
  sub_60166970(v73, a4, a5, a4);
  v9 = v74[0] - v73[0];
  v10 = v74[1] - v73[1];
  if ( (float)(v74[0] - v73[0]) > 0.0001 || v9 < -0.0001 )
  {
    if ( v10 > 0.0001 || v10 < -0.0001 )
    {
      v11 = sub_6000F7B8(v10, v9);
    }
    else
    {
      v11 = 0x80000000;
      if ( v9 >= 0.0 )
        v11 = 0;
    }
  }
  else
  {
    v11 = -1073741824;
    if ( v10 >= 0.0 )
      v11 = 0x40000000;
  }
  sub_6015C588(a1, v73, a4);
  sub_6015C588(a1, v74, a5);
  v15 = *(float **)(a1 + 152);
  v16 = (float)(v15[1] + FIELD_F32(a1, 176)) + FIELD_F32(a1, 352);
  v72[0] = (float)(*v15 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 348);
  v72[1] = v16;
  *(float *)&v71[1] = v16;
  *(float *)v71 = v72[0];
  v71[2] = FIELD_U32(a1, 364);
  v18 = 0;
  if ( sub_60166DF0(v73, &v69, v71) == 1 )
  {
    sub_60166970(&v65, v72, &v69, v17);
    v19 = v67 - v65;
    v20 = v68 - v66;
    if ( (float)(v67 - v65) > 0.0001 || v19 < -0.0001 )
    {
      if ( v20 > 0.0001 || v20 < -0.0001 )
      {
        v21 = sub_6000F7B8(v20, v19);
      }
      else
      {
        v21 = 0x80000000;
        if ( v19 >= 0.0 )
          v21 = 0;
      }
    }
    else
    {
      v21 = -1073741824;
      if ( v20 >= 0.0 )
        v21 = 0x40000000;
    }
    v22 = *(float **)(a1 + 152);
    v23 = FIELD_U32(a1, 244);
    v24 = FIELD_F32(a1, 172);
    v25 = FIELD_F32(a1, 176);
    v26 = (v21 - 0x40000000) & 0xFFFFFF;
    v27 = v22[1];
    v28 = v27 + (float)(v25 + FIELD_F32(a1, 192));
    v29 = *v22 + (float)(v24 + FIELD_F32(a1, 188));
    v30 = (float *)((char *)sinLutTable + (((v21 - 0x40000000) >> 20) & 0xFF0));
    v31 = (float)(unsigned int)v26 * 0.000000059605;
    v32 = *v30;
    v33 = v30[1];
    v34 = v30[2];
    v35 = v30[3];
    v36 = (float *)((char *)sinLutTable + ((v23 >> 20) & 0xFF0));
    v37 = (float)(v23 & 0xFFFFFF) * 0.000000059605;
    v38 = v34 + (float)(v31 * v35);
    v39 = (float)((float)(v27 + v25) + FIELD_F32(a1, 352)) - v28;
    v40 = (float)((float)(*v22 + v24) + FIELD_F32(a1, 348)) - v29;
    v41 = v36[2] + (float)(v37 * v36[3]);
    v42 = FIELD_F32(a1, 368) / FIELD_F32(a1, 364);
    v43 = *v36 + (float)(v36[1] * v37);
    v44 = v70 + (float)(v32 + (float)(v33 * v31));
    v45 = (float)(v70 - v28) - v39;
    v46 = (float)(v69 - v29) - v40;
    v47 = v44 - v28;
    v48 = v28 + v39;
    v49 = v45 * v42;
    v50 = (float)(v69 + v38) - v29;
    v51 = v29 + v40;
    v52 = v50 - v40;
    v53 = (float)(v47 - v39) * v42;
    v54 = v51 + (float)((float)(v46 * v41) - (float)(v49 * v43));
    v55 = v48 + (float)((float)(v49 * v41) + (float)(v46 * v43));
    v56 = v51 + (float)((float)(v52 * v41) - (float)(v53 * v43));
    v65 = v54;
    v57 = v48 + (float)((float)(v53 * v41) + (float)(v52 * v43));
    v66 = v55;
    v58 = v56 - v54;
    v67 = v56;
    v59 = v57 - v55;
    v68 = v57;
    if ( v58 > 0.0001 || v58 < -0.0001 )
    {
      if ( v59 > 0.0001 || v59 < -0.0001 )
      {
        v60 = sub_6000F7B8(v59, v58);
      }
      else
      {
        v60 = 0x80000000;
        if ( v58 >= 0.0 )
          v60 = 0;
      }
    }
    else
    {
      v60 = -1073741824;
      if ( v59 >= 0.0 )
        v60 = 0x40000000;
    }
    v61 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a1 + 20))(a1, v60);
    v62 = v11 == v60;
    if ( v11 != v60 )
      v62 = (v61 & a6) == 0;
    if ( !v62 )
    {
      if ( a2 )
      {
        *(_BYTE *)a2 = v61;
        v14 = v60 ^ 0x80000000;
        FIELD_F32(a2, 4) = v54;
        FIELD_F32(a2, 8) = v55;
        FIELD_U32(a2, 12) = v60;
        goto LABEL_47;
      }
      return 1;
    }
  }
  return v18;
}
