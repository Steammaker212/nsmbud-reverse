/* sub_60998758
 * address: 0x60998758   size: 1300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998758(int a1, int a2, void (*a3)(void), int a4, void (__fastcall *a5)(int *))
{
  int result; // r0
  float32x4_t v6; // q4
  int v7; // r2
  int v8; // r4
  int v9; // r5
  int v10; // r6
  int v11; // r0
  int v12; // r5
  float32x4_t v13; // q0
  int v14; // r6
  _DWORD *v15; // r4
  _DWORD *v16; // r1
  float32x4_t v17; // q1
  float32x4_t v18; // q2
  int v19; // r3
  float v20; // s12
  float v21; // s4
  float v22; // s2
  float v23; // s0
  float *v24; // r12
  int v25; // r6
  _DWORD *v26; // r4
  _DWORD *v27; // r5
  int v28; // r2
  int v29; // r8
  int v30; // r9
  int v31; // r10
  int v32; // lr
  int v33; // r8
  int v34; // r1
  _DWORD *v35; // r10
  int v36; // r4
  int v37; // r5
  int v38; // r6
  int v39; // r7
  int v40; // lr
  _DWORD *v41; // lr
  int v42; // r2
  int v43; // r4
  int v44; // r5
  int v45; // r6
  int v46; // r7
  _DWORD *v47; // lr
  int v48; // r3
  int v49; // r4
  int v50; // r5
  int v51; // r6
  int v52; // r7
  _DWORD *v53; // lr
  int v54; // r3
  int v55; // r4
  int v56; // r5
  int v57; // r6
  int v58; // r7
  float v59; // s0
  int v60; // r2
  int v61; // r3
  float *v62; // r7
  int v63; // r4
  int v64; // r0
  int v65; // r8
  _DWORD *v66; // r1
  _DWORD *v67; // r4
  int v68; // r5
  int v69; // r0
  int v70; // r5
  int v71; // r9
  int v72; // r7
  int v73; // r6
  int v74; // r0
  int v75; // r5
  int v76; // r7
  const char *v77; // r10
  size_t v78; // r9
  int v79; // r0
  int v80; // r1
  int *v81; // r5
  int v82; // r2
  int v83; // r3
  unsigned __int16 *v84; // r0
  size_t v85; // r6
  size_t v86; // r2
  int v87; // r0
  int v88; // r1
  int v89; // r1
  unsigned int *v90; // r0
  int v91; // r1
  int v92; // t1
  int v93; // r7
  int v94; // r3
  int v95; // r2
  unsigned __int16 *v96; // r3
  int v97; // r2
  _DWORD *v99; // [sp+20h] [bp-68h]
  int v100; // [sp+24h] [bp-64h]
  int v101; // [sp+28h] [bp-60h]
  int v103; // [sp+34h] [bp-54h]
  int v104; // [sp+38h] [bp-50h]
  int v105; // [sp+40h] [bp-48h] BYREF
  int v106; // [sp+44h] [bp-44h]
  int v107; // [sp+48h] [bp-40h]

  result = FIELD_U16(a1, 106);
  v101 = result;
  if ( result )
  {
    v6.n128_u32[3] = 0;
    v7 = 0;
    do
    {
      v8 = 7 * v7;
      v9 = FIELD_U32(a1, 64);
      v10 = *(unsigned __int16 *)(FIELD_U32(a1, 48) + 112 * v7 + 94);
      v104 = v7;
      v107 = 0;
      v106 = 0;
      v105 = 0;
      a5(&v105);
      if ( (_BYTE)v105 )
      {
        v11 = v9 + 184 * v10;
        v12 = v106;
        if ( v106 )
        {
          FIELD_U32(v11, 160) |= 1u;
          a3();
          v13.n128_u64[0] = *(_QWORD *)v107;
          v6.n128_u64[0] = FIELD_U64(v107, 12);
          v6.n128_u32[2] = FIELD_U32(v107, 20);
          v14 = FIELD_U32(a1, 48) + 16 * v8;
          v13.n128_u64[1] = FIELD_U32(v107, 8);
          v15 = (_DWORD *)(v14 + 32);
          v16 = *(_DWORD **)(v14 + 64);
          v17 = vaddq_f32(v6, v13);
          v18 = vsubq_f32(v6, v13);
          v19 = *(unsigned __int16 *)(FIELD_U32(v14, 32) + 52);
          v20 = v17.n128_f32[0] * 0.5;
          v21 = v18.n128_f32[0] * 0.5;
          v22 = v18.n128_f32[1] * 0.5;
          v23 = v18.n128_f32[2] * 0.5;
          v24 = (float *)&v16[6 * v19];
          *v24 = v20;
          v24[1] = v17.n128_f32[1] * 0.5;
          v24[2] = v17.n128_f32[2] * 0.5;
          v24[3] = v18.n128_f32[0] * 0.5;
          v24[4] = v18.n128_f32[1] * 0.5;
          v24[5] = v18.n128_f32[2] * 0.5;
          v103 = v12;
          if ( v19 )
          {
            v100 = v14;
            v25 = 0;
            v99 = v15;
            if ( (v19 & 3) != 0 )
            {
              v26 = v16;
              do
              {
                ++v25;
                v27 = v26;
                v26 += 6;
                v28 = *((_DWORD *)v24 + 1);
                v29 = *((_DWORD *)v24 + 2);
                v30 = *((_DWORD *)v24 + 3);
                v31 = *((_DWORD *)v24 + 4);
                v32 = *((_DWORD *)v24 + 5);
                *v27 = *(_DWORD *)v24;
                v27[1] = v28;
                v27[2] = v29;
                v27[3] = v30;
                v27[4] = v31;
                v27[5] = v32;
              }
              while ( (v19 & 3) != v25 );
            }
            if ( (unsigned int)(v19 - 1) >= 3 )
            {
              v33 = v19 - v25;
              v34 = (int)&v16[6 * v25 + 18];
              do
              {
                v35 = (_DWORD *)(v34 - 72);
                v33 -= 4;
                v36 = *((_DWORD *)v24 + 1);
                v37 = *((_DWORD *)v24 + 2);
                v38 = *((_DWORD *)v24 + 3);
                v39 = *((_DWORD *)v24 + 4);
                v40 = *((_DWORD *)v24 + 5);
                *v35 = *(_DWORD *)v24;
                v35[1] = v36;
                v35[2] = v37;
                v35[3] = v38;
                v35[4] = v39;
                v35[5] = v40;
                v41 = (_DWORD *)(v34 - 48);
                v42 = *((_DWORD *)v24 + 1);
                v43 = *((_DWORD *)v24 + 2);
                v44 = *((_DWORD *)v24 + 3);
                v45 = *((_DWORD *)v24 + 4);
                v46 = *((_DWORD *)v24 + 5);
                *v41 = *(_DWORD *)v24;
                v41[1] = v42;
                v41[2] = v43;
                v41[3] = v44;
                v41[4] = v45;
                v41[5] = v46;
                v47 = (_DWORD *)(v34 - 24);
                v48 = *((_DWORD *)v24 + 1);
                v49 = *((_DWORD *)v24 + 2);
                v50 = *((_DWORD *)v24 + 3);
                v51 = *((_DWORD *)v24 + 4);
                v52 = *((_DWORD *)v24 + 5);
                *v47 = *(_DWORD *)v24;
                v47[1] = v48;
                v47[2] = v49;
                v47[3] = v50;
                v47[4] = v51;
                v47[5] = v52;
                v53 = (_DWORD *)v34;
                v34 += 96;
                v54 = *((_DWORD *)v24 + 1);
                v55 = *((_DWORD *)v24 + 2);
                v56 = *((_DWORD *)v24 + 3);
                v57 = *((_DWORD *)v24 + 4);
                v58 = *((_DWORD *)v24 + 5);
                *v53 = *(_DWORD *)v24;
                v53[1] = v54;
                v53[2] = v55;
                v53[3] = v56;
                v53[4] = v57;
                v53[5] = v58;
              }
              while ( v33 );
            }
            v22 = v24[4];
            v12 = v103;
            v14 = v100;
            v15 = v99;
            v23 = v24[5];
            v21 = v24[3];
          }
          v59 = sqrtf((float)((float)(v22 * v22) + (float)(v21 * v21)) + (float)(v23 * v23));
          if ( FIELD_U8(v14, 103) )
          {
            v60 = 0;
            v61 = 0;
            do
            {
              ++v61;
              v62 = (float *)(FIELD_U32(v14, 72) + v60);
              v60 += 4;
              *v62 = v59;
            }
            while ( v61 < FIELD_U8(v14, 103) );
          }
          v63 = *v15;
          FIELD_U32(v63, 16) = sub_6083DD28(v12);
          v64 = sub_6083DD30(v12);
          v65 = 0;
          FIELD_U32(v63, 36) = 3;
          FIELD_U32(v63, 40) = 1;
          FIELD_U32(v63, 44) = v64;
          v66 = *(_DWORD **)v63;
          *v66 = 0;
          v66[1] = v64;
          v67 = *(_DWORD **)(v14 + 24);
          v67[22] = (unsigned int)sub_6083DD1C(v12, 0) >> 3;
          while ( 1 )
          {
            v76 = v67[6];
            if ( v76 )
            {
              v77 = off_60C60A08[v65];
              v78 = strlen(v77);
              v79 = FIELD_U16(v76, 12);
              v81 = (int *)(v76 + 8 + 16 * v79);
              v80 = *v81;
              if ( FIELD_U32(v76, 8) < *v81 )
              {
                do
                {
                  v82 = 0;
                  if ( v78 > v80 >> 3 )
                    v82 = ((unsigned __int8)v77[v78 + ~(v80 >> 3)] >> (v80 & 7)) & 1;
                  v83 = *(_DWORD *)(v76 + 8 + 16 * v79);
                  v79 = *(unsigned __int16 *)(v76 + 8 + 16 * v79 + 2 * v82 + 4);
                  v81 = (int *)(v76 + 8 + 16 * v79);
                  v80 = *v81;
                }
                while ( v83 < *v81 );
              }
              v84 = (unsigned __int16 *)v81[2];
              v85 = *v84;
              v86 = v85;
              if ( v78 < v85 )
                v86 = v78;
              if ( v86 )
              {
                v87 = memcmp(v84 + 1, v77, v86);
                v88 = 1;
                if ( v87 )
                  v88 = v87;
                if ( v78 >= v85 && !v87 )
                {
LABEL_34:
                  v88 = 0;
                  if ( v85 < v78 )
                    v88 = -1;
                }
                if ( !v88 )
                {
                  v68 = (int)v81 - v76 - 24;
                  if ( v68 >> 4 != -1 && sub_6083DCDC(v103, v65) )
                  {
                    v69 = v68 >> 4;
                    v70 = v67[12];
                    v71 = v67[14];
                    v72 = v67[16];
                    v73 = *(unsigned __int8 *)(v67[4] + 16 * v69 + 14);
                    *(_DWORD *)(v70 + 4 * v73) = sub_6083DCF0(v103, v65);
                    v74 = ((int (__fastcall *)(int))loc_6083DD84)(v65);
                    *(_DWORD *)(v72 + 16 * v73) = v74;
                    *(_DWORD *)(v71 + 16 * v73) = v67[22] * v74;
                    v75 = v67[4] + 16 * v65;
                    FIELD_U32(v75, 8) = ((int (__fastcall *)(int))loc_6083DD4C)(v65);
                    FIELD_U16(v75, 12) = ((int (__fastcall *)(int))loc_6083DDBC)(v65);
                  }
                }
                goto LABEL_37;
              }
              if ( v78 >= v85 )
                goto LABEL_34;
            }
LABEL_37:
            if ( ++v65 == 5 )
              goto LABEL_45;
          }
        }
        v89 = *(_DWORD *)(FIELD_U32(a1, 32) + 24) + 96 * *(unsigned __int16 *)(FIELD_U32(a1, 48) + 16 * v8 + 96);
        FIELD_U32(v89, 52) &= ~1u;
        v92 = FIELD_U32(v11, 160);
        v90 = (unsigned int *)(v11 + 160);
        v91 = v92;
        if ( (v92 & 1) != 0 )
        {
          if ( v104 < 1 )
          {
LABEL_44:
            *v90 = v91 & 0xFFFFFFFE;
          }
          else
          {
            v93 = 0;
            v94 = FIELD_U32(a1, 48);
            v95 = v94 + 16 * v8;
            v96 = (unsigned __int16 *)(v94 + 94);
            v97 = FIELD_U16(v95, 94);
            while ( *v96 != v97 )
            {
              ++v93;
              v96 += 56;
              if ( v93 >= v104 )
                goto LABEL_44;
            }
          }
        }
      }
LABEL_45:
      result = v101;
      v7 = v104 + 1;
    }
    while ( v104 + 1 != v101 );
  }
  return result;
}
