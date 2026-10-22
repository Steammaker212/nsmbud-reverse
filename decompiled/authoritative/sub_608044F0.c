void __fastcall sub_608044F0(int a1, int a2, float *a3, _BYTE *a4, int a5, int a6)
{
  int v10; // r1
  int v11; // r0
  _BOOL4 v12; // r11
  float *v13; // r8
  int v14; // r10
  int v16; // r0
  int v17; // r7
  int v18; // r0
  int v19; // r0
  float v20; // s24
  float v21; // s22
  float v22; // s20
  float v23; // s18
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  float v30; // s16
  int v31; // r0
  float v32; // s0
  float v33; // s28
  float v34; // s30
  float v35; // s26
  float v36; // s0
  float v37; // s2
  bool v44; // zf
  float v45; // s0
  float v46; // s0
  float v47; // s4
  float v48; // s6
  int v51; // r11
  int v52; // r0
  float32x2_t v53; // d0
  float32x2_t v54; // d2
  int v55; // r1
  int v56; // r9
  int v57; // r0
  int v58; // r2
  int v59; // r10
  int v60; // r1
  float v61; // s0
  float *v62; // r6
  float v63; // s0
  float v64; // s2
  float v65; // s4
  float v66; // s4
  _BOOL4 v67; // r1
  _BOOL4 v68; // r0
  float v69; // s0
  float v70; // s0
  float v71; // s18
  float v72; // s20
  float v73; // s22
  float v74; // s18
  float v75; // s2
  _BOOL4 v76; // r1
  _BOOL4 v77; // r0
  float v78; // s16
  float v79; // s18
  float v80; // s20
  float v81; // s16
  float v82; // s2
  _BOOL4 v83; // r1
  _BOOL4 v84; // r0
  float v85; // s0
  int v86; // [sp+0h] [bp-8h]
  int v87; // [sp+4h] [bp-4h]

  v10 = *(_DWORD *)(a1 + 16);
  v11 = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 16) = v10 + 1;
  v12 = v11 < 2;
  v13 = (float *)(a1 + 28);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28);
  v86 = *(_DWORD *)(a1 + 20);
  v14 = *(_DWORD *)sub_60804418(a2);
  v16 = a4[1] != 0 && *a4 != 0;
  _ZF = v16 == 0;
  v87 = v16;
  if ( !v16 )
  {
    v16 = (v14 != 2) | a5 ^ 1;
    _ZF = v16 == 0;
  }
  if ( _ZF && sub_60802694(v16) == 1 )
  {
    v17 = 1;
    *(_DWORD *)(a1 + 52) = 120;
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 52);
    if ( v18 < 1 || (v19 = v18 - 1, v17 = 1, (*(_DWORD *)(a1 + 52) = v19) == 0) )
      v17 = sub_6080259C();
  }
  if ( v87 == 1 )
  {
    v20 = 0.8;
    v21 = 1.1;
    v22 = 1.2;
    v23 = 0.9;
  }
  else
  {
    v24 = sub_60804418(a2);
    v23 = sub_60804F14(v24, v17);
    v25 = sub_60804418(a2);
    v22 = sub_60804F90(v25, v17);
    v26 = sub_60804418(a2);
    v21 = sub_6080500C(v26, v17);
    v27 = sub_60804418(a2);
    v20 = sub_60805088(v27, v17);
  }
  v28 = sub_60804418(a2);
  sub_60804D64(v28, v17);
  *(float *)(a1 + 36) = ((float (__fastcall *)(int))loc_608039A4)(a2);
  v29 = sub_60804418(a2);
  sub_60804DF4(v29, v17);
  v30 = ((float (__fastcall *)(int))loc_608039A4)(a2);
  v31 = sub_60804418(a2);
  sub_60804E84(v31, v17);
  v32 = ((float (__fastcall *)(int))loc_608039A4)(a2);
  v33 = a3[11];
  v34 = a3[12];
  v35 = v32;
  sub_60804430(a2, v32);
  v37 = (float)(v34 - v33) / 398.22;
  if ( (unsigned int)(v14 - 6) < 2 )
  {
    _S0 = (float)(v34 - v33) / 398.22;
    goto LABEL_19;
  }
  _S0 = (float)(v36 * (float)(a3[14] - a3[13])) / 224.0;
  if ( v14 != 2 )
  {
    if ( v14 == 1 )
      v37 = _S0;
LABEL_19:
    _S4 = 0;
    if ( v37 > _S0 )
      _S0 = v37;
    __asm { VMAXNM.F32      S28, S0, S4 }
    if ( !_ZF )
      goto LABEL_49;
LABEL_23:
    v44 = (v87 & a5) == 0;
    if ( (v87 & a5) == 0 )
      v44 = (*(_BYTE *)(a2 + 29) & 0x10) == 0;
    if ( !v44 )
    {
      v45 = v22 == 3.4028e38 ? v23 : v22;
      if ( v45 < 3.4028e38 )
      {
        v46 = v45 + 0.001;
        if ( _S28 <= v46 )
          _S28 = v46;
      }
    }
    goto LABEL_49;
  }
  if ( v17 )
  {
    if ( v22 == 3.4028e38 )
      v47 = v23;
    else
      v47 = v22;
    if ( v47 < 3.4028e38 )
    {
      v48 = *v13 < v35 ? v47 : (float)(v34 - v33) / 398.22;
      if ( v37 > v47 )
        v37 = v48;
    }
    _S4 = 0;
    if ( v37 > _S0 )
      _S0 = v37;
    __asm { VMAXNM.F32      S28, S0, S4 }
    goto LABEL_23;
  }
  _S4 = 0;
  if ( v37 > _S0 )
    _S0 = (float)(v34 - v33) / 398.22;
  __asm { VMAXNM.F32      S28, S0, S4 }
