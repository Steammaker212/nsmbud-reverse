

/* ---- helpers replacing Hex-Rays `__asm` escapes (see scripts/fix_asm_escapes.py) ----
 * Each is the exact C equivalent of one NEON/VFP instruction the decompiler had no
 * idiom for. Kept small and named so the intent is visible at the call site. */
static inline unsigned int uxtb16(unsigned int x)
{
    /* UXTB16: keep bits [7:0] and [23:16], clear the rest. */
    return x & 0x00FF00FFu;
}
int __fastcall sub_6084A81C(int a1, int a2, int a3, int a4, float a5, float *a6)
{
  int v6; // r2
  int v7; // r7
  int v8; // r3
  _DWORD *v9; // r0
  _DWORD *v10; // r6
  int v11; // r7
  int v12; // r5
  int result; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r4
  unsigned __int8 *v17; // r10
  int v18; // r1
  int v19; // r12
  int v20; // r0
  int v21; // r3
  int v22; // r1
  float v23; // s14
  float v24; // s12
  float v25; // s10
  float v26; // s6
  float v27; // s3
  float v28; // s1
  int v29; // r11
  float v30; // s11
  float v31; // s12
  unsigned int v32; // r1
  float v33; // s8
  unsigned int v34; // lr
  unsigned int v35; // r8
  unsigned int v36; // r9
  float v37; // s7
  int v38; // r1
  int v39; // r8
  int v40; // r0
  int v41; // r5
  int v42; // r6
  int v43; // r2
  float v44; // s7
  float v45; // s5
  float v46; // s18
  float v47; // s9
  float v48; // s11
  float v49; // s20
  float v50; // s13
  int v51; // r6
  float v52; // s26
  float v53; // s30
  float v54; // s24
  float v55; // s16
  float v56; // s22
  float v57; // s5
  float v58; // s9
  float v59; // s11
  int v60; // r1
  int v61; // r8
  int v62; // r0
  int v63; // r2
  int v64; // r5
  int v65; // r3
  int v66; // r1
  int v67; // r12
  int v68; // lr
  unsigned __int8 *v69; // r5
  int v70; // r1
  int v71; // r0
  int v72; // r3
  int v73; // r2
  int v74; // r0
  int v75; // r2
  float v76; // s15
  float v77; // s6
  float v78; // s16
  int v79; // r8
  float v80; // s20
  float v81; // s18
  float v82; // s8
  float v83; // s12
  int v84; // r6
  int v85; // r1
  int v86; // r3
  int v87; // r4
  char v88; // r0
  _BYTE *v89; // r2
  char v90; // t1
  int v91; // r1
  __int16 v92; // t1
  float v93; // s14
  float v94; // s3
  float v95; // s1
  float v96; // s9
  float v97; // s11
  float v98; // s5
  float v99; // s13
  float v100; // s7
  __int16 v101; // r6
  __int16 v102; // r2
  __int16 v103; // r0
  __int16 v104; // r7
  __int16 v105; // r3
  __int16 v106; // r4
  int v107; // r11
  int v108; // r10
  int v109; // r9
  int v110; // r1
  int v111; // r0
  int v118; // r0
  int v121; // r2
  int v122; // [sp+8h] [bp-100h]
  __int16 v124; // [sp+10h] [bp-F8h]
  __int16 v125; // [sp+14h] [bp-F4h]
  __int16 v126; // [sp+18h] [bp-F0h]
  __int16 v127; // [sp+1Ch] [bp-ECh]
  __int16 v128; // [sp+20h] [bp-E8h]
  __int16 v129; // [sp+24h] [bp-E4h]
  __int16 v130; // [sp+28h] [bp-E0h]
  int v131; // [sp+2Ch] [bp-DCh]
  __int16 v132; // [sp+30h] [bp-D8h]
  int v133; // [sp+34h] [bp-D4h]
  __int16 v134; // [sp+34h] [bp-D4h]
  int v135; // [sp+38h] [bp-D0h]
  int v136; // [sp+3Ch] [bp-CCh]
  int v137; // [sp+3Ch] [bp-CCh]
  int v138; // [sp+40h] [bp-C8h]
  int v139; // [sp+44h] [bp-C4h]
  int v140; // [sp+44h] [bp-C4h]
  int v141; // [sp+48h] [bp-C0h]
  int v144; // [sp+54h] [bp-B4h]
  int v145; // [sp+58h] [bp-B0h]
  _DWORD v147[8]; // [sp+60h] [bp-A8h] BYREF
  _DWORD v148[34]; // [sp+80h] [bp-88h] BYREF

  v145 = *(_DWORD *)(*(_DWORD *)(a1 + 128) + 32);
  memset(v148, 0, 32);
  v6 = *(_DWORD *)(a1 + 108);
  if ( v6 >= 1 )
  {
    v7 = 0;
    v8 = 0;
    if ( (v6 & 1) != 0 )
    {
      v8 = 1;
      v148[0] = 0;
      v7 = *(_DWORD *)(a1 + 16);
    }
    if ( v6 != 1 )
    {
      v9 = (_DWORD *)(((unsigned int)v148 | (4 * v8)) + 4);
      v10 = (_DWORD *)(a1 + 12 * v8 + 16);
      do
      {
        *(v9 - 1) = v7;
        v8 += 2;
        v11 = *v10 + v7;
        *v9 = v11;
        v9 += 2;
        v12 = v10[3];
        v10 += 6;
        v7 = v12 + v11;
      }
      while ( v8 < v6 );
    }
  }
  result = v145;
  memset(v147, 0, sizeof(v147));
  if ( v145 )
  {
    v14 = 1;
    if ( a6 )
      v14 = 2;
    v141 = v14;
    v144 = *(_DWORD *)(a1 + 116);
    if ( a6 && v144 >= 1 )
    {
      v15 = 64;
      v16 = 47;
      v17 = (unsigned __int8 *)(a3 + 51);
      if ( a3 )
        v15 = 96;
      v133 = v15;
      v18 = 0;
      do
      {
        v19 = *(_DWORD *)(a1 + 120);
        v139 = v18;
        v20 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 124) + v18);
        v21 = v147[v20];
        v22 = v148[v20];
        v147[v20] = v21 + 1;
        v23 = a6[4];
        v24 = *(float *)(v19 + v16 - 43);
        v25 = v24 * a6[5];
        v26 = (float)*(__int16 *)(v19 + v16 - 3) + (float)(v23 * a6[6]);
        v27 = *(float *)(v19 + v16 - 47) * v23;
        v28 = (float)(v24 - v25) + (float)(*(float *)(v19 + v16 - 35) - a6[3]);
        v29 = v145 + a2 + (v21 + v22 * v141) * v133;
        v30 = v24 * v26;
        v31 = *(float *)(v19 + v16 - 39) + a6[2];
        v32 = *(unsigned __int8 *)a6
            | (*((unsigned __int8 *)a6 + 1) << 8)
            | ((*((unsigned __int8 *)a6 + 2) | (*((unsigned __int8 *)a6 + 3) << 8)) << 16);
        v33 = v30 / *(float *)(a1 + 136);
        v34 = *(unsigned __int8 *)(v19 + v16) * HIBYTE(v32) / 0xFFu;
        v35 = *((unsigned __int8 *)a6 + 4)
            | (*((unsigned __int8 *)a6 + 5) << 8)
            | ((*((unsigned __int8 *)a6 + 6) | (*((unsigned __int8 *)a6 + 7) << 8)) << 16);
        v36 = HIBYTE(v35) * *(unsigned __int8 *)(v19 + v16) / 0xFFu;
        if ( a3 )
        {
          if ( a4 == 1 )
          {
            v37 = v25 + v28;
          }
          else
          {
            v37 = 0.0;
            if ( !a4 )
              v37 = (float)(v25 + (float)(v28 + v28)) * 0.5;
          }
          v44 = v37 - a5;
          v45 = *(float *)(v17 - 27);
          v46 = *(float *)(v17 - 31);
          v47 = *(float *)(v17 - 43);
          v48 = *(float *)(v17 - 23);
          v49 = *(float *)(v17 - 35);
          v50 = *(float *)(v17 - 39);
          v51 = *(_DWORD *)(v17 - 19);
          v52 = *(float *)(v17 - 51);
          v53 = *(float *)(v17 - 47);
          v54 = v45 * v47;
          v136 = *(_DWORD *)(v17 - 15);
          v135 = *(_DWORD *)(v17 - 11);
          v55 = (float)(v49 * v47) - (float)(v48 * (float)(v46 * v45));
          v56 = (float)(v48 * v47) + (float)(v49 * (float)(v46 * v45));
          v57 = (float)(v48 * v46) - (float)(v49 * (float)(v45 * v47));
          v58 = (float)(v48 * v54) + (float)(v49 * v46);
          v59 = -(float)((float)(v50 * v48) * v52);
          if ( *(_BYTE *)(a1 + 135) )
          {
            v36 = *v17 * (unsigned int)(unsigned __int8)v36 / 0xFF;
            v34 = *(v17 - 4) * (unsigned int)(unsigned __int8)v34 / 0xFF;
          }
          v60 = v32 & 0xFFFFFF;
          v61 = v35 & 0xFFFFFF;
          v62 = *(unsigned __int8 *)(v19 + v16 - 1);
          *(float *)v29 = v27;
          *(float *)(v29 + 4) = v25;
          *(float *)(v29 + 8) = v31;
          *(float *)(v29 + 12) = v28;
          v63 = *(_DWORD *)(v19 + v16 - 19);
          v64 = *(_DWORD *)(v19 + v16 - 15);
          v65 = *(_DWORD *)(v19 + v16 - 11);
          *(_DWORD *)(v29 + 16) = *(_DWORD *)(v19 + v16 - 23);
          *(_DWORD *)(v29 + 20) = v63;
          *(_DWORD *)(v29 + 24) = v64;
          *(_DWORD *)(v29 + 28) = v65;
          *(_WORD *)(v29 + 32) = v60;
          *(_BYTE *)(v29 + 35) = v34;
          *(_BYTE *)(v29 + 34) = BYTE2(v60);
          *(_BYTE *)(v29 + 36) = v61;
          *(_BYTE *)(v29 + 39) = v36;
          *(_BYTE *)(v29 + 38) = BYTE2(v61);
          *(_BYTE *)(v29 + 37) = BYTE1(v61);
          *(_DWORD *)(v29 + 40) = ~v62;
          *(float *)(v29 + 44) = v33;
          *(float *)(v29 + 64) = (float)(v50 * v49) * v52;
          *(float *)(v29 + 68) = v56 * v53;
          *(float *)(v29 + 72) = v57;
          *(float *)(v29 + 76) = (float)((float)(v27 + (float)(v31 + v31)) + v26) * 0.5;
          *(float *)(v29 + 80) = v59;
          *(float *)(v29 + 84) = v55 * v53;
          *(float *)(v29 + 88) = v58;
          *(float *)(v29 + 92) = v44;
          *(_DWORD *)(v29 + 48) = v51;
          *(_DWORD *)(v29 + 52) = v136;
          *(_DWORD *)(v29 + 56) = v135;
        }
        else
        {
          v38 = v32 & 0xFFFFFF;
          v39 = v35 & 0xFFFFFF;
          v40 = *(unsigned __int8 *)(v19 + v16 - 1);
          *(float *)v29 = v27;
          *(float *)(v29 + 4) = v25;
          *(float *)(v29 + 8) = v31;
          *(float *)(v29 + 12) = v28;
          v41 = *(_DWORD *)(v19 + v16 - 19);
          v42 = *(_DWORD *)(v19 + v16 - 15);
          v43 = *(_DWORD *)(v19 + v16 - 11);
          *(_DWORD *)(v29 + 16) = *(_DWORD *)(v19 + v16 - 23);
          *(_DWORD *)(v29 + 20) = v41;
          *(_DWORD *)(v29 + 24) = v42;
          *(_DWORD *)(v29 + 28) = v43;
          *(_WORD *)(v29 + 32) = v38;
          *(_BYTE *)(v29 + 35) = v34;
          *(_BYTE *)(v29 + 34) = BYTE2(v38);
          *(_BYTE *)(v29 + 36) = v39;
          *(_BYTE *)(v29 + 39) = v36;
          *(_BYTE *)(v29 + 38) = BYTE2(v39);
          *(_BYTE *)(v29 + 37) = BYTE1(v39);
          *(_DWORD *)(v29 + 40) = ~v40;
          *(float *)(v29 + 44) = v33;
        }
        *(float *)(v29 + 60) = v26;
        v18 = v139 + 1;
        v17 += 52;
        v16 += 48;
      }
      while ( v144 != v139 + 1 );
    }
    result = v144;
    if ( v144 >= 1 )
    {
      v66 = 64;
      v67 = 0;
      v68 = 23;
      v69 = (unsigned __int8 *)(a3 + 51);
      if ( a3 )
        v66 = 96;
      v122 = v66;
      do
      {
        v70 = *(_DWORD *)(a1 + 120);
        v71 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 124) + v67);
        v72 = v147[v71];
        v73 = v148[v71];
        v147[v71] = v72 + 1;
        v74 = a2 + (v72 + v73 * v141) * v122;
        v75 = v70 + v68;
        v76 = *(float *)(v70 + v68 - 19);
        v77 = (float)*(__int16 *)(v70 + v68 + 21);
        v78 = *(float *)(v70 + v68 - 11);
        v79 = v145 + v74;
        v80 = *(float *)(v70 + v68 - 23);
        v81 = *(float *)(v70 + v68 - 15);
        v82 = (float)(v76 * v77) / *(float *)(a1 + 136);
        if ( a3 )
        {
          if ( a4 == 1 )
          {
            v83 = v76 + v78;
          }
          else
          {
            v83 = 0.0;
            if ( !a4 )
              v83 = (float)(v76 + (float)(v78 + v78)) * 0.5;
          }
          v92 = *(unsigned __int8 *)(v70 + v68);
          v91 = v70 + v68;
          v140 = *(_DWORD *)(v69 - 19);
          v138 = *(_DWORD *)(v69 - 15);
          v137 = *(_DWORD *)(v69 - 11);
          v134 = *v69;
          v132 = *(v69 - 1);
          v130 = *(v69 - 3);
          v93 = *(float *)(v69 - 47);
          v94 = *(float *)(v69 - 51);
          v95 = *(float *)(v69 - 35);
          v96 = *(float *)(v69 - 39);
          v97 = *(float *)(v69 - 43);
          v98 = *(float *)(v69 - 23);
          v99 = *(float *)(v69 - 27);
          v100 = *(float *)(v69 - 31);
          v128 = *(v69 - 2);
          v125 = *(v69 - 4);
          v124 = *(v69 - 5);
          v101 = *(v69 - 7);
          v102 = *(v69 - 6);
          v131 = *(unsigned __int8 *)(v91 + 23);
          v129 = *(unsigned __int8 *)(v91 - 1);
          v127 = *(unsigned __int8 *)(v91 - 3);
          v126 = *(unsigned __int8 *)(v91 - 2);
          v103 = *(unsigned __int8 *)(v91 - 7);
          v104 = *(unsigned __int8 *)(v91 - 6);
          v105 = *(unsigned __int8 *)(v91 - 5);
          v106 = *(unsigned __int8 *)(v91 - 4);
          *(float *)v79 = v80;
          *(float *)(v79 + 4) = v76;
          *(float *)(v79 + 8) = v81;
          *(float *)(v79 + 12) = v78;
          v107 = *(_DWORD *)(v91 + 1);
          v108 = *(_DWORD *)(v91 + 5);
          v109 = *(_DWORD *)(v91 + 9);
          v110 = *(_DWORD *)(v91 + 13);
          *(_DWORD *)(v79 + 16) = v107;
          *(_DWORD *)(v79 + 20) = v108;
          *(_DWORD *)(v79 + 24) = v109;
          *(_DWORD *)(v79 + 28) = v110;
          v111 = (unsigned __int8)(v101 * v103 / 0xFFu) | ((unsigned __int8)(v102 * v104 / 0xFFu) << 8);
          *(_BYTE *)(v79 + 33) = BYTE1(v111);
          _R1 = (2155905153u * (unsigned __int64)(unsigned int)(v124 * v105)) >> 32 << 9;
          uxtb16(r1)
          v118 = v111 | _R1;
          *(_BYTE *)(v79 + 32) = v118;
          *(_BYTE *)(v79 + 35) = (v118
                                | ((2155905153u * (unsigned __int64)(unsigned int)(v125 * v106)) >> 32 << 17)
                                & 0xFF000000) >> 24;
          *(_BYTE *)(v79 + 34) = BYTE2(v118);
          _R0 = (2155905153u * (unsigned __int64)(unsigned int)(v132 * v129)) >> 32 << 9;
          uxtb16(r0)
          v121 = (unsigned __int8)(v130 * v127 / 0xFFu) | ((unsigned __int8)(v128 * v126 / 0xFFu) << 8) | _R0;
          *(_BYTE *)(v79 + 36) = (v130 * v127 / 0xFFu) | _R0;
          *(_BYTE *)(v79 + 39) = (v121
                                | ((2155905153u * (unsigned __int64)(unsigned int)(v134 * v92)) >> 32 << 17)
                                & 0xFF000000) >> 24;
          *(_BYTE *)(v79 + 38) = BYTE2(v121);
          *(_BYTE *)(v79 + 37) = v128 * v126 / 0xFFu;
          *(_DWORD *)(v79 + 40) = v131;
          *(float *)(v79 + 44) = v82;
          *(float *)(v79 + 64) = (float)(v96 * v95) * v94;
          *(float *)(v79 + 68) = (float)((float)(v98 * v97) + (float)(v95 * (float)(v100 * v99))) * v93;
          *(float *)(v79 + 72) = (float)(v98 * v100) - (float)(v95 * (float)(v99 * v97));
          *(float *)(v79 + 76) = (float)((float)(v80 + (float)(v81 + v81)) + v77) * 0.5;
          *(float *)(v79 + 80) = -(float)((float)(v96 * v98) * v94);
          *(float *)(v79 + 84) = (float)((float)(v95 * v97) - (float)(v98 * (float)(v100 * v99))) * v93;
          *(float *)(v79 + 88) = (float)(v98 * (float)(v99 * v97)) + (float)(v95 * v100);
          *(float *)(v79 + 92) = v83 - a5;
          *(_DWORD *)(v79 + 48) = v140;
          *(_DWORD *)(v79 + 52) = v138;
          *(_DWORD *)(v79 + 56) = v137;
        }
        else
        {
          v84 = *(unsigned __int8 *)(v75 + 23);
          *(float *)v79 = v80;
          *(float *)(v79 + 4) = v76;
          *(float *)(v79 + 8) = v81;
          *(float *)(v79 + 12) = v78;
          v85 = *(_DWORD *)(v75 + 1);
          v86 = *(_DWORD *)(v75 + 5);
          v87 = *(_DWORD *)(v75 + 9);
          *(_DWORD *)(v79 + 28) = *(_DWORD *)(v75 + 13);
          *(_DWORD *)(v79 + 16) = v85;
          *(_DWORD *)(v79 + 20) = v86;
          *(_DWORD *)(v79 + 24) = v87;
          LOBYTE(v85) = *(_BYTE *)(v75 - 7);
          LOBYTE(v86) = *(_BYTE *)(v75 - 5);
          v88 = *(_BYTE *)(v75 - 4);
          *(_BYTE *)(v79 + 33) = *(_BYTE *)(v75 - 6);
          *(_BYTE *)(v79 + 32) = v85;
          *(_BYTE *)(v79 + 35) = v88;
          *(_BYTE *)(v79 + 34) = v86;
          v90 = *(_BYTE *)(v75 - 3);
          v89 = (_BYTE *)(v75 - 3);
          LOBYTE(v85) = v89[1];
          LOBYTE(v86) = v89[2];
          LOBYTE(v89) = v89[3];
          *(_BYTE *)(v79 + 37) = v85;
          *(_BYTE *)(v79 + 36) = v90;
          *(_BYTE *)(v79 + 39) = (_BYTE)v89;
          *(_BYTE *)(v79 + 38) = v86;
          *(_DWORD *)(v79 + 40) = v84;
          *(float *)(v79 + 44) = v82;
        }
        *(float *)(v79 + 60) = v77;
        ++v67;
        v69 += 52;
        v68 += 48;
        result = v144;
      }
      while ( v144 != v67 );
    }
  }
  return result;
}
