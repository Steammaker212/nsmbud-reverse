void __fastcall sub_601638EC(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        ColliderNodeUnk1 a39)
{
  unsigned int v39; // r7
  unsigned int v40; // r4
  _BYTE *v42; // r0
  int v43; // r5
  __int64 v44; // r0
  float v45; // s20
  float v46; // s22
  float v47; // s16
  float v48; // s18
  float v49; // s17
  float v50; // s19
  float v51; // s2
  int v52; // r0
  float v53; // s16
  float v54; // s18
  int v55; // r4
  int i; // r5
  int v57; // r11
  int v58; // s0
  int v59; // s2
  float v60; // s4
  int v61; // s6
  int v62; // r0
  int v63; // r2
  int v64; // r9
  unsigned int j; // r10
  int v66; // r1
  int v67; // r1
  int v68; // s0
  int v69; // s2
  float v70; // s4
  int v71; // s6
  int v72; // [sp+12Ch] [bp+94h]

  v39 = STACK[0x200];
  v40 = STACK[0x204];
  v42 = (_BYTE *)(STACK[0x204] + STACK[0x200]);
  if ( v42[2341] )
  {
    v43 = 0;
    if ( !v42[2345] )
      v43 = v40 + 12 * v39 + 2356;
  }
  else
  {
    v43 = (unsigned __int8)v42[2349];
    if ( v42[2349] )
      v43 = v40 + 12 * v39 + 2404;
  }
  v44 = *(_QWORD *)(a1 + 152);
  v45 = *(float *)(a1 + 128);
  v46 = *(float *)(a1 + 132);
  v47 = *(float *)(a1 + 172);
  v48 = *(float *)(a1 + 176);
  v49 = *(float *)v44;
  v50 = *(float *)(v44 + 4);
  ColliderNodeUnk1_ctor(&a39);
  v51 = v49 + v47;
  v52 = *(_DWORD *)(a1 + 348);
  v72 = v39 ^ 1;
  v53 = (float)(v50 + v48) + v46;
  v54 = v51 + v45;
  if ( v52 >= 1 )
  {
    a13 = v43;
    v55 = 0;
    for ( i = 0; i < v52; ++i )
    {
      v57 = *(_DWORD *)(a1 + 352);
      if ( v52 > (unsigned int)i )
        v57 += v55;
      if ( (*(_BYTE *)v57 & (unsigned __int8)(1 << v39)) != 0 )
      {
        *(float *)&v58 = v54 + *(float *)(v57 + 4);
        *(float *)&v59 = v53 + *(float *)(v57 + 8);
        v60 = v54 + *(float *)(v57 + 12);
        *(float *)&v61 = v53 + *(float *)(v57 + 16);
        a39.field_0 = v58;
        a39.field_4 = v59;
        a39.field_8 = v60;
        a39.field_C = v61;
        if ( (*(_BYTE *)v57 & (unsigned __int8)(1 << (v39 ^ 1))) == 0
          && sqrtf(
               (float)((float)(*(float *)&v61 - *(float *)&v59) * (float)(*(float *)&v61 - *(float *)&v59))
             + (float)((float)(v60 - *(float *)&v58) * (float)(v60 - *(float *)&v58))) > 0.0 )
        {
          JUMPOUT(0x60163B5C);
        }
      }
      v52 = *(_DWORD *)(a1 + 348);
      v55 += 32;
    }
    v39 = STACK[0x200];
  }
  if ( (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 40))(a1, 0, a4) == 1 )
  {
    v62 = *(_DWORD *)(a1 + 348);
    if ( v62 >= 1 )
    {
      v63 = v72;
      v64 = 0;
      for ( j = 0; (int)j < v62; ++j )
      {
        v66 = *(_DWORD *)(a1 + 352);
        if ( v62 > j )
          v66 += v64;
        a33 = *(_DWORD *)(v66 + 20);
        if ( sub_6015A9BC(&a33, v39, v63) == 1 )
        {
          v67 = *(_DWORD *)(a1 + 352);
          if ( *(_DWORD *)(a1 + 348) > j )
            v67 += v64;
          *(float *)&v68 = v54 + *(float *)(v67 + 4);
          *(float *)&v69 = v53 + *(float *)(v67 + 8);
          v70 = v54 + *(float *)(v67 + 12);
          *(float *)&v71 = v53 + *(float *)(v67 + 16);
          a39.field_0 = v68;
          a39.field_4 = v69;
          a39.field_8 = v70;
          a39.field_C = v71;
          if ( (*(_BYTE *)v67 & (unsigned __int8)(1 << v72)) == 0
            && sqrtf(
                 (float)((float)(*(float *)&v71 - *(float *)&v69) * (float)(*(float *)&v71 - *(float *)&v69))
               + (float)((float)(v70 - *(float *)&v68) * (float)(v70 - *(float *)&v68))) > 0.0 )
          {
            JUMPOUT(0x60164334);
          }
        }
        v62 = *(_DWORD *)(a1 + 348);
        v64 += 32;
      }
    }
  }
  __asm { POP             {R4-R11,PC} }
}