LABEL_49:
  v51 = v12 & a6;
  v52 = sub_607FF980(a3);
  v55 = 90;
  if ( !v52 )
  {
    v55 = *(_DWORD *)(a1 + 48);
    if ( v55 < 1 )
      goto LABEL_53;
    --v55;
  }
  *(_DWORD *)(a1 + 48) = v55;
LABEL_53:
  v56 = *(_DWORD *)(a2 + 44);
  if ( v51 | ((unsigned int)(v14 - 3) < 2) )
  {
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 36);
    v57 = *(_DWORD *)(a1 + 20);
    v58 = v86;
LABEL_55:
    v59 = 0;
LABEL_56:
    v60 = 0;
    goto LABEL_57;
  }
  v57 = *(_DWORD *)(a1 + 20);
  if ( v57 == 2 )
  {
    v58 = v86;
    if ( _S28 >= v21 || *(float *)(a1 + 56) == 1.0 )
    {
      v57 = 2;
      *(float *)(a1 + 32) = v35;
      goto LABEL_55;
    }
    if ( v55 || *(int *)(a1 + 44) < 121 )
    {
      v59 = 0;
      v57 = 2;
      *(float *)(a1 + 32) = v35;
    }
    else
    {
      v57 = 1;
      *(float *)(a1 + 32) = v30;
      v59 = 0;
      *(_DWORD *)(a1 + 20) = 1;
    }
  }
  else
  {
    v58 = v86;
    if ( v57 != 1 )
    {
      if ( !v57 )
      {
        if ( _S28 <= v23 )
        {
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 36);
          v57 = 0;
        }
        else
        {
          v57 = 1;
          *(float *)(a1 + 32) = v30;
          if ( v56 >= 2 )
            v55 = 1065353216;
          *(_DWORD *)(a1 + 20) = 1;
          if ( v56 >= 2 )
            *(_DWORD *)(a1 + 56) = v55;
        }
      }
      goto LABEL_55;
    }
    if ( _S28 > v22 )
    {
      v57 = 2;
      *(float *)(a1 + 32) = v35;
      *(_DWORD *)(a1 + 20) = 2;
      goto LABEL_55;
    }
    if ( _S28 >= v20 || *(float *)(a1 + 56) == 1.0 )
    {
      *(float *)(a1 + 32) = v30;
      v59 = 0;
      v57 = 1;
      goto LABEL_56;
    }
    v59 = 0;
    v57 = 1;
    if ( v55 )
    {
      *(float *)(a1 + 32) = v30;
    }
    else
    {
      v85 = v30;
      if ( *(int *)(a1 + 44) >= 121 )
      {
        v57 = 1;
        if ( *v13 <= v30 )
        {
          v57 = 0;
          *(_DWORD *)(a1 + 20) = 0;
        }
        v59 = v57;
        v85 = *(float *)(a1 + 36);
      }
      *(float *)(a1 + 32) = v85;
    }
  }
  v60 = *(_DWORD *)(a1 + 44) + 1;
