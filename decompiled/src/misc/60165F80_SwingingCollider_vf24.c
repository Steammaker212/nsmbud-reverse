/* SwingingCollider_vf24
 * address: 0x60165F80   size: 1288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SwingingCollider_vf24(int a1, int a2, int a3, float *a4, int a5, float *a6)
{
  int v9; // r0
  int v10; // r9
  float v11; // s26
  unsigned int v12; // r10
  unsigned int v13; // r8
  float v14; // s0
  float v15; // s18
  float *v16; // r3
  float *v17; // r7
  unsigned int v18; // r0
  float v19; // s0
  float v20; // s2
  int v21; // r11
  float v22; // s6
  float *v23; // r1
  float v24; // s10
  float v25; // s0
  float v26; // s1
  float v27; // s0
  unsigned int v28; // r7
  float v29; // s0
  _DWORD *v30; // r1
  unsigned int v31; // r0
  float *v32; // r1
  float v33; // s8
  float v34; // s10
  float v35; // s12
  float v36; // s14
  float v37; // s6
  float v38; // s0
  unsigned int v39; // r0
  float *v40; // r1
  float v41; // s2
  float v42; // s14
  float v43; // s0
  float v44; // s17
  float v45; // s30
  float v46; // s19
  float v47; // s21
  float v48; // s4
  float v49; // s0
  float v50; // s16
  float v51; // s28
  unsigned int v52; // r0
  float v53; // s26
  float *v54; // r1
  float *v55; // r0
  float v56; // s0
  float v57; // s2
  float v58; // s0
  float v59; // s6
  float v60; // s2
  unsigned int v62; // [sp+Ch] [bp-9Ch]
  char v63; // [sp+14h] [bp-94h]
  float v64; // [sp+1Ch] [bp-8Ch] BYREF
  float v65; // [sp+20h] [bp-88h] BYREF
  float v66; // [sp+24h] [bp-84h]
  float v67; // [sp+28h] [bp-80h]
  float v68; // [sp+2Ch] [bp-7Ch]
  float v69; // [sp+30h] [bp-78h] BYREF
  float v70; // [sp+34h] [bp-74h]
  float v71; // [sp+38h] [bp-70h] BYREF
  float v72; // [sp+3Ch] [bp-6Ch]

  v63 = 0;
  if ( a6 )
  {
    v9 = FIELD_U32(a1, 384);
    if ( v9 >= 1 )
    {
      v10 = -v9;
      v11 = 3.4028e38;
      v12 = 0;
      v13 = 1;
      v62 = v9 - 1;
      v14 = FIELD_F32(a1, 424) + (float)(a6[1348] + a6[1348]);
      v15 = v14 * v14;
      v63 = 0;
      do
      {
        v16 = *(float **)(a1 + 152);
        v17 = *(float **)(a1 + 396);
        v18 = FIELD_U32(a1, 392);
        v19 = FIELD_F32(a1, 176);
        v20 = FIELD_F32(a1, 172);
        v21 = v13 - 1;
        v22 = v16[1];
        v23 = v17;
        if ( v18 > v13 - 1 )
          v23 = &v17[v12 / 4];
        v24 = v23[1];
        if ( v18 > v13 )
          v17 = (float *)((char *)v17 + v12 + 8);
        v71 = (float)(*v16 + v20) + *v23;
        v72 = (float)(v22 + v19) + v24;
        v25 = (float)(v16[1] + v19) + v17[1];
        v69 = (float)(*v16 + v20) + *v17;
        v70 = v25;
        sub_60166970(&v65, &v71, &v69, v16);
        v26 = v67 - v65;
        v27 = v68 - v66;
        if ( (float)(v67 - v65) > 0.0001 || v26 < -0.0001 )
        {
          if ( v27 > 0.0001 || v27 < -0.0001 )
          {
            v28 = sub_6000F7B8(v27, v26);
            if ( v12 )
              goto LABEL_21;
          }
          else
          {
            v28 = 0x80000000;
            if ( v26 >= 0.0 )
              v28 = 0;
            if ( v12 )
            {
LABEL_21:
              if ( !(v10 + v13) )
              {
                v29 = a6[1347];
                if ( v29 != 0.0 )
                {
                  v30 = *(_DWORD **)(a1 + 388);
                  if ( FIELD_U32(a1, 384) > v62 )
                    v30 += v62;
                  v31 = *v30 - 0x40000000;
                  v32 = (float *)((char *)sinLutTable + ((v31 >> 20) & 0xFF0));
                  v33 = *v32;
                  v34 = v32[1];
                  v35 = v32[2];
                  v36 = v32[3];
                  v65 = v71;
                  v66 = v72;
                  v37 = (float)(v31 & 0xFFFFFF) * 0.000000059605;
                  v67 = v69 + (float)(v29 * (float)(v35 + (float)(v37 * v36)));
                  v68 = v70 + (float)(v29 * (float)(v33 + (float)(v34 * v37)));
                }
              }
              goto LABEL_28;
            }
          }
        }
        else
        {
          v28 = -1073741824;
          if ( v27 >= 0.0 )
            v28 = 0x40000000;
          if ( v12 )
            goto LABEL_21;
        }
        v38 = a6[1346];
        if ( v38 != 0.0 )
        {
          v39 = **(_DWORD **)(a1 + 388) - 0x40000000;
          v40 = (float *)((char *)sinLutTable + ((v39 >> 20) & 0xFF0));
          v41 = (float)(v39 & 0xFFFFFF) * 0.000000059605;
          v42 = v72 + (float)(v38 * (float)(*v40 + (float)(v40[1] * v41)));
          v65 = v71 + (float)(v38 * (float)(v40[2] + (float)(v41 * v40[3])));
          v66 = v42;
          v67 = v69;
          v68 = v70;
        }
LABEL_28:
        sub_6090ECAC(a4, &v65, &v64);
        if ( v43 <= v15 )
        {
          v44 = v68 - v66;
          v45 = v67 - v65;
          v46 = v66 + (float)((float)(v68 - v66) * v64);
          v47 = v65 + (float)((float)(v67 - v65) * v64);
          v48 = v46 - v66;
          v49 = v47 - v65;
          v50 = (float)(v48 * v48) + (float)(v49 * v49);
          if ( v50 <= 0.0001 && v50 >= -0.0001 )
            goto LABEL_31;
          v59 = v46 - v68;
          v60 = v47 - v67;
          if ( (float)((float)(v59 * v59) + (float)(v60 * v60)) > 0.0
            && (float)((float)(v44 * v48) + (float)(v45 * v49)) > 0.0
            && (float)((float)-(float)(v44 * v59) - (float)(v45 * v60)) > 0.0 )
          {
LABEL_31:
            v51 = (float)((float)(a4[1] - v46) * (float)(a4[1] - v46))
                + (float)((float)(*a4 - v47) * (float)(*a4 - v47));
            if ( v51 <= v11 )
            {
              *(_DWORD *)a2 = 16842753;
              FIELD_U64(a2, 40) = FIELD_U64(a1, 304);
              v52 = 0;
              FIELD_U32(a2, 4) = v21;
              if ( v50 > 0.0 )
                v52 = v28 + 0x40000000;
              FIELD_U32(a2, 8) = v52;
              FIELD_F32(a2, 12) = v47;
              FIELD_F32(a2, 16) = v46;
              sub_6014A2F0(a2, a1);
              v53 = (float)v21 * FIELD_F32(a1, 420);
              if ( v12
                || (v54 = *(float **)(a1 + 152),
                    v55 = *(float **)(a1 + 396),
                    v56 = v46 - (float)((float)(v54[1] + FIELD_F32(a1, 176)) + v55[1]),
                    v57 = v47 - (float)((float)(*v54 + FIELD_F32(a1, 172)) + *v55),
                    (float)((float)(v44 * v56) + (float)(v45 * v57)) >= 0.0) )
              {
                v58 = v53 + sqrtf(v50);
              }
              else
              {
                v58 = v53 - sqrtf((float)(v56 * v56) + (float)(v57 * v57));
              }
              v11 = v51;
              FIELD_F32(a2, 48) = v58;
              v63 = 1;
            }
          }
        }
        ++v13;
        v12 += 8;
      }
      while ( v10 + v13 != 1 );
    }
  }
  return v63 & 1;
}
