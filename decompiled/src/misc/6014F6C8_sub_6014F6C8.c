/* sub_6014F6C8
 * address: 0x6014F6C8   size: 1284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014F6C8(int a1, int a2, int a3)
{
  int v4; // r4
  _BYTE *v5; // r0
  int v6; // r5
  int v7; // r0
  float *v9; // r0
  float v10; // s16
  float v11; // s18
  float v12; // s4
  float v13; // s6
  float *v14; // r0
  float v15; // s10
  float *v16; // r0
  float v17; // s20
  float v18; // s22
  int v19; // r0
  _DWORD *v20; // r8
  int v21; // r7
  _DWORD *v22; // r5
  float v23; // s0
  float v24; // s4
  int v25; // r0
  float *v26; // r1
  float v27; // s2
  float v28; // s4
  int v29; // r0
  int v30; // r1
  float v31; // r2
  int v32; // r3
  int v33; // r5
  _DWORD *v34; // r0
  _DWORD *v35; // r3
  int v36; // r5
  int v37; // r3
  int v38; // r4
  int v39; // r5
  int v40; // r7
  _DWORD *v41; // r5
  float v42; // r0
  float v43; // s2
  int v44; // r1
  float v45; // s0
  float *v46; // r2
  float v47; // s4
  float v48; // s2
  int v49; // r1
  int v50; // r2
  float v51; // r3
  int v52; // r6
  int v53; // r5
  _DWORD *v54; // r1
  _DWORD *v55; // r5
  int v56; // r6
  int v57; // r4
  int v58; // r5
  int v59; // r6
  _BOOL4 v60; // [sp+Ch] [bp-C4h]
  char v62; // [sp+18h] [bp-B8h]
  int v63; // [sp+1Ch] [bp-B4h]
  int v64; // [sp+20h] [bp-B0h]
  int v65; // [sp+24h] [bp-ACh]
  float v66; // [sp+28h] [bp-A8h] BYREF
  float v67; // [sp+2Ch] [bp-A4h]
  int v68; // [sp+30h] [bp-A0h]
  float v69; // [sp+34h] [bp-9Ch]
  float v70; // [sp+38h] [bp-98h]
  float v71; // [sp+3Ch] [bp-94h]
  float v72; // [sp+40h] [bp-90h]
  int v73; // [sp+44h] [bp-8Ch]
  _DWORD *v74; // [sp+48h] [bp-88h]
  int v75; // [sp+4Ch] [bp-84h]
  int v76; // [sp+50h] [bp-80h]
  int v77; // [sp+54h] [bp-7Ch]
  int v78; // [sp+58h] [bp-78h]
  int v79; // [sp+5Ch] [bp-74h]
  _DWORD v80[6]; // [sp+60h] [bp-70h] BYREF
  float v81[2]; // [sp+78h] [bp-58h] BYREF
  float v82; // [sp+80h] [bp-50h] BYREF
  float v83; // [sp+84h] [bp-4Ch]

  v4 = a3;
  v80[0] = -8388609;
  v80[1] = -8388609;
  v80[2] = -8388609;
  v80[3] = -8388609;
  v80[4] = -8388609;
  v80[5] = -8388609;
  v5 = (_BYTE *)(a1 + a3);
  if ( v5[2341] )
  {
    v6 = 0;
    if ( !v5[2345] )
      v6 = a1 + 12 * a3 + 2356;
    if ( a3 > 1 )
      goto LABEL_12;
LABEL_9:
    if ( v6 && v5[2524] )
      v6 = a1 + 12 * a3 + 2500;
    goto LABEL_12;
  }
  v6 = (unsigned __int8)v5[2349];
  if ( v5[2349] )
    v6 = a1 + 12 * a3 + 2404;
  if ( a3 <= 1 )
    goto LABEL_9;
LABEL_12:
  if ( !v6 )
    return 0;
  v7 = (unsigned __int8)v5[2349];
  if ( v7 )
    v7 = a1 + 12 * a3 + 2452;
  if ( a3 > 1 )
  {
    sub_60153134(v7, &v66);
    sub_60153134(v6, &v82);
  }
  else
  {
    sub_60153190(v7, &v66);
    sub_60153190(v6, &v82);
  }
  v9 = *(float **)(a1 + 2208);
  v10 = v82;
  v11 = v83;
  v12 = *v9;
  v13 = v9[1];
  v14 = (float *)((char *)&unk_60AF4A10 + 8 * v4);
  v15 = v14[1];
  v81[0] = (float)(v12 + v66) + *v14;
  v81[1] = (float)(v13 + v67) + v15;
  v16 = *(float **)(a1 + 2204);
  v17 = v16[1] + v83;
  v18 = *v16 + v82;
  if ( v4 == 3 )
    v17 = v17 + FIELD_F32(a1, 2328);
  v82 = *v16 + v82;
  v83 = v17;
  v19 = FIELD_U32(a1, 88);
  if ( v19 )
  {
    v20 = *(_DWORD **)(a1 + 96);
    v63 = v4;
    v65 = a1;
    v64 = a1 + 2272;
    if ( v4 >= 2 )
    {
      v40 = 4 * v19;
      v62 = 0;
      v60 = v4 != 3;
      do
      {
        v41 = (_DWORD *)*v20;
        if ( sub_6014FD40(v65, *v20, v4) == 1 )
        {
          ((void (__fastcall *)(_DWORD *, int))loc_601607F0)(v41, v64);
          v66 = 0.0;
          v67 = NAN;
          v68 = 0;
          v69 = 0.0;
          v70 = 0.0;
          v71 = 0.0;
          v72 = 0.0;
          v73 = 0;
          v74 = 0;
          v76 = 0;
          v77 = 0;
          v78 = 0;
          v79 = 0;
          if ( (*(int (__fastcall **)(_DWORD *, float *, float *, float *, int, int))(*v41 + 36))(
                 v41,
                 &v66,
                 v81,
                 &v82,
                 v4,
                 v65) == 1 )
          {
            v42 = v70;
            v43 = v82;
            v44 = v41[56];
            v45 = v70;
            v46 = (float *)&v80[v44];
            v47 = (float)((float)(v18 - v82) * (float)(v18 - v82)) + (float)((float)(v17 - v70) * (float)(v17 - v70));
            if ( v47 >= *v46 )
            {
              *v46 = v47;
              v48 = v43 - v10;
              v49 = 7 * v44;
              v71 = v48;
              v72 = v45 - v11;
              v74 = v41;
              v50 = v41[36];
              if ( v50 )
                v73 = FIELD_U32(v50, 8);
              v51 = v67;
              v52 = v68;
              *(float *)(a2 + 8 * v49) = v66;
              v53 = a2 + 8 * v49;
              FIELD_F32(v53, 4) = v51;
              FIELD_U32(v53, 8) = v52;
              FIELD_F32(v53, 12) = v69;
              FIELD_F32(v53, 16) = v42;
              FIELD_F32(v53, 20) = v48;
              FIELD_F32(v53, 24) = v45 - v11;
              v54 = (_DWORD *)(v53 + 28);
              v55 = v74;
              v56 = v75;
              *v54 = v73;
              v54[1] = v55;
              v54[2] = v56;
              v54 += 3;
              v57 = v77;
              v58 = v78;
              v59 = v79;
              *v54 = v76;
              v54[1] = v57;
              v54[2] = v58;
              v54[3] = v59;
              if ( HIBYTE(v66) == 0 || v60 )
              {
                v4 = v63;
                v62 = 1;
              }
              else
              {
                v62 = 1;
                if ( (v77 & 0xF) != 1 )
                {
                  v4 = v63;
                }
                else
                {
                  v4 = v63;
                  if ( v45 > v83 )
                    v83 = v42;
                }
              }
            }
          }
        }
        v40 -= 4;
        ++v20;
      }
      while ( v40 );
    }
    else
    {
      v21 = 4 * v19;
      v62 = 0;
      do
      {
        v22 = (_DWORD *)*v20;
        if ( sub_6014FD40(a1, *v20, v4) == 1 )
        {
          ((void (__fastcall *)(_DWORD *, int))loc_601607F0)(v22, v64);
          v66 = 0.0;
          v67 = NAN;
          v68 = 0;
          v69 = 0.0;
          v70 = 0.0;
          v71 = 0.0;
          v72 = 0.0;
          v73 = 0;
          v74 = 0;
          v76 = 0;
          v77 = 0;
          v78 = 0;
          v79 = 0;
          if ( (*(int (__fastcall **)(_DWORD *, float *, float *, float *, int, int))(*v22 + 36))(
                 v22,
                 &v66,
                 v81,
                 &v82,
                 v4,
                 a1) == 1 )
          {
            v23 = v69;
            v24 = v83;
            v25 = v22[56];
            v26 = (float *)&v80[v25];
            v27 = (float)((float)(v18 - v69) * (float)(v18 - v69)) + (float)((float)(v17 - v83) * (float)(v17 - v83));
            if ( v27 >= *v26 )
            {
              *v26 = v27;
              v28 = v24 - v11;
              v29 = 7 * v25;
              v71 = v23 - v10;
              v72 = v28;
              v74 = v22;
              v30 = v22[36];
              if ( v30 )
                v73 = FIELD_U32(v30, 8);
              v31 = v67;
              v32 = v68;
              *(float *)(a2 + 8 * v29) = v66;
              v33 = a2 + 8 * v29;
              FIELD_F32(v33, 4) = v31;
              FIELD_U32(v33, 8) = v32;
              FIELD_F32(v33, 12) = v23;
              FIELD_F32(v33, 16) = v70;
              FIELD_F32(v33, 20) = v23 - v10;
              FIELD_F32(v33, 24) = v28;
              v34 = (_DWORD *)(v33 + 28);
              v35 = v74;
              v36 = v75;
              *v34 = v73;
              v34[1] = v35;
              v34[2] = v36;
              v34 += 3;
              v37 = v77;
              v38 = v78;
              v39 = v79;
              *v34 = v76;
              v34[1] = v37;
              v34[2] = v38;
              v34[3] = v39;
              v62 = 1;
            }
          }
          v4 = v63;
        }
        v21 -= 4;
        ++v20;
      }
      while ( v21 );
    }
  }
  else
  {
    v62 = 0;
  }
  return v62 & 1;
}