LABEL_57:
  *(_DWORD *)(a1 + 44) = v60;
  if ( v58 == v57 )
  {
    v53.n64_u32[0] = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v53.n64_u32[0] = 1.0;
    *(_DWORD *)(a1 + 40) = 1065353216;
  }
  v54.n64_u32[0] = 0;
  v53.n64_f32[0] = v53.n64_f32[0] + -1.0;
  *(_DWORD *)(a1 + 40) = vmax_f32(v53, v54).n64_u32[0];
  if ( *(_DWORD *)(a2 + 48) == 24 )
  {
    v61 = ((float (__fastcall *)(int, int))loc_60803A48)(a2, v17);
    *(float *)(a1 + 60) = v61;
    if ( v61 < 0.0005 )
      *(_DWORD *)(a1 + 60) = 973279855;
  }
  if ( !(v51 | (*(float *)(a1 + 56) != 1.0)) )
  {
    v64 = *(float *)(a1 + 32);
    v63 = *(float *)(a1 + 28);
    v65 = *(float *)(a1 + 60);
    if ( v63 >= v64 )
    {
      if ( v63 <= v64 )
        goto LABEL_87;
      v66 = v63 - v65;
      v67 = v63 < v66;
      v68 = v66 <= v64;
    }
    else
    {
      v66 = v65 + v63;
      v67 = v66 < v63;
      v68 = v66 >= v64;
    }
    if ( v68 )
      v63 = *(float *)(a1 + 32);
    else
      v63 = v66;
    if ( v67 )
      v63 = *(float *)(a1 + 32);
LABEL_86:
    *v13 = v63;
    goto LABEL_87;
  }
  v62 = (float *)(a1 + 32);
  if ( ((int (__fastcall *)(int, float *, int))loc_608036C4)(a2, v13, a1 + 32) == 1 )
  {
    v63 = *v13;
    goto LABEL_87;
  }
  if ( *(_DWORD *)(a1 + 16) <= 1u )
  {
    v63 = *v62;
    *v13 = *v62;
    goto LABEL_87;
  }
  v63 = *v13;
  if ( *v13 < *v62 )
  {
    v78 = ((float (*)(void))loc_60832524)();
    v79 = *(float *)(a1 + 32);
    v80 = *(float *)(a1 + 60) - v78;
    v81 = v78 + (float)(v80 * sub_608324DC(*(float *)(a1 + 56)));
    v63 = *(float *)(a1 + 28);
    if ( v63 >= v79 )
    {
      if ( v63 <= v79 )
        goto LABEL_87;
      v82 = v63 - v81;
      v83 = v63 < (float)(v63 - v81);
      v84 = (float)(v63 - v81) <= v79;
    }
    else
    {
      v82 = v63 + v81;
      v83 = (float)(v63 + v81) < v63;
      v84 = (float)(v63 + v81) >= v79;
    }
    if ( v84 )
      v63 = v79;
    else
      v63 = v82;
    if ( v83 )
      v63 = v79;
    goto LABEL_86;
  }
  if ( *v13 > *v62 )
  {
    v71 = ((float (*)(void))loc_60832524)();
    v72 = *(float *)(a1 + 32);
    v73 = *(float *)(a1 + 60) - v71;
    v74 = v71 + (float)(v73 * sub_608324DC(*(float *)(a1 + 56)));
    v63 = *(float *)(a1 + 28);
    if ( v63 < v72 )
    {
      v75 = v63 + v74;
      v76 = (float)(v63 + v74) < v63;
      v77 = (float)(v63 + v74) >= v72;
LABEL_125:
      if ( v77 )
        v63 = v72;
      else
        v63 = v75;
      if ( v76 )
        v63 = v72;
      *v13 = v63;
      goto LABEL_131;
    }
    if ( v63 > v72 )
    {
      v75 = v63 - v74;
      v76 = v63 < (float)(v63 - v74);
      v77 = (float)(v63 - v74) <= v72;
      goto LABEL_125;
    }
  }
LABEL_131:
  if ( v59 == 1 )
    *v62 = v30;
LABEL_87:
  *v13 = ((float (__fastcall *)(int, float))loc_608039A4)(a2, v63);
  if ( v56 <= 1 )
  {
    v69 = *(float *)(a1 + 56);
    if ( v69 != 0.0 )
    {
      v70 = v69 + -0.01;
      *(float *)(a1 + 56) = v70;
      if ( v70 < 0.0 )
        *(_DWORD *)(a1 + 56) = 0;
    }
  }
}
