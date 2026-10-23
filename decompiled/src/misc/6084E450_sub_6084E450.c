/* sub_6084E450
 * address: 0x6084E450   size: 1812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084E450(int a1, float *a2, unsigned int *a3, int a4)
{
  int v4; // r5
  float v7; // s16
  float v8; // r4
  float v9; // r0
  float v10; // r1
  int v11; // r0
  float v12; // s0
  float *v13; // r0
  float *v14; // r1
  float v15; // s0
  int v16; // r1
  int (__fastcall *v17)(_DWORD *); // r1
  _DWORD *v18; // r0
  unsigned int v19; // r6
  int v20; // r0
  float v21; // r1
  unsigned int v22; // r9
  float v23; // s20
  float v24; // r4
  int v25; // r10
  unsigned int v26; // r11
  float v27; // s24
  float v28; // s22
  char v29; // r2
  bool v30; // zf
  int v31; // r0
  float v32; // s0
  int v33; // r6
  bool v34; // cf
  float v35; // s26
  float v36; // s28
  int v37; // r0
  float v38; // s30
  int v39; // s17
  float v40; // s0
  float v41; // s2
  float *v42; // r0
  float *v43; // r0
  int v44; // r0
  int v45; // r0
  float *v46; // r2
  float *v47; // r2
  float *v48; // r2
  float *v49; // r2
  int v50; // kr04_4
  int (__fastcall *v51)(_DWORD *); // r1
  _DWORD *v52; // r0
  int v53; // r0
  int v54; // r0
  float *v55; // r1
  float v56; // s20
  float *v57; // r1
  char v58; // r0
  int v60; // [sp+8h] [bp-170h]
  int v62; // [sp+20h] [bp-158h]
  int v63; // [sp+24h] [bp-154h]
  unsigned int v64; // [sp+2Ch] [bp-14Ch]
  char v65; // [sp+30h] [bp-148h]
  float v66[2]; // [sp+38h] [bp-140h] BYREF
  float v67; // [sp+40h] [bp-138h]
  int v68; // [sp+44h] [bp-134h]
  _DWORD v69[22]; // [sp+48h] [bp-130h] BYREF
  float v70[9]; // [sp+A0h] [bp-D8h] BYREF
  float v71; // [sp+C4h] [bp-B4h] BYREF
  float v72; // [sp+C8h] [bp-B0h] BYREF
  float v73; // [sp+CCh] [bp-ACh] BYREF
  float v74; // [sp+D0h] [bp-A8h] BYREF
  float v75; // [sp+D4h] [bp-A4h] BYREF
  unsigned int v76; // [sp+D8h] [bp-A0h] BYREF
  int (__fastcall *v77)(_DWORD); // [sp+DCh] [bp-9Ch]
  int v78; // [sp+E0h] [bp-98h]
  float v79; // [sp+E4h] [bp-94h] BYREF
  float v80; // [sp+E8h] [bp-90h] BYREF
  float v81; // [sp+ECh] [bp-8Ch]
  float v82; // [sp+F0h] [bp-88h]
  float v83; // [sp+F4h] [bp-84h]
  float v84; // [sp+F8h] [bp-80h]
  float v85; // [sp+FCh] [bp-7Ch]
  float v86; // [sp+100h] [bp-78h]
  _BOOL4 v87; // [sp+104h] [bp-74h]
  unsigned int v88; // [sp+108h] [bp-70h]

  v4 = a1;
  v7 = FIELD_F32(a1, 52);
  v8 = *(float *)a3;
  v9 = FIELD_F32(a1, 12);
  v10 = FIELD_F32(v4, 16);
  v80 = *(float *)&v4;
  v81 = v8;
  LODWORD(v82) = LODWORD(v8) + 2 * a4;
  v64 = LODWORD(v82);
  v83 = 0.0;
  v84 = 0.0;
  v85 = v9;
  v86 = v10;
  v87 = 0;
  v88 = 0;
  v79 = 0.0;
  sub_60850190(&v76, FIELD_U32(v4, 40), 0);
  v11 = FIELD_U32(v4, 40);
  if ( v11 )
    v12 = (float)(*(int (__fastcall **)(int))(*(_DWORD *)v11 + 44))(v11);
  else
    v12 = 0.0;
  v13 = &v75;
  v14 = (float *)v69;
  v15 = (float)(FIELD_F32(v4, 60) + (float)(v12 * FIELD_F32(v4, 16))) - FIELD_F32(v4, 60);
  v75 = v15;
  *a2 = 0.0;
  a2[2] = 0.0;
  v69[0] = 0;
  if ( v15 < 0.0 )
    v14 = &v75;
  v16 = *(_DWORD *)v14;
  if ( v15 <= 0.0 )
    v13 = (float *)v69;
  *((_DWORD *)a2 + 1) = v16;
  v69[0] = 0;
  a2[3] = *v13;
  v76 = LODWORD(v8);
  (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)(v4 + 76) + 28))(FIELD_U32(v4, 76), &v80);
  v17 = (int (__fastcall *)(_DWORD *))v77;
  v18 = (unsigned int *)((char *)&v76 + (v78 >> 1));
  if ( (v78 & 1) != 0 )
    v17 = *(int (__fastcall **)(_DWORD *))((char *)v77 + *v18);
  v19 = v64;
  v20 = v17(v18);
  v21 = *(float *)&v76;
  v22 = v20;
  if ( v76 <= v64 )
  {
    v23 = 0.0;
    v60 = a4;
    v24 = 0.0;
    v25 = 0;
    v26 = 0;
    v62 = v4;
    v27 = 0.0;
    v65 = 0;
    do
    {
      v28 = v79;
      v29 = v26;
      if ( v26 )
        v29 = 1;
      v63 = (v7 < 3.4028e38) & (unsigned __int8)v29;
      while ( 1 )
      {
        while ( v22 <= 0x1F )
        {
          v30 = v22 == 10;
          if ( v22 == 10 )
            v30 = FIELD_U8(v4, 81) == 0;
          if ( v30 )
          {
            v31 = (*(int (__fastcall **)(_DWORD, unsigned int, _DWORD))(**(_DWORD **)(v4 + 40) + 80))(
                    FIELD_U32(v4, 40),
                    v88,
                    0);
            v32 = FIELD_F32(v4, 12);
            v21 = *(float *)&v76;
            v88 = 0;
            v24 = v27 + (float)((float)v31 * v32);
            v28 = v24;
            v23 = v24;
          }
          v71 = v24;
          v81 = v21;
          v72 = 0.0;
          v73 = 0.0;
          v74 = 0.0;
          v87 = (v25 & 1) == 0;
          FIELD_F32(v4, 20) = v24;
          if ( !v26 || v7 >= 3.4028e38 || v22 == 10 )
            goto LABEL_53;
          v70[0] = v80;
          v70[1] = v81;
          v70[2] = v82;
          v70[3] = v83;
          v70[4] = v84;
          v70[5] = v85;
          v70[6] = v86;
          LODWORD(v70[7]) = v87;
          LODWORD(v70[8]) = v88;
          qmemcpy(v69, (const void *)v4, 0x54u);
          v33 = 0;
          LODWORD(v70[0]) = v69;
          v68 = 0;
          v67 = 0.0;
          v66[1] = 0.0;
          v66[0] = 0.0;
          (*(void (__fastcall **)(_DWORD, float *, float *, unsigned int))(**(_DWORD **)(v4 + 76) + 16))(
            FIELD_U32(v4, 76),
            v66,
            v70,
            v22);
          if ( (float)(v67 - v66[0]) > 0.0 && (float)(*(float *)&v69[5] - v83) > FIELD_F32(v4, 52) )
          {
            v33 = 2;
            v22 = 10;
            v76 = v26;
            v65 = 1;
          }
          nullsub_88();
          if ( !v33 )
          {
            v19 = v64;
            v4 = v62;
LABEL_53:
            v79 = v28;
            v44 = (*(int (__fastcall **)(_DWORD, float *, float *, unsigned int))(**(_DWORD **)(v4 + 76) + 16))(
                    FIELD_U32(v4, 76),
                    &v71,
                    &v80,
                    v22);
            v21 = v81;
            v45 = v44 - 1;
            v76 = LODWORD(v81);
            v46 = a2;
            if ( v71 < *a2 )
              v46 = &v71;
            *a2 = *v46;
            v47 = a2 + 1;
            if ( v72 < a2[1] )
              v47 = &v72;
            a2[1] = *v47;
            v48 = a2 + 2;
            if ( a2[2] < v73 )
              v48 = &v73;
            a2[2] = *v48;
            v49 = a2 + 3;
            if ( a2[3] < v74 )
              v49 = &v74;
            a2[3] = *v49;
            v24 = FIELD_F32(v4, 20);
            v23 = v24;
            v79 = v24;
            v50 = v25;
            v25 = 0;
            switch ( v45 )
            {
              case 0:
                goto LABEL_63;
              case 1:
                v25 = 1;
                v27 = v24;
                goto LABEL_65;
              case 2:
                goto LABEL_72;
              case 3:
                *a3 += 2 * v60;
                v58 = 0;
                return v58 & 1;
              default:
                v25 = v50;
LABEL_63:
                v27 = v24;
                break;
            }
            goto LABEL_65;
          }
          v21 = *(float *)&v76;
          v19 = v64;
          v4 = v62;
          v27 = v24;
          if ( v76 > v64 )
            goto LABEL_71;
        }
        if ( (v22 & 0xFFFFFF00) == 0x2000 )
        {
          if ( v22 - 8234 < 5 )
            goto LABEL_64;
          v34 = v22 - 8294 >= 4;
          if ( v22 - 8294 >= 4 )
            v34 = v22 - 8206 >= 2;
          if ( !v34 )
          {
LABEL_64:
            v79 = v28;
            goto LABEL_65;
          }
        }
        v35 = v27;
        if ( (v25 & 1) != 0 )
          v35 = v27 + FIELD_F32(v4, 56);
        v36 = FIELD_U8(v4, 48)
            ? FIELD_F32(v4, 32)
            : (float)(*(int (__fastcall **)(_DWORD, unsigned int))(**(_DWORD **)(v4 + 40) + 64))(
                       FIELD_U32(v4, 40),
                       v22)
            * FIELD_F32(v4, 12);
        v37 = (*(int (__fastcall **)(_DWORD, unsigned int, unsigned int))(**(_DWORD **)(v4 + 40) + 80))(
                FIELD_U32(v4, 40),
                v88,
                v22);
        v38 = FIELD_F32(v4, 12);
        v39 = v37;
        v40 = (float)(*(int (__fastcall **)(_DWORD, unsigned int, _DWORD))(**(_DWORD **)(v4 + 40) + 80))(
                       FIELD_U32(v4, 40),
                       v22,
                       0)
            * v38;
        v41 = (float)((float)(v35 + v36) + (float)((float)v39 * v38)) + v40;
        if ( v63 != 1 || (float)(v41 + FIELD_F32(v4, 64)) <= FIELD_F32(v4, 52) )
          break;
        v22 = 10;
        v21 = *(float *)&v26;
        v76 = v26;
        v65 = 1;
        if ( v26 > v19 )
        {
LABEL_71:
          v79 = v28;
          goto LABEL_72;
        }
      }
      v79 = (float)((float)(v35 + v36) + (float)((float)v39 * v38)) + v40;
      v23 = v41 - v40;
      v25 = 1;
      v42 = a2;
      v24 = v41 - v40;
      v27 = v41 - v40;
      if ( v41 < *a2 )
        v42 = &v79;
      *a2 = *v42;
      v43 = a2 + 2;
      if ( a2[2] < v41 )
        v43 = &v79;
      a2[2] = *v43;
      v79 = v41 - v40;
      v88 = v22;
      v21 = *(float *)&v76;
LABEL_65:
      if ( v7 < 3.4028e38 )
        v26 = LODWORD(v21);
      v51 = (int (__fastcall *)(_DWORD *))v77;
      v52 = (unsigned int *)((char *)&v76 + (v78 >> 1));
      if ( (v78 & 1) != 0 )
        v51 = *(int (__fastcall **)(_DWORD *))((char *)v77 + *v52);
      v53 = v51(v52);
      v21 = *(float *)&v76;
      v22 = v53;
    }
    while ( v76 <= v19 );
  }
  else
  {
    v23 = 0.0;
    v65 = 0;
  }
LABEL_72:
  v54 = (*(int (__fastcall **)(_DWORD, unsigned int, _DWORD))(**(_DWORD **)(v4 + 40) + 80))(
          FIELD_U32(v4, 40),
          v88,
          0);
  v55 = a2;
  v56 = v23 + (float)((float)v54 * FIELD_F32(v4, 12));
  v79 = v56;
  if ( v56 < *a2 )
    v55 = &v79;
  *a2 = *v55;
  v57 = a2 + 2;
  if ( a2[2] < v56 )
    v57 = &v79;
  a2[2] = *v57;
  *a3 = v76;
  (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)(v4 + 76) + 32))(FIELD_U32(v4, 76), &v80);
  v58 = v65;
  return v58 & 1;
}
