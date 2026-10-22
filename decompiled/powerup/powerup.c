/* NSMBU Deluxe (Switch) v1.0.0 -- powerup subsystem
 * Bulk Hex-Rays output. RVAs are image-relative (VA - 0x60000000).
 * Types and field offsets are inferred; names marked sub_XXXX are unnamed.
 * Only live functions (>=1 incoming code xref) of 0x30+ bytes are included.
 */

/* ============================================================================
 * sub_60450184
 * RVA 0x00450184   size 0x2a4   xrefs 3
 * ============================================================================ */
  int __fastcall sub_60450184(int a1, int a2, int a3)
  {
    int v6; // r2
    int v7; // r3
    int *v8; // r1
    int result; // r0
    int v10; // r1
    int v11; // r1
    int v12; // r2
    unsigned int *v13; // r0
    unsigned int v14; // r1
    int v15; // r1
    char v16; // r2
    unsigned int v17; // r1
    int v18; // r4
    int *v19; // r1
    int v20; // r1
    int v21; // r1
    int v22; // r2
    unsigned int *v23; // r0
    unsigned int v24; // r1
    int v25; // r1
    char v26; // r2
    unsigned int v27; // r1
    int v28; // r4
    int v29; // r2
    int v30; // r6
    int v31; // r2
    int v32; // r0
    int v33; // r6
    int v34; // r4
    int v35; // r2
    int v36; // r0
    int v37; // r5
    int v38; // r4
    int v39; // r2
  
    v6 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 2288) + a3);
    v7 = MEMORY[0xC9BAAC];
    v8 = (int *)(a1 + 12 * v6 + 948);
    result = *(unsigned __int8 *)(a1 + 944);
    if ( result == 2 )
      v8 = (int *)(MEMORY[0xC9BAAC] + 120);
    v10 = *v8;
    if ( v10 )
    {
      sub_60920EC8(a1 + 1256, v10);
      v11 = *(_DWORD *)(a1 + 2296);
      v12 = *(_DWORD *)(a1 + 2300);
      *(_BYTE *)(a1 + 1575) = *(_DWORD *)(a1 + 2292);
      v13 = (unsigned int *)(a1 + 1584);
      *(_BYTE *)(a1 + 1576) = v11;
      *(_BYTE *)(a1 + 1577) = v12;
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 | 2, v13) );
      v15 = *(_DWORD *)(a1 + 2308);
      v16 = *(_BYTE *)(a1 + 2304);
      *(_BYTE *)(a1 + 1572) = v16;
      *(_BYTE *)(a1 + 1573) = v16;
      *(_BYTE *)(a1 + 1574) = v15;
      do
        v17 = __ldrex(v13);
      while ( __strex(v17 | 4, v13) );
      v18 = *(_DWORD *)(a1 + 32);
      sub_6091D95C(v18);
      sub_60920FDC(a1 + 1256, a2, *(_DWORD *)(v18 + 636), -1, 0);
      v6 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 2288) + a3);
      v7 = MEMORY[0xC9BAAC];
      result = *(unsigned __int8 *)(a1 + 944);
    }
    v19 = (int *)(a1 + 12 * v6 + 952);
    if ( result == 2 )
      v19 = (int *)(v7 + 120);
    v20 = *v19;
    if ( v20 )
    {
      sub_60920EC8(a1 + 1600, v20);
      v21 = *(_DWORD *)(a1 + 2296);
      v22 = *(_DWORD *)(a1 + 2300);
      *(_BYTE *)(a1 + 1919) = *(_DWORD *)(a1 + 2292);
      *(_BYTE *)(a1 + 1920) = v21;
      *(_BYTE *)(a1 + 1921) = v22;
      v23 = (unsigned int *)(a1 + 1928);
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 | 2, v23) );
      v25 = *(_DWORD *)(a1 + 2308);
      v26 = *(_BYTE *)(a1 + 2304);
      *(_BYTE *)(a1 + 1916) = v26;
      *(_BYTE *)(a1 + 1917) = v26;
      *(_BYTE *)(a1 + 1918) = v25;
      do
        v27 = __ldrex(v23);
      while ( __strex(v27 | 4, v23) );
      v28 = *(_DWORD *)(a1 + 32);
      sub_6091D95C(v28);
      v29 = *(_DWORD *)(v28 + 636);
      if ( *(_DWORD *)(v28 + 632) > 1u )
        v29 += 12;
      sub_60920FDC(a1 + 1600, a2, v29, -1, 0);
      result = *(unsigned __int8 *)(a1 + 944);
    }
    if ( result == 1 )
    {
      sub_60920EC8(a1 + 1944, *(_DWORD *)(a1 + 12 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 2288) + a3) + 952));
      v30 = *(_DWORD *)(a1 + 32);
      sub_6091D95C(v30);
      v31 = *(_DWORD *)(v30 + 636);
      if ( *(_DWORD *)(v30 + 632) > 2u )
        v31 += 24;
      sub_60920FDC(a1 + 1944, a2, v31, -1, 0);
      v32 = sub_604267D0(MEMORY[0xC9BBD4], 2u);
      v33 = *(_DWORD *)(a1 + 32);
      v34 = v32;
      sub_6091D95C(v33);
      v35 = *(_DWORD *)(v33 + 636);
      if ( *(_DWORD *)(v33 + 632) > 3u )
        v35 += 36;
      sub_60920FDC(v34, a2, v35, -1, 0);
      v36 = sub_60426814(MEMORY[0xC9BBD4], 2u);
      v37 = *(_DWORD *)(a1 + 32);
      v38 = v36;
      sub_6091D95C(v37);
      v39 = *(_DWORD *)(v37 + 636);
      if ( *(_DWORD *)(v37 + 632) > 4u )
        v39 += 48;
      return sub_60920FDC(v38, a2, v39, -1, 0);
    }
    return result;
  }

/* ============================================================================
 * sub_60450434
 * RVA 0x00450434   size 0x90   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60450434(_DWORD *a1, int a2, int a3, int a4)
  {
    int result; // r0
    int v9; // r7
    int v10; // r8
    __int64 v11; // r0
  
    sub_60450184((int)a1, a2, a3);
    result = sub_60922278(a1 + 84, a2);
    if ( a4 )
    {
      v9 = *(_DWORD *)(a2 + 192);
      v10 = a1[170];
      v11 = MEMORY[0xCC746C](a1 + 176);
      return MEMORY[0xCC7874](
               v9,
               v10,
               a1[169],
               6 * a4,
               v11 + 6 * a3 * a1[175],
               (v11 + (unsigned __int64)(unsigned int)(6 * a3 * a1[175])) >> 32);
    }
    return result;
  }

/* ============================================================================
 * sub_604504CC
 * RVA 0x004504cc   size 0x1a4   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604504CC(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
  {
    int result; // r0
    int v10; // r4
    int v11; // r5
    int v12; // r9
    int v13; // r7
    int v14; // r4
    int v15; // r0
    _DWORD *v16; // r10
    int v17; // r5
    int v18; // r7
    int v19; // r4
    int v20; // r9
    int v21; // r2
    int v22; // r1
    int v23; // r2
    int v24; // r1
  
    result = *(_DWORD *)(a1 + 860);
    if ( result < *(_DWORD *)(a1 + 868) )
    {
      v10 = *(_DWORD *)(a1 + 856);
      v11 = *(_DWORD *)(a1 + 876);
      v12 = MEMORY[0xCC73E8](*(_DWORD *)(a1 + 924));
      v13 = sub_60913FB4(a1 + 912);
      if ( a3 >= 1 )
      {
        v14 = 17 * v11 * v10;
        v15 = 0;
        if ( (a3 & 1) != 0 )
        {
          qmemcpy((void *)(v12 + v13 + 8 * v14 + 136 * *(_DWORD *)(a1 + 860) * a3), a2, 0x88u);
          v15 = 1;
        }
        if ( a3 != 1 )
        {
          v16 = a2;
          v17 = a3 - v15;
          v18 = v12 + v13 + 8 * v14;
          v19 = 34 * v15;
          v20 = 136 * a3;
          do
          {
            qmemcpy((void *)(v18 + v19 * 4 + v20 * *(_DWORD *)(a1 + 860)), &v16[v19], 0x88u);
            qmemcpy((void *)(v18 + v19 * 4 + v20 * *(_DWORD *)(a1 + 860) + 136), &v16[v19 + 34], 0x88u);
            v16 += 68;
            v18 += 272;
            v17 -= 2;
          }
          while ( v17 );
        }
      }
      *(_BYTE *)(*(_DWORD *)(a1 + 2288) + *(_DWORD *)(a1 + 860)) = sub_6044EED0((_DWORD *)(a1 + 948), a4, 1);
      if ( *(_BYTE *)(a1 + 2312) )
      {
        v21 = *(_DWORD *)(a1 + 2316) + 32 * *(_DWORD *)(a1 + 860);
        *(_DWORD *)(v21 + 24) = a6;
        *(_DWORD *)(v21 + 28) = a7;
        *(_DWORD *)(*(_DWORD *)(a1 + 2316) + 32 * *(_DWORD *)(a1 + 860) + 20) = *(_DWORD *)(a1 + 860);
        *(_DWORD *)(*(_DWORD *)(a1 + 2316) + 32 * *(_DWORD *)(a1 + 860) + 16) = a1;
        v22 = *(_DWORD *)(a1 + 44);
        v23 = 3 * *(_DWORD *)(a1 + 860);
        *(_DWORD *)(v22 + 12 * *(_DWORD *)(a1 + 860)) = *a2;
        v24 = v22 + 4 * v23;
        *(_DWORD *)(v24 + 4) = a2[1];
        *(_DWORD *)(v24 + 8) = a2[2];
      }
      result = *(_DWORD *)(a1 + 860) + 1;
      *(_DWORD *)(a1 + 860) = result;
    }
    return result;
  }

/* ============================================================================
 * sub_60450674
 * RVA 0x00450674   size 0x108   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60450674(int a1)
  {
    int v2; // r0
    int v3; // r0
    int v4; // r0
    int v5; // r0
    int v6; // r0
    int v7; // r0
    int v8; // r0
    int v9; // r0
    int v10; // r0
    int v11; // r0
    int v12; // r0
    int v13; // r0
  
    v2 = operator new(2320);
    *(_DWORD *)(a1 + 16) = sub_6044F1C4(v2, 0);
    v3 = operator new(2320);
    *(_DWORD *)(a1 + 20) = sub_6044F1C4(v3, 1);
    v4 = operator new(2320);
    *(_DWORD *)(a1 + 24) = sub_6044F1C4(v4, 2);
    v5 = operator new(2320);
    *(_DWORD *)(a1 + 28) = sub_6044F1C4(v5, 3);
    v6 = operator new(2320);
    *(_DWORD *)(a1 + 32) = sub_6044F1C4(v6, 4);
    v7 = operator new(2320);
    *(_DWORD *)(a1 + 36) = sub_6044F1C4(v7, 5);
    v8 = operator new(2320);
    *(_DWORD *)(a1 + 40) = sub_6044F1C4(v8, 6);
    v9 = operator new(2320);
    *(_DWORD *)(a1 + 44) = sub_6044F1C4(v9, 7);
    v10 = operator new(2320);
    *(_DWORD *)(a1 + 48) = sub_6044F1C4(v10, 8);
    v11 = operator new(2320);
    *(_DWORD *)(a1 + 52) = sub_6044F1C4(v11, 9);
    v12 = operator new(2320);
    *(_DWORD *)(a1 + 56) = sub_6044F1C4(v12, 10);
    v13 = operator new(2320);
    *(_DWORD *)(a1 + 60) = sub_6044F1C4(v13, 11);
    *(_BYTE *)(a1 + 64) = 1;
    return a1;
  }

/* ============================================================================
 * sub_6045077C
 * RVA 0x0045077c   size 0xd8   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6045077C(int a1)
  {
    int i; // r6
    _DWORD *v3; // r5
  
    for ( i = 4; i != 16; ++i )
    {
      v3 = *(_DWORD **)(a1 + 4 * i);
      if ( v3 )
      {
        *v3 = 12562572;
        sub_609175E4(v3 + 506);
        sub_60917AE4(v3 + 486);
        sub_609175E4(v3 + 420);
        sub_60917AE4(v3 + 400);
        sub_609175E4(v3 + 334);
        sub_60917AE4(v3 + 314);
        v3[228] = 12562648;
        sub_60913C18(v3 + 228);
        v3[221] = 12556228;
        sub_60913C18(v3 + 221);
        sub_60919C90(v3 + 168);
        sub_60921BD4(v3 + 84);
        sub_60922478(v3 + 16);
        operator delete(v3);
        *(_DWORD *)(a1 + 4 * i) = 0;
      }
    }
    return a1;
  }

/* ============================================================================
 * sub_60450860
 * RVA 0x00450860   size 0x1bc   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60450860(int a1)
  {
    int i; // r7
    int v3; // r6
    unsigned int v4; // r0
    int result; // r0
    int v6; // [sp+1Ch] [bp-8h] BYREF
    const char *v7; // [sp+20h] [bp-4h]
  
    for ( i = 0; i != 7; ++i )
    {
      v3 = 0;
      v4 = dword_60B023BC[i];
      if ( *(_DWORD *)(MEMORY[0xC9CD58] + 16) > v4 )
        v3 = *(_DWORD *)(*(_DWORD *)(MEMORY[0xC9CD58] + 24) + 4 * v4);
      sub_6091CC00(v3, 3, a1);
      v6 = 12321336;
      v7 = "cWorldMtx[0]";
      sub_6091CD98(v3, 0, &v6);
      v6 = 12321336;
      v7 = "cViewMtx[0]";
      sub_6091CD98(v3, 1, &v6);
      v6 = 12321336;
      v7 = "cProjMtx[0]";
      sub_6091CD98(v3, 2, &v6);
      sub_6091CE08(v3, 5, a1);
      v6 = 12321336;
      v7 = "sampler2d_00";
      sub_6091CFA0(v3, 0, &v6);
      v6 = 12321336;
      v7 = "sampler2d_01";
      sub_6091CFA0(v3, 1, &v6);
      v6 = 12321336;
      v7 = "sampler2d_normal";
      sub_6091CFA0(v3, 2, &v6);
      v6 = 12321336;
      v7 = "sampler2d_lightmap";
      sub_6091CFA0(v3, 3, &v6);
      v6 = 12321336;
      v7 = "sampler2d_lightmap2";
      result = sub_6091CFA0(v3, 4, &v6);
    }
    return result;
  }

/* ============================================================================
 * sub_60450A48
 * RVA 0x00450a48   size 0x34   xrefs 18
 * ============================================================================ */
  int __fastcall sub_60450A48(int a1, _DWORD *a2, int a3, int a4, unsigned int a5)
  {
    unsigned int v5; // r12
    int v7; // [sp+0h] [bp-10h]
  
    v5 = a5;
    if ( a5 >= 0xC )
      v5 = 0;
    return sub_604504CC(
             *(_DWORD *)(a1 + 4 * v5 + 16),
             a2,
             a3,
             a4,
             v7,
             *(_DWORD *)(*(_DWORD *)(a1 + 4 * v5 + 16) + 36),
             *(_DWORD *)(*(_DWORD *)(a1 + 4 * v5 + 16) + 40));
  }

/* ============================================================================
 * sub_60450A7C
 * RVA 0x00450a7c   size 0x130   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60450A7C(_DWORD **a1, int a2, int a3)
  {
    (*(void (__fastcall **)(_DWORD *, int))(*a1[4] + 48))(a1[4], a2);
    (*(void (__fastcall **)(_DWORD *, int, int))(*a1[5] + 48))(a1[5], a2, a3);
    (*(void (__fastcall **)(_DWORD *, int, int))(*a1[6] + 48))(a1[6], a2, a3);
    (*(void (__fastcall **)(_DWORD *, int, int))(*a1[7] + 48))(a1[7], a2, a3);
    (*(void (__fastcall **)(_DWORD *, int, int))(*a1[8] + 48))(a1[8], a2, a3);
    (*(void (__fastcall **)(_DWORD *, int, int))(*a1[9] + 48))(a1[9], a2, a3);
    (*(void (__fastcall **)(_DWORD *, int, int))(*a1[10] + 48))(a1[10], a2, a3);
    (*(void (__fastcall **)(_DWORD *, int, int))(*a1[11] + 48))(a1[11], a2, a3);
    (*(void (__fastcall **)(_DWORD *, int, int))(*a1[12] + 48))(a1[12], a2, a3);
    (*(void (__fastcall **)(_DWORD *, int, int))(*a1[13] + 48))(a1[13], a2, a3);
    (*(void (__fastcall **)(_DWORD *, int, int))(*a1[14] + 48))(a1[14], a2, a3);
    return (*(int (__fastcall **)(_DWORD *, int, int))(*a1[15] + 48))(a1[15], a2, a3);
  }

/* ============================================================================
 * sub_60450BAC
 * RVA 0x00450bac   size 0xcc   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60450BAC(_DWORD **a1)
  {
    (*(void (__fastcall **)(_DWORD *))(*a1[4] + 44))(a1[4]);
    (*(void (__fastcall **)(_DWORD *))(*a1[5] + 44))(a1[5]);
    (*(void (__fastcall **)(_DWORD *))(*a1[6] + 44))(a1[6]);
    (*(void (__fastcall **)(_DWORD *))(*a1[7] + 44))(a1[7]);
    (*(void (__fastcall **)(_DWORD *))(*a1[8] + 44))(a1[8]);
    (*(void (__fastcall **)(_DWORD *))(*a1[9] + 44))(a1[9]);
    (*(void (__fastcall **)(_DWORD *))(*a1[10] + 44))(a1[10]);
    (*(void (__fastcall **)(_DWORD *))(*a1[11] + 44))(a1[11]);
    (*(void (__fastcall **)(_DWORD *))(*a1[12] + 44))(a1[12]);
    (*(void (__fastcall **)(_DWORD *))(*a1[13] + 44))(a1[13]);
    (*(void (__fastcall **)(_DWORD *))(*a1[14] + 44))(a1[14]);
    return (*(int (__fastcall **)(_DWORD *))(*a1[15] + 44))(a1[15]);
  }

/* ============================================================================
 * sub_60450CBC
 * RVA 0x00450cbc   size 0x34   xrefs 9
 * ============================================================================ */
  _DWORD *__fastcall sub_60450CBC(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
  {
    unsigned int v7; // r12
    _DWORD *result; // r0
  
    v7 = a7;
    if ( a7 >= 0xC )
      v7 = 0;
    result = *(_DWORD **)(a1 + 4 * v7 + 16);
    result[573] = a2;
    result[574] = a3;
    result[575] = a4;
    result[576] = a5;
    result[577] = a6;
    return result;
  }

/* ============================================================================
 * sub_60450CF0
 * RVA 0x00450cf0   size 0x58   xrefs 16
 * ============================================================================ */
  _DWORD *__fastcall sub_60450CF0(int a1, int a2, unsigned int a3)
  {
    _DWORD *result; // r0
    _DWORD *v4; // r2
    int v5; // r3
    bool v6; // zf
    int v7; // t1
  
    if ( a3 >= 0xC )
      a3 = 0;
    result = *(_DWORD **)(a1 + 4 * a3 + 16);
    if ( result[215] < result[217] )
    {
      v4 = result + 309;
      v5 = result[309];
      v6 = v5 == 0;
      if ( v5 )
      {
        v4 = result + 310;
        v6 = result[310] == 0;
      }
      if ( v6 || (v7 = result[311], result += 311, v4 = result, !v7) )
        *v4 = a2;
    }
    return result;
  }

/* ============================================================================
 * sub_60450DB4
 * RVA 0x00450db4   size 0x9c   xrefs 1
 * ============================================================================ */
  _DWORD *__fastcall sub_60450DB4(_DWORD *a1)
  {
    AnimationBase_ctor();
    *a1 = 12562664;
    a1[12] = 0;
    a1[11] = 0;
    a1[10] = 0;
    a1[13] = 1065353216;
    a1[14] = 8823304;
    a1[21] = 0;
    a1[20] = 0;
    a1[19] = 0;
    a1[18] = 0;
    a1[17] = 0;
    a1[16] = 0;
    a1[15] = 0;
    a1[9] = a1 + 10;
    a1[24] = 0;
    a1[23] = 0;
    a1[22] = 0;
    a1[8] = 12953312;
    memset(a1 + 25, 0, 0x2Cu);
    a1[36] = -1;
    return a1;
  }

/* ============================================================================
 * sub_60450E5C
 * RVA 0x00450e5c   size 0x288   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60450E5C(int result, int a2, int a3, int *a4, int a5)
  {
    bool v6; // zf
    int v7; // r9
    int v8; // r4
    char v9; // r11
    int v10; // r5
    int v11; // r7
    int v12; // r8
    int v13; // r0
    int v14; // r6
    _WORD *v15; // r0
    bool v16; // zf
    int *v17; // r1
    int v18; // r9
    int v19; // r10
    int v20; // r6
    _WORD *v21; // r0
    int v22; // r0
    int v23; // [sp+0h] [bp-8Ch]
    int *v24; // [sp+4h] [bp-88h]
    int *v26; // [sp+8h] [bp-84h]
    int v27; // [sp+Ch] [bp-80h] BYREF
    int v28; // [sp+10h] [bp-7Ch]
    int v29; // [sp+14h] [bp-78h]
    int v30; // [sp+18h] [bp-74h]
    int v31; // [sp+1Ch] [bp-70h]
    char v32; // [sp+20h] [bp-6Ch]
    char v33; // [sp+21h] [bp-6Bh]
    int v34; // [sp+24h] [bp-68h]
    int v35; // [sp+28h] [bp-64h]
    int v36; // [sp+2Ch] [bp-60h]
    int v37; // [sp+30h] [bp-5Ch]
    int v38; // [sp+34h] [bp-58h]
    int v39; // [sp+38h] [bp-54h]
    int v40; // [sp+3Ch] [bp-50h]
    int v41; // [sp+40h] [bp-4Ch]
    int v42; // [sp+44h] [bp-48h]
    int v43; // [sp+48h] [bp-44h]
    int v44; // [sp+4Ch] [bp-40h]
    int v45; // [sp+50h] [bp-3Ch]
    int v46; // [sp+54h] [bp-38h]
    int v47; // [sp+58h] [bp-34h]
    int v48; // [sp+5Ch] [bp-30h]
    int v49; // [sp+60h] [bp-2Ch]
    int v50; // [sp+64h] [bp-28h]
    int v51; // [sp+68h] [bp-24h]
    int v52; // [sp+6Ch] [bp-20h]
    int v53; // [sp+70h] [bp-1Ch]
    int v54; // [sp+74h] [bp-18h]
    int v55; // [sp+78h] [bp-14h]
    int v56; // [sp+7Ch] [bp-10h]
    int v57; // [sp+80h] [bp-Ch]
    int v58; // [sp+84h] [bp-8h]
    int v59; // [sp+88h] [bp-4h]
  
    v6 = a4 == nullptr;
    v7 = *(unsigned __int16 *)(a3 + 78);
    if ( !a4 )
      v6 = v7 == 0;
    if ( !v6 )
    {
      v23 = result;
      v8 = -1;
      v9 = 0;
      v10 = -1;
      v11 = -1;
      v12 = -1;
      v13 = *(unsigned __int16 *)(a2 + 66);
      v31 = -1;
      v30 = -1;
      v29 = -1;
      v28 = -1;
      v32 = 1;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 8;
      v38 = 0;
      v39 = -1;
      v40 = 0;
      v41 = 8;
      v42 = 0;
      v43 = -1;
      v44 = 0;
      v45 = 8;
      v46 = 0;
      v47 = -1;
      v48 = 0;
      v49 = 8;
      v50 = 0;
      v51 = -1;
      v52 = 0;
      v53 = 8;
      v54 = 0;
      v55 = -1;
      v56 = 0;
      v57 = 8;
      v58 = 0;
      v59 = -1;
      v27 = v13;
      if ( v7 )
      {
        v8 = -1;
        v9 = 0;
        v10 = -1;
        v11 = -1;
        v12 = -1;
        v14 = 0;
        do
        {
          v15 = *(_WORD **)sub_6043AFA0(a3, 3, v14++);
          if ( v12 < (unsigned __int16)v15[50] )
            v12 = (unsigned __int16)v15[50];
          v28 = v12;
          if ( v11 < (unsigned __int16)v15[57] + (unsigned __int16)v15[56] )
            v11 = (unsigned __int16)v15[57] + (unsigned __int16)v15[56];
          v29 = v11;
          if ( v10 < (unsigned __int16)v15[51] )
            v10 = (unsigned __int16)v15[51];
          v31 = v10;
          if ( v8 < (unsigned __int16)v15[59] )
            v8 = (unsigned __int16)v15[59];
          v30 = v8;
          v13 = (v15[48] & 1) == 0;
          v9 |= v13;
          v33 = v9;
        }
        while ( v7 != v14 );
      }
      v16 = a4 == nullptr;
      if ( a4 )
      {
        v13 = *a4;
        v16 = *a4 == 0;
      }
      if ( !v16 )
      {
        v17 = (int *)a4[2];
        v24 = &v17[v13];
        do
        {
          v18 = *v17;
          v19 = *(unsigned __int16 *)(*v17 + 78);
          v26 = v17;
          if ( *(_WORD *)(*v17 + 78) )
          {
            v20 = 0;
            do
            {
              v21 = *(_WORD **)sub_6043AFA0(v18, 3, v20++);
              if ( v12 < (unsigned __int16)v21[50] )
                v12 = (unsigned __int16)v21[50];
              v28 = v12;
              if ( v11 < (unsigned __int16)v21[57] + (unsigned __int16)v21[56] )
                v11 = (unsigned __int16)v21[57] + (unsigned __int16)v21[56];
              v29 = v11;
              if ( v10 < (unsigned __int16)v21[51] )
                v10 = (unsigned __int16)v21[51];
              v31 = v10;
              if ( v8 < (unsigned __int16)v21[59] )
                v8 = (unsigned __int16)v21[59];
              v30 = v8;
              v9 |= (v21[48] & 1) == 0;
              v33 = v9;
            }
            while ( v19 != v20 );
          }
          v17 = v26 + 1;
        }
        while ( v26 + 1 != v24 );
      }
      result = v12 | v11 | v10 | v8;
      if ( result >= 0 )
      {
        sub_6086AC64(&v27);
        v22 = operator new[](v34, a5, 8);
        return sub_6086ADCC(v23 + 32, &v27, v22, v34);
      }
    }
    return result;
  }

/* ============================================================================
 * TexAnim_play
 * RVA 0x004510e4   size 0xd0   xrefs 229
 * ============================================================================ */
  int __fastcall TexAnim_play(int a1, int a2, _DWORD *a3)
  {
    int result; // r0
    int v6; // r6
    int v7; // r1
  
    result = sub_6043ADF8(a2, a3);
    if ( result >= 0 )
    {
      v6 = *(_DWORD *)sub_6043AFA0(a2, 3, result);
      sub_6086AF38(a1 + 32, v6);
      *(_DWORD *)(a1 + 136) = v6;
      *(_DWORD *)(a1 + 4) = 0;
      *(float *)(a1 + 8) = (float)*(int *)(v6 + 104);
      *(float *)(a1 + 16) = (float)*(int *)(v6 + 104);
      *(_DWORD *)(a1 + 24) = 1065353216;
      AnimationCtrl_setRepeat(a1 + 4, 1);
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 28) |= 2u;
      sub_6041838C(a1 + 4);
      result = *(_DWORD *)(a1 + 140);
      if ( result )
      {
        v7 = *(_DWORD *)(a1 + 144);
        *(_DWORD *)(a1 + 140) = result;
        *(_DWORD *)(a1 + 144) = v7;
        if ( *(_DWORD *)(a1 + 136) )
          return sub_6086B060(a1 + 32, *(_DWORD *)(result + 40));
      }
    }
    return result;
  }

/* ============================================================================
 * sub_604511B4
 * RVA 0x004511b4   size 0x38   xrefs 1
 * ============================================================================ */
  _DWORD *__fastcall sub_604511B4(_DWORD *result, int a2, int a3)
  {
    if ( result[35] )
    {
      result[35] = 0;
      result[36] = -1;
    }
    result[35] = a2;
    result[36] = a3;
    if ( result[34] )
      return (_DWORD *)sub_6086B060(result + 8, *(_DWORD *)(a2 + 40));
    return result;
  }

/* ============================================================================
 * sub_604511EC
 * RVA 0x004511ec   size 0x1f4   xrefs 5
 * ============================================================================ */
  int __fastcall sub_604511EC(_DWORD *a1, _DWORD *a2, int a3)
  {
    __int64 v5; // r0
    int v6; // r9
    int v7; // r4
    int v8; // r6
    int v9; // r7
    int v10; // r2
    int v11; // r2
    int v12; // r4
    int v13; // r9
    int v14; // r7
    int v15; // r0
    int v16; // r6
    int v17; // r1
    int i; // r2
    int v19; // r3
    int v20; // r3
    int v23; // [sp+Ch] [bp-8h] BYREF
    int v24; // [sp+10h] [bp-4h]
  
    LODWORD(v5) = sub_60918698(a1[34]);
    v6 = v5;
    if ( (int)v5 >= 1 )
    {
      v7 = 0;
      v8 = MEMORY[0xB3BA34];
      do
      {
        v9 = sub_60918688(a1[34], v7);
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        LODWORD(v5) = a2[1];
        if ( v9 == (_DWORD)v5 )
        {
  LABEL_11:
          sub_609186C8(a1[34], v7);
          LODWORD(v5) = sub_609186A0(a1[34], v7, a3);
        }
        else
        {
          for ( HIDWORD(v5) = 1; ; HIDWORD(v5) += 2 )
          {
            v10 = *(unsigned __int8 *)(v9 + HIDWORD(v5) - 1);
            if ( v10 != *(unsigned __int8 *)(v5 + HIDWORD(v5) - 1) )
              break;
            if ( v10 == v8 )
              goto LABEL_11;
            if ( SHIDWORD(v5) >= 524289 )
              break;
            v11 = *(unsigned __int8 *)(v9 + HIDWORD(v5));
            if ( v11 != *(unsigned __int8 *)(v5 + HIDWORD(v5)) )
              break;
            if ( v11 == v8 )
              goto LABEL_11;
          }
        }
        ++v7;
      }
      while ( v7 != v6 );
    }
    v12 = a1[29];
    if ( v12 >= 1 )
    {
      v13 = 0;
      v14 = MEMORY[0xB3BA34];
      do
      {
        v15 = *(_DWORD *)(*(_DWORD *)(a1[25] + 64) + 8 * v13);
        v23 = 12321336;
        v24 = v15 + 2;
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v16 = a2[1];
        (*(void (__fastcall **)(int *))(v23 + 12))(&v23);
        LODWORD(v5) = v24;
        if ( v16 == v24 )
        {
  LABEL_23:
          v5 = *(_QWORD *)(a3 + 144);
          *(_DWORD *)(a1[32] + 4 * v13) = *(_DWORD *)(a3 + 136);
          *(_QWORD *)(a1[33] + 8 * v13) = v5;
        }
        else
        {
          v17 = a2[1];
          for ( i = 1; ; i += 2 )
          {
            v19 = *(unsigned __int8 *)(v17 + i - 1);
            if ( v19 != *(unsigned __int8 *)(v24 + i - 1) )
              break;
            if ( v19 == v14 )
              goto LABEL_23;
            if ( i >= 524289 )
              break;
            v20 = *(unsigned __int8 *)(v17 + i);
            if ( v20 != *(unsigned __int8 *)(v24 + i) )
              break;
            if ( v20 == v14 )
              goto LABEL_23;
          }
        }
        ++v13;
      }
      while ( v13 != v12 );
    }
    return v5;
  }

/* ============================================================================
 * sub_60451438
 * RVA 0x00451438   size 0x104   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60451438(int a1)
  {
    AnimationBase_ctor();
    *(_DWORD *)a1 = 12562676;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 52) = 1065353216;
    *(_DWORD *)(a1 + 56) = 8823304;
    *(_DWORD *)(a1 + 84) = 0;
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 76) = 0;
    *(_DWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 60) = 0;
    *(_DWORD *)(a1 + 36) = a1 + 40;
    *(_DWORD *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 92) = 0;
    *(_DWORD *)(a1 + 88) = 0;
    *(_DWORD *)(a1 + 32) = 12953240;
    *(_DWORD *)(a1 + 100) = 0;
    *(_WORD *)(a1 + 104) = 0;
    *(_DWORD *)(a1 + 108) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    *(_DWORD *)(a1 + 116) = 0;
    *(_DWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 132) = 0;
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 172) = 0;
    *(_DWORD *)(a1 + 168) = 0;
    *(_DWORD *)(a1 + 164) = 0;
    *(_DWORD *)(a1 + 160) = 0;
    *(_DWORD *)(a1 + 156) = 0;
    *(_DWORD *)(a1 + 152) = 0;
    *(_DWORD *)(a1 + 140) = 1065353216;
    *(_DWORD *)(a1 + 144) = 8823304;
    *(_DWORD *)(a1 + 148) = 0;
    *(_DWORD *)(a1 + 124) = a1 + 128;
    *(_DWORD *)(a1 + 184) = 0;
    *(_DWORD *)(a1 + 180) = 0;
    *(_DWORD *)(a1 + 176) = 0;
    *(_DWORD *)(a1 + 120) = 12953312;
    memset((void *)(a1 + 188), 0, 0x2Cu);
    *(_DWORD *)(a1 + 232) = -1;
    *(_DWORD *)(a1 + 236) = 0;
    return a1;
  }

/* ============================================================================
 * sub_6045154C
 * RVA 0x0045154c   size 0x410   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6045154C(int a1, int a2, int a3, int *a4, int a5)
  {
    int v9; // r0
    char v10; // r1
    int v11; // r2
    int v12; // r7
    int v13; // r5
    __int16 v14; // r6
    bool v15; // zf
    int v16; // r3
    int v17; // r12
    int v18; // r6
    int v19; // r7
    __int16 *v20; // r6
    __int16 v21; // r5
    int result; // r0
    int v23; // r4
    bool v24; // zf
    int v25; // r1
    int v26; // r0
    int v27; // r7
    int v28; // r3
    int v29; // r2
    int v30; // r1
    int v31; // r0
    _WORD *v32; // r6
    int v33; // r0
    bool v34; // zf
    int v35; // r11
    int v36; // r10
    int v37; // r9
    int v38; // r4
    int v39; // r6
    int v40; // r0
    _WORD *v41; // r7
    int v42; // r0
    int v43; // r0
    int v44; // [sp+8h] [bp-CCh]
    int v45; // [sp+Ch] [bp-C8h] BYREF
    int v46; // [sp+10h] [bp-C4h]
    int v47; // [sp+14h] [bp-C0h]
    int v48; // [sp+18h] [bp-BCh]
    int v49; // [sp+1Ch] [bp-B8h]
    char v50; // [sp+20h] [bp-B4h]
    char v51; // [sp+21h] [bp-B3h]
    int v52; // [sp+24h] [bp-B0h]
    int v53; // [sp+28h] [bp-ACh]
    int v54; // [sp+2Ch] [bp-A8h]
    int v55; // [sp+30h] [bp-A4h]
    int v56; // [sp+34h] [bp-A0h]
    int v57; // [sp+38h] [bp-9Ch]
    int v58; // [sp+3Ch] [bp-98h]
    int v59; // [sp+40h] [bp-94h]
    int v60; // [sp+44h] [bp-90h]
    int v61; // [sp+48h] [bp-8Ch]
    int v62; // [sp+4Ch] [bp-88h]
    int v63; // [sp+50h] [bp-84h]
    int v64; // [sp+54h] [bp-80h]
    int v65; // [sp+58h] [bp-7Ch]
    int v66; // [sp+5Ch] [bp-78h]
    int v67; // [sp+60h] [bp-74h]
    int v68; // [sp+64h] [bp-70h]
    int v69; // [sp+68h] [bp-6Ch]
    int v70; // [sp+6Ch] [bp-68h]
    int v71; // [sp+70h] [bp-64h]
    int v72; // [sp+74h] [bp-60h]
    int v73; // [sp+78h] [bp-5Ch]
    int v74; // [sp+7Ch] [bp-58h]
    int v75; // [sp+80h] [bp-54h]
    int v76; // [sp+84h] [bp-50h]
    int v77; // [sp+88h] [bp-4Ch]
    int v78; // [sp+8Ch] [bp-48h] BYREF
    int v79; // [sp+90h] [bp-44h]
    int v80; // [sp+94h] [bp-40h]
    char v81; // [sp+98h] [bp-3Ch]
    char v82; // [sp+99h] [bp-3Bh]
    int v83; // [sp+9Ch] [bp-38h]
    int v84; // [sp+A0h] [bp-34h]
    int v85; // [sp+A4h] [bp-30h]
    int v86; // [sp+A8h] [bp-2Ch]
    int v87; // [sp+ACh] [bp-28h]
    int v88; // [sp+B0h] [bp-24h]
    int v89; // [sp+B4h] [bp-20h]
    int v90; // [sp+B8h] [bp-1Ch]
    int v91; // [sp+BCh] [bp-18h]
    int v92; // [sp+C0h] [bp-14h]
    int v93; // [sp+C4h] [bp-10h]
    int v94; // [sp+C8h] [bp-Ch]
    int v95; // [sp+CCh] [bp-8h]
    int v96; // [sp+D0h] [bp-4h]
  
    v9 = -1;
    v10 = 0;
    v80 = -1;
    v79 = -1;
    v81 = 1;
    v82 = 0;
    v83 = 0;
    v84 = 0;
    v85 = 0;
    v86 = 8;
    v87 = 0;
    v88 = -1;
    v89 = 0;
    v90 = 8;
    v91 = 0;
    v92 = -1;
    v93 = 0;
    v94 = 8;
    v95 = 0;
    v96 = -1;
    v78 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 68) + 40);
    v11 = -1;
    v12 = *(_DWORD *)(a3 + 20);
    v13 = *(unsigned __int16 *)(v12 + 194);
    if ( *(_WORD *)(v12 + 194) )
    {
      v10 = 0;
      v11 = -1;
      v12 = *(_DWORD *)(v12 + 88) + 88;
      v9 = -1;
      do
      {
        if ( v9 < *(unsigned __int16 *)(v12 + 10) )
          v9 = *(unsigned __int16 *)(v12 + 10);
        if ( v11 < *(unsigned __int16 *)(v12 + 8) )
          v11 = *(unsigned __int16 *)(v12 + 8);
        v14 = *(_WORD *)v12;
        v12 += 104;
        --v13;
        v10 |= (v14 & 1) == 0;
      }
      while ( v13 );
      v79 = v11;
      v80 = v9;
      v82 = v10;
    }
    v15 = a4 == nullptr;
    if ( a4 )
    {
      v12 = *a4;
      v15 = *a4 == 0;
    }
    if ( !v15 )
    {
      v16 = a4[2];
      v17 = v16 + 4 * v12;
      do
      {
        v18 = *(_DWORD *)(*(_DWORD *)v16 + 20);
        v19 = *(unsigned __int16 *)(v18 + 194);
        if ( *(_WORD *)(v18 + 194) )
        {
          v20 = (__int16 *)(*(_DWORD *)(v18 + 88) + 88);
          do
          {
            if ( v9 < (unsigned __int16)v20[5] )
              v9 = (unsigned __int16)v20[5];
            if ( v11 < (unsigned __int16)v20[4] )
              v11 = (unsigned __int16)v20[4];
            v21 = *v20;
            v20 += 52;
            --v19;
            v10 |= (v21 & 1) == 0;
          }
          while ( v19 );
          v79 = v11;
          v80 = v9;
          v82 = v10;
        }
        v16 += 4;
      }
      while ( v16 != v17 );
    }
    result = v11 | v9;
    if ( result >= 0 )
    {
      sub_6086A438(&v78);
      *(_DWORD *)(a1 + 236) = operator new[](v83, a5, 8);
      result = sub_6086A548(a1 + 32, &v78);
    }
    v23 = *(unsigned __int16 *)(a3 + 82);
    v24 = a4 == nullptr;
    if ( !a4 )
      v24 = v23 == 0;
    if ( !v24 )
    {
      v25 = *(unsigned __int16 *)(a2 + 66);
      v26 = -1;
      v27 = 0;
      v28 = -1;
      v49 = -1;
      v48 = -1;
      v47 = -1;
      v46 = -1;
      v50 = 1;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 8;
      v56 = 0;
      v57 = -1;
      v58 = 0;
      v59 = 8;
      v60 = 0;
      v61 = -1;
      v62 = 0;
      v63 = 8;
      v64 = 0;
      v65 = -1;
      v66 = 0;
      v67 = 8;
      v68 = 0;
      v69 = -1;
      v70 = 0;
      v71 = 8;
      v72 = 0;
      v73 = -1;
      v74 = 0;
      v75 = 8;
      v76 = 0;
      v77 = -1;
      v29 = -1;
      v45 = v25;
      v30 = -1;
      if ( v23 )
      {
        do
        {
          v31 = sub_6043AFA0(a3, 5, v27);
          v32 = *(_WORD **)v31;
          v30 = v46;
          ++v27;
          v33 = *(unsigned __int16 *)(*(_DWORD *)v31 + 100);
          if ( v46 < v33 )
            v30 = v33;
          v46 = v30;
          v29 = v47;
          if ( v47 < (unsigned __int16)v32[57] + (unsigned __int16)v32[56] )
            v29 = (unsigned __int16)v32[57] + (unsigned __int16)v32[56];
          v47 = v29;
          v28 = v49;
          if ( v49 < (unsigned __int16)v32[51] )
            v28 = (unsigned __int16)v32[51];
          v49 = v28;
          v26 = v48;
          if ( v48 < (unsigned __int16)v32[59] )
            v26 = (unsigned __int16)v32[59];
          v48 = v26;
          v51 |= (v32[48] & 1) == 0;
        }
        while ( v23 != v27 );
      }
      v34 = a4 == nullptr;
      v44 = a1;
      if ( a4 )
      {
        v27 = *a4;
        v34 = *a4 == 0;
      }
      if ( !v34 )
      {
        v35 = a4[2];
        v36 = v35 + 4 * v27;
        do
        {
          v37 = *(_DWORD *)v35;
          v38 = *(unsigned __int16 *)(*(_DWORD *)v35 + 82);
          if ( *(_WORD *)(*(_DWORD *)v35 + 82) )
          {
            v39 = 0;
            do
            {
              v40 = sub_6043AFA0(v37, 5, v39);
              v41 = *(_WORD **)v40;
              v30 = v46;
              ++v39;
              v42 = *(unsigned __int16 *)(*(_DWORD *)v40 + 100);
              if ( v46 < v42 )
                v30 = v42;
              v46 = v30;
              v29 = v47;
              if ( v47 < (unsigned __int16)v41[57] + (unsigned __int16)v41[56] )
                v29 = (unsigned __int16)v41[57] + (unsigned __int16)v41[56];
              v47 = v29;
              v28 = v49;
              if ( v49 < (unsigned __int16)v41[51] )
                v28 = (unsigned __int16)v41[51];
              v49 = v28;
              v26 = v48;
              if ( v48 < (unsigned __int16)v41[59] )
                v26 = (unsigned __int16)v41[59];
              v48 = v26;
              v51 |= (v41[48] & 1) == 0;
            }
            while ( v38 != v39 );
          }
          v35 += 4;
        }
        while ( v35 != v36 );
      }
      result = v45 | v30 | v29 | v28 | v26;
      if ( result >= 0 )
      {
        sub_6086AC64(&v45);
        v43 = operator new[](v52, a5, 8);
        return sub_6086ADCC(v44 + 120, &v45, v43, v52);
      }
    }
    return result;
  }

/* ============================================================================
 * sub_6045195C
 * RVA 0x0045195c   size 0x414   xrefs 23
 * ============================================================================ */
  unsigned __int16 *__fastcall sub_6045195C(int a1, int a2, _DWORD *a3)
  {
    int v6; // r4
    int v7; // r11
    int v8; // r4
    unsigned int v9; // r6
    int v10; // r0
    int v11; // r3
    int *v12; // r5
    int v13; // r2
    int v14; // r5
    int v15; // r7
    unsigned __int16 *v16; // r0
    int v17; // r7
    unsigned int v18; // r8
    unsigned int v19; // r2
    int v20; // r0
    int v21; // r1
    int v22; // r4
    unsigned __int16 *result; // r0
    int v24; // r11
    int v25; // r4
    unsigned int v26; // r7
    int v27; // r0
    int v28; // r3
    int *v29; // r6
    int v30; // r2
    int v31; // r6
    int v32; // r5
    unsigned int v33; // r5
    unsigned int v34; // r2
    int v35; // r1
    int v36; // r0
    int v37; // r4
    int v38; // r5
    int v39; // r1
    int v40; // r1
    int v41; // r5
    int v42; // r1
    int v43; // r1
    int v44; // r0
    int v45; // [sp+0h] [bp-4h]
  
    v6 = *(_DWORD *)(a2 + 20);
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v7 = *(_DWORD *)(v6 + 96);
    if ( !v7 )
    {
      v45 = -1;
      goto LABEL_24;
    }
    v45 = -1;
    v8 = a3[1];
    if ( v8 )
      v9 = strlen_0(a3[1]);
    else
      v9 = 0;
    v10 = *(unsigned __int16 *)(v7 + 12);
    v12 = (int *)(v7 + 8 + 16 * v10);
    v11 = *v12;
    if ( *(_DWORD *)(v7 + 8) < *v12 )
    {
      v13 = v7 + 8;
      do
      {
        v14 = 0;
        if ( v9 > v11 >> 3 )
          v14 = (*(unsigned __int8 *)(v8 + v9 + ~(v11 >> 3)) >> (v11 & 7)) & 1;
        v15 = *(_DWORD *)(v13 + 16 * v10);
        v10 = *(unsigned __int16 *)(v13 + 16 * v10 + 2 * v14 + 4);
        v12 = (int *)(v13 + 16 * v10);
        v11 = *v12;
      }
      while ( v15 < *v12 );
    }
    v16 = (unsigned __int16 *)v12[2];
    v17 = a1;
    v18 = *v16;
    v19 = v18;
    if ( v9 < v18 )
      v19 = v9;
    if ( !v19 )
    {
      if ( v9 < v18 )
      {
        a1 = v17;
        goto LABEL_24;
      }
      goto LABEL_21;
    }
    v20 = memcmp_0(v16 + 1, v8);
    v21 = v20;
    if ( !v20 )
      v21 = 1;
    if ( v9 >= v18 && !v20 )
    {
  LABEL_21:
      v21 = 0;
      if ( v18 < v9 )
        v21 = -1;
    }
    a1 = v17;
    if ( v21 )
      goto LABEL_24;
    v36 = (int)v12 - v7 - 24;
    if ( v36 < 0 )
    {
      v45 = v36 >> 4;
  LABEL_24:
      v22 = *(_DWORD *)(a2 + 20);
      result = (unsigned __int16 *)(*(int (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v24 = *(_DWORD *)(v22 + 80);
      if ( !v24 )
        return result;
      v25 = a3[1];
      if ( v25 )
        v26 = strlen_0(a3[1]);
      else
        v26 = 0;
      v27 = *(unsigned __int16 *)(v24 + 12);
      v29 = (int *)(v24 + 8 + 16 * v27);
      v28 = *v29;
      if ( *(_DWORD *)(v24 + 8) < *v29 )
      {
        v30 = v24 + 8;
        do
        {
          v31 = 0;
          if ( v26 > v28 >> 3 )
            v31 = (*(unsigned __int8 *)(v25 + v26 + ~(v28 >> 3)) >> (v28 & 7)) & 1;
          v32 = *(_DWORD *)(v30 + 16 * v27);
          v27 = *(unsigned __int16 *)(v30 + 16 * v27 + 2 * v31 + 4);
          v29 = (int *)(v30 + 16 * v27);
          v28 = *v29;
        }
        while ( v32 < *v29 );
      }
      result = (unsigned __int16 *)v29[2];
      v33 = *result;
      v34 = v33;
      if ( v26 < v33 )
        v34 = v26;
      if ( v34 )
      {
        result = (unsigned __int16 *)memcmp_0(result + 1, v25);
        v35 = (int)result;
        if ( !result )
          v35 = 1;
        if ( v26 < v33 || result )
          goto LABEL_44;
      }
      else if ( v26 < v33 )
      {
        return result;
      }
      v35 = 0;
      if ( v33 < v26 )
        v35 = -1;
  LABEL_44:
      if ( !v35 )
      {
        result = (unsigned __int16 *)((char *)v29 - v24 - 24);
        if ( (int)result >= 0 )
        {
          v41 = *(_DWORD *)sub_6043AFA0(a2, 5, v45);
          sub_6086AF38(a1 + 120, v41);
          *(_DWORD *)(a1 + 224) = v41;
          *(_DWORD *)(a1 + 116) = 0;
          *(_DWORD *)(a1 + 4) = 0;
          *(float *)(a1 + 8) = (float)*(int *)(v41 + 104);
          *(float *)(a1 + 16) = (float)*(int *)(v41 + 104);
          *(_DWORD *)(a1 + 24) = 1065353216;
          AnimationCtrl_setRepeat(a1 + 4, 1);
          *(_DWORD *)(a1 + 20) = 0;
          *(_DWORD *)(a1 + 28) |= 2u;
          sub_6041838C(a1 + 4);
          result = *(unsigned __int16 **)(a1 + 228);
          if ( result )
          {
            v42 = *(_DWORD *)(a1 + 232);
            *(_DWORD *)(a1 + 228) = result;
            *(_DWORD *)(a1 + 232) = v42;
            if ( *(_DWORD *)(a1 + 116) )
            {
              v40 = *((_DWORD *)result + 10);
              v37 = a1 + 32;
              goto LABEL_54;
            }
            if ( *(_DWORD *)(a1 + 224) )
            {
              v43 = *((_DWORD *)result + 10);
              v44 = a1 + 120;
              return (unsigned __int16 *)sub_6086B060(v44, v43);
            }
          }
        }
      }
      return result;
    }
    v37 = v17 + 32;
    v38 = *(_DWORD *)(*(_DWORD *)(a2 + 20) + 88) + 104 * (v36 >> 4);
    sub_6086A634(v17 + 32, v38);
    *(_DWORD *)(v17 + 116) = v38;
    *(_DWORD *)(v17 + 224) = 0;
    *(_DWORD *)(v17 + 4) = 0;
    *(float *)(v17 + 8) = (float)*(int *)(v38 + 92);
    *(float *)(v17 + 16) = (float)*(int *)(v38 + 92);
    *(_DWORD *)(v17 + 24) = 1065353216;
    AnimationCtrl_setRepeat(v17 + 4, 1);
    *(_DWORD *)(v17 + 20) = 0;
    *(_DWORD *)(v17 + 28) |= 2u;
    sub_6041838C(v17 + 4);
    result = *(unsigned __int16 **)(v17 + 228);
    if ( result )
    {
      v39 = *(_DWORD *)(v17 + 232);
      *(_DWORD *)(v17 + 228) = result;
      *(_DWORD *)(v17 + 232) = v39;
      if ( *(_DWORD *)(v17 + 116) )
      {
        v40 = *((_DWORD *)result + 10);
  LABEL_54:
        sub_6086A6E0(v37, v40);
        return (unsigned __int16 *)sub_6086A944(v37);
      }
      if ( *(_DWORD *)(v17 + 224) )
      {
        v43 = *((_DWORD *)result + 10);
        v44 = v17 + 120;
        return (unsigned __int16 *)sub_6086B060(v44, v43);
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60451D70
 * RVA 0x00451d70   size 0x68   xrefs 1
 * ============================================================================ */
  _DWORD *__fastcall sub_60451D70(_DWORD *result, int a2, int a3)
  {
    _DWORD *v3; // r4
  
    if ( result[57] )
    {
      result[57] = 0;
      result[58] = -1;
    }
    result[57] = a2;
    result[58] = a3;
    if ( result[29] )
    {
      v3 = result + 8;
      sub_6086A6E0(result + 8, *(_DWORD *)(a2 + 40));
      return (_DWORD *)sub_6086A944(v3);
    }
    else if ( result[56] )
    {
      return (_DWORD *)sub_6086B060(result + 30, *(_DWORD *)(a2 + 40));
    }
    return result;
  }

/* ============================================================================
 * sub_60451FEC
 * RVA 0x00451fec   size 0x180   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60451FEC(int a1)
  {
    int v2; // r4
  
    v2 = MEMORY[0xC9CF0C];
    if ( !MEMORY[0xC9CF0C] )
    {
      v2 = operator new[](5136, a1, 4);
      sead::IDisposer::IDisposer(v2, a1, 3);
      *(_DWORD *)v2 = 12562700;
      MEMORY[0xC9CF08] = v2;
      sub_604551B4(v2 + 16);
      sub_604551B4(v2 + 328);
      sub_604551B4(v2 + 640);
      sub_604551B4(v2 + 952);
      *(_DWORD *)(v2 + 1280) = 0;
      *(_DWORD *)(v2 + 1316) = 3;
      *(_BYTE *)(v2 + 1320) = 0;
      sead::Random::init((sead::Random *)(v2 + 1340));
      *(_BYTE *)(v2 + 1356) = 0;
      *(_WORD *)(v2 + 1358) = 120;
      *(_BYTE *)(v2 + 1360) = 0;
      *(_BYTE *)(v2 + 1361) = 0;
      *(_BYTE *)(v2 + 1362) = 0;
      *(_DWORD *)(v2 + 1364) = 0;
      *(_DWORD *)(v2 + 1368) = -1;
      *(_DWORD *)(v2 + 1372) = -1;
      *(_DWORD *)(v2 + 1376) = 0;
      *(_DWORD *)(v2 + 1380) = 0;
      *(_BYTE *)(v2 + 1384) = 0;
      *(_WORD *)(v2 + 1392) = 0;
      *(_BYTE *)(v2 + 1394) = 0;
      *(_DWORD *)(v2 + 1388) = 0;
      *(_DWORD *)(v2 + 1396) = -1;
      *(_DWORD *)(v2 + 1400) = 0;
      *(_BYTE *)(v2 + 1404) = 0x80;
      *(_BYTE *)(v2 + 1406) = 0;
      *(_DWORD *)(v2 + 1408) = 30;
      *(_BYTE *)(v2 + 1412) = 0;
      *(_BYTE *)(v2 + 1413) = 0;
      *(_DWORD *)(v2 + 1440) = 0;
      *(_BYTE *)(v2 + 1436) = 0;
      *(_DWORD *)(v2 + 1432) = 0;
      *(_DWORD *)(v2 + 1428) = 0;
      *(_DWORD *)(v2 + 1424) = 0;
      *(_DWORD *)(v2 + 1420) = 0;
      *(_DWORD *)(v2 + 1416) = 0;
      sub_604AE748(v2 + 1444);
      *(_BYTE *)(v2 + 5124) = 0;
      *(_DWORD *)(v2 + 5120) = 0;
      *(_DWORD *)(v2 + 5116) = 0;
      *(_DWORD *)(v2 + 5112) = 0;
      *(_WORD *)(v2 + 5132) = 0;
      *(_WORD *)(v2 + 5130) = 0;
      *(_WORD *)(v2 + 5128) = 0;
      *(_WORD *)(v2 + 5126) = 0;
      MEMORY[0xC9CF0C] = v2;
    }
    return v2;
  }

/* ============================================================================
 * challenge_replay_ref
 * RVA 0x0045217c   size 0x2dc   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6045217C(int a1, int a2, _DWORD *a3, int a4)
  {
    int v7; // r0
    int v8; // r0
    char *v9; // r0
    int i; // r2
    int v11; // r6
    int v12; // r0
    int v13; // r0
    int v14; // r0
    int v15; // r0
    int v16; // r0
    int v17; // r0
    int v18; // r0
    unsigned int v19; // r0
    int U32; // r0
    int v21; // r0
    int v22; // r0
    unsigned int v23; // r0
    unsigned int v24; // r1
    unsigned int v25; // r2
    unsigned int v26; // r3
    _DWORD *v27; // r0
  
    *(_DWORD *)(a1 + 1316) = a2;
    *(_BYTE *)(a1 + 1356) = 0;
    *(_DWORD *)(a1 + 1288) = 0;
    *(_DWORD *)(a1 + 1292) = 0;
    *(_DWORD *)(a1 + 1296) = 0;
    *(_DWORD *)(a1 + 1300) = 0;
    *(_DWORD *)(a1 + 1304) = 0;
    *(_DWORD *)(a1 + 1308) = 0;
    *(_DWORD *)(a1 + 1312) = 0;
    *(_DWORD *)(a1 + 1284) = 0;
    v7 = *(_DWORD *)(a1 + 1316);
    switch ( v7 )
    {
      case 2:
        v8 = operator new(236, a4, 4);
        *(_DWORD *)(a1 + 1388) = sub_60455CB8(v8);
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        v9 = (char *)a3[1];
        if ( v9 == "challenge_replay" )
        {
  LABEL_13:
          sub_60455E7C(*(_DWORD *)(a1 + 1388), a4);
        }
        else
        {
          for ( i = 0; i <= 0x80000; ++i )
          {
            v11 = (unsigned __int8)v9[i];
            if ( v11 != (unsigned __int8)aChallengeRepla[i] )
              break;
            if ( v11 == MEMORY[0xB3BA34] )
              goto LABEL_13;
          }
          sub_60455D54(*(_DWORD *)(a1 + 1388), a3, a4, "challenge_replay");
        }
        sub_60455EF4(*(_DWORD *)(a1 + 1388));
        sub_60452470(a1);
        break;
      case 1:
        v12 = operator new(236, a4, 4);
        v13 = sub_60455CB8(v12);
        *(_DWORD *)(a1 + 1388) = v13;
        sub_60455E7C(v13, a4);
        break;
      case 0:
        *(_DWORD *)(a1 + 1388) = 0;
        break;
    }
    v14 = operator new(404, a4, 4);
    *(_DWORD *)(a1 + 1264) = sub_6045BF30(v14);
    v15 = operator new(404, a4, 4);
    *(_DWORD *)(a1 + 1268) = sub_6045BF30(v15);
    v16 = operator new(404, a4, 4);
    *(_DWORD *)(a1 + 1272) = sub_6045BF30(v16);
    v17 = operator new(404, a4, 4);
    *(_DWORD *)(a1 + 1276) = sub_6045BF30(v17);
    v18 = operator new(404, a4, 4);
    *(_DWORD *)(a1 + 1280) = sub_6045BF30(v18);
    v19 = *(_DWORD *)(a1 + 1316);
    if ( v19 >= 2 )
    {
      if ( v19 != 2 )
        goto LABEL_37;
      v27 = *(_DWORD **)(a1 + 1388);
      v24 = v27[7];
      if ( !v24 )
        v24 = 1;
      *(_DWORD *)(a1 + 1324) = v24;
      v25 = v27[8];
      if ( !v25 )
        v25 = 1;
      *(_DWORD *)(a1 + 1328) = v25;
      v26 = v27[9];
      if ( !v26 )
        v26 = 1;
      *(_DWORD *)(a1 + 1332) = v26;
      v23 = v27[10];
      if ( !v23 )
        v23 = 1;
      *(_DWORD *)(a1 + 1336) = v23;
    }
    else
    {
      U32 = sead::Random::getU32(MEMORY[0xCCF4E4]);
      if ( !U32 )
        U32 = 1;
      *(_DWORD *)(a1 + 1324) = U32;
      v21 = sead::Random::getU32(MEMORY[0xCCF4E4]);
      if ( !v21 )
        v21 = 1;
      *(_DWORD *)(a1 + 1328) = v21;
      v22 = sead::Random::getU32(MEMORY[0xCCF4E4]);
      if ( !v22 )
        v22 = 1;
      *(_DWORD *)(a1 + 1332) = v22;
      v23 = sead::Random::getU32(MEMORY[0xCCF4E4]);
      if ( !v23 )
        v23 = 1;
      *(_DWORD *)(a1 + 1336) = v23;
      v24 = *(_DWORD *)(a1 + 1324);
      v25 = *(_DWORD *)(a1 + 1328);
      v26 = *(_DWORD *)(a1 + 1332);
    }
    sead::Random::init((sead::Random *)(a1 + 1340), v24, v25, v26, v23);
    if ( *(_DWORD *)(a1 + 1316) == 1 )
    {
      sub_604528CC(a1);
      sub_60456064(*(_DWORD *)(a1 + 1388));
    }
  LABEL_37:
    if ( *(_DWORD *)(MEMORY[0xC99DD4] + 764) == 3 )
      sub_604AE8A0(a1 + 1444);
    return sub_60459270(MEMORY[0xC9CFB8]);
  }

/* ============================================================================
 * sub_60452470
 * RVA 0x00452470   size 0x43c   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60452470(int a1)
  {
    int v1; // r4
    int v2; // r12
    int v3; // lr
    int v4; // r6
    int v5; // r1
    int v6; // r9
    _DWORD *v7; // r2
    int v8; // r8
    int v9; // r5
    int v10; // r3
    int v11; // r0
    unsigned int v12; // r0
    unsigned int v13; // r3
    int v14; // r3
    unsigned int v15; // r0
    char v16; // r0
    int v17; // r0
    int v18; // r0
    int v19; // r0
    int v20; // r0
    char v21; // r1
    char v22; // r1
    char v23; // r1
    int v24; // r8
    int v25; // r1
    __int16 v26; // r7
    __int16 v27; // r5
    unsigned int v28; // r3
    unsigned int v29; // r2
    char v30; // r12
    int v31; // r1
    char v32; // r0
    unsigned int v33; // r1
    unsigned int v34; // r0
    __int16 v35; // r4
    int v36; // r3
    int v37; // r1
    unsigned int v38; // r2
    char v39; // r0
    unsigned int v40; // r0
    char v41; // r0
    _BYTE *v42; // r0
    int result; // r0
    unsigned __int8 *v45; // [sp+1Ch] [bp-8h]
    __int16 v46; // [sp+20h] [bp-4h] BYREF
    char v47; // [sp+22h] [bp-2h]
  
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v45 = (unsigned __int8 *)(MEMORY[0xC9A1F0] + 6558);
    v4 = *(_DWORD *)(a1 + 1388);
    v5 = MEMORY[0xCC6D78];
    v6 = MEMORY[0xC99DD4];
    v7 = (_DWORD *)(MEMORY[0xC99DD4] + 344);
    do
    {
      v9 = v4 - 16 * v1;
      v10 = 5;
      v11 = *(unsigned __int8 *)(v9 + 60);
      if ( v11 != 1 )
        LOBYTE(v11) = 0;
      *((_BYTE *)v7 - 52) = v11;
      v12 = *(unsigned __int8 *)(v9 + 61);
      if ( v12 <= 0x63 )
      {
        if ( v12 >= 0x63 )
          v12 = 99;
        v10 = v12;
      }
      *(v7 - 12) = v10;
      v8 = 0;
      if ( *(unsigned __int8 *)(v9 + 62) <= 6u )
      {
        if ( !v1 && (*(_BYTE *)(v5 + 44) & 1) != 0 )
        {
          if ( *(_DWORD *)(v6 + 304) != 1 )
            v8 = *(unsigned __int8 *)(v9 + 62);
        }
        else
        {
          v8 = *(unsigned __int8 *)(v9 + 62);
        }
      }
      *(v7 - 9) = v8;
      v13 = *(char *)(v9 + 63);
      if ( v13 > 6 )
      {
        v14 = 0;
      }
      else
      {
        if ( !v1 && (*(_BYTE *)(v5 + 44) & 1) != 0 && *(_DWORD *)(v6 + 304) == 1 )
        {
          v14 = 0;
          *(_DWORD *)(v6 + 304) = 0;
          goto LABEL_23;
        }
        v14 = dword_60B023E0[v13];
      }
      *(v7 - 10) = v14;
  LABEL_23:
      v15 = *(unsigned __int8 *)(v9 + 64);
      if ( v15 >= 0xA )
        v15 = 0;
      *(v7 - 11) = v15;
      v16 = *(_BYTE *)(v9 + 66);
      *((_BYTE *)v7 - 24) = v16 & 1;
      if ( v14 == 6 )
      {
        if ( (*(_BYTE *)(v5 + 44) & 0x10) != 0 )
        {
          v18 = *v45 | 0x2000000;
        }
        else
        {
          if ( (v16 & 2) != 0 )
          {
            v19 = v3 % 3;
            ++v3;
            v17 = v19 + 3;
          }
          else
          {
            v17 = v2 % 3;
            ++v2;
          }
          v18 = v17 & 0xFFFFFF;
        }
        *(v7 - 7) = v18;
      }
      v20 = *(unsigned __int8 *)(v9 + 65);
      --v1;
      if ( v20 != 1 )
        LOBYTE(v20) = 0;
      *((_BYTE *)v7 - 22) = v20;
      *v7 = *(_DWORD *)(v9 + 68);
      v7 += 18;
    }
    while ( v1 != -4 );
    v21 = *(_BYTE *)(v4 + 124);
    if ( (unsigned __int8)(v21 + 1) > 5u )
      v21 = -1;
    *(_BYTE *)(v6 + 733) = v21;
    v22 = *(_BYTE *)(v4 + 125);
    if ( (unsigned __int8)(v22 + 1) > 5u )
      v22 = -1;
    *(_BYTE *)(v6 + 734) = v22;
    v23 = *(_BYTE *)(v4 + 126);
    if ( (unsigned __int8)(v23 + 1) > 5u )
      v23 = -1;
    *(_BYTE *)(v6 + 735) = v23;
    v24 = v6 + 272;
    v25 = *(unsigned __int8 *)(v4 + 127);
    if ( (unsigned __int8)(v25 + 1) > 3u || v25 == 255 )
    {
      sub_603F692C(v6 + 272);
    }
    else
    {
      v26 = *(unsigned __int8 *)(v6 + 733);
      v27 = *(unsigned __int8 *)(v6 + 734);
      v28 = *(unsigned __int8 *)(v4 + 129);
      v29 = *(unsigned __int8 *)(v4 + 128);
      v30 = *(_BYTE *)(v4 + 130);
      v47 = *(_BYTE *)(v6 + 735);
      v46 = v26 | (v27 << 8);
      if ( v28 >= 2 )
        v28 = 0;
      if ( v29 > 3 )
        LOBYTE(v29) = 0;
      sub_603F6984(
        v24,
        (char)v25,
        v29,
        0,
        v28,
        *(_BYTE *)(MEMORY[0xC9A684] + 16),
        *(_BYTE *)(MEMORY[0xC9A684] + 17),
        *(_BYTE *)(MEMORY[0xC9A684] + 18),
        v30,
        &v46);
    }
    v31 = MEMORY[0xCC6D78];
    v32 = *(_BYTE *)(v4 + 131);
    *(_BYTE *)(MEMORY[0xCC6D78] + 109032) = v32 & 1;
    *(_BYTE *)(v31 + 109033) = (v32 & 4) != 0;
    if ( (v32 & 1) != 0 )
      *(_BYTE *)(v6 + 908) = (v32 & 2) != 0;
    sub_603FD520(v6 + 764, *(unsigned __int8 *)(v4 + 132));
    v33 = *(unsigned __int8 *)(v4 + 133);
    if ( v33 > 0x63 )
      v33 = 0;
    sub_603FD36C(v24, v33);
    v34 = *(_DWORD *)(v4 + 136);
    if ( v34 >= 0x3B9ACA00 )
      v34 = 0;
    *(_DWORD *)(v6 + 728) = v34;
    v35 = *(_WORD *)(v4 + 134);
    *(_BYTE *)(v6 + 777) = v35 & 1;
    *(_BYTE *)(v6 + 732) = (v35 & 2) != 0;
    if ( *(_DWORD *)(v6 + 764) == 1 )
    {
      v36 = 4;
      if ( (v35 & 4) != 0 )
        v36 = 0;
      if ( (v35 & 8) == 0 )
        v36 = 0;
      v37 = v36;
      if ( (v35 & 8) == 0 )
        v37 = 6;
      v38 = *(unsigned __int8 *)(v4 + 148);
      if ( (v35 & 4) == 0 )
        v37 = v36;
      if ( v38 >= 0x13 )
        v38 = 19;
      sub_60407734(MEMORY[0xC9A1E0], v37, v38);
    }
    v39 = *(_BYTE *)(v4 + 149);
    *(_BYTE *)(a1 + 1436) = v39 != 0;
    *(_BYTE *)(MEMORY[0xCC6D8C] + 17) = (v35 & 0x10) != 0;
    *(_BYTE *)(v6 + 768) = (v35 & 0x20) != 0;
    *(_BYTE *)(v6 + 776) = *(_BYTE *)(v4 + 140);
    v40 = *(unsigned __int8 *)(v4 + 141);
    if ( v40 > 0xF )
    {
      v40 = 15;
    }
    else if ( ((1 << v40) & 0x8C00) == 0 )
    {
      v40 = 15;
    }
    *(_DWORD *)(v6 + 772) = v40;
    v41 = *(_BYTE *)(v4 + 142);
    if ( v41 < 0 )
    {
      *(_BYTE *)(v6 + 849) = v41 & 0x7F;
      v42 = (_BYTE *)(v6 + 848);
    }
    else
    {
      *(_BYTE *)(v6 + 848) = v41;
      v42 = (_BYTE *)(v6 + 849);
    }
    *v42 = 0;
    result = *(unsigned __int8 *)(v4 + 143);
    *(_BYTE *)(v6 + 736) = result;
    return result;
  }

/* ============================================================================
 * sub_604528CC
 * RVA 0x004528cc   size 0x3f8   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604528CC(int a1)
  {
    int v1; // r4
    int v2; // r10
    int v3; // r7
    _BYTE *v4; // r0
    char v5; // r12
    char v6; // t1
    char v7; // lr
    char v8; // t1
    char v9; // r3
    char v10; // t1
    char v11; // t1
    char v12; // r5
    char v13; // r1
    char v14; // r1
    char v15; // r2
    char v16; // r3
    char v17; // r5
    char v18; // r1
    char v19; // r8
    char v20; // r9
    char v21; // r2
    _BYTE *v22; // r6
    int v23; // r0
    int v24; // r6
    int v25; // r4
    int v26; // r8
    int v27; // r1
    char v28; // r9
    unsigned int v29; // r0
    int v30; // r0
    int v31; // r1
    char v32; // r0
    int v33; // r0
    _BYTE *v34; // r2
    char v35; // r1
    __int16 v36; // r0
    __int16 v37; // r2
    int v38; // r1
    __int16 v39; // r0
    char v40; // r0
    int v41; // r0
    int v42; // r0
    int result; // r0
    _BYTE v44[92]; // [sp+8h] [bp-5Ch] BYREF
  
    v1 = a1;
    v2 = *(_DWORD *)(a1 + 1388);
    v3 = MEMORY[0xC99DD4];
    sub_60455400(v2 + 16);
    v4 = *(_BYTE **)(v1 + 1388);
    v6 = *(_BYTE *)(v1 + 1324);
    v1 += 1324;
    v5 = v6;
    v8 = *(_BYTE *)(v1 + 4);
    v1 += 4;
    v7 = v8;
    v10 = *(_BYTE *)(v1 + 4);
    v1 += 4;
    v9 = v10;
    v11 = *(_BYTE *)(v1 + 4);
    v1 += 4;
    v4[41] = *(_BYTE *)(v1 + 1);
    v12 = *(_BYTE *)(v1 + 3);
    v13 = *(_BYTE *)(v1 + 2);
    v4[40] = v11;
    v4[43] = v12;
    v4[37] = *(_BYTE *)(v1 - 3);
    v4[42] = v13;
    v14 = v9;
    v15 = *(_BYTE *)(v1 - 1);
    v16 = *(_BYTE *)(v1 - 2);
    v4[36] = v14;
    v4[39] = v15;
    v4[38] = v16;
    v17 = *(_BYTE *)(v1 - 7);
    v18 = *(_BYTE *)(v1 - 11);
    v19 = *(_BYTE *)(v1 - 10);
    v20 = *(_BYTE *)(v1 - 9);
    v21 = *(_BYTE *)(v1 - 5);
    LOBYTE(v1) = *(_BYTE *)(v1 - 6);
    v4[32] = v7;
    v22 = v4 + 34;
    v4[35] = v21;
    v4[33] = v17;
    v4[29] = v18;
    v4 += 28;
    *v22 = v1;
    *v4 = v5;
    v4 += 2;
    v4[1] = v20;
    *v4 = v19;
    v23 = MEMORY[0xC9A684];
    *(_BYTE *)(v2 + 44) = *(_BYTE *)(MEMORY[0xC9A684] + 16);
    *(_BYTE *)(v2 + 45) = *(_BYTE *)(v23 + 17);
    *(_BYTE *)(v2 + 46) = *(_BYTE *)(v23 + 30);
    *(_BYTE *)(v2 + 47) = *(_BYTE *)(v23 + 31);
    *(_BYTE *)(v2 + 48) = *(_DWORD *)(v23 + 32);
    *(_BYTE *)(v2 + 51) = 0;
    LOBYTE(v23) = -1;
    if ( *(_DWORD *)(v3 + 764) == 4 )
      v23 = *(_DWORD *)(sub_603FD91C(MEMORY[0xC9A1F0] + 16, *(unsigned __int8 *)(MEMORY[0xC9A1F0] + 6558)) + 72);
    v24 = v2 + 60;
    v25 = 0;
    *(_BYTE *)(v2 + 50) = v23;
    *(_BYTE *)(v2 + 49) = 0;
    *(_WORD *)(v2 + 52) = 0;
    *(_WORD *)(v2 + 54) = 0;
    do
    {
      v26 = v3 + v25;
      LOBYTE(v27) = 0;
      v28 = 0;
      *(_BYTE *)v24 = *(_BYTE *)(v3 + v25 + 292);
      *(_BYTE *)(v24 + 1) = *(_DWORD *)(v3 + v25 + 296);
      *(_BYTE *)(v24 + 2) = *(_DWORD *)(v3 + v25 + 308);
      v29 = *(_DWORD *)(v3 + v25 + 304);
      if ( v29 <= 6 )
        v27 = dword_60B023E0[v29];
      *(_BYTE *)(v24 + 3) = v27;
      *(_BYTE *)(v24 + 4) = *(_DWORD *)(v26 + 300);
      *(_BYTE *)(v24 + 5) = *(_BYTE *)(v26 + 322);
      if ( *(_DWORD *)(v26 + 316) >> 25 <= 2u )
      {
        v28 = *(_BYTE *)(v26 + 320);
        if ( sub_6042F294(v44, (_DWORD *)(v26 + 316)) == 1 && sub_6042F170((int)v44) == 1 )
          v28 |= 2u;
      }
      *(_BYTE *)(v24 + 6) = v28;
      *(_BYTE *)(v24 + 7) = 0;
      v25 += 72;
      *(_DWORD *)(v24 + 8) = *(_DWORD *)(v26 + 344);
      v24 += 16;
    }
    while ( v25 != 288 );
    *(_BYTE *)(v2 + 124) = *(_BYTE *)(v3 + 733);
    *(_BYTE *)(v2 + 125) = *(_BYTE *)(v3 + 734);
    *(_BYTE *)(v2 + 126) = *(_BYTE *)(v3 + 735);
    v30 = *(_DWORD *)(v3 + 272);
    *(_BYTE *)(v2 + 127) = v30;
    if ( (unsigned __int8)v30 == 255 )
    {
      v32 = 0;
      *(_WORD *)(v2 + 128) = 0;
    }
    else
    {
      v30 = (char)v30;
      v31 = v3;
      if ( (unsigned int)(char)v30 < 2 )
        v31 = v3 + v30;
      *(_BYTE *)(v2 + 128) = *(_BYTE *)(v31 + 284);
      *(_BYTE *)(v2 + 129) = *(_DWORD *)(v3 + 280);
      v32 = *(_BYTE *)(v3 + 279);
    }
    *(_BYTE *)(v2 + 130) = v32;
    *(_BYTE *)(v2 + 131) = 0;
    v33 = MEMORY[0xCC6D78];
    v34 = (_BYTE *)(MEMORY[0xCC6D78] + 109032);
    if ( *(_BYTE *)(MEMORY[0xCC6D78] + 109032) )
    {
      v35 = 1;
      *(_BYTE *)(v2 + 131) = 1;
      if ( *(_BYTE *)(v3 + 908) )
        v35 = 3;
      *(_BYTE *)(v2 + 131) = v35;
      if ( *v34 && *(_BYTE *)(v33 + 109033) )
        *(_BYTE *)(v2 + 131) = v35 | 4;
    }
    *(_BYTE *)(v2 + 132) = *(_DWORD *)(v3 + 764);
    *(_BYTE *)(v2 + 133) = *(_DWORD *)(v3 + 724);
    *(_DWORD *)(v2 + 136) = *(_DWORD *)(v3 + 728);
    v36 = *(unsigned __int8 *)(v3 + 777);
    if ( *(_BYTE *)(v3 + 732) )
      v36 |= 2u;
    if ( *(_DWORD *)(v3 + 764) == 1 && *(_DWORD *)(MEMORY[0xC9A1E0] + 532) == 4 )
      v36 |= 8u;
    v37 = v36 & 0xEF;
    v38 = *(unsigned __int8 *)(v3 + 768);
    if ( *(_BYTE *)(MEMORY[0xCC6D8C] + 17) )
      v37 = v36 | 0x10;
    v39 = v37 & 0xDF;
    if ( *(_BYTE *)(v3 + 768) )
      v39 = v37 | 0x20;
    *(_WORD *)(v2 + 134) = v39;
    *(_BYTE *)(v2 + 140) = *(_BYTE *)(v3 + 776);
    *(_BYTE *)(v2 + 141) = sub_603FD434(v3 + 272, v38);
    if ( *(_BYTE *)(v3 + 848) )
      v40 = *(_BYTE *)(v3 + 848) & 0x7F;
    else
      v40 = *(_BYTE *)(v3 + 849) | 0x80;
    *(_BYTE *)(v2 + 142) = v40;
    *(_BYTE *)(v2 + 143) = *(_BYTE *)(v3 + 736);
    if ( *(_DWORD *)(v3 + 764) == 1 )
    {
      v41 = MEMORY[0xC9A1E0];
      *(_DWORD *)(v2 + 144) = *(_DWORD *)(MEMORY[0xC9A1E0] + 712);
      v42 = *(_DWORD *)(v41 + 720);
    }
    else
    {
      LOBYTE(v42) = 0;
      *(_DWORD *)(v2 + 144) = 0;
    }
    *(_BYTE *)(v2 + 148) = v42;
    result = *(unsigned __int8 *)(MEMORY[0xC9CFB8] + 84);
    *(_BYTE *)(v2 + 149) = result;
    return result;
  }

/* ============================================================================
 * sub_60452CE8
 * RVA 0x00452ce8   size 0x98   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60452CE8(int a1)
  {
    int result; // r0
    int v3; // r4
  
    sub_6045BF58(*(_DWORD *)(a1 + 1264), 0);
    sub_6045BF58(*(_DWORD *)(a1 + 1268), 1);
    sub_6045BF58(*(_DWORD *)(a1 + 1272), 2);
    sub_6045BF58(*(_DWORD *)(a1 + 1276), 3);
    sub_6045BF58(*(_DWORD *)(a1 + 1280), 4);
    *(_BYTE *)(a1 + 1356) = 1;
    result = *(_DWORD *)(MEMORY[0xC99DD4] + 764);
    if ( result == 3 )
    {
      v3 = a1 + 1444;
      N_NormalCoin_00_ref(v3);
      sub_604AEFA0(v3);
      sub_604AEE94(v3, 0);
      return sub_604AEEC0(v3, 1);
    }
    return result;
  }

/* ============================================================================
 * sub_60452D84
 * RVA 0x00452d84   size 0x140   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60452D84(int a1, int a2)
  {
    int v4; // r6
    _DWORD v6[12]; // [sp+8h] [bp-30h] BYREF
  
    if ( *(_BYTE *)(a1 + 1320) )
      sub_60452EDC(a1);
    if ( *(_DWORD *)(a1 + 1316) == 1 )
      sub_60456918(*(_DWORD *)(a1 + 1388));
    if ( **(unsigned __int8 **)(a2 + 4) == MEMORY[0xB3BA34] )
      goto LABEL_9;
    v4 = *(_DWORD *)(MEMORY[0xCC6D78] + 132);
    memset(&v6[1], 0, 44);
    v6[0] = 12557552;
    if ( sub_608E86B8(MEMORY[0xCCEBD0], v6, a2, 1, 0) )
    {
      sub_608E7D54(v6, *(_DWORD *)(*(_DWORD *)(a1 + 1388) + 8), v4);
      sub_608E7A54(v6);
      v6[0] = 12557552;
      if ( v6[2] )
        sub_608E6738(v6[2], v6);
  LABEL_9:
      *(_DWORD *)(a1 + 1316) = 3;
      return 1;
    }
    *(_DWORD *)(a1 + 1316) = 3;
    v6[0] = 12557552;
    if ( v6[2] )
      sub_608E6738(v6[2], v6);
    return 0;
  }

/* ============================================================================
 * sub_60452EDC
 * RVA 0x00452edc   size 0x2c8   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60452EDC(int a1)
  {
    int result; // r0
    int v3; // r5
    int v4; // r0
    int v5; // r0
    _BYTE *v6; // r1
    int v7; // r0
    _BYTE v8[8]; // [sp+0h] [bp-8h] BYREF
  
    *(_BYTE *)(a1 + 1320) = 0;
    if ( *(_BYTE *)(a1 + 1394) )
    {
      *(_BYTE *)(a1 + 1394) = 0;
      result = *(unsigned __int8 *)(a1 + 1393);
      *(_BYTE *)(a1 + 1392) = result;
    }
    else
    {
      v3 = *(_DWORD *)(MEMORY[0xC995D0] + 32);
      if ( _cxa_guard_acquire_0(13163568) )
      {
        MEMORY[0xC8DC2C] = 12424368;
        _cxa_guard_release_0(13163568);
      }
      if ( v3 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 13163564) )
        goto LABEL_15;
      if ( _cxa_guard_acquire_0(13163560) )
      {
        MEMORY[0xC8DC24] = 12424368;
        _cxa_guard_release_0(13163560);
      }
      if ( v3 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 13163556) )
        goto LABEL_15;
      if ( _cxa_guard_acquire_0(13211080) )
      {
        MEMORY[0xC995C4] = 12424368;
        _cxa_guard_release_0(13211080);
      }
      if ( v3 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 13211076) == 1 )
      {
  LABEL_15:
        *(_DWORD *)(a1 + 1284) = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 1288) = *(_DWORD *)(a1 + 332);
        *(_DWORD *)(a1 + 1292) = *(_DWORD *)(a1 + 644);
        *(_DWORD *)(a1 + 1296) = *(_DWORD *)(a1 + 956);
      }
      v4 = *(_DWORD *)(a1 + 1316);
      if ( v4 == 2 )
      {
        v7 = *(_DWORD *)(a1 + 1388);
        if ( *(_BYTE *)(v7 + 208) )
        {
          sub_60454858(a1, v8);
          sub_60454B60(a1, *(_DWORD *)(a1 + 1388) + 212, v8);
          v7 = *(_DWORD *)(a1 + 1388);
        }
        sub_604564D4(v7);
      }
      else if ( v4 == 1 )
      {
        sub_60456458(*(_DWORD *)(a1 + 1388), 0, *(unsigned __int8 *)(a1 + 326));
        sub_60456458(*(_DWORD *)(a1 + 1388), 1, *(unsigned __int8 *)(a1 + 638));
        sub_60456458(*(_DWORD *)(a1 + 1388), 2, *(unsigned __int8 *)(a1 + 950));
        sub_60456458(*(_DWORD *)(a1 + 1388), 3, *(unsigned __int8 *)(a1 + 1262));
        if ( (*(_BYTE *)(MEMORY[0xC99DD4] + 1052) & 0xF) != 0 )
        {
          v5 = *(_DWORD *)(a1 + 1388);
          v6 = nullptr;
        }
        else
        {
          sub_60454858(a1, v8);
          v5 = *(_DWORD *)(a1 + 1388);
          v6 = v8;
        }
        sub_604564E0(v5, v6);
      }
      *(_BYTE *)(a1 + 1392) = *(_BYTE *)(a1 + 1393);
      result = *(_DWORD *)(MEMORY[0xC99DD4] + 764);
      if ( result == 3 )
        return sub_604AEEF8(a1 + 1444);
    }
    return result;
  }

/* ============================================================================
 * sub_604531F8
 * RVA 0x004531f8   size 0x2c0   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604531F8(int a1)
  {
    int v2; // r0
    int v3; // r0
    int v5; // r0
    int v6; // r5
    _BYTE **v7; // r7
    _BYTE *v8; // r6
    int v9; // r0
    bool v10; // zf
    int v11; // r5
    int v12; // r7
    int v13; // r6
    int v14; // r11
    int v15; // r1
    unsigned __int16 v16; // [sp+12h] [bp-Ah] BYREF
    int v17; // [sp+14h] [bp-8h] BYREF
    int v18; // [sp+18h] [bp-4h] BYREF
  
    *(_BYTE *)(a1 + 1320) = 1;
    if ( *(_BYTE *)(a1 + 1392) && *(char *)(a1 + 1404) >= 0 && !*(_BYTE *)(a1 + 1406) )
    {
      *(_BYTE *)(a1 + 1394) = 1;
      return 1;
    }
    *(_BYTE *)(a1 + 1394) = 0;
    v2 = *(_DWORD *)(a1 + 1316);
    if ( v2 == 2 )
    {
      sub_60456128(*(_DWORD *)(a1 + 1388));
    }
    else if ( v2 == 1 )
    {
      sub_60456388(*(_DWORD *)(a1 + 1388));
    }
    if ( *(_DWORD *)(a1 + 1316) != 2 && *(_BYTE *)(MEMORY[0xC9A684] + 17) == 40 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 1264) + 272) )
      {
        v3 = 30;
      }
      else
      {
        v5 = *(_DWORD *)(a1 + 1408);
        if ( !v5 )
          goto LABEL_16;
        v3 = v5 - 1;
      }
      *(_DWORD *)(a1 + 1408) = v3;
    }
  LABEL_16:
    *(_DWORD *)(a1 + 1408) = 30;
    v6 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      goto LABEL_28;
    v7 = *(_BYTE ***)(MEMORY[0xCCF448] + 220);
    while ( 1 )
    {
      v8 = *v7;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v9 = (**(int (__fastcall ***)(_BYTE *, int))v8)(v8, 13156896);
      v10 = v8 == nullptr;
      if ( v8 )
        v10 = (v9 ^ 1) == 1;
      if ( !v10 )
        break;
      if ( ++v7 == (_BYTE **)(*(_DWORD *)(v6 + 220) + 4 * *(_DWORD *)(v6 + 212)) )
        goto LABEL_28;
    }
    if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v8 + 20))(v8) != 1 || v8[353] == 1 )
  LABEL_28:
      *(_DWORD *)(a1 + 1408) = 0;
    v11 = a1 + 16;
    v12 = 0;
    v13 = a1 + 1284;
    v14 = MEMORY[0xC995D0];
    do
    {
      sub_604534DC(a1, &v18, &v17, &v16, v12);
      if ( *(_DWORD *)(a1 + 1316) == 1 )
        sub_60456428(*(_DWORD *)(a1 + 1388), v12, v18 & 0x3FFF, v17 & 0x3FFF, v16);
      if ( *(_DWORD *)(v14 + 32) )
      {
        v15 = v18 & ~*(_DWORD *)(v13 + 4 * v12);
        v18 = v15;
        *(_DWORD *)(v13 + 4 * v12) = 0;
      }
      else
      {
        v15 = v18;
      }
      sub_6045525C(v11, v15, v17, (__int16)v16);
      ++v12;
      v11 += 312;
    }
    while ( v12 != 4 );
    sub_60453694(a1);
    sub_60453764(a1);
    sub_60453AA8(a1);
    sub_60453D7C(a1);
    sub_60453F44(a1);
    return sub_60454344(a1);
  }

/* ============================================================================
 * sub_604534DC
 * RVA 0x004534dc   size 0x1b8   xrefs 1
 * ============================================================================ */
  _DWORD *__fastcall sub_604534DC(_DWORD *result, int *a2, int *a3, _WORD *a4, unsigned int a5)
  {
    unsigned int v5; // r7
    int v6; // lr
    unsigned int v7; // r7
    _DWORD *v8; // r11
    int v9; // r5
    unsigned int v10; // r4
    _DWORD *v11; // r4
    int v12; // r9
    _DWORD *v13; // r7
    _DWORD *v14; // r6
    unsigned int v15; // r2
  
    v5 = result[329];
    if ( v5 >= 2 )
    {
      if ( v5 == 2 )
      {
        *a2 = *(unsigned __int16 *)(result[347] + 8 * a5 + 152);
        *a3 = *(unsigned __int16 *)(result[347] + 8 * a5 + 154);
        result = (_DWORD *)*(unsigned __int16 *)(result[347] + 8 * a5 + 156);
        *a4 = (_WORD)result;
      }
    }
    else
    {
      v6 = result[352] | a5;
      if ( v6 )
      {
        v7 = a5;
        v8 = result + 320;
        if ( a5 >= 4 )
          v7 = 0;
        v9 = (int)&result[v7 + 316];
      }
      else
      {
        v8 = result + 320;
        v9 = (int)(result + 320);
      }
      v10 = 0;
      if ( a5 < 4 )
        v10 = a5;
      v11 = &result[v10];
      v12 = v11[325]
          | *(_DWORD *)(*(_DWORD *)v9 + 4) & 0x7FF
          | (*(_DWORD *)(*(_DWORD *)v9 + 4) >> 2) & 0x800
          | (*(_DWORD *)(*(_DWORD *)v9 + 4) >> 4) & 0x1000
          | (*(_DWORD *)(*(_DWORD *)v9 + 4) >> 4) & 0x2000;
      v13 = v11 + 316;
      v14 = v11 + 316;
      if ( !v6 )
        v14 = v8;
      v15 = *(_DWORD *)(*v14 + 8);
      *a2 = ((*(_DWORD *)(*v14 + 272) >> 2) & 0x800
           | *(_DWORD *)(*v14 + 272) & 0x7FF
           | (*(_DWORD *)(*v14 + 272) >> 4) & 0x1000
           | (*(_DWORD *)(*v14 + 272) >> 4) & 0x2000
           | v15 & 0x7FF
           | (v15 >> 2) & 0x800
           | (v15 >> 4) & 0x1000
           | (v15 >> 4) & 0x2000)
          & ~v12;
      if ( !(result[352] | a5) )
        v13 = v8;
      *a3 = *(_DWORD *)(*v13 + 272) & 0x7FF
          | v12
          | (*(_DWORD *)(*v13 + 272) >> 2) & 0x800
          | (*(_DWORD *)(*v13 + 272) >> 4) & 0x1000
          | (*(_DWORD *)(*v13 + 272) >> 4) & 0x2000;
      *a4 = *(_WORD *)(*(_DWORD *)(v11[316] + 324) + 434);
      v11[325] = 0;
      return nullptr;
    }
    return result;
  }

/* ============================================================================
 * sub_60453694
 * RVA 0x00453694   size 0xd0   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60453694(int a1)
  {
    int v2; // r0
    int result; // r0
    char v4; // [sp+Bh] [bp-5h] BYREF
    char v5; // [sp+Ch] [bp-4h] BYREF
    char v6; // [sp+Dh] [bp-3h] BYREF
    __int16 v7; // [sp+Eh] [bp-2h] BYREF
  
    if ( *(_DWORD *)(a1 + 1316) == 2 )
    {
      sub_600242D8(&v7, &v6, &v5, &v4, 120);
      v2 = *(_DWORD *)(a1 + 1388);
      *(_BYTE *)(a1 + 1360) = *(_BYTE *)(v2 + 184) & 7;
      *(_BYTE *)(a1 + 1361) = *(_BYTE *)(v2 + 185);
      *(_BYTE *)(a1 + 1362) = sub_60456480();
      result = *(unsigned __int16 *)(*(_DWORD *)(a1 + 1388) + 186);
      *(_WORD *)(a1 + 1358) = result;
    }
    else
    {
      sub_600242D8((_WORD *)(a1 + 1358), (_BYTE *)(a1 + 1360), (_BYTE *)(a1 + 1361), (_BYTE *)(a1 + 1362), 120);
      result = *(_DWORD *)(a1 + 1316);
      if ( result == 1 )
        return sub_60456464(
                 *(_DWORD *)(a1 + 1388),
                 *(unsigned __int8 *)(a1 + 1360),
                 *(unsigned __int8 *)(a1 + 1361),
                 *(unsigned __int8 *)(a1 + 1362),
                 *(unsigned __int16 *)(a1 + 1358));
    }
    return result;
  }

/* ============================================================================
 * sub_60453764
 * RVA 0x00453764   size 0x324   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60453764(int a1)
  {
    int v2; // r0
    int v3; // r2
    int v4; // r1
    int v5; // r0
    int v6; // r5
    int v7; // r2
    bool v8; // zf
    int v9; // r2
    int v10; // r0
    unsigned int v11; // r1
    int result; // r0
    float v13; // s2
    int v14; // r0
    int v15; // r1
    int v16; // r2
    int v17; // r2
    unsigned int v18; // r0
    unsigned int v19; // r0
    _BYTE v20[8]; // [sp+8h] [bp-38h] BYREF
    int v21; // [sp+10h] [bp-30h]
    int v22; // [sp+28h] [bp-18h]
    int v23; // [sp+2Ch] [bp-14h]
  
    v2 = MEMORY[0xC99DD4];
    v3 = *(_DWORD *)(a1 + 1316);
    if ( *(_DWORD *)(MEMORY[0xC99DD4] + 764) == 3 )
    {
      if ( v3 == 2 )
      {
        v5 = *(_DWORD *)(a1 + 1388);
        v6 = 0;
        v7 = *(unsigned __int16 *)(v5 + 196);
        v8 = v7 == 0xFFFF;
        if ( v7 != 0xFFFF )
          v8 = *(unsigned __int16 *)(v5 + 198) == 0xFFFF;
        if ( !v8 )
        {
          *(_DWORD *)(a1 + 1368) = v7;
          v6 = 1;
          *(_DWORD *)(a1 + 1372) = *(unsigned __int16 *)(v5 + 198);
        }
        *(float *)(a1 + 1376) = (float)*(__int16 *)(v5 + 192) / 32768.0;
        *(float *)(a1 + 1380) = (float)*(__int16 *)(v5 + 194) / 32768.0;
  LABEL_32:
        v17 = *(_DWORD *)(a1 + 1364);
        v18 = v17 & 0xFFFFFFFE;
        if ( (v17 & 2) == 0 )
          v18 = v17 | 1;
        if ( !v6 )
          v18 = v17 & 0xFFFFFFFE;
        *(_DWORD *)(a1 + 1364) = v18;
        if ( v6 == 1 )
        {
          v19 = v18 | 2;
          *(_DWORD *)(a1 + 1364) = v19;
        }
        else
        {
          v19 = v18 & 0xFFFFFFFD;
          *(_DWORD *)(a1 + 1364) = v19;
          if ( (v17 & 2) != 0 )
          {
            result = v19 | 4;
            goto LABEL_41;
          }
        }
        result = v19 & 0xFFFFFFFB;
  LABEL_41:
        *(_DWORD *)(a1 + 1364) = result;
        if ( (result & 1) != 0 )
        {
          *(_BYTE *)(a1 + 1412) = 1;
          return 1;
        }
        return result;
      }
      if ( *(char *)(a1 + 1404) < 0 || *(_BYTE *)(a1 + 1406) )
      {
        v4 = (*(unsigned __int8 *)(a1 + 1364) >> 1) & 1;
      }
      else
      {
        nn::hid::GetTouchScreenState<1u>(v20);
        v4 = v21 > 0;
        v2 = MEMORY[0xC99DD4];
      }
      v6 = 0;
      if ( !*(_DWORD *)(v2 + 1376) )
      {
        if ( *(_DWORD *)(v2 + 764) == 3 )
        {
          if ( v4 != 1 )
            goto LABEL_30;
        }
        else
        {
          v6 = 0;
          if ( ((unsigned __int8)v4 & (*(_BYTE *)(MEMORY[0xC9A684] + 17) == 40)) == 0 )
            goto LABEL_30;
        }
        nn::hid::GetTouchScreenState<1u>(v20);
        if ( v21 > 0 )
        {
          v13 = (float)((float)v23 / 720.0) * 720.0;
          *(_DWORD *)(a1 + 1368) = (int)(float)((float)((float)v22 / 1280.0) * 1280.0);
          *(_DWORD *)(a1 + 1372) = (int)v13;
        }
        v6 = 1;
      }
  LABEL_30:
      v14 = *(_DWORD *)(*(_DWORD *)(MEMORY[0xCCF448] + 220) + 16);
      v15 = (int)(float)(*(float *)(v14 + 284) * 32767.0);
      v16 = (int)(float)(*(float *)(v14 + 288) * 32767.0);
      *(float *)(a1 + 1376) = (float)v15 / 32768.0;
      *(float *)(a1 + 1380) = (float)v16 / 32768.0;
      if ( *(_DWORD *)(a1 + 1316) == 1 )
        sub_6045648C(*(_DWORD *)(a1 + 1388), v15, v16, v6, *(_DWORD *)(a1 + 1368), *(_DWORD *)(a1 + 1372));
      goto LABEL_32;
    }
    if ( v3 == 2 )
    {
      v9 = *(_DWORD *)(a1 + 1388);
      if ( *(unsigned __int16 *)(v9 + 196) != 0xFFFF && *(unsigned __int16 *)(v9 + 198) != 0xFFFF )
        *(_BYTE *)(MEMORY[0xC99DD4] + 777) = 1;
    }
    else if ( v3 == 1 )
    {
      sub_6045648C(*(_DWORD *)(a1 + 1388), 0, 0, 0, 0, 0);
    }
    *(_DWORD *)(a1 + 1380) = 0;
    *(_DWORD *)(a1 + 1376) = 0;
    *(_DWORD *)(a1 + 1372) = 0;
    *(_DWORD *)(a1 + 1368) = 0;
    v10 = *(_DWORD *)(a1 + 1364);
    v11 = v10 & 0xFFFFFFFC;
    if ( (v10 & 2) != 0 )
      result = v10 & 0xFFFFFFF8 | 4;
    else
      result = v10 & 0xFFFFFFF8;
    *(_DWORD *)(a1 + 1364) = v11;
    *(_DWORD *)(a1 + 1364) = result;
    return result;
  }

/* ============================================================================
 * sub_60453AA8
 * RVA 0x00453aa8   size 0x2c0   xrefs 2
 * ============================================================================ */
  unsigned int __fastcall sub_60453AA8(int a1, unsigned int a2)
  {
    int v3; // r0
    int v4; // r0
    unsigned int *v5; // r6
    unsigned int result; // r0
    bool v7; // cc
    int v8; // r7
    int v9; // r5
    unsigned int v10; // r0
    unsigned int v11; // r1
    int v12; // r1
    unsigned int v13; // r0
    int v14; // r0
    unsigned int v15; // r1
    int v16; // r7
    int v17; // r5
    unsigned int v18; // r0
    unsigned int v19; // r1
    int v20; // r1
    unsigned int v21; // r0
    int v22; // r0
    unsigned int v23; // r1
    unsigned int v24; // r5
    unsigned int v25; // r1
    float v26; // s6
    float v27[3]; // [sp+Ch] [bp-Ch] BYREF
  
    v3 = *(_DWORD *)(a1 + 1316);
    if ( v3 == 1 )
    {
      v5 = (unsigned int *)(a1 + 1396);
      a2 = *(_DWORD *)(a1 + 1396);
      if ( a2 != -1 )
        sub_604564B8(*(_DWORD *)(a1 + 1388), (unsigned __int8)a2, *(unsigned __int8 *)(a1 + 1400));
    }
    else
    {
      if ( v3 == 2 )
      {
        v4 = *(_DWORD *)(a1 + 1388);
        a2 = *(unsigned __int8 *)(v4 + 223);
        if ( a2 == 255 )
          a2 = -1;
        *(_DWORD *)(a1 + 1396) = a2;
        *(_DWORD *)(a1 + 1400) = *(unsigned __int8 *)(v4 + 224);
      }
      v5 = (unsigned int *)(a1 + 1396);
    }
    result = *v5;
    if ( *v5 != -1 )
    {
      if ( result == 4 )
      {
        *(_BYTE *)(a1 + 1413) = 1;
  LABEL_41:
        *v5 = -1;
        return -1;
      }
      v7 = result > 3;
      if ( result <= 3 )
      {
        a2 = *(_DWORD *)(a1 + 1400);
        v7 = a2 > 5;
      }
      if ( !v7 )
      {
        v8 = MEMORY[0xC99DD4];
        v9 = MEMORY[0xC99DD4] + 272;
        v10 = sub_603FCB6C((_DWORD *)(MEMORY[0xC99DD4] + 272), a2);
        v11 = *v5;
        if ( v10 == -1 )
        {
          if ( v11 >= 6 )
            v11 = 0;
          v12 = v8 + 72 * v11;
          *(_BYTE *)(v12 + 292) = 0;
          *(_DWORD *)(v12 + 296) = 5;
          *(_DWORD *)(v12 + 300) = 0;
          *(_DWORD *)(v12 + 304) = 0;
          *(_DWORD *)(v12 + 308) = 0;
          *(_DWORD *)(v12 + 312) = 0;
          *(_DWORD *)(v12 + 316) = 100663296;
          memset((void *)(v12 + 320), 0, 0x2Cu);
        }
        else if ( v10 != v11 )
        {
          sub_603FCC50(v9, v11, v10);
        }
        v13 = *v5;
        if ( *v5 >= 6 )
          v13 = 0;
        v14 = v8 + 72 * v13;
        *(_BYTE *)(v14 + 292) = 1;
        *(_DWORD *)(v14 + 304) = *(_DWORD *)(a1 + 1400);
        *(_BYTE *)(v14 + 321) = 0;
        v15 = *(_DWORD *)(a1 + 1400);
        if ( v15 <= 5 )
          *(_DWORD *)(v14 + 308) = v15;
        if ( *(_DWORD *)(a1 + 1316) != 2 )
        {
          v16 = MEMORY[0xC99DEC];
          v17 = MEMORY[0xC99DEC] + 16;
          v18 = sub_603FCB6C((_DWORD *)(MEMORY[0xC99DEC] + 16), *(_DWORD *)(a1 + 1400));
          v19 = *v5;
          if ( v18 == -1 )
          {
            if ( v19 >= 6 )
              v19 = 0;
            v20 = v16 + 72 * v19;
            *(_BYTE *)(v20 + 36) = 0;
            *(_DWORD *)(v20 + 40) = 5;
            *(_DWORD *)(v20 + 44) = 0;
            *(_DWORD *)(v20 + 48) = 0;
            *(_DWORD *)(v20 + 52) = 0;
            *(_DWORD *)(v20 + 56) = 0;
            *(_DWORD *)(v20 + 60) = 100663296;
            memset((void *)(v20 + 64), 0, 0x2Cu);
          }
          else if ( v18 != v19 )
          {
            sub_603FCC50(v17, v19, v18);
          }
          v21 = *v5;
          if ( *v5 >= 6 )
            v21 = 0;
          v22 = v16 + 72 * v21;
          *(_BYTE *)(v22 + 36) = 1;
          *(_DWORD *)(v22 + 48) = *(_DWORD *)(a1 + 1400);
          *(_BYTE *)(v22 + 65) = 0;
          v23 = *(_DWORD *)(a1 + 1400);
          if ( v23 <= 5 )
            *(_DWORD *)(v22 + 52) = v23;
        }
        v24 = 0;
        v25 = 0;
        v26 = *(float *)(MEMORY[0xCC6484] + 124) + (float)(*(float *)(MEMORY[0xCC6484] + 108) * 0.5);
        v27[0] = *(float *)(MEMORY[0xCC6484] + 112) + (float)(*(float *)(MEMORY[0xCC6484] + 104) * 0.5);
        v27[1] = v26;
        v27[2] = 0.0;
        if ( *v5 < 6 )
          v25 = *v5;
        sub_60787A24(*v5, v27, *(_DWORD *)(MEMORY[0xC99DD4] + 72 * v25 + 300), *(_DWORD *)(a1 + 1400), 0, 0);
        if ( *v5 < 4 )
          v24 = *v5;
        sub_60799130(*(_DWORD *)(MEMORY[0xCC436C] + 4 * v24 + 32));
        goto LABEL_41;
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60453D7C
 * RVA 0x00453d7c   size 0x1a8   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60453D7C(int a1)
  {
    int v1; // r4
    int v2; // r10
    int v3; // r6
    int *v4; // r9
    int v5; // r8
    int v6; // r4
    int v7; // r0
    int v8; // r0
    unsigned __int8 v9; // r2
    int v12; // [sp+4h] [bp-10h]
  
    v1 = a1;
    if ( *(_DWORD *)(a1 + 1316) == 2 )
    {
      *(_BYTE *)(a1 + 1404) = *(_BYTE *)(*(_DWORD *)(a1 + 1388) + 225);
      goto LABEL_22;
    }
    v2 = 0;
    v3 = MEMORY[0xCCF448];
    LOBYTE(v12) = 0;
    do
    {
      if ( !*(_DWORD *)(v3 + 212) )
        goto LABEL_16;
      v4 = *(int **)(v3 + 220);
      v5 = v2;
      while ( 1 )
      {
        v6 = *v4;
        if ( _cxa_guard_acquire_0(13225748) )
        {
          MEMORY[0xC9CF10] = 12420264;
          _cxa_guard_release_0(13225748);
        }
        v7 = (**(int (__fastcall ***)(int, int))v6)(v6, 13225744);
        if ( !v6 || v7 != 1 )
          goto LABEL_12;
        if ( !v5 )
          break;
        --v5;
  LABEL_12:
        if ( ++v4 == (int *)(*(_DWORD *)(v3 + 220) + 4 * *(_DWORD *)(v3 + 212)) )
          goto LABEL_16;
      }
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) == 1 )
        v12 = (unsigned __int8)v12 | (1 << v2);
  LABEL_16:
      ++v2;
    }
    while ( v2 != 4 );
    v8 = sub_607F6ABC(MEMORY[0xCC62E4]);
    v9 = v12;
    if ( v8 )
      v9 = v12 | 0x80;
    v1 = a1;
    if ( *(unsigned __int8 *)(a1 + 1404) != v9 )
    {
      *(_BYTE *)(a1 + 1404) = v9;
      if ( *(_DWORD *)(a1 + 1388) )
        sub_604564C4();
    }
  LABEL_22:
    *(_BYTE *)(v1 + 1406) = 0;
    return 0;
  }

/* ============================================================================
 * sub_60453F44
 * RVA 0x00453f44   size 0x3b0   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60453F44(int result)
  {
    int v1; // r8
    int v2; // r1
    int (__fastcall ****v3)(_DWORD, int); // r5
    int (__fastcall ***v4)(_DWORD, int); // r7
    int v5; // r0
    bool v6; // zf
    int v7; // r5
    int v8; // r0
    int v9; // r9
    int v10; // r0
    _BYTE **v11; // r11
    int v12; // r5
    _BYTE *v13; // r4
    int v14; // r0
    _BYTE **v15; // r5
    int v16; // r11
    int v17; // r0
    int v18; // [sp+4h] [bp-30h]
    int v19; // [sp+20h] [bp-14h]
  
    v1 = MEMORY[0xCCF448];
    if ( *(_DWORD *)(result + 1316) == 2 )
    {
      v2 = *(_DWORD *)(result + 1388);
      if ( v2 )
        *(_BYTE *)(result + 1405) = *(_BYTE *)(v2 + 227);
      return result;
    }
    v19 = result;
    if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
    {
      v3 = *(int (__fastcall *****)(_DWORD, int))(MEMORY[0xCCF448] + 220);
      do
      {
        v4 = *v3;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v5 = (**v4)(v4, 13156896);
        v6 = v4 == nullptr;
        if ( v4 )
          v6 = (v5 ^ 1) == 1;
        if ( !v6 )
          break;
        ++v3;
      }
      while ( v3 != (int (__fastcall ****)(_DWORD, int))(*(_DWORD *)(v1 + 220) + 4 * *(_DWORD *)(v1 + 212)) );
    }
    LOBYTE(v18) = 0;
    v7 = v19;
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = v8;
        v6 = (*(_DWORD *)(v7 + 1408) | v8) == 0;
        v10 = v7 + 4 * v8 + 1264;
        if ( v6 )
          v10 = v7 + 1280;
        if ( (*(_BYTE *)(*(_DWORD *)v10 + 272) & 0xF0) == 0 )
          break;
        if ( *(_DWORD *)(v1 + 212) )
        {
          v11 = *(_BYTE ***)(v1 + 220);
          v12 = v9;
          do
          {
            v13 = *v11;
            if ( _cxa_guard_acquire_0(13225748) )
            {
              MEMORY[0xC9CF10] = 12420264;
              _cxa_guard_release_0(13225748);
            }
            v14 = (**(int (__fastcall ***)(_BYTE *, int))v13)(v13, 13225744);
            if ( v13 && v14 == 1 )
            {
              if ( !v12 )
                goto LABEL_28;
              --v12;
            }
            ++v11;
          }
          while ( v11 != (_BYTE **)(*(_DWORD *)(v1 + 220) + 4 * *(_DWORD *)(v1 + 212)) );
          v13 = nullptr;
  LABEL_28:
          v7 = v19;
          if ( v9 )
          {
  LABEL_43:
            if ( v13 && (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v13 + 20))(v13) == 1 && v13[448] )
              v18 = (unsigned __int8)v18 | (1 << v9);
            break;
          }
        }
        else
        {
          v13 = nullptr;
          if ( v9 )
            goto LABEL_43;
        }
        if ( sub_6045B330(MEMORY[0xC9CFB8], 0) != 1 )
          goto LABEL_43;
        v8 = 1;
        if ( *(_DWORD *)(v1 + 212) )
        {
          v15 = *(_BYTE ***)(v1 + 220);
          v16 = 4;
          while ( 1 )
          {
            v13 = *v15;
            if ( _cxa_guard_acquire_0(13225748) )
            {
              MEMORY[0xC9CF10] = 12420264;
              _cxa_guard_release_0(13225748);
            }
            v17 = (**(int (__fastcall ***)(_BYTE *, int))v13)(v13, 13225744);
            if ( v13 && v17 == 1 )
            {
              if ( !v16 )
              {
                v7 = v19;
                goto LABEL_43;
              }
              --v16;
            }
            if ( ++v15 == (_BYTE **)(*(_DWORD *)(v1 + 220) + 4 * *(_DWORD *)(v1 + 212)) )
            {
              v7 = v19;
              goto LABEL_47;
            }
          }
        }
      }
  LABEL_47:
      v8 = v9 + 1;
    }
    while ( v9 != 3 );
    result = *(unsigned __int8 *)(v7 + 1405);
    if ( result != (unsigned __int8)v18 )
    {
      *(_BYTE *)(v7 + 1405) = v18;
      result = *(_DWORD *)(v7 + 1388);
      if ( result )
        return sub_604564CC();
    }
    return result;
  }

/* ============================================================================
 * sub_60454344
 * RVA 0x00454344   size 0x4cc   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60454344(int a1)
  {
    int result; // r0
    int v2; // r7
    int v3; // r6
    int *v4; // r5
    int v5; // r9
    int v6; // r8
    int v7; // r0
    int v8; // r10
    int *v9; // r5
    int v10; // r6
    int v11; // r0
    int v12; // r5
    int v13; // r0
    _DWORD *v14; // r0
    int v15; // [sp+4h] [bp-5Ch]
    int v16; // [sp+8h] [bp-58h]
    int v17; // [sp+Ch] [bp-54h]
    int v18; // [sp+10h] [bp-50h]
    int v19; // [sp+14h] [bp-4Ch]
    int v20; // [sp+18h] [bp-48h]
    int v21; // [sp+1Ch] [bp-44h]
    int v22; // [sp+20h] [bp-40h]
    _BYTE *v24; // [sp+50h] [bp-10h]
  
    result = *(unsigned __int8 *)(MEMORY[0xC9A230] + 2084);
    if ( !*(_BYTE *)(MEMORY[0xC9A230] + 2084) )
    {
      result = *(_DWORD *)(a1 + 1316);
      if ( result != 2 )
      {
        v18 = 0;
        v15 = 0;
        v22 = 0;
        v21 = 0;
        v24 = (_BYTE *)(MEMORY[0xC99DD4] + 272);
        v20 = 0;
        v17 = 0;
        v19 = 0;
        v16 = 0;
        result = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v2 = result;
            if ( result < sub_603FD0B4(v24) )
              break;
  LABEL_48:
            result = v2 + 1;
            if ( v2 == 3 )
              return result;
          }
          v3 = MEMORY[0xCCF448];
          if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
          {
            v4 = *(int **)(MEMORY[0xCCF448] + 220);
            v5 = v2;
            do
            {
              v6 = *v4;
              if ( _cxa_guard_acquire_0(13156900) )
              {
                MEMORY[0xC8C220] = 12420264;
                _cxa_guard_release_0(13156900);
              }
              v7 = (**(int (__fastcall ***)(int, int))v6)(v6, 13156896);
              if ( v6 && v7 == 1 )
              {
                if ( !v2 )
                  goto LABEL_15;
                --v2;
              }
              ++v4;
            }
            while ( v4 != (int *)(*(_DWORD *)(v3 + 220) + 4 * *(_DWORD *)(v3 + 212)) );
            v6 = 0;
  LABEL_15:
            v2 = v5;
            if ( v5 )
            {
  LABEL_29:
              if ( v6 && (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) == 1 )
              {
                v12 = *(unsigned __int8 *)(v6 + 353);
                v13 = a1 + 4 * v2 + 1264;
                if ( !(*(_DWORD *)(a1 + 1408) | v2) )
                  v13 = a1 + 1280;
                if ( (*(_BYTE *)(*(_DWORD *)v13 + 272) & 0xF0) != 0 )
                  *(_BYTE *)(a1 + v2 + 5130) = sqrtf(
                                                 (float)(*(float *)(v6 + 288) * *(float *)(v6 + 288))
                                               + (float)(*(float *)(v6 + 284) * *(float *)(v6 + 284))) > 0.3;
                switch ( v12 )
                {
                  case 0:
                    if ( *(_BYTE *)(a1 + v2 + 5130) )
                      ++v20;
                    else
                      ++v17;
                    break;
                  case 1:
                    if ( *(_BYTE *)(a1 + v2 + 5130) )
                      ++v19;
                    else
                      ++v16;
                    break;
                  case 2:
                    if ( *(_BYTE *)(a1 + v2 + 5130) )
                      ++v18;
                    else
                      ++v15;
                    break;
                  case 3:
                    ++v21;
                    break;
                  case 4:
                    ++v22;
                    break;
                  default:
                    break;
                }
                v14 = (_DWORD *)MEMORY[0xC9CFB8];
                *(_DWORD *)(MEMORY[0xC9CFB8] + 40) = v20;
                v14[11] = v17;
                v14[12] = v19;
                v14[13] = v16;
                v14[14] = v18;
                v14[15] = v15;
                v14[16] = v21;
                v14[17] = v22;
              }
              goto LABEL_48;
            }
          }
          else
          {
            v6 = 0;
            if ( v2 )
              goto LABEL_29;
          }
          if ( sub_6045B330(MEMORY[0xC9CFB8], 0) != 1 )
            goto LABEL_29;
          v8 = MEMORY[0xCCF448];
          result = 1;
          if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
          {
            v9 = *(int **)(MEMORY[0xCCF448] + 220);
            v10 = 4;
            do
            {
              v6 = *v9;
              if ( _cxa_guard_acquire_0(13156900) )
              {
                MEMORY[0xC8C220] = 12420264;
                _cxa_guard_release_0(13156900);
              }
              v11 = (**(int (__fastcall ***)(int, int))v6)(v6, 13156896);
              if ( v6 && v11 == 1 )
              {
                if ( !v10 )
                  goto LABEL_29;
                --v10;
              }
              ++v9;
            }
            while ( v9 != (int *)(*(_DWORD *)(v8 + 220) + 4 * *(_DWORD *)(v8 + 212)) );
            goto LABEL_48;
          }
        }
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60454858
 * RVA 0x00454858   size 0x2d8   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60454858(int a1, int a2)
  {
    int v4; // r0
    int v5; // r0
    int v6; // r0
    int v7; // r0
    unsigned __int8 v8; // r6
    int v9; // r0
    unsigned __int8 v10; // r3
    int v11; // r0
    int *v12; // r4
    int *v13; // r10
    unsigned __int8 v14; // r2
    int v15; // r6
    int v16; // r0
    bool v17; // zf
    int result; // r0
    int v19; // [sp+8h] [bp-24h]
    int v20; // [sp+Ch] [bp-20h]
    int v21; // [sp+10h] [bp-1Ch]
    int v22; // [sp+1Ch] [bp-10h] BYREF
    int v23; // [sp+20h] [bp-Ch] BYREF
    int v24; // [sp+24h] [bp-8h] BYREF
    int v25; // [sp+28h] [bp-4h] BYREF
  
    *(_BYTE *)a2 = 0;
    v4 = *(_DWORD *)(MEMORY[0xCC436C] + 48);
    if ( v4 )
      *(_BYTE *)a2 = sub_608335E8(v4 + 108);
    *(_BYTE *)(a2 + 1) = 0;
    v5 = *(_DWORD *)(MEMORY[0xCC436C] + 52);
    if ( v5 )
      *(_BYTE *)(a2 + 1) = sub_608335E8(v5 + 108);
    *(_BYTE *)(a2 + 2) = 0;
    v6 = *(_DWORD *)(MEMORY[0xCC436C] + 56);
    if ( v6 )
      *(_BYTE *)(a2 + 2) = sub_608335E8(v6 + 108);
    *(_BYTE *)(a2 + 3) = 0;
    v7 = *(_DWORD *)(MEMORY[0xCC436C] + 60);
    if ( v7 )
      *(_BYTE *)(a2 + 3) = sub_608335E8(v7 + 108);
    v8 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    sead::Random::getContext(a1 + 1340, &v22, &v23, &v24, &v25);
    *(_DWORD *)(a2 + 4) |= sub_6083359C(v25);
    v22 = *(_DWORD *)(MEMORY[0xCC6484] + 112);
    v23 = *(_DWORD *)(MEMORY[0xCC6484] + 124);
    *(_DWORD *)(a2 + 4) |= 16 * sub_608335C8(&v22);
    v9 = sub_608335B0();
    v10 = 0;
    v11 = *(_DWORD *)(a2 + 4) | (v9 << 8);
    *(_DWORD *)(a2 + 4) = v11;
    v12 = *(int **)(MEMORY[0xC7B400] + 27172);
    v13 = *(int **)(MEMORY[0xC7B400] + 27180);
    v14 = 0;
    if ( v12 != v13 )
    {
      v20 = 0;
      v19 = 0;
      v21 = 0;
      do
      {
        v15 = *v12;
        if ( _cxa_guard_acquire_0(13087588) )
        {
          MEMORY[0xC7B360] = 12320920;
          _cxa_guard_release_0(13087588);
        }
        if ( v15 )
        {
          v16 = (**(int (__fastcall ***)(int, int))v15)(v15, 13087584);
          v17 = v16 == 1;
          if ( v16 == 1 )
            v17 = *(_BYTE *)(v15 + 19) == 0;
          if ( v17 )
          {
            switch ( *(_BYTE *)(v15 + 533) )
            {
              case 0:
                v20 ^= sub_608335E8(v15 + 108);
                break;
              case 2:
              case 4:
                v21 ^= sub_608335E8(v15 + 108);
                break;
              case 3:
                v19 ^= sub_608335E8(v15 + 108);
                break;
              default:
                break;
            }
          }
        }
        ++v12;
      }
      while ( v13 != v12 );
      v11 = *(_DWORD *)(a2 + 4);
      v14 = v19;
      v10 = v20;
      v8 = v21;
    }
    result = (v14 << 16) | (v8 << 20) | (v10 << 12) | v11;
    *(_DWORD *)(a2 + 4) = result;
    return result;
  }

/* ============================================================================
 * sub_60454B60
 * RVA 0x00454b60   size 0x104   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60454B60(int result, unsigned __int8 *a2, unsigned __int8 *a3)
  {
    int v3; // r4
    int v4; // lr
    int v5; // r12
  
    *(_DWORD *)(result + 1440) = 0;
    v3 = *a2 != *a3;
    *(_DWORD *)(result + 1440) = v3;
    if ( a2[1] != a3[1] )
    {
      v3 |= 2u;
      *(_DWORD *)(result + 1440) = v3;
    }
    if ( a2[2] != a3[2] )
    {
      v3 |= 4u;
      *(_DWORD *)(result + 1440) = v3;
    }
    if ( a2[3] != a3[3] )
    {
      v3 |= 8u;
      *(_DWORD *)(result + 1440) = v3;
    }
    v4 = *((_DWORD *)a2 + 1);
    v5 = *((_DWORD *)a3 + 1);
    if ( ((v5 ^ v4) & 0xF) != 0 )
    {
      v3 |= 0x10u;
      *(_DWORD *)(result + 1440) = v3;
      v5 = *((_DWORD *)a3 + 1);
      v4 = *((_DWORD *)a2 + 1);
    }
    if ( ((v5 ^ v4) & 0xF0) != 0 )
    {
      v3 |= 0x20u;
      *(_DWORD *)(result + 1440) = v3;
      v5 = *((_DWORD *)a3 + 1);
      v4 = *((_DWORD *)a2 + 1);
    }
    if ( ((v5 ^ v4) & 0xF00) != 0 )
    {
      v3 |= 0x40u;
      *(_DWORD *)(result + 1440) = v3;
      v5 = *((_DWORD *)a3 + 1);
      v4 = *((_DWORD *)a2 + 1);
    }
    if ( ((v5 ^ v4) & 0xF000) != 0 )
    {
      v3 |= 0x80u;
      *(_DWORD *)(result + 1440) = v3;
      v5 = *((_DWORD *)a3 + 1);
      v4 = *((_DWORD *)a2 + 1);
    }
    if ( ((v5 ^ v4) & 0xF0000) != 0 )
    {
      v3 |= 0x100u;
      *(_DWORD *)(result + 1440) = v3;
      v5 = *((_DWORD *)a3 + 1);
      v4 = *((_DWORD *)a2 + 1);
    }
    if ( ((v5 ^ v4) & 0xF00000) != 0 )
      *(_DWORD *)(result + 1440) = v3 | 0x200;
    return result;
  }

/* ============================================================================
 * sub_60454CDC
 * RVA 0x00454cdc   size 0x70   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60454CDC(int a1, float *a2)
  {
    int result; // r0
    float v4; // s2
    _DWORD v5[14]; // [sp+0h] [bp-38h] BYREF
  
    nn::hid::GetTouchScreenState<1u>(v5);
    if ( v5[2] < 1 )
      return 0;
    result = 1;
    if ( a2 )
    {
      v4 = (float)((float)v5[9] / 720.0) * 720.0;
      *a2 = (float)((float)v5[8] / 1280.0) * 1280.0;
      a2[1] = v4;
    }
    return result;
  }

/* ============================================================================
 * sub_60454DC4
 * RVA 0x00454dc4   size 0xbc   xrefs 5
 * ============================================================================ */
  _DWORD *__fastcall sub_60454DC4(_DWORD *result)
  {
    int *v1; // r1
    int v2; // r2
    bool v3; // zf
    int *v4; // r6
    int v5; // r6
    unsigned int v6; // r5
    unsigned int v7; // r6
    int v8; // r4
    int v9; // r5
  
    if ( result[329] != 2 )
    {
      v1 = result + 316;
      v2 = 0;
      do
      {
        v3 = (result[352] | v2) == 0;
        v4 = v1;
        ++v2;
        if ( v3 )
          v4 = result + 320;
        v5 = *v4;
        v6 = *(_DWORD *)(v5 + 4);
        v7 = *(_DWORD *)(v5 + 272);
        v8 = (v6 >> 2) & 0x800 | v6 & 0x7FF | (v6 >> 4) & 0x1000 | (v6 >> 4) & 0x2000;
        v9 = v8 | 8;
        if ( (v7 & 0x200) == 0 )
          v9 = v8 & 0x3EF7;
        v1[9] = (v9 | v1[9] & (v7 & 0x7F7 | (v7 >> 2) & 0x800 | (v7 >> 4) & 0x1000 | (v7 >> 4) & 0x2000 | 8)) & 0xFFFFFEFF;
        ++v1;
      }
      while ( v2 != 4 );
    }
    return result;
  }

/* ============================================================================
 * sub_60454E80
 * RVA 0x00454e80   size 0x13c   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60454E80(int a1, int a2)
  {
    int v2; // r4
    int v3; // r5
    _BYTE **v4; // r7
    _BYTE *v5; // r6
    int v6; // r0
    int result; // r0
  
    v2 = a2;
    if ( !a2 )
    {
      v2 = *(unsigned __int8 *)(MEMORY[0xC9CFB8] + 81);
      if ( *(_BYTE *)(MEMORY[0xC9CFB8] + 81) )
        v2 = 4;
    }
    v3 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      return 0;
    v4 = *(_BYTE ***)(MEMORY[0xCCF448] + 220);
    while ( 1 )
    {
      v5 = *v4;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v6 = (**(int (__fastcall ***)(_BYTE *, int))v5)(v5, 13156896);
      if ( !v5 || v6 != 1 )
        goto LABEL_12;
      if ( !v2 )
        break;
      --v2;
  LABEL_12:
      if ( ++v4 == (_BYTE **)(*(_DWORD *)(v3 + 220) + 4 * *(_DWORD *)(v3 + 212)) )
        return 0;
    }
    if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v5 + 20))(v5) != 1 )
      return 0;
    result = v5[5] & 6;
    if ( (v5[5] & 6) != 0 )
      return 1;
    return result;
  }

/* ============================================================================
 * sub_60455014
 * RVA 0x00455014   size 0x134   xrefs 2
 * ============================================================================ */
  float *__fastcall sub_60455014(float *a1, int a2)
  {
    float v2; // s0
    float v3; // s1
    float v4; // s2
    float *v6; // r5
    float v7; // s18
    float v8; // s20
  
    v6 = a1 + 1278;
    v7 = -8.0 - (float)((float)(int)(float)(v3 * -0.0625) * 16.0);
    v8 = (float)((float)(int)(float)(v2 * 0.0625) * 16.0) + 8.0;
    if ( sqrtf(
           (float)((float)((float)(a1[1279] - v7) * (float)(a1[1279] - v7))
                 + (float)((float)(*v6 - v8) * (float)(*v6 - v8)))
         + (float)((float)(a1[1280] - v4) * (float)(a1[1280] - v4))) >= 40.0
      || a2 )
    {
      *v6 = v8;
      a1[1279] = v7;
    }
    else
    {
      sub_60832560(v6);
      sub_60832560(a1 + 1279);
    }
    a1[1280] = v4;
    sub_604AF054(a1 + 361, v6);
    a1[356] = v8;
    a1[357] = v7;
    a1[358] = v4;
    return a1 + 358;
  }

/* ============================================================================
 * sub_604551B4
 * RVA 0x004551b4   size 0x38   xrefs 4
 * ============================================================================ */
  _DWORD *__fastcall sub_604551B4(int a1)
  {
    _DWORD *result; // r0
  
    result = (_DWORD *)sub_60908F70(a1, 14, -1, -1, -1);
    *result = 12562716;
    return result;
  }

/* ============================================================================
 * sub_604551F0
 * RVA 0x004551f0   size 0x6c   xrefs 8
 * ============================================================================ */
  int __fastcall sub_604551F0(int a1, int a2)
  {
    float v2; // s0
    int v3; // r3
    unsigned int v4; // r0
    int result; // r0
    unsigned int v6; // s0
  
    *(_BYTE *)(a1 + 310) = 1;
    v3 = *(unsigned __int16 *)(a1 + 308);
    v4 = v3 << 16;
    if ( (v3 & 0x8000) != 0 )
    {
      v4 = -65536 * v3;
      if ( v3 == 0x8000 )
        v4 = 0x80000000;
    }
    if ( a2 < 0 && a2 != 0x80000000 )
      a2 = -a2;
    if ( v4 <= a2 )
      return 0;
    v6 = (unsigned int)(float)((float)(v4 - a2) * v2);
    result = v6;
    if ( v3 << 16 <= 0 )
      return -v6;
    return result;
  }

/* ============================================================================
 * sub_60455378
 * RVA 0x00455378   size 0x44   xrefs 2
 * ============================================================================ */
  bool __fastcall sub_60455378(int *a1, int a2)
  {
    int v2; // r3
    _BOOL4 result; // r0
    int v5; // r1
    bool v6; // zf
  
    v2 = 1380995656;
    v6 = a2 == 0;
    result = 0;
    v5 = *a1;
    if ( !v6 )
      v2 = 1213354066;
    v6 = v2 == v5;
    if ( v2 == v5 )
      v6 = *((_BYTE *)a1 + 4) == 1;
    if ( v6 )
      return *((_BYTE *)a1 + 5) == 0;
    return result;
  }

/* ============================================================================
 * sub_604553BC
 * RVA 0x004553bc   size 0x44   xrefs 1
 * ============================================================================ */
  bool __fastcall sub_604553BC(int *a1, int a2)
  {
    int v2; // r3
    _BOOL4 result; // r0
    int v5; // r1
    bool v6; // zf
  
    v2 = 1380995656;
    v6 = a2 == 0;
    result = 0;
    v5 = *a1;
    if ( !v6 )
      v2 = 1213354066;
    v6 = v2 == v5;
    if ( v2 == v5 )
      v6 = *((_BYTE *)a1 + 4) == 1;
    if ( v6 )
      return *((_BYTE *)a1 + 5) == 0;
    return result;
  }

/* ============================================================================
 * sub_60455400
 * RVA 0x00455400   size 0x74   xrefs 1
 * ============================================================================ */
  _BYTE *__fastcall sub_60455400(int a1)
  {
    int v1; // r0
    _BYTE *result; // r0
  
    *(_DWORD *)a1 = 1380995656;
    *(_DWORD *)(a1 + 4) = 1073872897;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(MEMORY[0xCC6C3C] + 80);
    *(_BYTE *)(a1 + 12) = 0;
    v1 = a1 + 12;
    *(_BYTE *)(v1 + 4) = 0;
    v1 += 4;
    *(_BYTE *)(v1 + 4) = 0;
    v1 += 4;
    *(_BYTE *)(v1 + 4) = 0;
    result = (_BYTE *)(v1 + 4);
    result[3] = 0;
    result[2] = 0;
    result[1] = 0;
    *(result - 1) = 0;
    *(result - 2) = 0;
    *(result - 3) = 0;
    *(result - 5) = 0;
    *(result - 6) = 0;
    *(result - 7) = 0;
    *(result - 9) = 0;
    *(result - 10) = 0;
    *(result - 11) = 0;
    return result;
  }

/* ============================================================================
 * sub_604554A8
 * RVA 0x004554a8   size 0xb0   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604554A8(int a1, int a2)
  {
    ((void (*)(void))sub_609053CC)();
    sub_609053CC(a1, a2 + 1);
    sub_609053CC(a1, a2 + 2);
    sub_609053CC(a1, a2 + 3);
    sub_609053CC(a1, a2 + 4);
    sub_609053CC(a1, a2 + 5);
    sub_609053CC(a1, a2 + 6);
    sub_609053CC(a1, a2 + 7);
    sub_609053F8(a1, a2 + 8);
    sub_609053F8(a1, a2 + 10);
    sub_609053CC(a1, a2 + 12);
    sub_609053CC(a1, a2 + 13);
    sub_609053CC(a1, a2 + 14);
    return sub_609053CC(a1, a2 + 15);
  }

/* ============================================================================
 * sub_60455558
 * RVA 0x00455558   size 0xb4   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60455558(int a1, unsigned __int8 *a2)
  {
    sub_60905558(a1, *a2);
    sub_60905558(a1, a2[1]);
    sub_60905558(a1, a2[2]);
    sub_60905558(a1, a2[3]);
    sub_60905558(a1, a2[4]);
    sub_60905558(a1, a2[5]);
    sub_60905558(a1, a2[6]);
    sub_60905558(a1, a2[7]);
    sub_60905584(a1, *((unsigned __int16 *)a2 + 4));
    sub_60905584(a1, *((unsigned __int16 *)a2 + 5));
    sub_60905558(a1, a2[12]);
    sub_60905558(a1, a2[13]);
    sub_60905558(a1, a2[14]);
    return sub_60905558(a1, a2[15]);
  }

/* ============================================================================
 * sub_6045560C
 * RVA 0x0045560c   size 0xa4   xrefs 4
 * ============================================================================ */
  int __fastcall sub_6045560C(int a1, int a2)
  {
    sub_609053CC(a1, a2);
    sub_609053CC(a1, a2 + 1);
    sub_609053CC(a1, a2 + 2);
    sub_609053CC(a1, a2 + 3);
    sub_609053CC(a1, a2 + 4);
    sub_609053CC(a1, a2 + 5);
    sub_609053CC(a1, a2 + 6);
    sub_609053CC(a1, a2 + 7);
    sub_609054A8(a1, a2 + 8);
    sub_609053CC(a1, a2 + 12);
    sub_609053CC(a1, a2 + 13);
    sub_609053CC(a1, a2 + 14);
    return sub_609053CC(a1, a2 + 15);
  }

/* ============================================================================
 * sub_604556B0
 * RVA 0x004556b0   size 0xa8   xrefs 4
 * ============================================================================ */
  int __fastcall sub_604556B0(int a1, unsigned __int8 *a2)
  {
    sub_60905558(a1, *a2);
    sub_60905558(a1, a2[1]);
    sub_60905558(a1, a2[2]);
    sub_60905558(a1, a2[3]);
    sub_60905558(a1, a2[4]);
    sub_60905558(a1, a2[5]);
    sub_60905558(a1, a2[6]);
    sub_60905558(a1, a2[7]);
    sub_60905634(a1, *((_DWORD *)a2 + 2));
    sub_60905558(a1, a2[12]);
    sub_60905558(a1, a2[13]);
    sub_60905558(a1, a2[14]);
    return sub_60905558(a1, a2[15]);
  }

/* ============================================================================
 * sub_60455758
 * RVA 0x00455758   size 0x134   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60455758(int a1, int a2)
  {
    sub_6045560C(a1, a2);
    sub_6045560C(a1, a2 + 16);
    sub_6045560C(a1, a2 + 32);
    sub_6045560C(a1, a2 + 48);
    sub_60905450(a1, a2 + 64);
    sub_60905450(a1, a2 + 65);
    sub_60905450(a1, a2 + 66);
    sub_60905450(a1, a2 + 67);
    sub_60905450(a1, a2 + 68);
    sub_609053CC(a1, a2 + 69);
    sub_609053CC(a1, a2 + 70);
    sub_609053CC(a1, a2 + 71);
    sub_609053CC(a1, a2 + 72);
    sub_609053CC(a1, a2 + 73);
    sub_609053F8(a1, a2 + 74);
    sub_609054A8(a1, a2 + 76);
    sub_609053CC(a1, a2 + 80);
    sub_609053CC(a1, a2 + 81);
    sub_609053CC(a1, a2 + 82);
    sub_609053CC(a1, a2 + 83);
    sub_609054D4(a1, a2 + 84);
    sub_609053CC(a1, a2 + 88);
    sub_609053CC(a1, a2 + 89);
    sub_609053CC(a1, a2 + 90);
    return sub_609053CC(a1, a2 + 91);
  }

/* ============================================================================
 * sub_6045588C
 * RVA 0x0045588c   size 0x134   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6045588C(int a1, int a2)
  {
    sub_604556B0(a1, (unsigned __int8 *)a2);
    sub_604556B0(a1, (unsigned __int8 *)(a2 + 16));
    sub_604556B0(a1, (unsigned __int8 *)(a2 + 32));
    sub_604556B0(a1, (unsigned __int8 *)(a2 + 48));
    sub_609055DC(a1, *(char *)(a2 + 64));
    sub_609055DC(a1, *(char *)(a2 + 65));
    sub_609055DC(a1, *(char *)(a2 + 66));
    sub_609055DC(a1, *(char *)(a2 + 67));
    sub_609055DC(a1, *(char *)(a2 + 68));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 69));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 70));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 71));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 72));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 73));
    sub_60905584(a1, *(unsigned __int16 *)(a2 + 74));
    sub_60905634(a1, *(_DWORD *)(a2 + 76));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 80));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 81));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 82));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 83));
    sub_60905660(a1);
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 88));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 89));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 90));
    return sub_60905558(a1, *(unsigned __int8 *)(a2 + 91));
  }

/* ============================================================================
 * sub_604559C0
 * RVA 0x004559c0   size 0x98   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604559C0(int a1, int a2)
  {
    ((void (*)(void))sub_60905424)();
    sub_609053CC(a1, a2 + 4);
    sub_609053CC(a1, a2 + 5);
    sub_609053CC(a1, a2 + 6);
    sub_609053CC(a1, a2 + 7);
    sub_60905424(a1, a2 + 8);
    sub_60905424(a1, a2 + 12);
    sub_60905424(a1, a2 + 16);
    sub_60905424(a1, a2 + 20);
    sub_60905424(a1, a2 + 24);
    sub_604554A8(a1, a2 + 28);
    return sub_60455758(a1, a2 + 44);
  }

/* ============================================================================
 * sub_60455A58
 * RVA 0x00455a58   size 0x9c   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60455A58(int a1, int a2)
  {
    sub_609055B0(a1, *(_DWORD *)a2);
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 4));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 5));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 6));
    sub_60905558(a1, *(unsigned __int8 *)(a2 + 7));
    sub_609055B0(a1, *(_DWORD *)(a2 + 8));
    sub_609055B0(a1, *(_DWORD *)(a2 + 12));
    sub_609055B0(a1, *(_DWORD *)(a2 + 16));
    sub_609055B0(a1, *(_DWORD *)(a2 + 20));
    sub_609055B0(a1, *(_DWORD *)(a2 + 24));
    sub_60455558(a1, (unsigned __int8 *)(a2 + 28));
    return sub_6045588C(a1, a2 + 44);
  }

/* ============================================================================
 * sub_60455B20
 * RVA 0x00455b20   size 0x30   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60455B20(int a1, unsigned __int8 *a2)
  {
    sub_60905558(a1, *a2);
    sub_60905558(a1, a2[1]);
    return sub_60905584(a1, *((unsigned __int16 *)a2 + 1));
  }

/* ============================================================================
 * sub_60455B50
 * RVA 0x00455b50   size 0x38   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60455B50(int a1, int a2)
  {
    ((void (*)(void))sub_6090547C)();
    sub_6090547C(a1, a2 + 2);
    sub_609053F8(a1, a2 + 4);
    return sub_609053F8(a1, a2 + 6);
  }

/* ============================================================================
 * sub_60455B88
 * RVA 0x00455b88   size 0x3c   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60455B88(int a1, __int16 *a2)
  {
    sub_60905608(a1, *a2);
    sub_60905608(a1, a2[1]);
    sub_60905584(a1, (unsigned __int16)a2[2]);
    return sub_60905584(a1, (unsigned __int16)a2[3]);
  }

/* ============================================================================
 * sub_60455BC4
 * RVA 0x00455bc4   size 0x44   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60455BC4(int a1, int a2)
  {
    sub_609053CC(a1, a2);
    sub_609053CC(a1, a2 + 1);
    sub_609053CC(a1, a2 + 2);
    sub_609053CC(a1, a2 + 3);
    return sub_60905424(a1, a2 + 4);
  }

/* ============================================================================
 * sub_60455C08
 * RVA 0x00455c08   size 0x48   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60455C08(int a1, unsigned __int8 *a2)
  {
    sub_60905558(a1, *a2);
    sub_60905558(a1, a2[1]);
    sub_60905558(a1, a2[2]);
    sub_60905558(a1, a2[3]);
    return sub_609055B0(a1, *((_DWORD *)a2 + 1));
  }

/* ============================================================================
 * sub_60455CB8
 * RVA 0x00455cb8   size 0x9c   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60455CB8(int a1)
  {
    __int16 v2; // r0
    __int16 v3; // r1
  
    *(_BYTE *)(a1 + 208) = 0;
    *(_WORD *)(a1 + 220) = 0;
    *(_BYTE *)(a1 + 222) = 0;
    *(_DWORD *)(a1 + 232) = 0;
    memset((void *)a1, 0, 0xC0u);
    *(_DWORD *)(a1 + 196) = -1;
    v2 = *(_WORD *)(a1 + 192);
    v3 = *(_WORD *)(a1 + 194);
    *(_WORD *)(a1 + 206) = -1;
    *(_WORD *)(a1 + 204) = -1;
    *(_WORD *)(a1 + 202) = v3;
    *(_WORD *)(a1 + 200) = v2;
    *(_BYTE *)(a1 + 217) = 0;
    *(_BYTE *)(a1 + 213) = 0;
    *(_BYTE *)(a1 + 216) = 0;
    *(_BYTE *)(a1 + 219) = 0;
    *(_BYTE *)(a1 + 218) = 0;
    *(_BYTE *)(a1 + 212) = 0;
    *(_BYTE *)(a1 + 215) = 0;
    *(_BYTE *)(a1 + 214) = 0;
    *(_BYTE *)(a1 + 224) = 0;
    *(_BYTE *)(a1 + 223) = 0;
    *(_BYTE *)(a1 + 223) = -1;
    *(_BYTE *)(a1 + 226) = 0;
    *(_BYTE *)(a1 + 225) = 0;
    *(_BYTE *)(a1 + 228) = 0;
    *(_BYTE *)(a1 + 227) = 0;
    return a1;
  }

/* ============================================================================
 * sub_60455D54
 * RVA 0x00455d54   size 0x114   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60455D54(_DWORD *a1, int a2, int a3)
  {
    int v5; // r0
    int v6; // r0
    int v7; // r0
    int result; // r0
    _DWORD v9[2]; // [sp+0h] [bp-30h] BYREF
    int v10; // [sp+8h] [bp-28h]
    int v11; // [sp+Ch] [bp-24h]
    int v12; // [sp+10h] [bp-20h]
    int v13; // [sp+14h] [bp-1Ch]
    int v14; // [sp+18h] [bp-18h]
    int v15; // [sp+1Ch] [bp-14h]
    char v16; // [sp+20h] [bp-10h]
    char v17; // [sp+21h] [bp-Fh]
    int v18; // [sp+24h] [bp-Ch]
    int v19; // [sp+28h] [bp-8h]
    char v20; // [sp+2Ch] [bp-4h]
  
    v5 = *(_DWORD *)(MEMORY[0xCC6D78] + 128);
    if ( v5 )
    {
      a1[1] = 864136;
      a1[2] = v5;
    }
    v6 = operator new(32, a3, 4);
    v7 = sub_60905100(v6, a1[2], 864136, 0);
    a1[3] = v7;
    sub_609052F4(v7, 0);
    a1[58] = 0;
    *(_DWORD *)(MEMORY[0xCC6D78] + 132) = 0;
    v9[0] = 12321336;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    v12 = 0;
    v11 = 0;
    v9[1] = 11778612;
    v10 = 0;
    v16 = 1;
    v17 = 1;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    sead::SafeStringBase<char>::operator=(v9, a2);
    v10 = a1[2];
    v11 = a1[1];
    sub_608E8914(MEMORY[0xCCEBD0], v9);
    result = v18;
    a1[58] = v18;
    *(_DWORD *)(MEMORY[0xCC6D78] + 132) = result;
    return result;
  }

/* ============================================================================
 * sub_60455E7C
 * RVA 0x00455e7c   size 0x70   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60455E7C(_DWORD *a1, int a2)
  {
    int v3; // r0
    int v4; // r0
    int v5; // r0
    int result; // r0
  
    v3 = *(_DWORD *)(MEMORY[0xCC6D78] + 128);
    if ( v3 )
    {
      a1[1] = 864136;
      a1[2] = v3;
    }
    v4 = operator new(32, a2, 4);
    v5 = sub_60905100(v4, a1[2], 864136, 0);
    a1[3] = v5;
    sub_609052F4(v5, 0);
    a1[58] = 0;
    result = MEMORY[0xCC6D78];
    *(_DWORD *)(MEMORY[0xCC6D78] + 132) = 0;
    return result;
  }

/* ============================================================================
 * sub_60455EF4
 * RVA 0x00455ef4   size 0x170   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60455EF4(_DWORD *a1)
  {
    int result; // r0
    int v3; // r2
    int v4; // r2
    int v5; // r1
    int v6; // r1
  
    sub_60905318(a1[3]);
    sub_604559C0(a1[3], (int)(a1 + 4));
    result = sub_60455378(a1 + 4, 0);
    if ( result )
    {
      if ( a1[58] >= 5u )
      {
        result = sub_6083360C(a1[2]);
        if ( !result )
        {
          result = a1[1];
          if ( result >= 1 )
          {
            if ( (result & 3) != 0 )
            {
              v3 = 0;
              do
                *(_BYTE *)(a1[2] + v3++) = 0;
              while ( (result & 3) != v3 );
            }
            else
            {
              v3 = 0;
            }
            if ( (unsigned int)(result - 1) >= 3 )
            {
              v6 = v3 + 3;
              result = -result;
              do
              {
                *(_BYTE *)(a1[2] + v6 - 3) = 0;
                *(_BYTE *)(a1[2] + v6 - 2) = 0;
                *(_BYTE *)(a1[2] + v6 - 1) = 0;
                *(_BYTE *)(a1[2] + v6) = 0;
                v6 += 4;
              }
              while ( result + v6 != 3 );
            }
          }
        }
      }
    }
    else
    {
      result = a1[1];
      if ( result >= 1 )
      {
        if ( (result & 3) != 0 )
        {
          v4 = 0;
          do
            *(_BYTE *)(a1[2] + v4++) = 0;
          while ( (result & 3) != v4 );
        }
        else
        {
          v4 = 0;
        }
        if ( (unsigned int)(result - 1) >= 3 )
        {
          v5 = v4 + 3;
          result = -result;
          do
          {
            *(_BYTE *)(a1[2] + v5 - 3) = 0;
            *(_BYTE *)(a1[2] + v5 - 2) = 0;
            *(_BYTE *)(a1[2] + v5 - 1) = 0;
            *(_BYTE *)(a1[2] + v5) = 0;
            v5 += 4;
          }
          while ( result + v5 != 3 );
        }
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60456064
 * RVA 0x00456064   size 0xc4   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60456064(_DWORD *a1)
  {
    int v2; // r6
    int v3; // r0
    int v4; // r2
    int v5; // r1
    int v6; // r0
  
    v2 = (int)(a1 + 4);
    if ( !sub_60455378(a1 + 4, 0) )
    {
      v3 = a1[1];
      if ( v3 >= 1 )
      {
        if ( (v3 & 3) != 0 )
        {
          v4 = 0;
          do
            *(_BYTE *)(a1[2] + v4++) = 0;
          while ( (v3 & 3) != v4 );
        }
        else
        {
          v4 = 0;
        }
        if ( (unsigned int)(v3 - 1) >= 3 )
        {
          v5 = v4 + 3;
          v6 = -v3;
          do
          {
            *(_BYTE *)(a1[2] + v5 - 3) = 0;
            *(_BYTE *)(a1[2] + v5 - 2) = 0;
            *(_BYTE *)(a1[2] + v5 - 1) = 0;
            *(_BYTE *)(a1[2] + v5) = 0;
            v5 += 4;
          }
          while ( v6 + v5 != 3 );
        }
      }
    }
    sub_60905318(a1[3]);
    return sub_60455A58(a1[3], v2);
  }

/* ============================================================================
 * sub_60456128
 * RVA 0x00456128   size 0x258   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60456128(int a1)
  {
    int result; // r0
    __int16 v3; // r11
    int v4; // r0
    int v5; // r11
    int v6; // r8
    char v7; // r10
    int v8; // r9
    int v9; // r6
    bool v10; // zf
    int v11; // r0
    int v12; // r0
    char v13; // r0
    _DWORD *v14; // [sp+0h] [bp-Ch]
  
    *(_DWORD *)a1 = 1;
    result = *(unsigned __int8 *)(a1 + 222);
    if ( !result )
    {
      if ( *(_WORD *)(a1 + 220) )
      {
        v3 = *(_WORD *)(a1 + 220) - 1;
        v14 = (_DWORD *)(a1 + 12);
      }
      else
      {
        v14 = (_DWORD *)(a1 + 12);
        v4 = sub_6090535C(*(_DWORD *)(a1 + 12));
        v5 = v4;
        if ( (v4 & 0x8000) == 0 )
        {
          if ( (v4 & 0x10) != 0 )
          {
            *(_WORD *)(a1 + 152) = *(_WORD *)(a1 + 154);
            *(_WORD *)(a1 + 156) = 0;
            *(_WORD *)(a1 + 154) = 0;
            *(_BYTE *)(a1 + 158) = 0;
            *(_WORD *)(a1 + 160) = *(_WORD *)(a1 + 162);
            *(_WORD *)(a1 + 164) = 0;
            *(_WORD *)(a1 + 162) = 0;
            *(_BYTE *)(a1 + 166) = 0;
            *(_WORD *)(a1 + 168) = *(_WORD *)(a1 + 170);
            *(_WORD *)(a1 + 172) = 0;
            *(_WORD *)(a1 + 170) = 0;
            *(_BYTE *)(a1 + 174) = 0;
            *(_WORD *)(a1 + 176) = *(_WORD *)(a1 + 178);
            *(_WORD *)(a1 + 180) = 0;
            *(_WORD *)(a1 + 178) = 0;
            *(_BYTE *)(a1 + 182) = 0;
            *(_BYTE *)(a1 + 222) = 1;
            return 1;
          }
  LABEL_10:
          v6 = 0;
          v7 = 0;
          do
          {
            v8 = a1 + v6;
            *(_WORD *)(v8 + 152) = *(_WORD *)(a1 + v6 + 154);
            *(_BYTE *)(v8 + 159) = 0;
            if ( (v5 & (1 << v7)) != 0 )
            {
              v9 = sub_6090535C(*(_DWORD *)(a1 + 12));
              v10 = sub_60454C78(MEMORY[0xC9CF0C]) == 0;
              v11 = 0x4000;
              if ( !v10 )
                v11 = 0x2000;
              *(_WORD *)(v8 + 154) = v9 & ~(_WORD)v11;
              *(_BYTE *)(v8 + 158) = 0;
              if ( (v11 & v9) != 0 )
                *(_WORD *)(v8 + 156) = sub_6090535C(*(_DWORD *)(a1 + 12));
              v10 = sub_60454C78(MEMORY[0xC9CF0C]) == 0;
              v12 = -32768;
              if ( !v10 )
                v12 = 0x4000;
              if ( (v12 & v9) != 0 )
              {
                *(_WORD *)(v8 + 152) = sub_6090535C(*v14);
                *(_BYTE *)(v8 + 159) = 1;
              }
            }
            else
            {
              *(_BYTE *)(v8 + 158) = 0;
            }
            v6 += 8;
            ++v7;
          }
          while ( v6 != 32 );
          if ( (v5 & 0x20) != 0 )
            sub_60455AF4(*(_DWORD *)(a1 + 12), a1 + 184);
          if ( (v5 & 0x40) != 0 )
            sub_60455B50(*(_DWORD *)(a1 + 12), a1 + 192);
          v13 = 0;
          if ( (v5 & 0x80) != 0 )
          {
            sub_60455BC4(*(_DWORD *)(a1 + 12), a1 + 212);
            v13 = 1;
          }
          *(_BYTE *)(a1 + 208) = v13;
          if ( (v5 & 0x100) != 0 )
          {
            result = sub_60455C50(*(_DWORD *)(a1 + 12), a1 + 223);
            if ( (v5 & 0x200) == 0 )
              goto LABEL_33;
          }
          else
          {
            result = 255;
            *(_BYTE *)(a1 + 223) = -1;
            if ( (v5 & 0x200) == 0 )
            {
  LABEL_33:
              if ( (v5 & 0x400) != 0 )
                return sub_60455CA0(*(_DWORD *)(a1 + 12), a1 + 227);
              return result;
            }
          }
          result = sub_60455C94(*(_DWORD *)(a1 + 12), a1 + 225);
          goto LABEL_33;
        }
        v3 = v4 & 0x7FFF;
        *(_WORD *)(a1 + 220) = v4 & 0x7FFF;
        if ( (v4 & 0x7FFF) != 0 )
          --v3;
      }
      *(_WORD *)(a1 + 220) = v3;
      v5 = 0;
      goto LABEL_10;
    }
    return result;
  }

/* ============================================================================
 * sub_60456388
 * RVA 0x00456388   size 0xa0   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60456388(int result)
  {
    __int16 v1; // r2
    __int16 v2; // r12
    __int16 v3; // lr
    __int16 v4; // r2
  
    *(_DWORD *)result = 2;
    *(_WORD *)(result + 152) = *(_WORD *)(result + 154);
    *(_BYTE *)(result + 158) = 0;
    *(_BYTE *)(result + 159) = 0;
    *(_WORD *)(result + 160) = *(_WORD *)(result + 162);
    *(_BYTE *)(result + 166) = 0;
    *(_BYTE *)(result + 167) = 0;
    *(_WORD *)(result + 168) = *(_WORD *)(result + 170);
    *(_BYTE *)(result + 174) = 0;
    *(_BYTE *)(result + 175) = 0;
    *(_WORD *)(result + 176) = *(_WORD *)(result + 178);
    *(_BYTE *)(result + 182) = 0;
    *(_BYTE *)(result + 183) = 0;
    v1 = *(_WORD *)(result + 184);
    *(_WORD *)(result + 190) = *(_WORD *)(result + 186);
    *(_WORD *)(result + 188) = v1;
    v2 = *(_WORD *)(result + 192);
    v3 = *(_WORD *)(result + 194);
    v4 = *(_WORD *)(result + 196);
    *(_WORD *)(result + 206) = *(_WORD *)(result + 198);
    *(_WORD *)(result + 204) = v4;
    *(_WORD *)(result + 202) = v3;
    *(_WORD *)(result + 200) = v2;
    *(_BYTE *)(result + 226) = *(_BYTE *)(result + 225);
    *(_BYTE *)(result + 228) = *(_BYTE *)(result + 227);
    *(_BYTE *)(result + 223) = -1;
    *(_BYTE *)(result + 208) = 0;
    return result;
  }

/* ============================================================================
 * sub_60456428
 * RVA 0x00456428   size 0x30   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60456428(int a1, int a2, int a3, __int16 a4, __int16 a5)
  {
    int result; // r0
  
    result = a1 + 8 * a2;
    if ( *(unsigned __int16 *)(result + 152) != a3 )
    {
      *(_WORD *)(result + 152) = a3;
      *(_BYTE *)(result + 159) = 1;
    }
    *(_WORD *)(result + 154) = a4;
    *(_WORD *)(result + 156) = a5;
    return result;
  }

/* ============================================================================
 * sub_604564E0
 * RVA 0x004564e0   size 0x434   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604564E0(int a1, unsigned __int8 *a2)
  {
    int v4; // r1
    bool v5; // zf
    int v6; // r0
    int v7; // r6
    unsigned __int16 v8; // r0
    int v9; // r1
    int v10; // r2
    int v11; // r1
    int v12; // r2
    int v13; // r1
    int v14; // r2
    int v15; // r9
    int v16; // r1
    int v17; // r8
    int v18; // r7
    int v19; // r5
    int v20; // r1
    int v21; // r9
    int v22; // r0
    __int16 v23; // r5
    int result; // r0
    int v25; // r6
    char v26; // r8
    int v27; // r7
    int v28; // r11
    int v29; // r0
    unsigned __int8 *v30; // [sp+14h] [bp-8h]
  
    *(_DWORD *)a1 = 0;
    v4 = *(unsigned __int8 *)(a1 + 158);
    v5 = *(unsigned __int16 *)(a1 + 154) == *(unsigned __int16 *)(a1 + 152);
    v6 = v4;
    if ( v5 )
    {
      v6 = 1;
      if ( !v4 )
      {
        v7 = 0;
        if ( !*(_BYTE *)(a1 + 159) )
        {
          v8 = 0;
          goto LABEL_7;
        }
        v6 = 0;
      }
    }
    v7 = 4;
    if ( !v6 )
      v7 = 2;
    v8 = 1;
    if ( *(_BYTE *)(a1 + 159) )
      v7 += 2;
  LABEL_7:
    v9 = *(unsigned __int8 *)(a1 + 166);
    if ( *(unsigned __int16 *)(a1 + 162) != *(unsigned __int16 *)(a1 + 160)
      || (v5 = v9 == 0, v9 = 1, !v5)
      || (v9 = 0, *(_BYTE *)(a1 + 167)) )
    {
      v10 = 4;
      v8 |= 2u;
      if ( !v9 )
        v10 = 2;
      v7 += v10;
      if ( *(_BYTE *)(a1 + 167) )
        v7 += 2;
    }
    v11 = *(unsigned __int8 *)(a1 + 174);
    if ( *(unsigned __int16 *)(a1 + 170) != *(unsigned __int16 *)(a1 + 168)
      || (v5 = v11 == 0, v11 = 1, !v5)
      || (v11 = 0, *(_BYTE *)(a1 + 175)) )
    {
      v12 = 4;
      v8 |= 4u;
      if ( !v11 )
        v12 = 2;
      v7 += v12;
      if ( *(_BYTE *)(a1 + 175) )
        v7 += 2;
    }
    v13 = *(unsigned __int8 *)(a1 + 182);
    if ( *(unsigned __int16 *)(a1 + 178) != *(unsigned __int16 *)(a1 + 176)
      || (v5 = v13 == 0, v13 = 1, !v5)
      || (v13 = 0, *(_BYTE *)(a1 + 183)) )
    {
      v14 = 4;
      v8 |= 8u;
      if ( !v13 )
        v14 = 2;
      v7 += v14;
      if ( *(_BYTE *)(a1 + 183) )
        v7 += 2;
    }
    if ( *(unsigned __int8 *)(a1 + 184) != *(unsigned __int8 *)(a1 + 188)
      || *(unsigned __int8 *)(a1 + 185) != *(unsigned __int8 *)(a1 + 189)
      || *(unsigned __int16 *)(a1 + 186) != *(unsigned __int16 *)(a1 + 190) )
    {
      v7 += 4;
      v8 |= 0x20u;
    }
    if ( *(unsigned __int16 *)(a1 + 196) != *(unsigned __int16 *)(a1 + 204)
      || *(unsigned __int16 *)(a1 + 198) != *(unsigned __int16 *)(a1 + 206)
      || *(unsigned __int16 *)(a1 + 192) != *(unsigned __int16 *)(a1 + 200)
      || *(unsigned __int16 *)(a1 + 194) != *(unsigned __int16 *)(a1 + 202) )
    {
      v7 += 8;
      v8 |= 0x40u;
    }
    v15 = *(unsigned __int8 *)(a1 + 223);
    if ( a2 )
      v7 += 8;
    v16 = *(unsigned __int8 *)(a1 + 226);
    v17 = *(unsigned __int8 *)(a1 + 228);
    v18 = *(unsigned __int8 *)(a1 + 225);
    v19 = *(unsigned __int8 *)(a1 + 227);
    if ( v15 != 255 )
      v7 += 2;
    if ( v18 != v16 )
      ++v7;
    if ( v19 != v17 )
      ++v7;
    if ( a2 )
      v8 |= 0x80u;
    if ( v15 != 255 )
      v8 |= 0x100u;
    v5 = v18 == v16;
    v20 = *(unsigned __int16 *)(a1 + 220);
    if ( !v5 )
      v8 |= 0x200u;
    if ( v19 != v17 )
      v8 |= 0x400u;
    v21 = v8;
    if ( v8 )
    {
      v30 = a2;
      if ( *(_WORD *)(a1 + 220) )
      {
        while ( 1 )
        {
          v22 = *(_DWORD *)(a1 + 12);
          if ( (unsigned int)(*(_DWORD *)(v22 + 28) + 2) > 0xD2F81 )
            break;
          if ( (unsigned __int16)v20 >= 0x7FFFu )
            LOWORD(v20) = 0x7FFF;
          v23 = v20;
          sub_60905584(v22, (unsigned __int16)v20 | 0x8000);
          LOWORD(v20) = *(_WORD *)(a1 + 220) - v23;
          *(_WORD *)(a1 + 220) = v20;
          if ( !(_WORD)v20 )
            goto LABEL_67;
        }
        *(_WORD *)(a1 + 220) = 0;
      }
  LABEL_67:
      result = *(_DWORD *)(a1 + 12);
      if ( (unsigned int)(v7 + *(_DWORD *)(result + 28)) <= 0xD2F81 )
      {
        sub_60905584(result, v21);
        result = 0x80C128u;
        v25 = 0;
        v26 = 0;
        do
        {
          if ( (v21 & (1 << v26)) != 0 )
          {
            v27 = a1 + v25;
            v28 = *(unsigned __int16 *)(a1 + v25 + 154);
            if ( *(_BYTE *)(a1 + v25 + 158) )
            {
              v5 = sub_60454C78(MEMORY[0xC9CF0C]) == 0;
              v29 = 0x4000;
              if ( !v5 )
                v29 = 0x2000;
              v28 |= v29;
            }
            if ( *(_BYTE *)(v27 + 159) )
              v28 |= 0x8000u;
            sub_60905584(*(_DWORD *)(a1 + 12), v28);
            if ( *(_BYTE *)(v27 + 158) )
              sub_60905584(*(_DWORD *)(a1 + 12), *(unsigned __int16 *)(v27 + 156));
            result = *(unsigned __int8 *)(v27 + 159);
            if ( *(_BYTE *)(v27 + 159) )
              result = sub_60905584(*(_DWORD *)(a1 + 12), *(unsigned __int16 *)(v27 + 152));
          }
          v25 += 8;
          ++v26;
        }
        while ( v25 != 32 );
        if ( (v21 & 0x20) != 0 )
          result = sub_60455B20(*(_DWORD *)(a1 + 12), (unsigned __int8 *)(a1 + 184));
        if ( (v21 & 0x40) != 0 )
          result = sub_60455B88(*(_DWORD *)(a1 + 12), (__int16 *)(a1 + 192));
        if ( v30 )
          result = sub_60455C08(*(_DWORD *)(a1 + 12), v30);
        if ( (v21 & 0x100) != 0 )
          result = sub_60455C70(*(_DWORD *)(a1 + 12), a1 + 223);
        if ( (v21 & 0x200) != 0 )
          result = sub_60455C98(*(_DWORD *)(a1 + 12), a1 + 225);
        if ( (v21 & 0x400) != 0 )
          return sub_60455CA4(*(_DWORD *)(a1 + 12), a1 + 227);
      }
    }
    else
    {
      *(_WORD *)(a1 + 220) = v20 + 1;
      return v20 + 1;
    }
    return result;
  }

/* ============================================================================
 * sub_60456918
 * RVA 0x00456918   size 0xc0   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60456918(int a1)
  {
    unsigned __int16 v2; // r1
    int v3; // r0
    unsigned __int16 v4; // r5
    int result; // r0
  
    v2 = *(_WORD *)(a1 + 220);
    if ( v2 )
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)(a1 + 12);
        if ( (unsigned int)(*(_DWORD *)(v3 + 28) + 2) >= 0xD2F82 )
          break;
        if ( v2 >= 0x7FFFu )
          v2 = 0x7FFF;
        v4 = v2;
        sub_60905584(v3, v2 | 0x8000);
        v2 = *(_WORD *)(a1 + 220) - v4;
        *(_WORD *)(a1 + 220) = v2;
        if ( !v2 )
          goto LABEL_8;
      }
      *(_WORD *)(a1 + 220) = 0;
    }
  LABEL_8:
    sub_60905584(*(_DWORD *)(a1 + 12), 16);
    sub_609056F0(*(_DWORD *)(a1 + 12));
    sub_60833664(*(_DWORD *)(a1 + 8), *(_DWORD *)(*(_DWORD *)(a1 + 12) + 28) + 4);
    sub_609052FC(*(_DWORD *)(a1 + 12), 4);
    result = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 28);
    *(_DWORD *)(MEMORY[0xCC6D78] + 132) = result;
    return result;
  }

/* ============================================================================
 * sub_60456A10
 * RVA 0x00456a10   size 0x12c   xrefs 4
 * ============================================================================ */
  int __fastcall sub_60456A10(int result)
  {
    int v1; // r1
    int v2; // r2
    int v3; // r3
    bool v4; // cc
    _DWORD *v5; // r2
    float v6; // s2
    int v7; // r1
    int v8; // r1
  
    if ( *(_DWORD *)result == 1 )
    {
      v7 = *(_DWORD *)(result + 4);
      if ( v7 > 0 || v7 == -1 )
      {
        if ( v7 >= 1 )
          *(_DWORD *)(result + 4) = v7 - 1;
        v8 = *(_DWORD *)(result + 20);
        if ( !*(_BYTE *)(*(_DWORD *)(result + 16) + v8) )
        {
          v8 = 0;
          *(_DWORD *)(result + 20) = 0;
        }
        *(_DWORD *)(result + 20) = v8 + 1;
      }
    }
    else
    {
      if ( *(_DWORD *)result )
        return result;
      v1 = *(_DWORD *)(result + 4);
      if ( v1 == -1 )
      {
        v2 = *(_DWORD *)(result + 24);
        if ( v2 <= 0 )
        {
          v5 = (_DWORD *)(result + 12);
          v6 = *(float *)(result + 8) + *(float *)(result + 12);
          *(float *)(result + 12) = v6;
  LABEL_25:
          if ( v6 >= 1.0 )
          {
            *v5 = 0;
            return 0;
          }
          return result;
        }
        v3 = 1;
        if ( (*(_BYTE *)(MEMORY[0xC9CF18] + 2596) & 1) != 0 )
        {
          v3 = 1;
          if ( !*(_BYTE *)(MEMORY[0xC9CF18] + 2597) )
            v3 = v2 - 1;
        }
        *(_DWORD *)(result + 24) = v3;
      }
      if ( v1 > 0 || v1 == -1 )
      {
        v4 = v1 < 1;
        v5 = (_DWORD *)(result + 12);
        if ( v1 >= 1 )
          --v1;
        v6 = *(float *)(result + 8) + *(float *)(result + 12);
        *(float *)(result + 12) = v6;
        if ( !v4 )
          *(_DWORD *)(result + 4) = v1;
        goto LABEL_25;
      }
    }
    return result;
  }

/* ============================================================================
 * RumbleMgr_ctor
 * RVA 0x00456b44   size 0x330   xrefs 1
 * ============================================================================ */
  int __fastcall RumbleMgr_ctor(int a1, int a2)
  {
    int result; // r0
  
    result = CalculateTask2_ctor(a1, a2, "RumbleMgr");
    *(_DWORD *)result = 12562732;
    *(_BYTE *)(result + 192) = 0;
    *(_DWORD *)(result + 204) = 0;
    *(_DWORD *)(result + 200) = result + 196;
    *(_DWORD *)(result + 196) = result + 196;
    *(_DWORD *)(result + 208) = result + 220;
    *(_DWORD *)(result + 220) = result + 256;
    *(_DWORD *)(result + 256) = result + 292;
    *(_DWORD *)(result + 292) = result + 328;
    *(_DWORD *)(result + 328) = result + 364;
    *(_DWORD *)(result + 364) = result + 400;
    *(_DWORD *)(result + 400) = result + 436;
    *(_DWORD *)(result + 436) = result + 472;
    *(_DWORD *)(result + 472) = result + 508;
    *(_DWORD *)(result + 508) = result + 544;
    *(_DWORD *)(result + 544) = result + 580;
    *(_DWORD *)(result + 580) = result + 616;
    *(_DWORD *)(result + 616) = result + 652;
    *(_DWORD *)(result + 652) = result + 688;
    *(_DWORD *)(result + 688) = result + 724;
    *(_DWORD *)(result + 724) = result + 760;
    *(_DWORD *)(result + 760) = 0;
    *(_DWORD *)(result + 212) = result + 220;
    *(_DWORD *)(result + 216) = 16;
    *(_DWORD *)(result + 804) = 0;
    *(_DWORD *)(result + 800) = result + 796;
    *(_DWORD *)(result + 796) = result + 796;
    *(_DWORD *)(result + 808) = result + 820;
    *(_DWORD *)(result + 820) = result + 856;
    *(_DWORD *)(result + 856) = result + 892;
    *(_DWORD *)(result + 892) = result + 928;
    *(_DWORD *)(result + 928) = result + 964;
    *(_DWORD *)(result + 964) = result + 1000;
    *(_DWORD *)(result + 1000) = result + 1036;
    *(_DWORD *)(result + 1036) = result + 1072;
    *(_DWORD *)(result + 1072) = result + 1108;
    *(_DWORD *)(result + 1108) = result + 1144;
    *(_DWORD *)(result + 1144) = result + 1180;
    *(_DWORD *)(result + 1180) = result + 1216;
    *(_DWORD *)(result + 1216) = result + 1252;
    *(_DWORD *)(result + 1252) = result + 1288;
    *(_DWORD *)(result + 1288) = result + 1324;
    *(_DWORD *)(result + 1324) = result + 1360;
    *(_DWORD *)(result + 1360) = 0;
    *(_DWORD *)(result + 812) = result + 820;
    *(_DWORD *)(result + 816) = 16;
    *(_DWORD *)(result + 1404) = 0;
    *(_DWORD *)(result + 1400) = result + 1396;
    *(_DWORD *)(result + 1396) = result + 1396;
    *(_DWORD *)(result + 1408) = result + 1420;
    *(_DWORD *)(result + 1420) = result + 1456;
    *(_DWORD *)(result + 1456) = result + 1492;
    *(_DWORD *)(result + 1492) = result + 1528;
    *(_DWORD *)(result + 1528) = result + 1564;
    *(_DWORD *)(result + 1564) = result + 1600;
    *(_DWORD *)(result + 1600) = result + 1636;
    *(_DWORD *)(result + 1636) = result + 1672;
    *(_DWORD *)(result + 1672) = result + 1708;
    *(_DWORD *)(result + 1708) = result + 1744;
    *(_DWORD *)(result + 1744) = result + 1780;
    *(_DWORD *)(result + 1780) = result + 1816;
    *(_DWORD *)(result + 1816) = result + 1852;
    *(_DWORD *)(result + 1852) = result + 1888;
    *(_DWORD *)(result + 1888) = result + 1924;
    *(_DWORD *)(result + 1924) = result + 1960;
    *(_DWORD *)(result + 1960) = 0;
    *(_DWORD *)(result + 1412) = result + 1420;
    *(_DWORD *)(result + 1416) = 16;
    *(_DWORD *)(result + 2004) = 0;
    *(_DWORD *)(result + 2000) = result + 1996;
    *(_DWORD *)(result + 1996) = result + 1996;
    *(_DWORD *)(result + 2008) = result + 2020;
    *(_DWORD *)(result + 2020) = result + 2056;
    *(_DWORD *)(result + 2056) = result + 2092;
    *(_DWORD *)(result + 2092) = result + 2128;
    *(_DWORD *)(result + 2128) = result + 2164;
    *(_DWORD *)(result + 2164) = result + 2200;
    *(_DWORD *)(result + 2200) = result + 2236;
    *(_DWORD *)(result + 2236) = result + 2272;
    *(_DWORD *)(result + 2272) = result + 2308;
    *(_DWORD *)(result + 2308) = result + 2344;
    *(_DWORD *)(result + 2344) = result + 2380;
    *(_DWORD *)(result + 2380) = result + 2416;
    *(_DWORD *)(result + 2416) = result + 2452;
    *(_DWORD *)(result + 2452) = result + 2488;
    *(_DWORD *)(result + 2488) = result + 2524;
    *(_DWORD *)(result + 2524) = result + 2560;
    *(_DWORD *)(result + 2560) = 0;
    *(_DWORD *)(result + 2012) = result + 2020;
    *(_DWORD *)(result + 2016) = 16;
    *(_BYTE *)(result + 2596) = 15;
    *(_BYTE *)(result + 2597) = 0;
    return result;
  }

/* ============================================================================
 * sub_60456EF8
 * RVA 0x00456ef8   size 0x124   xrefs 3
 * ============================================================================ */
  int __fastcall sub_60456EF8(_DWORD *a1)
  {
    sead::ListNode *v2; // r5
    sead::ListNode *v3; // r6
    sead::ListNode *v4; // r7
    _DWORD *v5; // r0
    sead::ListNode *v6; // r5
    sead::ListNode *v7; // r7
    _DWORD *v8; // r0
    sead::ListNode *v9; // r5
    sead::ListNode *v10; // r7
    _DWORD *v11; // r0
    sead::ListNode *v12; // r5
    int result; // r0
    sead::ListNode *v14; // r7
  
    v2 = (sead::ListNode *)a1[50];
    v3 = (sead::ListNode *)(a1 + 49);
    if ( v2 != (sead::ListNode *)(a1 + 49) )
    {
      do
      {
        v4 = *((sead::ListNode **)v2 + 1);
        sead::ListNode::erase_(v2);
        --a1[51];
        *((_DWORD *)v2 - 7) = a1[52];
        v5 = (_DWORD *)((char *)v2 - 28);
        v2 = v4;
        a1[52] = v5;
      }
      while ( v4 != v3 );
    }
    v6 = (sead::ListNode *)a1[200];
    if ( v6 != (sead::ListNode *)(a1 + 199) )
    {
      do
      {
        v7 = *((sead::ListNode **)v6 + 1);
        sead::ListNode::erase_(v6);
        --a1[201];
        *((_DWORD *)v6 - 7) = a1[202];
        v8 = (_DWORD *)((char *)v6 - 28);
        v6 = v7;
        a1[202] = v8;
      }
      while ( v7 != (sead::ListNode *)(a1 + 199) );
    }
    v9 = (sead::ListNode *)a1[350];
    if ( v9 != (sead::ListNode *)(a1 + 349) )
    {
      do
      {
        v10 = *((sead::ListNode **)v9 + 1);
        sead::ListNode::erase_(v9);
        --a1[351];
        *((_DWORD *)v9 - 7) = a1[352];
        v11 = (_DWORD *)((char *)v9 - 28);
        v9 = v10;
        a1[352] = v11;
      }
      while ( v10 != (sead::ListNode *)(a1 + 349) );
    }
    v12 = (sead::ListNode *)a1[500];
    result = 1996;
    if ( v12 != (sead::ListNode *)(a1 + 499) )
    {
      do
      {
        v14 = *((sead::ListNode **)v12 + 1);
        sead::ListNode::erase_(v12);
        --a1[501];
        *((_DWORD *)v12 - 7) = a1[502];
        result = (int)v12 - 28;
        v12 = v14;
        a1[502] = result;
      }
      while ( v14 != (sead::ListNode *)(a1 + 499) );
    }
    return result;
  }

/* ============================================================================
 * sub_604571EC
 * RVA 0x004571ec   size 0x118   xrefs 6
 * ============================================================================ */
  int __fastcall sub_604571EC(int a1, unsigned int a2, int a3, int a4)
  {
    int v4; // s0
    unsigned int v6; // r6
    int result; // r0
    int v9; // r1
    int *v10; // r5
    _DWORD **v11; // r8
    _DWORD *v12; // r0
    _DWORD *v13; // r4
    _DWORD *v14; // t1
    int v15; // r0
    int v16; // t1
    _DWORD *v17; // r7
  
    v6 = a2;
    result = *(unsigned __int8 *)(a1 + 2596) & (1 << a2);
    if ( (_BYTE)result )
    {
      result = *(unsigned __int8 *)(a1 + 2597);
      if ( !*(_BYTE *)(a1 + 2597) )
      {
        if ( a2 >= 4 )
          v6 = 0;
        result = a1 + 600 * v6;
        v10 = (int *)(result + 204);
        v9 = *(_DWORD *)(result + 204);
        v11 = (_DWORD **)(result + 196);
        if ( v9 >= *(_DWORD *)(result + 216) )
        {
          if ( a4 != 1 )
            return result;
          if ( v9 < 1 )
            v13 = nullptr;
          else
            v13 = *v11;
          if ( v13 )
            v13 -= 7;
          sead::ListNode::erase_((sead::ListNode *)(v13 + 7));
          --*v10;
          v15 = a1 + 600 * v6;
          v16 = *(_DWORD *)(v15 + 208);
          v12 = (_DWORD *)(v15 + 208);
          *v13 = v16;
          *v12 = v13;
        }
        else
        {
          v14 = *(_DWORD **)(result + 208);
          v12 = (_DWORD *)(result + 208);
          v13 = v14;
        }
        v17 = nullptr;
        if ( v13 )
        {
          v17 = v13;
          *v12 = *v13;
        }
        v17[4] = 0;
        v17[3] = 0;
        v17[2] = 0;
        *v17 = 2;
        v17[1] = 0;
        v17[7] = 0;
        v17[8] = 0;
        sub_608DE510(v11, v17 + 7);
        result = *v10 + 1;
        *v10 = result;
        *v17 = 0;
        v17[1] = a3;
        v17[2] = v4;
        v17[3] = 0;
        v17[6] = 0;
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60457304
 * RVA 0x00457304   size 0x148   xrefs 5
 * ============================================================================ */
  int __fastcall sub_60457304(int a1, unsigned int a2, _DWORD *a3, int a4, int a5)
  {
    unsigned int v6; // r7
    int result; // r0
    _DWORD *v10; // r0
    int v11; // r1
    _DWORD *v12; // r5
    _DWORD **v13; // r8
    _DWORD *v14; // r0
    _DWORD *v15; // r4
    _DWORD *v16; // t1
    int v17; // r0
    int v18; // t1
    _DWORD *v19; // r6
    _BYTE *v20; // r0
  
    v6 = a2;
    result = *(unsigned __int8 *)(a1 + 2596) & (1 << a2);
    if ( (_BYTE)result )
    {
      result = *(unsigned __int8 *)(a1 + 2597);
      if ( !*(_BYTE *)(a1 + 2597) )
      {
        if ( a2 >= 4 )
          v6 = 0;
        v10 = (_DWORD *)(a1 + 600 * v6);
        v12 = v10 + 51;
        v11 = v10[51];
        v13 = (_DWORD **)(v10 + 49);
        if ( v11 >= v10[54] )
        {
          result = a5;
          if ( a5 != 1 )
            return result;
          if ( v11 < 1 )
            v15 = nullptr;
          else
            v15 = *v13;
          if ( v15 )
            v15 -= 7;
          sead::ListNode::erase_((sead::ListNode *)(v15 + 7));
          --*v12;
          v17 = a1 + 600 * v6;
          v18 = *(_DWORD *)(v17 + 208);
          v14 = (_DWORD *)(v17 + 208);
          *v15 = v18;
          *v14 = v15;
        }
        else
        {
          v16 = (_DWORD *)v10[52];
          v14 = v10 + 52;
          v15 = v16;
        }
        v19 = nullptr;
        if ( v15 )
        {
          v19 = v15;
          *v14 = *v15;
        }
        *v19 = 2;
        v19[4] = 0;
        v19[3] = 0;
        v19[2] = 0;
        v19[1] = 0;
        v19[7] = 0;
        v19[8] = 0;
        sub_608DE510(v13, v19 + 7);
        ++*v12;
        *v19 = 1;
        v19[1] = a4;
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        v20 = (_BYTE *)a3[1];
        v19[4] = v20;
        if ( !*v20 )
          v19[1] = 0;
        v19[5] = 0;
        return 0;
      }
    }
    return result;
  }

/* ============================================================================
 * sub_6045744C
 * RVA 0x0045744c   size 0x7c   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6045744C(int a1, _DWORD *a2, int a3, int a4)
  {
    sub_60457304(a1, 0, a2, a3, a4);
    sub_60457304(a1, 1u, a2, a3, a4);
    sub_60457304(a1, 2u, a2, a3, a4);
    return sub_60457304(a1, 3u, a2, a3, a4);
  }

/* ============================================================================
 * sub_60457D5C
 * RVA 0x00457d5c   size 0xe4   xrefs 5
 * ============================================================================ */
  int __fastcall sub_60457D5C(int a1, int a2, int a3)
  {
    int v5; // r3
    int v6; // r5
    int v7; // r3
    int v8; // r5
    int v9; // r2
    int v10; // r3
  
    sub_60908C2C();
    *(_DWORD *)a1 = 12562860;
    *(_BYTE *)(a1 + 348) = 0;
    *(_BYTE *)(a1 + 349) = 0;
    *(_DWORD *)(a1 + 360) = a3;
    *(_DWORD *)(a1 + 364) = 0;
    *(_DWORD *)(a1 + 368) = 0;
    *(_DWORD *)(a1 + 372) = 0;
    v5 = MEMORY[0xB3B960];
    v6 = MEMORY[0xB3B964];
    *(_DWORD *)(a1 + 376) = MEMORY[0xB3B95C];
    *(_DWORD *)(a1 + 380) = v5;
    *(_DWORD *)(a1 + 384) = v6;
    v7 = MEMORY[0xB3B960];
    v8 = MEMORY[0xB3B964];
    *(_DWORD *)(a1 + 388) = MEMORY[0xB3B95C];
    *(_DWORD *)(a1 + 392) = v7;
    *(_DWORD *)(a1 + 396) = v8;
    v9 = MEMORY[0xB3B95C];
    v10 = MEMORY[0xB3B960];
    *(_DWORD *)(a1 + 408) = MEMORY[0xB3B964];
    *(_DWORD *)(a1 + 404) = v10;
    *(_DWORD *)(a1 + 400) = v9;
    *(_WORD *)(a1 + 434) = 0;
    *(_DWORD *)(a1 + 436) = 0;
    *(_DWORD *)(a1 + 440) = 0;
    *(_BYTE *)(a1 + 432) = 0;
    *(_DWORD *)(a1 + 428) = 0;
    *(_DWORD *)(a1 + 424) = 0;
    *(_DWORD *)(a1 + 420) = 0;
    *(_DWORD *)(a1 + 444) = 5;
    *(_BYTE *)(a1 + 448) = 0;
    *(_DWORD *)(a1 + 356) = 0;
    *(_DWORD *)(a1 + 352) = 0;
    sub_6090905C(a1, 0, 0, 11820184);
    sub_60909504(a1);
    return a1;
  }

/* ============================================================================
 * sub_604580E0
 * RVA 0x004580e0   size 0x678   xrefs 1
 * ============================================================================ */
  unsigned int __fastcall sub_604580E0(int a1, int a2)
  {
    int v2; // r8
    int v4; // r4
    int v5; // r0
    int v6; // r5
    int v7; // r8
    int *v8; // r9
    int v9; // r6
    int v10; // r0
    int v11; // r1
    char *v12; // r0
    int i; // r1
    int v14; // r4
    char *v15; // r0
    int j; // r1
    int v17; // r4
    unsigned int v18; // r1
    int v19; // r9
    int v20; // r5
    int v21; // r6
    int v22; // r0
    int v23; // r0
    unsigned int result; // r0
    int v25; // r7
    int v26; // r5
    int v27; // r0
    int v28; // r8
    int v29; // r11
    int v30; // r0
    int v31; // r0
    unsigned int v32; // [sp+0h] [bp-24h]
    int v34; // [sp+Ch] [bp-18h]
    float v35[2]; // [sp+1Ch] [bp-8h] BYREF
  
    v2 = a2;
    v4 = MEMORY[0xCCF448];
    v5 = MEMORY[0xC9CFB8];
    v6 = *(_DWORD *)(MEMORY[0xC9CFB8] + 16);
    if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
    {
      v7 = 4;
      v8 = *(int **)(MEMORY[0xCCF448] + 220);
      do
      {
        v9 = *v8;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v10 = (**(int (__fastcall ***)(int, int))v9)(v9, 13156896);
        if ( v9 && v10 == 1 )
        {
          if ( !v7 )
            goto LABEL_11;
          --v7;
        }
        ++v8;
      }
      while ( v8 != (int *)(*(_DWORD *)(v4 + 220) + 4 * *(_DWORD *)(v4 + 212)) );
      v9 = 0;
  LABEL_11:
      v2 = a2;
      v5 = MEMORY[0xC9CFB8];
    }
    else
    {
      v9 = 0;
    }
    if ( *(_BYTE *)(v5 + 83) )
    {
      v11 = *(_DWORD *)(a1 + 360);
      if ( *(_BYTE *)(v5 + 81) )
      {
        if ( v9 && !v11 && (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 20))(v9) == 1 )
        {
          v12 = (char *)&unk_60B02400 + 152 * v6;
          for ( i = 0; i != 19; ++i )
          {
            if ( (*(_DWORD *)(v9 + 272) & *(_DWORD *)&v12[8 * i + 4]) != 0 )
              *(_DWORD *)(a1 + 272) |= *(_DWORD *)&v12[8 * i];
          }
          if ( *(float *)(v9 + 288) < -0.7 )
            *(_DWORD *)(a1 + 272) |= 4u;
          if ( (unsigned int)*(unsigned __int8 *)(v9 + 353) - 1 > 1
            || (v14 = 1,
                sqrtf(
                  (float)(*(float *)(v9 + 288) * *(float *)(v9 + 288))
                + (float)(*(float *)(v9 + 284) * *(float *)(v9 + 284))) > MEMORY[0xB023D8]) )
          {
            v14 = 1;
            *(_BYTE *)(a1 + 448) = 1;
          }
          goto LABEL_37;
        }
      }
      else
      {
        v14 = 0;
        if ( v11 == 4 )
          goto LABEL_37;
      }
    }
    v15 = (char *)&unk_60B02400 + 152 * v6;
    for ( j = 0; j != 19; ++j )
    {
      if ( (*(_DWORD *)(v2 + 272) & *(_DWORD *)&v15[8 * j + 4]) != 0 )
        *(_DWORD *)(a1 + 272) |= *(_DWORD *)&v15[8 * j];
    }
    if ( *(float *)(v2 + 288) < -0.7 )
      *(_DWORD *)(a1 + 272) |= 4u;
    if ( (unsigned int)*(unsigned __int8 *)(v2 + 353) - 1 > 1
      || (v14 = 0,
          sqrtf((float)(*(float *)(v2 + 288) * *(float *)(v2 + 288)) + (float)(*(float *)(v2 + 284) * *(float *)(v2 + 284))) > MEMORY[0xB023D8]) )
    {
      v14 = 0;
      *(_BYTE *)(a1 + 448) = 1;
    }
  LABEL_37:
    if ( sub_60454CDC(MEMORY[0xC9CF0C], v35) == 1 )
      sub_6090905C(a1, 1, 1, v35);
    if ( v14 )
      v2 = v9;
    if ( _cxa_guard_acquire_0(13156900) )
    {
      MEMORY[0xC8C220] = 12420264;
      _cxa_guard_release_0(13156900);
    }
    if ( !v2 || (**(int (__fastcall ***)(int, int))v2)(v2, 13156896) != 1 )
    {
      *(_DWORD *)(a1 + 412) = MEMORY[0xB3B94C];
      *(_DWORD *)(a1 + 416) = MEMORY[0xB3B950];
  LABEL_55:
      *(_DWORD *)(a1 + 376) = MEMORY[0xB3B95C];
      v23 = 11778404;
      *(_DWORD *)(a1 + 380) = MEMORY[0xB3B960];
      goto LABEL_56;
    }
    v17 = *(_DWORD *)(v2 + 320);
    v18 = *(unsigned __int8 *)(v2 + 353);
    v19 = v2 + 316;
    v32 = v18;
    if ( v17 == v2 + 316 )
    {
      v21 = 0;
    }
    else
    {
      v20 = *(_DWORD *)(v2 + 328);
      v21 = v17 - v20;
      while ( 1 )
      {
        if ( _cxa_guard_acquire_0(13225728) )
        {
          MEMORY[0xC9CEFC] = 12562688;
          _cxa_guard_release_0(13225728);
        }
        v22 = (**(int (__fastcall ***)(int, int))v21)(v21, 13225724);
        if ( v21 )
        {
          if ( v22 == 1 )
            break;
        }
        v17 = *(_DWORD *)(v17 + 4);
        v21 = v17 - v20;
        if ( v17 - v20 == v19 - *(_DWORD *)(v2 + 328) )
        {
          v21 = 0;
          break;
        }
      }
      v18 = v32;
    }
    v25 = v21;
    if ( v18 == 2 )
    {
      v26 = *(_DWORD *)(v2 + 320);
      if ( v26 != v19 )
      {
        v34 = v2;
        v27 = *(_DWORD *)(v2 + 328);
        v28 = 1;
        v29 = v27;
        v25 = v26 - v27;
        do
        {
          if ( _cxa_guard_acquire_0(13225728) )
          {
            MEMORY[0xC9CEFC] = 12562688;
            _cxa_guard_release_0(13225728);
          }
          v30 = (**(int (__fastcall ***)(int, int))v25)(v25, 13225724);
          if ( v25 && v30 == 1 )
          {
            if ( !v28 )
              goto LABEL_70;
            --v28;
          }
          v26 = *(_DWORD *)(v26 + 4);
          v25 = v26 - v29;
        }
        while ( v26 - v29 != v19 - *(_DWORD *)(v34 + 328) );
        v25 = 0;
  LABEL_70:
        v18 = v32;
        if ( !v21 )
          goto LABEL_78;
        goto LABEL_74;
      }
      v25 = 0;
    }
    if ( !v21 )
    {
  LABEL_78:
      v31 = 11778380;
      goto LABEL_79;
    }
  LABEL_74:
    if ( *(int *)(v21 + 1184) < 1 )
      goto LABEL_80;
    v31 = v21 + 80;
    if ( v18 < 3 )
      v31 = v21 + 56;
  LABEL_79:
    *(_DWORD *)(a1 + 412) = *(_DWORD *)v31;
    *(_DWORD *)(a1 + 416) = *(_DWORD *)(v31 + 4);
  LABEL_80:
    if ( !v25 )
      goto LABEL_55;
    if ( *(int *)(v25 + 1184) < 1 )
      goto LABEL_57;
    *(_DWORD *)(a1 + 376) = *(_DWORD *)(v25 + 20);
    *(_DWORD *)(a1 + 380) = *(_DWORD *)(v25 + 24);
    v23 = v25 + 28;
  LABEL_56:
    *(_DWORD *)(a1 + 384) = *(_DWORD *)v23;
  LABEL_57:
    result = (unsigned int)(int)(float)(*(float *)(a1 + 416) * 1073700000.0) >> 16;
    *(_WORD *)(a1 + 434) = result;
    return result;
  }

/* ============================================================================
 * sub_604587EC
 * RVA 0x004587ec   size 0x188   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604587EC(int result)
  {
    float v1; // r3
    float v2; // r1
    float v3; // r2
    float v4; // s2
    float v5; // s4
    int v6; // r1
    float v7; // s4
    float v8; // s6
    float v9; // s0
    int v10; // r1
    int v11; // r2
  
    v1 = *(float *)(result + 376);
    v2 = *(float *)(result + 380);
    v3 = *(float *)(result + 384);
    *(float *)(result + 376) = v1 + (float)((float)(*(float *)(result + 400) - v1) * 0.5);
    v4 = v2 + (float)((float)(*(float *)(result + 404) - v2) * 0.5);
    *(float *)(result + 380) = v4;
    v5 = v3 + (float)((float)(*(float *)(result + 408) - v3) * 0.5);
    *(float *)(result + 384) = v5;
    *(float *)(result + 400) = v1;
    *(float *)(result + 404) = v2;
    *(float *)(result + 408) = v3;
    v6 = *(_DWORD *)(result + 420);
    if ( v6 >= 1 )
    {
      *(_DWORD *)(result + 420) = v6 - 1;
      return result;
    }
    v7 = v5 - *(float *)(result + 396);
    v8 = v4 - *(float *)(result + 392);
    if ( v7 <= 0.0 )
      v7 = -v7;
    if ( v8 <= 0.0 )
      v9 = -v8;
    else
      v9 = v4 - *(float *)(result + 392);
    if ( v7 <= v9 )
    {
      if ( v9 < MEMORY[0xB02530] )
      {
        v10 = *(_DWORD *)(result + 424);
        if ( v10 >= 1 )
        {
          *(_DWORD *)(result + 424) = v10 - 1;
          return result;
        }
        goto LABEL_18;
      }
      if ( v9 >= MEMORY[0xB02534] )
        *(_BYTE *)(result + 432) = 1;
      *(_DWORD *)(result + 424) = MEMORY[0xB0253C];
      v11 = *(_DWORD *)(result + 428) + 1;
      *(_DWORD *)(result + 428) = v11;
      if ( v11 >= MEMORY[0xB02538] )
      {
        if ( *(_BYTE *)(result + 432) )
        {
          *(_DWORD *)(result + 272) |= 0x4000u;
          *(_DWORD *)(result + 420) = MEMORY[0xB02540];
  LABEL_18:
          *(_DWORD *)(result + 428) = 0;
          *(_BYTE *)(result + 432) = 0;
          return result;
        }
        *(_DWORD *)(result + 428) = MEMORY[0xB02538] - 1;
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60458A04
 * RVA 0x00458a04   size 0x400   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60458A04(int a1)
  {
    int v1; // r6
    _DWORD *v2; // r7
    int v3; // r4
    int v4; // r8
    int v5; // r9
    int (__fastcall ***v6)(_DWORD, int); // r5
    int v7; // r0
    bool v8; // zf
    int v9; // r4
    int result; // r0
    int *v11; // r8
    int v12; // r0
    int v13; // r7
    unsigned int v14; // r8
    int v15; // r1
    int v16; // r6
    int v17; // r4
    int v18; // r7
    int *v19; // r4
    int v20; // r8
    int v21; // r0
    int v22; // r4
    int v23; // r5
    int v24; // r1
    int v25; // r4
    int v26; // [sp+8h] [bp-14h]
  
    v1 = 0;
    v2 = (_DWORD *)MEMORY[0xCCF448];
    v3 = *(_DWORD *)(MEMORY[0xCCF448] + 200);
    v4 = MEMORY[0xCCF448] + 196;
    v26 = a1;
    if ( v3 == MEMORY[0xCCF448] + 196 )
    {
      v6 = nullptr;
    }
    else
    {
      v5 = *(_DWORD *)(MEMORY[0xCCF448] + 208);
      v6 = (int (__fastcall ***)(_DWORD, int))(v3 - v5);
      while ( 1 )
      {
        if ( _cxa_guard_acquire_0(13225896) )
        {
          MEMORY[0xC9CFA4] = 12562904;
          _cxa_guard_release_0(13225896);
        }
        v7 = (**v6)(v6, 13225892);
        v8 = v6 == nullptr;
        if ( v6 )
          v8 = (v7 ^ 1) == 1;
        if ( !v8 )
          break;
        v3 = *(_DWORD *)(v3 + 4);
        v6 = (int (__fastcall ***)(_DWORD, int))(v3 - v5);
        if ( v3 - v5 == v4 - v2[52] )
        {
          v6 = nullptr;
          break;
        }
      }
      a1 = v26;
      v2 = (_DWORD *)MEMORY[0xCCF448];
    }
    v9 = *(_DWORD *)(a1 + 360);
    result = v2[53];
    if ( result )
    {
      v11 = (int *)v2[55];
      do
      {
        v1 = *v11;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v12 = (**(int (__fastcall ***)(int, int))v1)(v1, 13156896);
        if ( v1 && v12 == 1 )
        {
          if ( !v9 )
            goto LABEL_23;
          --v9;
        }
        ++v11;
      }
      while ( v11 != (int *)(v2[55] + 4 * v2[53]) );
      v1 = 0;
  LABEL_23:
      result = v26;
      v9 = *(_DWORD *)(v26 + 360);
    }
    if ( v9 || (result = *(unsigned __int8 *)(MEMORY[0xC9CFB8] + 81), !*(_BYTE *)(MEMORY[0xC9CFB8] + 81)) )
    {
  LABEL_25:
      if ( v1 )
      {
        v13 = *(unsigned __int8 *)(v1 + 353);
        result = *(_DWORD *)(v26 + 444);
        if ( v13 != result )
        {
          v14 = *(_DWORD *)(v1 + 348);
          result = v14;
          if ( v14 >= 9 )
            result = 0;
          v15 = (int)v6[934 * result + 177];
          v16 = v15;
          if ( v15 >= 2 )
            v16 = 2;
          if ( v15 >= 1 )
          {
            if ( v13 == 5 )
            {
              if ( v14 == 8 )
              {
                v17 = 0;
                do
                  result = sub_607DBF84(MEMORY[0xCC5754], 0, v17++, 5, 0);
                while ( v17 < v16 );
              }
              else
              {
                v25 = 0;
                do
                  result = sub_607DBF84(MEMORY[0xCC5754], *(_DWORD *)(v26 + 360), v25++, 5, 0);
                while ( v25 < v16 );
              }
            }
            else
            {
              v22 = 0;
              v23 = (int)&v6[934 * result + 948];
              do
              {
                v24 = 0;
                if ( v14 != 8 )
                  v24 = *(_DWORD *)(v26 + 360);
                result = sub_607DBF84(MEMORY[0xCC5754], v24, v22++, v13, v23);
                v23 += 4;
              }
              while ( v22 < v16 );
            }
          }
          *(_DWORD *)(v26 + 444) = v13;
        }
      }
    }
    else
    {
      v18 = MEMORY[0xCCF448];
      result = *(_DWORD *)(MEMORY[0xCCF448] + 212);
      if ( result )
      {
        v19 = *(int **)(MEMORY[0xCCF448] + 220);
        v20 = 4;
        do
        {
          v1 = *v19;
          if ( _cxa_guard_acquire_0(13156900) )
          {
            MEMORY[0xC8C220] = 12420264;
            _cxa_guard_release_0(13156900);
          }
          v21 = (**(int (__fastcall ***)(int, int))v1)(v1, 13156896);
          if ( v1 )
          {
            result = v21 ^ 1;
            if ( !result )
            {
              if ( !v20 )
                goto LABEL_25;
              --v20;
            }
          }
          ++v19;
          result = *(_DWORD *)(v18 + 220) + 4 * *(_DWORD *)(v18 + 212);
        }
        while ( v19 != (int *)result );
      }
    }
    return result;
  }

/* ============================================================================
 * sub_604591A4
 * RVA 0x004591a4   size 0xbc   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604591A4(int a1)
  {
    int v2; // r4
  
    v2 = MEMORY[0xC9CFB8];
    if ( !MEMORY[0xC9CFB8] )
    {
      v2 = operator new[](88, a1, 4);
      sead::IDisposer::IDisposer(v2, a1, 3);
      *(_DWORD *)v2 = 12562916;
      MEMORY[0xC9CFB4] = v2;
      *(_DWORD *)(v2 + 16) = 0;
      *(_BYTE *)(v2 + 20) = 0;
      *(_DWORD *)(v2 + 76) = 0;
      *(_BYTE *)(v2 + 84) = 1;
      *(_BYTE *)(v2 + 85) = 0;
      *(_DWORD *)(v2 + 24) = 1;
      *(_BYTE *)(v2 + 81) = 0;
      *(_DWORD *)(v2 + 28) = 30;
      *(_DWORD *)(v2 + 32) = 30;
      *(_DWORD *)(v2 + 36) = 420;
      *(_BYTE *)(v2 + 82) = 0;
      *(_BYTE *)(v2 + 83) = 0;
      *(_BYTE *)(v2 + 80) = 0;
      memset((void *)(v2 + 40), 0, 0x24u);
      MEMORY[0xC9CFB8] = v2;
    }
    return v2;
  }

/* ============================================================================
 * sub_604592A0
 * RVA 0x004592a0   size 0x114   xrefs 5
 * ============================================================================ */
  bool __fastcall sub_604592A0(int a1, int a2)
  {
    int v3; // r5
    int *v4; // r7
    int v5; // r6
    int v6; // r0
  
    v3 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      return 0;
    v4 = *(int **)(MEMORY[0xCCF448] + 220);
    while ( 1 )
    {
      v5 = *v4;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v6 = (**(int (__fastcall ***)(int, int))v5)(v5, 13156896);
      if ( !v5 || v6 != 1 )
        goto LABEL_9;
      if ( !a2 )
        return (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5) != 0;
      --a2;
  LABEL_9:
      if ( ++v4 == (int *)(*(_DWORD *)(v3 + 220) + 4 * *(_DWORD *)(v3 + 212)) )
        return 0;
    }
  }

/* ============================================================================
 * sub_604593D0
 * RVA 0x004593d0   size 0x224   xrefs 6
 * ============================================================================ */
  bool __fastcall sub_604593D0(int a1, int a2)
  {
    int v2; // r6
    int *v3; // r5
    int v4; // r8
    int v5; // r4
    int v6; // r0
    _BOOL4 result; // r0
    int v8; // r5
    int *v9; // r4
    int v10; // r6
    int v11; // r7
    int v12; // r0
    int v13; // r1
  
    v2 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      goto LABEL_10;
    v3 = *(int **)(MEMORY[0xCCF448] + 220);
    v4 = a2;
    while ( 1 )
    {
      v5 = *v3;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v6 = (**(int (__fastcall ***)(int, int))v5)(v5, 13156896);
      if ( !v5 || v6 != 1 )
        goto LABEL_9;
      if ( !v4 )
        break;
      --v4;
  LABEL_9:
      if ( ++v3 == (int *)(*(_DWORD *)(v2 + 220) + 4 * *(_DWORD *)(v2 + 212)) )
        goto LABEL_10;
    }
    v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5);
    result = 1;
    if ( !v13 )
    {
  LABEL_10:
      result = 0;
      if ( a2 )
        return result;
      v8 = MEMORY[0xCCF448];
      if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
        return 0;
      v9 = *(int **)(MEMORY[0xCCF448] + 220);
      v10 = 4;
      while ( 1 )
      {
        v11 = *v9;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v12 = (**(int (__fastcall ***)(int, int))v11)(v11, 13156896);
        if ( v11 && v12 == 1 )
        {
          if ( !v10 )
            return (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11) != 0;
          --v10;
        }
        if ( ++v9 == (int *)(*(_DWORD *)(v8 + 220) + 4 * *(_DWORD *)(v8 + 212)) )
          return 0;
      }
    }
    return result;
  }

/* ============================================================================
 * sub_6045962C
 * RVA 0x0045962c   size 0xd0   xrefs 1
 * ============================================================================ */
  int sub_6045962C()
  {
    int result; // r0
    int v1; // r4
    int (__fastcall ****v2)(_DWORD, int); // r5
    int (__fastcall ***v3)(_DWORD, int); // r7
  
    result = *(_DWORD *)(MEMORY[0xCCF448] + 212);
    if ( result )
    {
      v1 = 4 * result;
      v2 = *(int (__fastcall *****)(_DWORD, int))(MEMORY[0xCCF448] + 220);
      do
      {
        v3 = *v2;
        if ( _cxa_guard_acquire_0(13225748) )
        {
          MEMORY[0xC9CF10] = 12420264;
          _cxa_guard_release_0(13225748);
        }
        result = (**v3)(v3, 13225744);
        if ( v3 )
        {
          result ^= 1u;
          if ( !result )
            result = sub_60458A04((int)v3);
        }
        v1 -= 4;
        ++v2;
      }
      while ( v1 );
    }
    return result;
  }

/* ============================================================================
 * sub_60459718
 * RVA 0x00459718   size 0x240   xrefs 5
 * ============================================================================ */
  bool __fastcall sub_60459718(int a1, int a2)
  {
    int v2; // r5
    int v3; // r9
    unsigned __int8 **v4; // r7
    unsigned __int8 *v5; // r4
    int v6; // r0
    int v7; // r10
    int v8; // r6
    unsigned __int8 **v9; // r5
    int v10; // r7
    int v11; // r0
    int v14; // [sp+8h] [bp-Ch]
  
    v2 = MEMORY[0xCCF448];
    if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
    {
      v14 = a1;
      v3 = a2;
      v4 = *(unsigned __int8 ***)(MEMORY[0xCCF448] + 220);
      do
      {
        v5 = *v4;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v6 = (**(int (__fastcall ***)(unsigned __int8 *, int))v5)(v5, 13156896);
        if ( v5 && v6 == 1 )
        {
          if ( !v3 )
            goto LABEL_11;
          --v3;
        }
        ++v4;
      }
      while ( v4 != (unsigned __int8 **)(*(_DWORD *)(v2 + 220) + 4 * *(_DWORD *)(v2 + 212)) );
      v5 = nullptr;
  LABEL_11:
      a1 = v14;
      if ( a2 )
        goto LABEL_25;
    }
    else
    {
      v5 = nullptr;
      if ( a2 )
      {
  LABEL_25:
        v7 = 0;
        if ( v5 && (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v5 + 20))(v5) == 1 )
          return (unsigned int)v5[353] - 3 < 2;
        return v7;
      }
    }
    if ( !*(_BYTE *)(a1 + 81) )
      goto LABEL_25;
    v7 = 0;
    v8 = MEMORY[0xCCF448];
    if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
    {
      v9 = *(unsigned __int8 ***)(MEMORY[0xCCF448] + 220);
      v10 = 4;
      do
      {
        v5 = *v9;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v11 = (**(int (__fastcall ***)(unsigned __int8 *, int))v5)(v5, 13156896);
        if ( v5 && v11 == 1 )
        {
          if ( !v10 )
            goto LABEL_25;
          --v10;
        }
        ++v9;
      }
      while ( v9 != (unsigned __int8 **)(*(_DWORD *)(v8 + 220) + 4 * *(_DWORD *)(v8 + 212)) );
    }
    return v7;
  }

/* ============================================================================
 * sub_60459990
 * RVA 0x00459990   size 0x9dc   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60459990(int a1)
  {
    int v1; // r7
    int v2; // r0
    int v3; // r0
    bool v4; // zf
    _BOOL4 v5; // r1
    int v6; // r0
    int v7; // r5
    int v8; // r0
    int v9; // r4
    int v10; // r0
    int v11; // r6
    int *v12; // r5
    int v13; // r11
    int v14; // r0
    int v15; // r10
    int v16; // r8
    int v17; // r5
    int v18; // r9
    int v19; // r4
    int *v20; // r6
    int v21; // r7
    int v22; // r0
    int v23; // r4
    int *v24; // r6
    int v25; // r10
    int v26; // r0
    int v27; // r4
    int *v28; // r6
    int v29; // r7
    int v30; // r0
    int v31; // r4
    int *v32; // r6
    int v33; // r7
    int v34; // r0
    int v35; // r4
    int v36; // r6
    int v37; // r3
    int v38; // r11
    int v39; // r5
    int v40; // r0
    int v41; // r0
    int v42; // r1
    int v43; // r2
    int v44; // r1
    int v45; // r1
    int v46; // r0
    int v47; // r1
    int v48; // r0
    int v49; // r1
    bool v50; // zf
    int v51; // r0
    int v52; // r0
    int v53; // r1
    int v54; // r5
    int v55; // r0
    int v56; // r1
    int v58; // [sp+10h] [bp-23Ch]
    int v59; // [sp+14h] [bp-238h]
    _BYTE v60[4]; // [sp+28h] [bp-224h] BYREF
    int v61; // [sp+2Ch] [bp-220h]
    char v62; // [sp+30h] [bp-21Ch] BYREF
    char v63; // [sp+31h] [bp-21Bh]
    char v64; // [sp+32h] [bp-21Ah]
    char v65; // [sp+33h] [bp-219h]
    char v66; // [sp+34h] [bp-218h]
    char v67; // [sp+35h] [bp-217h]
    char v68; // [sp+36h] [bp-216h]
    char v69; // [sp+47h] [bp-205h]
  
    v1 = a1;
    v2 = *(_DWORD *)(a1 + 76);
    if ( !v2 )
      goto LABEL_18;
    *(_DWORD *)(v1 + 76) = v2 - 1;
    if ( v2 > 1 || *(_DWORD *)(MEMORY[0xCC62E4] + 84) != 2 )
      goto LABEL_18;
    v3 = *(_DWORD *)(MEMORY[0xCC62E4] + 88);
    if ( v3 == 149736 )
    {
      if ( MEMORY[0xC8C188] && *(_BYTE *)(MEMORY[0xC8C188] + 3225) )
        goto LABEL_18;
  LABEL_17:
      sub_600241EC();
      goto LABEL_18;
    }
    v4 = v3 == 149244;
    if ( v3 != 149244 )
      v4 = v3 == 142796;
    if ( v4 )
    {
      if ( !MEMORY[0xC99DD4] )
        goto LABEL_17;
      v5 = sub_603FB2C8();
      v6 = 1;
      if ( !v5 )
        v6 = sub_6040E438(MEMORY[0xC9A684]);
      if ( v6 == 1 && *(_DWORD *)(MEMORY[0xC99DD4] + 764) != 3 )
        goto LABEL_17;
    }
  LABEL_18:
    v7 = *(unsigned __int8 *)(v1 + 83);
    v8 = sub_607F6904(MEMORY[0xCC62E4]);
    if ( *(_DWORD *)(MEMORY[0xCC62E4] + 84) == 2 )
    {
      v9 = 1;
      if ( v8 | (v7 == 0) )
        return v9;
      v10 = *(_DWORD *)(MEMORY[0xCC62E4] + 88);
      if ( v10 == 149332 || v10 == 149648 )
        return v9;
    }
    else
    {
      v9 = 1;
      if ( !v7 || (v8 ^ 1) != 1 )
        return v9;
    }
    v11 = MEMORY[0xCCF448];
    if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
    {
      v58 = v1;
      v12 = *(int **)(MEMORY[0xCCF448] + 220);
      while ( 1 )
      {
        v13 = *v12;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v14 = (**(int (__fastcall ***)(int, int))v13)(v13, 13156896);
        if ( v13 )
        {
          if ( v14 == 1 )
            break;
        }
        if ( ++v12 == (int *)(*(_DWORD *)(v11 + 220) + 4 * *(_DWORD *)(v11 + 212)) )
        {
          v13 = 0;
          break;
        }
      }
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = MEMORY[0xCCF448];
      v59 = 0;
      if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
      {
        v20 = *(int **)(MEMORY[0xCCF448] + 220);
        v21 = 1;
        do
        {
          v16 = *v20;
          if ( _cxa_guard_acquire_0(13156900) )
          {
            MEMORY[0xC8C220] = 12420264;
            _cxa_guard_release_0(13156900);
          }
          v22 = (**(int (__fastcall ***)(int, int))v16)(v16, 13156896);
          if ( v16 && v22 == 1 )
          {
            if ( !v21 )
              goto LABEL_43;
            --v21;
          }
          ++v20;
        }
        while ( v20 != (int *)(*(_DWORD *)(v19 + 220) + 4 * *(_DWORD *)(v19 + 212)) );
        v16 = 0;
  LABEL_43:
        v23 = MEMORY[0xCCF448];
        if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
        {
          v24 = *(int **)(MEMORY[0xCCF448] + 220);
          v25 = 2;
          do
          {
            v17 = *v24;
            if ( _cxa_guard_acquire_0(13156900) )
            {
              MEMORY[0xC8C220] = 12420264;
              _cxa_guard_release_0(13156900);
            }
            v26 = (**(int (__fastcall ***)(int, int))v17)(v17, 13156896);
            if ( v17 && v26 == 1 )
            {
              if ( !v25 )
                goto LABEL_53;
              --v25;
            }
            ++v24;
          }
          while ( v24 != (int *)(*(_DWORD *)(v23 + 220) + 4 * *(_DWORD *)(v23 + 212)) );
          v17 = 0;
  LABEL_53:
          v27 = MEMORY[0xCCF448];
          if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
          {
            v28 = *(int **)(MEMORY[0xCCF448] + 220);
            v29 = 3;
            do
            {
              v15 = *v28;
              if ( _cxa_guard_acquire_0(13156900) )
              {
                MEMORY[0xC8C220] = 12420264;
                _cxa_guard_release_0(13156900);
              }
              v30 = (**(int (__fastcall ***)(int, int))v15)(v15, 13156896);
              if ( v15 && v30 == 1 )
              {
                if ( !v29 )
                  goto LABEL_63;
                --v29;
              }
              ++v28;
            }
            while ( v28 != (int *)(*(_DWORD *)(v27 + 220) + 4 * *(_DWORD *)(v27 + 212)) );
            v15 = 0;
  LABEL_63:
            v31 = MEMORY[0xCCF448];
            if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
            {
              v32 = *(int **)(MEMORY[0xCCF448] + 220);
              v33 = 4;
              do
              {
                v18 = *v32;
                if ( _cxa_guard_acquire_0(13156900) )
                {
                  MEMORY[0xC8C220] = 12420264;
                  _cxa_guard_release_0(13156900);
                }
                v34 = (**(int (__fastcall ***)(int, int))v18)(v18, 13156896);
                if ( v18 && v34 == 1 )
                {
                  if ( !v33 )
                    goto LABEL_77;
                  --v33;
                }
                ++v32;
              }
              while ( v32 != (int *)(*(_DWORD *)(v31 + 220) + 4 * *(_DWORD *)(v31 + 212)) );
            }
          }
          else
          {
            v15 = 0;
          }
        }
        else
        {
          v15 = 0;
          v17 = 0;
        }
        v18 = 0;
      }
  LABEL_77:
      if ( v13 )
        v59 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 20))(v13);
      v38 = 0;
      v36 = 0;
      if ( v16 )
        v36 = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 20))(v16);
      if ( v17 )
        v38 = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 20))(v17);
      v39 = 0;
      v35 = 0;
      if ( v15 )
        v35 = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 20))(v15);
      if ( v18 )
        v39 = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 20))(v18);
      v1 = v58;
      v37 = v59;
    }
    else
    {
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
    }
    v40 = *(_DWORD *)(v1 + 24);
    if ( v40 > 1 )
    {
      v43 = 3;
      *(_BYTE *)(v1 + 81) = 0;
      if ( v35 )
        v43 = 4;
      v44 = v37 & v36;
      if ( (v37 & v36) != 0 )
        v37 = 2;
      if ( !v38 )
        v43 = v37;
      v4 = v44 == 0;
      v45 = 30;
      if ( v4 )
        v43 = v37;
      if ( v43 < v40 )
      {
        v46 = *(_DWORD *)(v1 + 32);
        if ( !v46 )
          goto LABEL_119;
        v45 = v46 - 1;
      }
      *(_DWORD *)(v1 + 32) = v45;
      goto LABEL_131;
    }
    v41 = 0;
    if ( *(_BYTE *)(v1 + 85) )
    {
      *(_BYTE *)(v1 + 85) = 0;
      v41 = 1;
    }
    if ( *(_BYTE *)(v1 + 82) )
    {
      *(_BYTE *)(v1 + 82) = 0;
      if ( !(v37 | v39 ^ 1) )
        *(_BYTE *)(v1 + 81) = 1;
    }
    if ( *(_BYTE *)(v1 + 81) )
    {
      if ( v39 )
      {
  LABEL_98:
        v42 = 420;
  LABEL_99:
        *(_DWORD *)(v1 + 36) = v42;
        goto LABEL_118;
      }
      if ( v37 )
      {
        *(_BYTE *)(v1 + 81) = 0;
        goto LABEL_98;
      }
      v53 = *(_DWORD *)(v1 + 36);
      if ( v53 )
      {
        v42 = v53 - 1;
        goto LABEL_99;
      }
  LABEL_143:
      *(_BYTE *)(v1 + 80) = v39;
  LABEL_119:
      if ( *(_DWORD *)(MEMORY[0xCC62E4] + 84) == 2 )
      {
        v48 = *(_DWORD *)(MEMORY[0xCC62E4] + 88);
        v49 = 149736;
        if ( v48 != 149736 )
        {
          v49 = 149244;
          v50 = v48 == 149244;
          if ( v48 != 149244 )
          {
            v49 = 142796;
            v50 = v48 == 142796;
          }
          if ( !v50 )
            goto LABEL_145;
          if ( MEMORY[0xC99DD4] )
          {
            v49 = sub_603FB2C8();
            v51 = 1;
            if ( !v49 )
              v51 = sub_6040E438(MEMORY[0xC9A684]);
            if ( v51 != 1 || *(_DWORD *)(MEMORY[0xC99DD4] + 764) == 3 )
              goto LABEL_145;
          }
  LABEL_136:
          v9 = 1;
          if ( *(_DWORD *)(v1 + 76) )
            return v9;
          v52 = *(_DWORD *)(v1 + 72);
          if ( !v52 )
          {
            sub_600241CC(0, v49);
            v52 = *(_DWORD *)(v1 + 72);
          }
          if ( v52 <= 1 )
          {
            *(_DWORD *)(v1 + 72) = v52 + 1;
            return v9;
          }
          *(_DWORD *)(v1 + 72) = 0;
          goto LABEL_145;
        }
        if ( !MEMORY[0xC8C188] || !*(_BYTE *)(MEMORY[0xC8C188] + 3225) )
          goto LABEL_136;
      }
  LABEL_145:
      v54 = *(_DWORD *)(v1 + 24);
      v62 = 0;
      v63 = 4;
      v64 = 1;
      v65 = 1;

/* ============================================================================
 * sub_6045A444
 * RVA 0x0045a444   size 0xb0   xrefs 3
 * ============================================================================ */
  int __fastcall sub_6045A444(int a1, int a2)
  {
    int v4; // r0
    int v5; // r1
    _BYTE v7[4]; // [sp+4h] [bp-224h] BYREF
    int v8; // [sp+8h] [bp-220h]
    char v9; // [sp+Ch] [bp-21Ch] BYREF
    char v10; // [sp+Dh] [bp-21Bh]
    char v11; // [sp+Eh] [bp-21Ah]
    char v12; // [sp+Fh] [bp-219h]
    char v13; // [sp+10h] [bp-218h]
    char v14; // [sp+11h] [bp-217h]
    char v15; // [sp+12h] [bp-216h]
    char v16; // [sp+23h] [bp-205h]
  
    v9 = 0;
    v10 = 4;
    v11 = 1;
    v12 = 1;
    v13 = 1;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    if ( a2 <= 1 )
    {
      v14 = 1;
    }
    else
    {
      v9 = a2;
      v10 = a2;
    }
    v4 = nn::hid::ShowControllerSupport(v7, &v9);
    if ( *(int *)(a1 + 24) <= 1 && v4 && *(_BYTE *)(a1 + 81) )
      *(_BYTE *)(a1 + 85) = 1;
    v5 = 0;
    *(_BYTE *)(a1 + 81) = 0;
    if ( a2 <= 1 && v8 == 32 )
      *(_BYTE *)(a1 + 81) = 1;
    if ( !v4 )
      return 1;
    return v5;
  }

/* ============================================================================
 * sub_6045A500
 * RVA 0x0045a500   size 0x148   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6045A500(int a1)
  {
    int v1; // r6
    _DWORD **v2; // r5
    int v3; // r7
    _DWORD *v4; // r4
    int v5; // r0
    int v6; // r5
    int v8; // r0
  
    v1 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
    {
  LABEL_10:
      v6 = 0;
      *(_BYTE *)(a1 + 81) = 0;
      return v6;
    }
    v2 = *(_DWORD ***)(MEMORY[0xCCF448] + 220);
    v3 = 4;
    while ( 1 )
    {
      v4 = *v2;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v5 = (*(int (__fastcall **)(_DWORD *, int))*v4)(v4, 13156896);
      if ( !v4 || v5 != 1 )
        goto LABEL_9;
      if ( !v3 )
        break;
      --v3;
  LABEL_9:
      if ( ++v2 == (_DWORD **)(*(_DWORD *)(v1 + 220) + 4 * *(_DWORD *)(v1 + 212)) )
        goto LABEL_10;
    }
    v6 = 0;
    *(_BYTE *)(a1 + 81) = 0;
    if ( (*(int (__fastcall **)(_DWORD *))(*v4 + 20))(v4) == 1 )
    {
      v8 = v4[1];
      if ( (v8 & 0xFF000C0) == 0 && (v8 & 0xFFFFFFF) != 0 )
      {
        v6 = 1;
        *(_BYTE *)(a1 + 81) = 1;
      }
    }
    return v6;
  }

/* ============================================================================
 * sub_6045A664
 * RVA 0x0045a664   size 0x140   xrefs 4
 * ============================================================================ */
  bool __fastcall sub_6045A664(int a1, int a2)
  {
    int v3; // r6
    _BOOL4 result; // r0
    int *v5; // r4
    int v6; // r7
    int v7; // r0
    int v8; // r0
    bool v9; // zf
    int v10; // r2
  
    v3 = MEMORY[0xCCF448];
    result = 0;
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      return result;
    v5 = *(int **)(MEMORY[0xCCF448] + 220);
    while ( 1 )
    {
      v6 = *v5;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v7 = (**(int (__fastcall ***)(int, int))v6)(v6, 13156896);
      if ( !v6 || v7 != 1 )
        goto LABEL_9;
      if ( !a2 )
        break;
      --a2;
  LABEL_9:
      if ( ++v5 == (int *)(*(_DWORD *)(v3 + 220) + 4 * *(_DWORD *)(v3 + 212)) )
        return 0;
    }
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6);
    v9 = v8 == 1;
    if ( v8 == 1 )
      v9 = *(_BYTE *)(v6 + 353) == 0;
    if ( !v9 )
      return 0;
    v10 = *(_DWORD *)(v6 + 4);
    if ( (v10 & 0xFF000C0) != 0 )
      return 0;
    return (v10 & 0xFFFFFFF) != 0;
  }

/* ============================================================================
 * sub_6045A7C0
 * RVA 0x0045a7c0   size 0x598   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6045A7C0(int a1, int a2)
  {
    int v2; // r2
    int v3; // r4
    int v4; // r3
    int v5; // r7
    int v6; // r6
    int v7; // r0
    int *v8; // r5
    int v9; // r11
    int v10; // r0
    int v11; // r5
    int v12; // r8
    int v13; // r10
    int v14; // r4
    int *v15; // r6
    int v16; // r7
    int v17; // r0
    int v18; // r4
    int *v19; // r6
    int v20; // r7
    int v21; // r0
    int v22; // r4
    int *v23; // r6
    int v24; // r9
    int v25; // r0
    int v26; // r6
    int (__fastcall ****v27)(_DWORD, int); // r4
    int v28; // r7
    int (__fastcall ***v29)(_DWORD, int); // r9
    int v30; // r0
    int v32; // [sp+Ch] [bp-18h]
    int v33; // [sp+10h] [bp-14h]
  
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = MEMORY[0xCCF448];
    v7 = 0;
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      goto LABEL_62;
    v32 = a2;
    v8 = *(int **)(MEMORY[0xCCF448] + 220);
    while ( 1 )
    {
      v9 = *v8;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v10 = (**(int (__fastcall ***)(int, int))v9)(v9, 13156896);
      if ( v9 )
      {
        if ( v10 == 1 )
          break;
      }
      if ( ++v8 == (int *)(*(_DWORD *)(v6 + 220) + 4 * *(_DWORD *)(v6 + 212)) )
      {
        v9 = 0;
        break;
      }
    }
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = MEMORY[0xCCF448];
    v33 = 0;
    if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
    {
      v15 = *(int **)(MEMORY[0xCCF448] + 220);
      v16 = 1;
      do
      {
        v12 = *v15;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v17 = (**(int (__fastcall ***)(int, int))v12)(v12, 13156896);
        if ( v12 && v17 == 1 )
        {
          if ( !v16 )
            goto LABEL_19;
          --v16;
        }
        ++v15;
      }
      while ( v15 != (int *)(*(_DWORD *)(v14 + 220) + 4 * *(_DWORD *)(v14 + 212)) );
      v12 = 0;
  LABEL_19:
      v18 = MEMORY[0xCCF448];
      if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      {
        v11 = 0;
        v13 = 0;
        if ( !v9 )
          goto LABEL_54;
        goto LABEL_53;
      }
      v19 = *(int **)(MEMORY[0xCCF448] + 220);
      v20 = 2;
      do
      {
        v13 = *v19;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v21 = (**(int (__fastcall ***)(int, int))v13)(v13, 13156896);
        if ( v13 && v21 == 1 )
        {
          if ( !v20 )
            goto LABEL_29;
          --v20;
        }
        ++v19;
      }
      while ( v19 != (int *)(*(_DWORD *)(v18 + 220) + 4 * *(_DWORD *)(v18 + 212)) );
      v13 = 0;
  LABEL_29:
      v22 = MEMORY[0xCCF448];
      if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
      {
        v23 = *(int **)(MEMORY[0xCCF448] + 220);
        v24 = 3;
        do
        {
          v11 = *v23;
          if ( _cxa_guard_acquire_0(13156900) )
          {
            MEMORY[0xC8C220] = 12420264;
            _cxa_guard_release_0(13156900);
          }
          v25 = (**(int (__fastcall ***)(int, int))v11)(v11, 13156896);
          if ( v11 && v25 == 1 )
          {
            if ( !v24 )
              goto LABEL_39;
            --v24;
          }
          ++v23;
        }
        while ( v23 != (int *)(*(_DWORD *)(v22 + 220) + 4 * *(_DWORD *)(v22 + 212)) );
        v11 = 0;
  LABEL_39:
        v26 = MEMORY[0xCCF448];
        if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
        {
          v27 = *(int (__fastcall *****)(_DWORD, int))(MEMORY[0xCCF448] + 220);
          v28 = 4;
          do
          {
            v29 = *v27;
            if ( _cxa_guard_acquire_0(13156900) )
            {
              MEMORY[0xC8C220] = 12420264;
              _cxa_guard_release_0(13156900);
            }
            v30 = (**v29)(v29, 13156896);
            if ( v29 && v30 == 1 )
            {
              if ( !v28 )
                break;
              --v28;
            }
            ++v27;
          }
          while ( v27 != (int (__fastcall ****)(_DWORD, int))(*(_DWORD *)(v26 + 220) + 4 * *(_DWORD *)(v26 + 212)) );
        }
      }
      else
      {
        v11 = 0;
      }
    }
    if ( v9 )
  LABEL_53:
      v33 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 20))(v9);
  LABEL_54:
    v3 = 0;
    v5 = 0;
    if ( v12 )
      v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 20))(v12);
    if ( v13 )
      v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 20))(v13);
    if ( v11 )
      v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11);
    else
      v7 = 0;
    a2 = v32;
    v4 = v33;
    v2 = 0;
  LABEL_62:
    switch ( a2 )
    {
      case 1:
        return v4;
      case 2:
        return v4 & v5;
      case 3:
        return v4 & v5 & v3;
      case 4:
        return v4 & v5 & v3 & v7;
      default:
        return v2;
    }
  }

/* ============================================================================
 * sub_6045ADE4
 * RVA 0x0045ade4   size 0x154   xrefs 16
 * ============================================================================ */
  bool __fastcall sub_6045ADE4(int a1, int a2, int a3, int a4)
  {
    int v4; // r5
    bool v5; // zf
    int v6; // r6
    _DWORD **v7; // r4
    _DWORD *v8; // r7
    int v9; // r0
    _BOOL4 result; // r0
    int v11; // r1
  
    v4 = a2;
    v5 = a2 == 0;
    if ( !a2 )
      v5 = a4 == 1;
    if ( v5 )
    {
      v4 = *(unsigned __int8 *)(a1 + 81);
      if ( *(_BYTE *)(a1 + 81) )
        v4 = 4;
    }
    v6 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      return 0;
    v7 = *(_DWORD ***)(MEMORY[0xCCF448] + 220);
    while ( 1 )
    {
      v8 = *v7;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v9 = (*(int (__fastcall **)(_DWORD *, int))*v8)(v8, 13156896);
      if ( !v8 || v9 != 1 )
        goto LABEL_15;
      if ( !v4 )
        break;
      --v4;
  LABEL_15:
      if ( ++v7 == (_DWORD **)(*(_DWORD *)(v6 + 220) + 4 * *(_DWORD *)(v6 + 212)) )
        return 0;
    }
    if ( (*(int (__fastcall **)(_DWORD *))(*v8 + 20))(v8) != 1 )
      return 0;
    v11 = v8[1];
    if ( a3 != 0xFFFFFFF )
      return (v11 & a3) != 0;
    result = 0;
    if ( (v11 & 0xC0) == 0 )
      return (v11 & a3) != 0;
    return result;
  }

/* ============================================================================
 * sub_6045AF54
 * RVA 0x0045af54   size 0x140   xrefs 11
 * ============================================================================ */
  bool __fastcall sub_6045AF54(int a1, int a2, int a3, int a4)
  {
    int v4; // r5
    bool v5; // zf
    int v6; // r6
    _DWORD **v7; // r4
    _DWORD *v8; // r7
    int v9; // r0
  
    v4 = a2;
    v5 = a2 == 0;
    if ( !a2 )
      v5 = a4 == 1;
    if ( v5 )
    {
      v4 = *(unsigned __int8 *)(a1 + 81);
      if ( *(_BYTE *)(a1 + 81) )
        v4 = 4;
    }
    v6 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      return 0;
    v7 = *(_DWORD ***)(MEMORY[0xCCF448] + 220);
    while ( 1 )
    {
      v8 = *v7;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v9 = (*(int (__fastcall **)(_DWORD *, int))*v8)(v8, 13156896);
      if ( !v8 || v9 != 1 )
        goto LABEL_15;
      if ( !v4 )
        break;
      --v4;
  LABEL_15:
      if ( ++v7 == (_DWORD **)(*(_DWORD *)(v6 + 220) + 4 * *(_DWORD *)(v6 + 212)) )
        return 0;
    }
    if ( (*(int (__fastcall **)(_DWORD *))(*v8 + 20))(v8) == 1 )
      return (v8[68] & a3) != 0;
    return 0;
  }

/* ============================================================================
 * sub_6045B0B0
 * RVA 0x0045b0b0   size 0x248   xrefs 1
 * ============================================================================ */
  bool __fastcall sub_6045B0B0(int a1, int a2, int a3)
  {
    int v3; // r6
    int v4; // r10
    int *v5; // r8
    int v6; // r5
    int v7; // r0
    int v8; // r6
    int *v9; // r4
    int v10; // r7
    int v11; // r0
    int v14; // [sp+4h] [bp-10h]
  
    v3 = MEMORY[0xCCF448];
    if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
    {
      v14 = a1;
      v4 = a2;
      v5 = *(int **)(MEMORY[0xCCF448] + 220);
      do
      {
        v6 = *v5;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v7 = (**(int (__fastcall ***)(int, int))v6)(v6, 13156896);
        if ( v6 && v7 == 1 )
        {
          if ( !v4 )
            goto LABEL_11;
          --v4;
        }
        ++v5;
      }
      while ( v5 != (int *)(*(_DWORD *)(v3 + 220) + 4 * *(_DWORD *)(v3 + 212)) );
      v6 = 0;
  LABEL_11:
      a1 = v14;
      if ( a2 )
        goto LABEL_25;
    }
    else
    {
      v6 = 0;
      if ( a2 )
        goto LABEL_25;
    }
    if ( *(_BYTE *)(a1 + 81) )
    {
      v8 = MEMORY[0xCCF448];
      if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
      {
        v9 = *(int **)(MEMORY[0xCCF448] + 220);
        v10 = 4;
        do
        {
          v6 = *v9;
          if ( _cxa_guard_acquire_0(13156900) )
          {
            MEMORY[0xC8C220] = 12420264;
            _cxa_guard_release_0(13156900);
          }
          v11 = (**(int (__fastcall ***)(int, int))v6)(v6, 13156896);
          if ( v6 && v11 == 1 )
          {
            if ( !v10 )
              goto LABEL_25;
            --v10;
          }
          ++v9;
        }
        while ( v9 != (int *)(*(_DWORD *)(v8 + 220) + 4 * *(_DWORD *)(v8 + 212)) );
      }
      return 0;
    }
  LABEL_25:
    if ( v6 && (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) == 1 )
      return (unsigned int)sub_609094B8(v6, a3) > 0xB4;
    return 0;
  }

/* ============================================================================
 * sub_6045B330
 * RVA 0x0045b330   size 0x22c   xrefs 11
 * ============================================================================ */
  int __fastcall sub_6045B330(int a1, int a2)
  {
    int v2; // r5
    int v3; // r9
    unsigned __int8 **v4; // r7
    unsigned __int8 *v5; // r4
    int v6; // r0
    int v7; // r9
    int v8; // r5
    unsigned __int8 **v9; // r6
    int v10; // r7
    int v11; // r0
    int v14; // [sp+8h] [bp-Ch]
  
    v2 = MEMORY[0xCCF448];
    if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
    {
      v14 = a1;
      v3 = a2;
      v4 = *(unsigned __int8 ***)(MEMORY[0xCCF448] + 220);
      do
      {
        v5 = *v4;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v6 = (**(int (__fastcall ***)(unsigned __int8 *, int))v5)(v5, 13156896);
        if ( v5 && v6 == 1 )
        {
          if ( !v3 )
            goto LABEL_11;
          --v3;
        }
        ++v4;
      }
      while ( v4 != (unsigned __int8 **)(*(_DWORD *)(v2 + 220) + 4 * *(_DWORD *)(v2 + 212)) );
      v5 = nullptr;
  LABEL_11:
      a1 = v14;
      if ( a2 )
        goto LABEL_25;
    }
    else
    {
      v5 = nullptr;
      if ( a2 )
      {
  LABEL_25:
        v7 = 5;
        if ( v5 && (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v5 + 20))(v5) == 1 )
          return v5[353];
        return v7;
      }
    }
    if ( !*(_BYTE *)(a1 + 81) )
      goto LABEL_25;
    v7 = 5;
    v8 = MEMORY[0xCCF448];
    if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
    {
      v9 = *(unsigned __int8 ***)(MEMORY[0xCCF448] + 220);
      v10 = 4;
      do
      {
        v5 = *v9;
        if ( _cxa_guard_acquire_0(13156900) )
        {
          MEMORY[0xC8C220] = 12420264;
          _cxa_guard_release_0(13156900);
        }
        v11 = (**(int (__fastcall ***)(unsigned __int8 *, int))v5)(v5, 13156896);
        if ( v5 && v11 == 1 )
        {
          if ( !v10 )
            goto LABEL_25;
          --v10;
        }
        ++v9;
      }
      while ( v9 != (unsigned __int8 **)(*(_DWORD *)(v8 + 220) + 4 * *(_DWORD *)(v8 + 212)) );
    }
    return v7;
  }

/* ============================================================================
 * sub_6045B594
 * RVA 0x0045b594   size 0x6b4   xrefs 2
 * ============================================================================ */
  int sub_6045B594()
  {
    int v0; // r5
    int *v1; // r4
    int v2; // r6
    int v3; // r7
    int v4; // r0
    const unsigned int *v5; // r2
    int v6; // r5
    int *v7; // r4
    int v8; // r6
    int v9; // r7
    int v10; // r0
    int v11; // r5
    int *v12; // r4
    int v13; // r6
    int v14; // r7
    int v15; // r0
    int v16; // r5
    int *v17; // r4
    int v18; // r6
    int v19; // r7
    int v20; // r0
    int v21; // r5
    int *v22; // r4
    int v23; // r6
    int v24; // r7
    int v25; // r0
    int v26; // r5
    int result; // r0
    int *v28; // r4
    int v29; // r6
    int v30; // r7
    int v31; // r0
  
    v0 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      goto LABEL_14;
    v1 = *(int **)(MEMORY[0xCCF448] + 220);
    v2 = 1;
    while ( 1 )
    {
      v3 = *v1;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v4 = (**(int (__fastcall ***)(int, int))v3)(v3, 13156896);
      if ( !v3 || v4 != 1 )
        goto LABEL_9;
      if ( !v2 )
        break;
      --v2;
  LABEL_9:
      if ( ++v1 == (int *)(*(_DWORD *)(v0 + 220) + 4 * *(_DWORD *)(v0 + 212)) )
        goto LABEL_14;
    }
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 20))(v3) == 1
      && (*(_DWORD *)(v3 + 272) & 0x6000) == 0x6000
      && (*(_BYTE *)(v3 + 5) & 0x60) != 0 )
    {
      return nn::hid::SwapNpadAssignment(nullptr, nullptr, v5);
    }
  LABEL_14:
    v6 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      goto LABEL_28;
    v7 = *(int **)(MEMORY[0xCCF448] + 220);
    v8 = 1;
    while ( 2 )
    {
      v9 = *v7;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v10 = (**(int (__fastcall ***)(int, int))v9)(v9, 13156896);
      if ( !v9 || v10 != 1 )
      {
  LABEL_22:
        if ( ++v7 == (int *)(*(_DWORD *)(v6 + 220) + 4 * *(_DWORD *)(v6 + 212)) )
          goto LABEL_28;
        continue;
      }
      break;
    }
    if ( v8 )
    {
      --v8;
      goto LABEL_22;
    }
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 20))(v9) == 1
      && (*(_DWORD *)(v9 + 272) & 0x24) == 0x24
      && (*(_BYTE *)(v9 + 4) & 0x24) != 0 )
    {
      return nn::hid::SwapNpadAssignment(nullptr, nullptr, v5);
    }
  LABEL_28:
    v11 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      goto LABEL_41;
    v12 = *(int **)(MEMORY[0xCCF448] + 220);
    v13 = 2;
    while ( 2 )
    {
      v14 = *v12;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v15 = (**(int (__fastcall ***)(int, int))v14)(v14, 13156896);
      if ( !v14 || v15 != 1 )
      {
  LABEL_36:
        if ( ++v12 == (int *)(*(_DWORD *)(v11 + 220) + 4 * *(_DWORD *)(v11 + 212)) )
          goto LABEL_41;
        continue;
      }
      break;
    }
    if ( v13 )
    {
      --v13;
      goto LABEL_36;
    }
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 20))(v14) == 1
      && (*(_DWORD *)(v14 + 272) & 0x6000) == 0x6000
      && (*(_BYTE *)(v14 + 5) & 0x60) != 0 )
    {
      return nn::hid::SwapNpadAssignment(nullptr, nullptr, v5);
    }
  LABEL_41:
    v16 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      goto LABEL_55;
    v17 = *(int **)(MEMORY[0xCCF448] + 220);
    v18 = 2;
    while ( 2 )
    {
      v19 = *v17;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v20 = (**(int (__fastcall ***)(int, int))v19)(v19, 13156896);
      if ( !v19 || v20 != 1 )
      {
  LABEL_49:
        if ( ++v17 == (int *)(*(_DWORD *)(v16 + 220) + 4 * *(_DWORD *)(v16 + 212)) )
          goto LABEL_55;
        continue;
      }
      break;
    }
    if ( v18 )
    {
      --v18;
      goto LABEL_49;
    }
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 20))(v19) == 1
      && (*(_DWORD *)(v19 + 272) & 0x24) == 0x24
      && (*(_BYTE *)(v19 + 4) & 0x24) != 0 )
    {
      return nn::hid::SwapNpadAssignment(nullptr, nullptr, v5);
    }
  LABEL_55:
    v21 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      goto LABEL_64;
    v22 = *(int **)(MEMORY[0xCCF448] + 220);
    v23 = 3;
    while ( 2 )
    {
      v24 = *v22;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v25 = (**(int (__fastcall ***)(int, int))v24)(v24, 13156896);
      if ( !v24 || v25 != 1 )
      {
  LABEL_63:
        if ( ++v22 == (int *)(*(_DWORD *)(v21 + 220) + 4 * *(_DWORD *)(v21 + 212)) )
          goto LABEL_64;
        continue;
      }
      break;
    }
    if ( v23 )
    {
      --v23;
      goto LABEL_63;
    }
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v24 + 20))(v24) == 1
      && (*(_DWORD *)(v24 + 272) & 0x6000) == 0x6000
      && (*(_BYTE *)(v24 + 5) & 0x60) != 0 )
    {
      return nn::hid::SwapNpadAssignment(nullptr, nullptr, v5);
    }
  LABEL_64:
    v26 = MEMORY[0xCCF448];
    result = *(_DWORD *)(MEMORY[0xCCF448] + 212);
    if ( !result )
      return result;
    v28 = *(int **)(MEMORY[0xCCF448] + 220);
    v29 = 3;
    while ( 2 )
    {
      v30 = *v28;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v31 = (**(int (__fastcall ***)(int, int))v30)(v30, 13156896);
      if ( !v30 || v31 != 1 )
      {
  LABEL_72:
        ++v28;
        result = *(_DWORD *)(v26 + 220) + 4 * *(_DWORD *)(v26 + 212);
        if ( v28 == (int *)result )
          return result;
        continue;
      }
      break;
    }
    if ( v29 )
    {
      --v29;
      goto LABEL_72;
    }
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v30 + 20))(v30);
    if ( result == 1 )
    {
      result = *(_DWORD *)(v30 + 272) & 0x24;
      if ( result == 36 )
      {
        result = *(unsigned __int8 *)(v30 + 4);
        if ( (result & 0x24) != 0 )
          return nn::hid::SwapNpadAssignment(nullptr, nullptr, v5);
      }
    }
    return result;
  }

/* ============================================================================
 * sub_6045BD08
 * RVA 0x0045bd08   size 0x168   xrefs 2
 * ============================================================================ */
  bool __fastcall sub_6045BD08(int a1, int a2, int a3)
  {
    int v3; // r5
    int v4; // r1
    _BOOL4 result; // r0
    int v6; // r6
    _DWORD **v7; // r4
    _DWORD *v8; // r7
    int v9; // r0
  
    v3 = a2;
    if ( a2 == 4 )
    {
      if ( !*(_BYTE *)(a1 + 81) )
        return 0;
    }
    else if ( !a2 )
    {
      v4 = *(unsigned __int8 *)(a1 + 81);
      result = 0;
      if ( v4 )
        return result;
    }
    v6 = MEMORY[0xCCF448];
    if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
      return 0;
    v7 = *(_DWORD ***)(MEMORY[0xCCF448] + 220);
    while ( 1 )
    {
      v8 = *v7;
      if ( _cxa_guard_acquire_0(13156900) )
      {
        MEMORY[0xC8C220] = 12420264;
        _cxa_guard_release_0(13156900);
      }
      v9 = (*(int (__fastcall **)(_DWORD *, int))*v8)(v8, 13156896);
      if ( !v8 || v9 != 1 )
        goto LABEL_14;
      if ( !v3 )
        break;
      --v3;
  LABEL_14:
      if ( ++v7 == (_DWORD **)(*(_DWORD *)(v6 + 220) + 4 * *(_DWORD *)(v6 + 212)) )
        return 0;
    }
    if ( (*(int (__fastcall **)(_DWORD *))(*v8 + 20))(v8) == 1 && (v8[68] & a3) == a3 )
      return (v8[1] & a3) != 0;
    return 0;
  }

/* ============================================================================
 * sub_6045BE8C
 * RVA 0x0045be8c   size 0x98   xrefs 7
 * ============================================================================ */
  int __fastcall sub_6045BE8C(int a1, int a2)
  {
    int result; // r0
    int v4; // r5
  
    *(_DWORD *)(a1 + 24) = a2;
    result = MEMORY[0xCC6AF8];
    if ( MEMORY[0xCC6AF8] )
    {
      v4 = 0;
      sub_60808984(MEMORY[0xCC6AF8], 0, 0);
      sub_60808984(MEMORY[0xCC6AF8], 1, 0);
      sub_60808984(MEMORY[0xCC6AF8], 2, 0);
      result = sub_60808984(MEMORY[0xCC6AF8], 3, 0);
      if ( a2 >= 1 )
      {
        do
          result = sub_60808984(MEMORY[0xCC6AF8], v4++, 1);
        while ( a2 != v4 );
      }
    }
    return result;
  }

/* ============================================================================
 * sub_6045BF58
 * RVA 0x0045bf58   size 0x128   xrefs 160
 * ============================================================================ */
  int __fastcall sub_6045BF58(int a1, int a2)
  {
    int v2; // r4
    int v4; // r6
    int (__fastcall ****v5)(_DWORD, int); // r4
    int (__fastcall ***v6)(_DWORD, int); // r7
    int v7; // r0
  
    v2 = a1;
    v4 = MEMORY[0xCCF448];
    if ( *(_DWORD *)(MEMORY[0xCCF448] + 212) )
    {
      v5 = *(int (__fastcall *****)(_DWORD, int))(MEMORY[0xCCF448] + 220);
      do
      {
        v6 = *v5;
        if ( _cxa_guard_acquire_0(13225748) )
        {
          MEMORY[0xC9CF10] = 12420264;
          _cxa_guard_release_0(13225748);
        }
        v7 = (**v6)(v6, 13225744);
        if ( v6 && v7 == 1 )
        {
          if ( !a2 )
            goto LABEL_11;
          --a2;
        }
        ++v5;
      }
      while ( v5 != (int (__fastcall ****)(_DWORD, int))(*(_DWORD *)(v4 + 220) + 4 * *(_DWORD *)(v4 + 212)) );
      v6 = nullptr;
  LABEL_11:
      v2 = a1;
    }
    else
    {
      v6 = nullptr;
    }
    sub_6090A030(v2, v6, 1);
    return sub_60909CAC(v2, 19, &unk_60B02544, 0);
  }

/* ============================================================================
 * Actor_Battle_for_Item_build
 * RVA 0x0045c3c0   size 0xb4   xrefs 0
 * ============================================================================ */
  int Actor_Battle_for_Item_build()
  {
    int v0; // r4
  
    v0 = operator new(0x18E8u);
    StateActor_ctor((_DWORD *)v0);
    *(_DWORD *)v0 = 12562996;
    *(_DWORD *)(v0 + 6100) = 0;
    *(_DWORD *)(v0 + 6104) = 0;
    *(_DWORD *)(v0 + 6108) = 0;
    EffectWrapper_ctor(v0 + 6112);
    *(_DWORD *)(v0 + 6112) = 12325968;
    EffectWrapper_ctor(v0 + 6216);
    *(_DWORD *)(v0 + 6216) = 12325968;
    *(_BYTE *)(v0 + 6320) = 0;
    *(_BYTE *)(v0 + 6321) = 0;
    *(_BYTE *)(v0 + 6323) = 0;
    *(_DWORD *)(v0 + 6324) = 0;
    PlayerLookTarget_ctor(v0 + 6328, *(_DWORD *)(v0 + 8));
    *(_DWORD *)(v0 + 6356) = 0;
    return v0;
  }

/* ============================================================================
 * sub_6045C720
 * RVA 0x0045c720   size 0x254   xrefs 1
 * ============================================================================ */
  unsigned int __fastcall sub_6045C720(int a1)
  {
    _BYTE *v2; // r4
    int Resource; // r6
    int Model2; // r9
    _DWORD *v5; // r5
    _DWORD *v6; // r0
    _BYTE *v7; // r7
    int *v8; // r10
    int v9; // r0
    unsigned int *v10; // r8
    int v11; // r1
    float v12; // s0
    unsigned int result; // r0
    int v14; // r0
    int v15; // r1
    int v16; // r0
    unsigned int v17; // r0
    int v18; // [sp+18h] [bp-8h] BYREF
    const char *v19; // [sp+1Ch] [bp-4h]
  
    v2 = (_BYTE *)(a1 + 6320);
    Resource = LoadResource(MEMORY[0xC9CA88], &dword_60C9D030[2 * *(unsigned __int8 *)(a1 + 6320) + 3]);
    *((_DWORD *)v2 - 55) = Resource;
    Model2 = Resource_getModel2(Resource, (int)&unk_60C9D0A0 + 8 * (unsigned __int8)*v2, 1, 1, 0, 0, 0, 0, 0);
    v5 = (_DWORD *)operator new(48, 0, 4);
    v6 = ModelWrapper_ctor(v5, Model2, 1, 1, 0, 0, 0);
    ModelWrapper_setup(v6, Resource, 0, 0);
    *((_DWORD *)v2 - 54) = v5;
    v7 = v2 - 216;
    v8 = (int *)(v2 - 220);
    if ( (unsigned __int8)(*v2 - 7) < 2u )
    {
      v18 = 12321336;
      v19 = "out2";
      sub_6040F4B8((int)v5, (int)&v18, 1);
      v9 = **(_DWORD **)(*(_DWORD *)v7 + 20);
      *(_DWORD *)(a1 + 6108) = v9;
      v10 = (unsigned int *)(a1 + 6108);
      v11 = *v8;
      v18 = 12321336;
      v19 = "I_yoshichibi_egg";
      TexAnim_play(v9, v11, &v18);
      AnimationCtrl_setRepeat(*v10 + 4, 0);
      v12 = 1.0;
      if ( *v2 != 8 )
        v12 = 0.0;
  LABEL_11:
      v17 = *v10;
      *(float *)(v17 + 20) = v12;
      *(_DWORD *)(v17 + 28) |= 2u;
      result = *v10;
      *(_DWORD *)(*v10 + 24) = 0;
      return result;
    }
    v18 = 12321336;
    v19 = "wait2";
    sub_6040F4B8((int)v5, (int)&v18, 1);
    result = (unsigned __int8)*v2;
    if ( result <= 0xA && ((1 << result) & 0x411) != 0 )
    {
      v14 = **(_DWORD **)(*(_DWORD *)v7 + 20);
      *(_DWORD *)(a1 + 6108) = v14;
      v10 = (unsigned int *)(a1 + 6108);
      v15 = *v8;
      v18 = 12321336;
      v19 = "I_kinoko_switch";
      TexAnim_play(v14, v15, &v18);
      AnimationCtrl_setRepeat(*v10 + 4, 0);
      v16 = (unsigned __int8)*v2;
      v12 = 1.0;
      if ( v16 != 10 )
        v12 = 0.0;
      if ( v16 == 4 )
        v12 = 2.0;
      goto LABEL_11;
    }
    return result;
  }

/* ============================================================================
 * sub_6045C9A0
 * RVA 0x0045c9a0   size 0x198   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6045C9A0(int a1)
  {
    float v2; // s0
    int v3; // r5
    float v4; // r8
    float v5; // r12
    float v6; // lr
    unsigned int v7; // r0
    unsigned int v8; // r1
    unsigned int v9; // r5
    int v10; // r3
    int v11; // r0
    int v12; // r2
    int v13; // r1
    float *v14; // r2
    float *v15; // r3
    float v16; // s6
    float v17; // s4
    float v18; // s0
    float v19; // s12
    float v20; // s5
    float v21; // s8
    float v22; // s1
    float v23; // s9
    float v24; // s13
    int *v25; // r4
    _DWORD *v26; // t1
    float v28[3]; // [sp+4h] [bp-3Ch] BYREF
    float v29[12]; // [sp+10h] [bp-30h] BYREF
  
    v2 = 1.0;
    v3 = a1 + 156;
    v4 = *(float *)(a1 + 108);
    v5 = *(float *)(a1 + 112);
    v6 = *(float *)(a1 + 116);
    v7 = *(_DWORD *)(a1 + 156);
    v8 = *(_DWORD *)(v3 + 4);
    v9 = *(_DWORD *)(v3 + 8);
    v10 = (v7 >> 20) & 0xFF0;
    v11 = v7 & 0xFFFFFF;
    v12 = (v8 >> 20) & 0xFF0;
    v13 = v8 & 0xFFFFFF;
    if ( *(_BYTE *)(a1 + 6320) == 4 )
      v2 = 0.5;
    v14 = (float *)(v12 + 11773060);
    v15 = (float *)(v10 + 11773060);
    v28[0] = v2;
    v28[1] = v2;
    v28[2] = v2;
    v16 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
    v17 = (float)(unsigned int)v13 * 0.000000059605;
    v18 = (float)(unsigned int)v11 * 0.000000059605;
    v19 = *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v16 * *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A490));
    v20 = v14[2] + (float)(v17 * v14[3]);
    v21 = *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A484) + (float)(v16 * *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A488));
    v22 = *v14 + (float)(v17 * v14[1]);
    v23 = *v15 + (float)(v18 * v15[1]);
    v24 = v15[2] + (float)(v18 * v15[3]);
    v29[0] = (float)(v20 * v19) + (float)(v23 * (float)(v22 * v21));
    v29[4] = v24 * v21;
    v29[8] = (float)(v23 * (float)(v20 * v21)) - (float)(v22 * v19);
    v29[1] = (float)(v23 * (float)(v22 * v19)) - (float)(v20 * v21);
    v29[5] = v24 * v19;
    v29[9] = (float)(v22 * v21) + (float)(v23 * (float)(v20 * v19));
    v29[2] = v24 * v22;
    v29[6] = -v23;
    v29[10] = v24 * v20;
    v29[3] = v4;
    v29[7] = v5;
    v29[11] = v6;
    v26 = *(_DWORD **)(a1 + 6104);
    v25 = (int *)(a1 + 6104);
    (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v26 + 60))(*v26, v29);
    (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)*v25 + 68))(*(_DWORD *)*v25, v28);
    ModelWrapper_updateAnims(*v25);
    return ModelWrapper_updateModel(*v25);
  }

/* ============================================================================
 * ItemNameTable_init
 * RVA 0x0045cc68   size 0x26c   xrefs 0
 * ============================================================================ */
  int sub_6045CC68()
  {
    _DWORD v1[2]; // [sp+14h] [bp-8h] BYREF
  
    dword_60C9D030 = 0;
    dword_60C9D034 = 0;
    dword_60C9D038 = 0;
    v1[0] = 12321336;
    v1[1] = &unk_60AC97FF;
    Profile::Profile(13225932, 4572096, MEMORY[0xAF39D0], (int)v1, &unk_60B02558, 36);
    dword_60C9D03C = 12321336;
    MEMORY[0xC9CFE8] = MEMORY[0xC7B788] + 1;
    MEMORY[0xC9CFE4] = 12563196;
    MEMORY[0xC9CFEC] = 4572284;
    MEMORY[0xC9CFF0] = 0;
    MEMORY[0xC9CFF4] = 4572484;
    MEMORY[0xC9CFF8] = 0;
    MEMORY[0xC9CFFC] = 4572580;
    MEMORY[0xC9D000] = 0;
    MEMORY[0xC7B788] += 2;
    MEMORY[0xC9D008] = MEMORY[0xC7B788];
    MEMORY[0xC9D004] = 12563196;
    MEMORY[0xC9D00C] = 4572584;
    MEMORY[0xC9D010] = 0;
    MEMORY[0xC9D014] = 4572764;
    MEMORY[0xC9D018] = 0;
    MEMORY[0xC9D01C] = 4572784;
    MEMORY[0xC9D020] = 0;
    dword_60C9D040 = (int)"I_kinoko";
    dword_60C9D044 = 12321336;
    dword_60C9D048 = (int)"I_fireflower";
    dword_60C9D04C = 12321336;
    dword_60C9D050 = (int)"I_propeller";
    dword_60C9D054 = 12321336;
    dword_60C9D058 = (int)"I_penguin";
    dword_60C9D05C = 12321336;
    dword_60C9D060 = (int)"I_kinoko";
    dword_60C9D064 = 12321336;
    dword_60C9D068 = (int)"I_star";
    dword_60C9D06C = 12321336;
    dword_60C9D070 = (int)"I_iceflower";
    dword_60C9D074 = 12321336;
    dword_60C9D078 = (int)"I_yoshichibi_egg";
    dword_60C9D07C = 12321336;
    dword_60C9D080 = (int)"I_yoshichibi_egg";
    dword_60C9D084 = 12321336;
    unk_60C9D088 = "I_musasabi";
    unk_60C9D08C = 12321336;
    unk_60C9D090 = "I_kinoko";
    dword_60C9D094 = 12321336;
    dword_60C9D098 = (int)"I_crown";
    sub_60000288();
    unk_60C9D0A0 = 12321336;
    unk_60C9D0A4 = "I_kinoko";
    dword_60C9D0A8 = 12321336;
    dword_60C9D0AC = (int)"I_fireflower";
    dword_60C9D0B0 = 12321336;
    unk_60C9D0B4 = "I_propeller_model";
    unk_60C9D0B8 = 12321336;
    unk_60C9D0BC = "I_penguin";
    dword_60C9D0C0 = 12321336;
    dword_60C9D0C4 = (int)"I_kinoko";
    dword_60C9D0C8 = 12321336;
    dword_60C9D0CC = (int)"I_star";
    dword_60C9D0D0 = 12321336;
    dword_60C9D0D4 = (int)"I_iceflower";
    dword_60C9D0D8 = 12321336;
    dword_60C9D0DC = (int)"I_yoshichibi_egg";
    dword_60C9D0E0 = 12321336;
    dword_60C9D0E4 = (int)"I_yoshichibi_egg";
    dword_60C9D0E8 = 12321336;
    unk_60C9D0EC = "I_musasabi";
    unk_60C9D0F0 = 12321336;
    unk_60C9D0F4 = "I_kinoko";
    dword_60C9D0F8 = 12321336;
    dword_60C9D0FC = (int)"I_crown";
    return sub_60000288();
  }

/* ============================================================================
 * sub_6045D18C
 * RVA 0x0045d18c   size 0x34   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6045D18C(int result)
  {
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_BYTE *)(result + 8) = 1;
    *(_DWORD *)(result + 12) = 0;
    *(_DWORD *)(result + 16) = 1065353216;
    *(_DWORD *)(result + 20) = 1065353216;
    *(_DWORD *)(result + 24) = 1065353216;
    *(_DWORD *)(result + 28) = -1;
    return result;
  }

/* ============================================================================
 * sub_6045D1C0
 * RVA 0x0045d1c0   size 0x1b4   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6045D1C0(int *a1, int a2, int a3)
  {
    int Resource; // r0
    int v7; // r6
    int Model; // r8
    int v9; // r7
    _DWORD *v10; // r0
    float *v11; // r6
    float v12; // s0
    int v13; // r0
    int result; // r0
  
    Resource = LoadResource(MEMORY[0xC9CA88], dword_60BFB310);
    v7 = Resource;
    *a1 = Resource;
    if ( a3 == 1 )
      Model = Resource_getModel(Resource, dword_60BFB318, 6, 1, 1, 1, 0, 0, 1, 0);
    else
      Model = Resource_getModel2(Resource, (int)dword_60BFB318, 1, 1, 1, 0, 0, 0, 0);
    v9 = operator new(48, 0, 4);
    v10 = ModelWrapper_ctor((_DWORD *)v9, Model, 1, 1, 1, 0, 0);
    ModelWrapper_setup(v10, v7, 0, 0);
    a1[1] = v9;
    a1[3] = a2;
    v11 = **(float ***)(v9 + 20);
    TexAnim_play((int)v11, *a1, dword_60BFB320);
    v12 = 0.0;
    if ( a2 == 2 )
      v12 = 2.0;
    if ( a2 == 1 )
      v12 = 1.0;
    v11[5] = v12;
    v13 = *((_DWORD *)v11 + 7);
    v11[6] = 0.0;
    result = v13 | 2;
    *((_DWORD *)v11 + 7) = result;
    if ( a2 == 2 )
      return ShuAnim_play(**(_DWORD **)(a1[1] + 28), *a1, dword_60BFB328);
    return result;
  }

/* ============================================================================
 * sub_6045D390
 * RVA 0x0045d390   size 0x50   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6045D390(int a1, int a2)
  {
    int v4; // r6
  
    ModelWrapper_updateAnims(*(_DWORD *)(a1 + 4));
    v4 = **(_DWORD **)(a1 + 4);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 60))(v4, a2);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 68))(v4, a1 + 16);
    return ModelWrapper_updateModel(*(_DWORD *)(a1 + 4));
  }

/* ============================================================================
 * cs_item_ref
 * RVA 0x0045d408   size 0x104   xrefs 3
 * ============================================================================ */
  int __fastcall sub_6045D408(int *a1, int a2, int a3)
  {
    char v3; // r12
    int v4; // s0
    int result; // r0
    int v9; // r1
    int v10; // r5
  
    if ( ((unsigned int)&unk_60C9D100 & ~(1615189040 << v3) & 1) == 0 && _cxa_guard_acquire_0(&unk_60C9D100) )
    {
      dword_60C9D104 = 12321336;
      dword_60C9D108 = (int)"out";
      dword_60C9D10C = 12321336;
      dword_60C9D110 = (int)"out2";
      dword_60C9D114 = 12321336;
      dword_60C9D118 = (int)"wait";
      dword_60C9D11C = 12321336;
      dword_60C9D120 = (int)"cs_item";
      sub_60000288();
      _cxa_guard_release_0(&unk_60C9D100);
    }
    result = a1[7];
    if ( result != a2 )
    {
      a1[7] = a2;
      v9 = *a1;
      v10 = **(_DWORD **)(a1[1] + 12);
      SkeletalAnim_play(v10, v9, (_DWORD *)&unk_60C9D100 + 2 * a2 + 1);
      result = AnimationCtrl_setRepeat(v10 + 4, a3);
      *(_DWORD *)(v10 + 24) = v4;
    }
    return result;
  }

/* ============================================================================
 * Actor_fibafor_suta_build
 * RVA 0x0045d53c   size 0x2c   xrefs 0
 * ============================================================================ */
  _DWORD *__fastcall Actor_fibafor_suta_build(int a1)
  {
    int v2; // r0
    _DWORD *result; // r0
  
    v2 = operator new(0x50u);
    result = (_DWORD *)Actor::Actor(v2, a1);
    *result = 12563256;
    return result;
  }

/* ============================================================================
 * Actor_faiyafurawa_build
 * RVA 0x0045d76c   size 0x2c   xrefs 0
 * ============================================================================ */
  _DWORD *__fastcall sub_6045D76C(int a1)
  {
    int v2; // r0
    _DWORD *result; // r0
  
    v2 = operator new(6832);
    result = (_DWORD *)sub_60466BC4(v2, a1);
    *result = 12563332;
    return result;
  }

/* ============================================================================
 * Actor_aisufurawa_build
 * RVA 0x0045e2e0   size 0x2c   xrefs 0
 * ============================================================================ */
  _DWORD *__fastcall sub_6045E2E0(int a1)
  {
    int v2; // r0
    _DWORD *result; // r0
  
    v2 = operator new(6832);
    result = (_DWORD *)sub_60466BC4(v2, a1);
    *result = 12563708;
    return result;
  }

/* ============================================================================
 * sub_6045EC8C
 * RVA 0x0045ec8c   size 0x2a0   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6045EC8C(int a1)
  {
    int v2; // r0
    int v3; // r1
  
    MultiStateActor::MultiStateActor();
    *(_DWORD *)a1 = 12564060;
    *(_DWORD *)(a1 + 6104) = 0;
    *(_DWORD *)(a1 + 6108) = 0;
    v2 = *(_DWORD *)(a1 + 108);
    v3 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 6120) = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 6116) = v3;
    *(_DWORD *)(a1 + 6112) = v2;
    *(_DWORD *)(a1 + 6124) = 0;
    *(_DWORD *)(a1 + 6128) = 0;
    *(_DWORD *)(a1 + 6132) = 0;
    *(_DWORD *)(a1 + 6184) = 0;
    *(_DWORD *)(a1 + 6180) = 0;
    *(_DWORD *)(a1 + 6176) = 0;
    *(_DWORD *)(a1 + 6172) = 0;
    *(_DWORD *)(a1 + 6168) = 0;
    *(_DWORD *)(a1 + 6188) = 1;
    *(_DWORD *)(a1 + 6204) = 0;
    *(_WORD *)(a1 + 6200) = 0;
    *(_DWORD *)(a1 + 6196) = 0;
    *(_DWORD *)(a1 + 6192) = 0;
    *(_DWORD *)(a1 + 6208) = -1;
    *(_DWORD *)(a1 + 6212) = 0;
    *(_DWORD *)(a1 + 6216) = 0;
    *(_DWORD *)(a1 + 6220) = 0;
    *(_DWORD *)(a1 + 6224) = 2;
    *(_BYTE *)(a1 + 6250) = 0;
    *(_WORD *)(a1 + 6248) = 0;
    *(_DWORD *)(a1 + 6244) = 0;
    *(_DWORD *)(a1 + 6240) = 0;
    *(_DWORD *)(a1 + 6236) = 0;
    *(_DWORD *)(a1 + 6232) = 0;
    *(_DWORD *)(a1 + 6228) = 0;
    *(_DWORD *)(a1 + 6256) = 0;
    *(_DWORD *)(a1 + 6252) = 0;
    sub_6000BAC8(a1 + 6260, *(_DWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 6260) = 12564444;
    *(_DWORD *)(a1 + 6296) = a1;
    *(_DWORD *)(a1 + 6300) = 12462720;
    *(_DWORD *)(a1 + 6304) = 1065353216;
    *(_DWORD *)(a1 + 6308) = 1065353216;
    *(_DWORD *)(a1 + 6312) = 1065353216;
    *(_DWORD *)(a1 + 6316) = 1065353216;
    *(_DWORD *)(a1 + 6320) = 0;
    *(_DWORD *)(a1 + 6324) = 0;
    *(_DWORD *)(a1 + 6328) = a1;
    ActiveCollider_ctor(a1 + 6332);
    *(_DWORD *)(a1 + 6672) = 0;
    *(_DWORD *)(a1 + 6676) = 0;
    *(_DWORD *)(a1 + 6680) = 0;
    *(_BYTE *)(a1 + 6668) = 0;
    *(_DWORD *)(a1 + 6664) = 0;
    *(_DWORD *)(a1 + 6660) = 0;
    *(_DWORD *)(a1 + 6656) = 0;
    *(_DWORD *)(a1 + 6652) = 0;
    EffectWrapper_ctor(a1 + 6684);
    *(_DWORD *)(a1 + 6684) = 12325968;
    *(_DWORD *)(a1 + 6788) = 0;
    *(_BYTE *)(a1 + 6792) = 0;
    *(_BYTE *)(a1 + 6793) = 0;
    *(_DWORD *)(a1 + 6796) = 0;
    *(_DWORD *)(a1 + 6800) = 1;
    *(_WORD *)(a1 + 6804) = 0;
    *(_BYTE *)(a1 + 6806) = 0;
    *(_DWORD *)(a1 + 6816) = 0;
    *(_DWORD *)(a1 + 6812) = 0;
    *(_DWORD *)(a1 + 6808) = 0;
    *(_DWORD *)(a1 + 6820) = 12564512;
    *(_BYTE *)(a1 + 6636) = 0;
    *(_DWORD *)(a1 + 6640) = 0;
    *(_DWORD *)(a1 + 6644) = 0;
    *(_DWORD *)(a1 + 6648) = 0;
    return a1;
  }

/* ============================================================================
 * sub_6046135C
 * RVA 0x0046135c   size 0x230   xrefs 11
 * ============================================================================ */
  _DWORD *__fastcall sub_6046135C(_DWORD *a1)
  {
    int v1; // s0
    int v2; // s1
    int v3; // s2
    unsigned int v5; // r0
    int v6; // s0
    float *v7; // r1
    float v8; // s0
    float v9; // s4
    float v11; // s6
  
    CollisionMgr_init((int)(a1 + 162), (int)a1, nullptr, nullptr, nullptr);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 228))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 232))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 236))(a1);
    a1[800] |= 0x20000u;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 220))(a1);
    a1[1611] = a1 + 1705;
    (*(void (__fastcall **)(_DWORD *))a1[1575])(a1 + 1575);
    a1[1576] = v1;
    a1[1577] = v2;
    a1[1578] = v3;
    v5 = a1[5];
    if ( *((_BYTE *)a1 + 86) == 1 )
    {
      v6 = -987594752;
    }
    else
    {
      v7 = &flt_60461590;
      if ( (v5 & 0x4000) != 0 )
        v7 = &flt_60461594;
      v6 = *(_DWORD *)v7;
    }
    a1[29] = v6;
    a1[143] = 0;
    a1[144] = 1090519040;
    a1[145] = 0;
    a1[36] = 1065353216;
    a1[37] = 1065353216;
    a1[38] = 1065353216;
    a1[20] = v5 >> 31;
    a1[1554] = (v5 >> 22) & 3;
    a1[1546] = HIWORD(v5) & 3;
    a1[1699] = (v5 >> 20) & 3;
    if ( (v5 & 0x800) != 0 )
    {
      *((_BYTE *)a1 + 6258) = 1;
      a1[1559] = 660;
      a1[1560] = 4;
      *((_WORD *)a1 + 3124) = 0;
    }
    a1[123] = 0;
    a1[124] = 1098907648;
    a1[125] = 1107296256;
    a1[126] = 1107296256;
    a1[127] = 1107296256;
    a1[128] = 1107296256;
    a1[129] = 1140850688;
    a1[130] = 1140850688;
    a1[155] = a1 + 1565;
    v8 = MEMORY[0xAF22E0];
    a1[131] = 1149239296;
    a1[132] = 1149239296;
    a1[1569] = 1;
    a1[1547] = (a1[5] >> 12) & 3;
    v9 = MEMORY[0xAF22E4];
    *((float *)a1 + 1512) = v8 * 0.5;
    v11 = MEMORY[0xAF22E8];
    *((float *)a1 + 1510) = v9 * 0.5;
    *((float *)a1 + 1511) = v11 * 0.5;
    return a1 + 1511;
  }

/* ============================================================================
 * sub_604615BC
 * RVA 0x004615bc   size 0xe0   xrefs 4
 * ============================================================================ */
  int __fastcall sub_604615BC(int a1)
  {
    unsigned int v2; // r0
    float v3; // s18
    float v4; // s0
    float v5; // s20
    float v6; // s16
    float v7; // s22
    float v8; // s26
    float v9; // s24
  
    v2 = sub_6014C4A4(a1 + 648);
    v3 = *(float *)(a1 + 120);
    v4 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
    v5 = *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v4 * *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A490));
    v6 = *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A484) + (float)(*(float *)(((v2 >> 20) & 0xFF0) + 0xB3A488) * v4);
    if ( *(_BYTE *)(a1 + 6054) || *(_BYTE *)(a1 + 6053) )
      v3 = v3 * 0.5;
    v7 = *(float *)(a1 + 124);
    v8 = *(float *)(a1 + 6024);
    v9 = *(float *)(a1 + 6028);
    sub_600037A0(a1);
    *(float *)(a1 + 108) = *(float *)(a1 + 108) + (float)((float)(v8 + (float)(v5 * v3)) + *(float *)(a1 + 6000));
    *(float *)(a1 + 112) = (float)((float)(v7 + (float)(v6 * v3)) + v9) + *(float *)(a1 + 112);
    return a1 + 6000;
  }

/* ============================================================================
 * sub_60461904
 * RVA 0x00461904   size 0x110   xrefs 10
 * ============================================================================ */
  int __fastcall sub_60461904(int a1)
  {
    StateMgr *v2; // r5
    int CurrentState; // r0
    int v4; // r6
    int result; // r0
    int v6; // r0
    int v7; // r5
    int v8; // r1
    int v9; // r1
    __int16 v10; // r0
  
    v2 = (StateMgr *)(a1 + 6084);
    CurrentState = StateMgr::getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
    result = (*(int (**)(void))(MEMORY[0xC9D2B8] + 8))();
    if ( v4 != result )
    {
      v6 = StateMgr::getCurrentState(v2);
      v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      result = (*(int (**)(void))(MEMORY[0xC9D2D8] + 8))();
      if ( v7 != result )
      {
        result = *(unsigned __int8 *)(a1 + 6258);
        if ( *(_BYTE *)(a1 + 6258) )
        {
          result = a1 + 6236;
          v8 = *(_DWORD *)(a1 + 6236);
          if ( !v8 )
            goto LABEL_11;
          *(_DWORD *)result = v8 - 1;
          if ( v8 > 180 )
            return result;
          if ( v8 == 1 )
          {
  LABEL_11:
            *(_BYTE *)(a1 + 19) = 1;
            return 1;
          }
          else
          {
            result = a1 + 6240;
            v9 = *(_DWORD *)(a1 + 6240);
            if ( v9 )
            {
              *(_DWORD *)result = v9 - 1;
            }
            else
            {
              *(_DWORD *)result = 4;
              v10 = *(_WORD *)(a1 + 6248) ^ 1;
              *(_WORD *)(a1 + 6248) = v10;
              result = v10 == 0;
              *(_BYTE *)(a1 + 535) = result;
            }
          }
        }
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60461A1C
 * RVA 0x00461a1c   size 0x84   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60461A1C(int a1)
  {
    float v2; // s0
    int v3; // r0
    int result; // r0
    _BYTE v5[76]; // [sp+4h] [bp-74h] BYREF
    _DWORD v6[5]; // [sp+50h] [bp-28h] BYREF
    _DWORD v7[2]; // [sp+64h] [bp-14h] BYREF
    __int16 v8; // [sp+6Ch] [bp-Ch] BYREF
    char v9; // [sp+6Eh] [bp-Ah]
    char v10; // [sp+6Fh] [bp-9h]
    int v11; // [sp+70h] [bp-8h]
    int v12; // [sp+74h] [bp-4h]
  
    v8 = 0;
    v9 = *(_BYTE *)(a1 + 86);
    v10 = *(_BYTE *)(a1 + 87);
    v11 = 0;
    v12 = 0;
    v2 = *(float *)(a1 + 112);
    v7[0] = *(_DWORD *)(a1 + 108);
    *(float *)&v7[1] = v2 + 8.0;
    v3 = TileCheck_ctor(v5, &v8);
    sub_6015DD58(v3, v6, v7);
    result = v6[0] & 0xFFFFFF;
    if ( (v6[0] & 0xFFFFFF) == 0x4000D )
    {
      *(_BYTE *)(a1 + 6053) = 1;
      return 6053;
    }
    return result;
  }

/* ============================================================================
 * sub_60461AA0
 * RVA 0x00461aa0   size 0x124   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60461AA0(int result)
  {
    int v1; // r4
    int (__fastcall ***v2)(_DWORD, int); // r5
    int CurrentState; // r0
    int v4; // r5
    _DWORD v5[12]; // [sp+0h] [bp-30h] BYREF
  
    v1 = result;
    v2 = *(int (__fastcall ****)(_DWORD, int))(result + 56);
    if ( v2 )
    {
      if ( _cxa_guard_acquire_0(13193800) )
      {
        MEMORY[0xC95244] = 12321964;
        _cxa_guard_release_0(13193800);
      }
      result = (**v2)(v2, 13193796);
      if ( result == 1 )
      {
        sub_6035750C(v2, v5);
        sub_6083316C(v1 + 156, v5);
        sub_60833200(v1 + 144, v5);
        *(_DWORD *)(v1 + 108) = v5[3];
        *(_DWORD *)(v1 + 112) = v5[7];
        *(_DWORD *)(v1 + 116) = v5[11];
        result = *(unsigned __int8 *)(MEMORY[0xCC6D8C] + 17);
        if ( *(_BYTE *)(MEMORY[0xCC6D8C] + 17) )
        {
          CurrentState = StateMgr::getCurrentState((int)(v2 + 1521));
          v4 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
          result = (*(int (**)(void))(MEMORY[0xC95038] + 8))();
          *(_BYTE *)(v1 + 535) = v4 != result;
        }
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60461BE4
 * RVA 0x00461be4   size 0x4c   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60461BE4(int a1)
  {
    if ( (*(_DWORD *)(a1 + 20) & 0x1F000000) == 0x9000000 )
      return sub_603FD6E0(MEMORY[0xC99DF4], *(unsigned __int8 *)(MEMORY[0xC9A684] + 18));
    else
      return 0;
  }

/* ============================================================================
 * sub_60461C50
 * RVA 0x00461c50   size 0x374   xrefs 10
 * ============================================================================ */
  int __fastcall sub_60461C50(int a1)
  {
    int result; // r0
    float v3; // s0
    int v4; // r1
    int v5; // r5
    int v6; // s0
    int v7; // r0
    int v8; // r0
    int v9; // r1
    float *v10; // r1
    float v11; // s0
    _BYTE v12[8]; // [sp+0h] [bp-10h] BYREF
    _DWORD v13[2]; // [sp+8h] [bp-8h] BYREF
  
    result = *(_BYTE *)(a1 + 23) & 0x1F;
    *(_DWORD *)(a1 + 6180) = result;
    switch ( result )
    {
      case 0:
        v3 = *(float *)(a1 + 112);
        if ( *(_DWORD *)(a1 + 6188) == 3 )
        {
          *(float *)(a1 + 6660) = v3 + -16.0;
          if ( *(_DWORD *)(a1 + 6168) == 6 )
            *(float *)(a1 + 6660) = v3 + -12.0;
          *(_DWORD *)(a1 + 6172) = 1;
          return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226424);
        }
        else
        {
          *(float *)(a1 + 6660) = v3 + 16.0;
          return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226392);
        }
      case 1:
        return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226744);
      case 3:
        v7 = *(_DWORD *)(a1 + 6216);
        if ( v7 == 1 )
        {
          v8 = *(_DWORD *)(a1 + 80);
          v9 = (int)&flt_60AF1EA0;
          goto LABEL_27;
        }
        if ( !v7 )
        {
          v8 = *(_DWORD *)(a1 + 80);
          v9 = 11544060;
  LABEL_27:
          v11 = *(float *)(v9 + 4 * v8);
          goto LABEL_29;
        }
        v11 = (float)(COERCE_FLOAT((sead::Random::getU32((sead::Random *)(MEMORY[0xC9CF0C] + 1340)) >> 9) | 0x3F800000)
                    + -1.0)
            * 0.2;
  LABEL_29:
        *(float *)(a1 + 120) = v11;
        *(_DWORD *)(a1 + 124) = 1082130432;
        *(_DWORD *)(a1 + 128) = 0;
        *(_BYTE *)(a1 + 6056) = 1;
        return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226780);
      case 4:
        *(_BYTE *)(a1 + 6056) = 1;
        return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226816);
      case 5:
        *(_BYTE *)(a1 + 6056) = 1;
        return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226852);
      case 6:
        return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226488);
      case 7:
        return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226520);
      case 8:
        *(_BYTE *)(a1 + 6056) = 1;
        return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226888);
      case 9:
        return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226648);
      case 11:
        return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226584);
      case 13:
        v4 = *(_DWORD *)(a1 + 112);
        v5 = MEMORY[0xC7F534];
        v13[0] = *(_DWORD *)(a1 + 108);
        v13[1] = v4;
        mapPositionToScreen(v12, v13);
        BasicSoundActor2_play(v5, "SE_OBJ_ITEM_APPEAR", v12, 0);
        *(_DWORD *)(a1 + 6228) = 0;
        *(_DWORD *)(a1 + 6224) = 0;
        *(_DWORD *)(a1 + 132) = 1065353216;
        *(_DWORD *)(a1 + 136) = -1056964608;
        *(_DWORD *)(a1 + 140) = 0;
        *(_DWORD *)(a1 + 100) = -1103101952;
        *(_DWORD *)(a1 + 124) = 0;
        if ( *(_BYTE *)(a1 + 86) == 1 )
        {
          v6 = -987594752;
        }
        else
        {
          v10 = &flt_60461FDC;
          if ( *(_DWORD *)(a1 + 6168) == 5 )
            v10 = &flt_60461FE0;
          v6 = *(_DWORD *)v10;
        }
        *(_DWORD *)(a1 + 116) = v6;
        *(_BYTE *)(a1 + 6056) = 1;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
        *(_DWORD *)(a1 + 120) = *(_DWORD *)(4 * *(_DWORD *)(a1 + 80) + 0xB025FC);
        *(_DWORD *)(a1 + 124) = -1090519040;
        *(_DWORD *)(a1 + 128) = 0;
        result = *(_DWORD *)(a1 + 6188);
        if ( result == 2 )
        {
          result = 1082130432;
          *(_DWORD *)(a1 + 124) = 1082130432;
        }
        return result;
      default:
        return result;
    }
  }

/* ============================================================================
 * sub_60462018
 * RVA 0x00462018   size 0x2cc   xrefs 18
 * ============================================================================ */
  int __fastcall sub_60462018(int a1)
  {
    int v2; // r3
    int v3; // r8
    float v4; // r2
    int v5; // lr
    unsigned int v6; // r3
    unsigned int v7; // r3
    unsigned int v8; // r5
    unsigned int v9; // r0
    float v10; // s0
    float v11; // s2
    float v12; // s4
    float v13; // s10
    float v14; // s5
    float v15; // s6
    float v16; // s1
    float v17; // s13
    float v18; // s9
    int **v19; // r5
    int v20; // r1
    int v21; // r0
    int (__fastcall *v22)(int, _DWORD *); // r2
    int v23; // r0
    int result; // r0
    _DWORD v25[11]; // [sp+0h] [bp-60h] BYREF
    int v26; // [sp+2Ch] [bp-34h]
    float v27; // [sp+30h] [bp-30h] BYREF
    float v28; // [sp+34h] [bp-2Ch]
    float v29; // [sp+38h] [bp-28h]
    int v30; // [sp+3Ch] [bp-24h]
    float v31; // [sp+40h] [bp-20h]
    float v32; // [sp+44h] [bp-1Ch]
    float v33; // [sp+48h] [bp-18h]
    float v34; // [sp+4Ch] [bp-14h]
    float v35; // [sp+50h] [bp-10h]
    float v36; // [sp+54h] [bp-Ch]
    float v37; // [sp+58h] [bp-8h]
    int v38; // [sp+5Ch] [bp-4h]
  
    v2 = *(_DWORD *)(a1 + 5952);
    v3 = *(_DWORD *)(a1 + 108);
    v4 = *(float *)(a1 + 112);
    v5 = *(_DWORD *)(a1 + 116);
    if ( (unsigned __int16)v2 == 0x10 )
    {
      v6 = (unsigned __int8)__ROR4__(v2, 16) - 4;
      if ( v6 <= 0xC && ((0x1005u >> v6) & 1) != 0 )
        v4 = v4 + -1.0;
    }
    if ( *(_BYTE *)(a1 + 6201) )
    {
      v27 = 1.0;
      v28 = 0.0;
      v29 = 0.0;
      v31 = 0.0;
      v32 = 1.0;
      v33 = 0.0;
      v35 = 0.0;
      v36 = 0.0;
      v37 = 1.0;
      v30 = v3;
      v34 = v4;
      v38 = v5;
      sub_60832C3C(&v27, a1 + 156);
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 156);
      v8 = *(_DWORD *)(a1 + 160);
      v9 = *(_DWORD *)(a1 + 164);
      v10 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
      v11 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
      v12 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
      v13 = *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v10 * *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A490));
      v14 = *(float *)(((v8 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v11 * *(float *)(((v8 >> 20) & 0xFF0) + 0xB3A490));
      v15 = *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A484) + (float)(v10 * *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A488));
      v16 = *(float *)(((v8 >> 20) & 0xFF0) + 0xB3A484) + (float)(v11 * *(float *)(((v8 >> 20) & 0xFF0) + 0xB3A488));
      v17 = *(float *)(((v7 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v12 * *(float *)(((v7 >> 20) & 0xFF0) + 0xB3A490));
      v18 = *(float *)(((v7 >> 20) & 0xFF0) + 0xB3A484) + (float)(v12 * *(float *)(((v7 >> 20) & 0xFF0) + 0xB3A488));
      v27 = v14 * v13;
      v31 = v14 * v15;
      v35 = -v16;
      v28 = (float)((float)(v18 * v16) * v13) - (float)(v17 * v15);
      v32 = (float)(v17 * v13) + (float)((float)(v18 * v16) * v15);
      v36 = v18 * v14;
      v29 = (float)(v16 * (float)(v17 * v13)) + (float)(v18 * v15);
      v33 = (float)(v16 * (float)(v17 * v15)) - (float)(v18 * v13);
      v37 = v17 * v14;
      v30 = v3;
      v34 = v4;
      v38 = v5;
    }
    v19 = (int **)(a1 + 6160);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6160) + 60))(**(_DWORD **)(a1 + 6160), &v27);
    if ( *(_BYTE *)(a1 + 6256) )
      v20 = a1 + 144;
    else
      v20 = a1 + 6304;
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6160) + 68))(**(_DWORD **)(a1 + 6160), v20);
    ModelWrapper_updateAnims(*v19);
    (*(void (__fastcall **)(int))(*(_DWORD *)**v19 + 52))(**v19);
    (*(void (__fastcall **)(int))(*(_DWORD *)**v19 + 56))(**v19);
    v21 = **v19;
    v22 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v21 + 84);
    v25[0] = 12321336;
    v25[1] = "eff";
    v23 = v22(v21, v25);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v19 + 108))(**v19, v23, v25);
    *(_DWORD *)(a1 + 6124) = v25[3];
    *(_DWORD *)(a1 + 6128) = v25[7];
    result = v26;
    *(_DWORD *)(a1 + 6132) = v26;
    return result;
  }

/* ============================================================================
 * sub_6046233C
 * RVA 0x0046233c   size 0x34   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6046233C(int a1, float *a2, float *a3)
  {
    int result; // r0
    int v4; // [sp+4h] [bp-4h] BYREF
  
    checkLiquidCollisions(&v4, a2, a3, *(unsigned __int8 *)(a1 + 86));
    result = 0;
    if ( v4 == 6 )
      result = 2;
    if ( v4 == 1 )
      return 1;
    return result;
  }

/* ============================================================================
 * sub_60462370
 * RVA 0x00462370   size 0x1b0   xrefs 8
 * ============================================================================ */
  int __fastcall sub_60462370(int a1)
  {
    int result; // r0
    _BYTE *v3; // r7
    int v4; // r5
    int v5; // r1
    int v6; // r3
    int v7; // r4
    int v8; // [sp+8h] [bp-40h] BYREF
    _BYTE v9[4]; // [sp+Ch] [bp-3Ch] BYREF
    int v10; // [sp+10h] [bp-38h]
    int v11; // [sp+14h] [bp-34h]
    int v12; // [sp+18h] [bp-30h]
    float v13; // [sp+1Ch] [bp-2Ch] BYREF
    int v14; // [sp+20h] [bp-28h] BYREF
    int v15; // [sp+24h] [bp-24h]
    int v16; // [sp+28h] [bp-20h]
    int v17; // [sp+2Ch] [bp-1Ch] BYREF
    int v18; // [sp+30h] [bp-18h]
    int v19; // [sp+34h] [bp-14h]
    float v20[2]; // [sp+38h] [bp-10h] BYREF
    int v21; // [sp+40h] [bp-8h] BYREF
    int v22; // [sp+44h] [bp-4h]
  
    physics_21893E8(&v8, &v13, v9, (float *)(a1 + 108), *(unsigned __int8 *)(a1 + 86));
    v3 = (_BYTE *)(a1 + 6259);
    result = *(unsigned __int8 *)(a1 + 6259);
    if ( v8 == 2 )
    {
      if ( !*(_BYTE *)(a1 + 6259) )
      {
        v14 = 0;
        v15 = 0;
        v17 = v10;
        v18 = v11;
        v19 = 1170939904;
        v21 = v10;
        v22 = v11;
        v16 = v12;
        v4 = MEMORY[0xC7F534];
        mapPositionToScreen(v20, (float *)&v21);
        BasicSoundActor2_play(v4, "SE_OBJ_CMN_SPLASH", v20, 0);
        EffectData_create(1106, (int)&v17, (int)&v14, 0);
        *v3 = 1;
      }
      *(_BYTE *)(a1 + 6636) = v9[0];
      *(_DWORD *)(a1 + 6640) = v10;
      *(_DWORD *)(a1 + 6644) = v11;
      *(_DWORD *)(a1 + 6648) = v12;
      return sub_600038DC(a1);
    }
    else if ( *(_BYTE *)(a1 + 6259) )
    {
      *v3 = 0;
      v5 = *(_DWORD *)(a1 + 6644);
      v17 = *(_DWORD *)(a1 + 6640);
      v18 = v5;
      v19 = 1170939904;
      v6 = *(_DWORD *)(a1 + 6648);
      v14 = 0;
      v15 = 0;
      v21 = v17;
      v22 = v5;
      v16 = v6;
      v7 = MEMORY[0xC7F534];
      mapPositionToScreen(v20, (float *)&v21);
      BasicSoundActor2_play(v7, "SE_OBJ_CMN_SPLASH", v20, 0);
      return EffectData_create(1106, (int)&v17, (int)&v14, 0);
    }
    return result;
  }

/* ============================================================================
 * sub_60462530
 * RVA 0x00462530   size 0x244   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60462530(int a1)
  {
    int v2; // r5
    float v3; // r1
    int v4; // r6
    const char *v5; // r1
    float v6; // r1
    int v8; // [sp+4h] [bp-1Ch] BYREF
    float v9; // [sp+8h] [bp-18h] BYREF
    float v10; // [sp+Ch] [bp-14h] BYREF
    float v11; // [sp+10h] [bp-10h]
    float v12; // [sp+14h] [bp-Ch]
    float v13[2]; // [sp+18h] [bp-8h] BYREF
  
    checkLiquidCollisions(&v8, &v9, (float *)(a1 + 108), *(unsigned __int8 *)(a1 + 86));
    if ( v8 == 5 )
    {
      if ( *(_DWORD *)(a1 + 6168) == 2 )
        sub_604096C4(MEMORY[0xC9A1F0]);
      v10 = *(float *)(a1 + 108) + *(float *)(a1 + 572);
      v11 = *(float *)(a1 + 112) + *(float *)(a1 + 576);
      v12 = *(float *)(a1 + 116) + *(float *)(a1 + 580);
      EffectData_create(573, (int)&v10, 0, a1 + 144);
      v2 = 1;
      *(_BYTE *)(a1 + 19) = 1;
      v3 = *(float *)(a1 + 112);
      v4 = MEMORY[0xC7F534];
      v10 = *(float *)(a1 + 108);
      v11 = v3;
      mapPositionToScreen(v13, &v10);
      v5 = "SE_OBJ_CMN_SPLASH_POISON";
      goto LABEL_13;
    }
    if ( v8 == 4 )
    {
      if ( *(_DWORD *)(a1 + 6168) == 2 )
        sub_604096C4(MEMORY[0xC9A1F0]);
      goto LABEL_12;
    }
    v2 = 0;
    if ( v8 == 3 )
    {
      if ( *(_DWORD *)(a1 + 6168) == 2 )
        sub_604096C4(MEMORY[0xC9A1F0]);
  LABEL_12:
      v10 = *(float *)(a1 + 108) + *(float *)(a1 + 572);
      v11 = *(float *)(a1 + 112) + *(float *)(a1 + 576);
      v12 = *(float *)(a1 + 116) + *(float *)(a1 + 580);
      EffectData_create(573, (int)&v10, 0, a1 + 144);
      v2 = 1;
      *(_BYTE *)(a1 + 19) = 1;
      v6 = *(float *)(a1 + 112);
      v4 = MEMORY[0xC7F534];
      v10 = *(float *)(a1 + 108);
      v11 = v6;
      mapPositionToScreen(v13, &v10);
      v5 = "SE_OBJ_CMN_SPLASH_LAVA";
  LABEL_13:
      BasicSoundActor2_play(v4, v5, v13, 0);
    }
    return v2;
  }

/* ============================================================================
 * SE_OBJ_ITEM_DISAPP_ref
 * RVA 0x00462798   size 0xd8   xrefs 10
 * ============================================================================ */
  int __fastcall sub_60462798(int a1, int a2, int a3)
  {
    float v6; // r1
    int v7; // r5
    float v9; // [sp+4h] [bp-14h] BYREF
    float v10; // [sp+8h] [bp-10h]
    float v11; // [sp+Ch] [bp-Ch]
    float v12[2]; // [sp+10h] [bp-8h] BYREF
  
    if ( *(_DWORD *)(a1 + 6168) == 2 )
      sub_604096C4(MEMORY[0xC9A1F0]);
    if ( a3 == 1 )
    {
      v9 = *(float *)(a1 + 108) + *(float *)(a1 + 572);
      v10 = *(float *)(a1 + 112) + *(float *)(a1 + 576);
      v11 = *(float *)(a1 + 116) + *(float *)(a1 + 580);
      EffectData_create(573, (int)&v9, 0, a1 + 144);
    }
    if ( a2 == 1 )
    {
      v6 = *(float *)(a1 + 112);
      v7 = MEMORY[0xC7F534];
      v9 = *(float *)(a1 + 108);
      v10 = v6;
      mapPositionToScreen(v12, &v9);
      BasicSoundActor2_play(v7, "SE_OBJ_ITEM_DISAPP", v12, 0);
    }
    *(_BYTE *)(a1 + 19) = 1;
    return 1;
  }

/* ============================================================================
 * sub_60462888
 * RVA 0x00462888   size 0x1c0   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60462888(int a1, int a2)
  {
    int result; // r0
    int v4; // r3
    int v5; // t1
    int v6; // r2
    int v7; // r2
    int v8; // s0
    float *v9; // r1
  
    v5 = *(_DWORD *)(a1 + 6212);
    result = a1 + 6212;
    v4 = v5;
    if ( v5 == 1 )
    {
      v6 = *(_DWORD *)(a1 + 2872);
      if ( a2 == 1 )
      {
        if ( (v6 & 1) != 0 || (v6 & 0x10400) == 0x400 )
          goto LABEL_16;
      }
      else if ( (v6 & 1) != 0 )
      {
  LABEL_16:
        *(_DWORD *)result = 2;
        return result;
      }
  LABEL_23:
      *(_DWORD *)result = 3;
      *(_DWORD *)(a1 + 3176) &= ~0x40000000u;
      *(_DWORD *)(a1 + 3184) &= ~0x40000000u;
      *(_DWORD *)(a1 + 3200) &= ~0x40000000u;
      if ( a2 == 1 )
        *(_DWORD *)(a1 + 3192) &= ~0x40000000u;
      *(_DWORD *)(a1 + 6192) = 0;
      return 6192;
    }
    if ( !v4 )
    {
      if ( (float)(*(float *)(a1 + 112) + -8.0) <= *(float *)(MEMORY[0xCC6484] + 124) )
        *(_DWORD *)result = 1;
      return result;
    }
    v7 = *(_DWORD *)(a1 + 2872);
    if ( v4 == 2 )
    {
      if ( a2 == 1 )
      {
        if ( (v7 & 0x10400) == 0x400 || (v7 & 1) != 0 )
          return result;
      }
      else if ( (v7 & 1) != 0 )
      {
        return result;
      }
      goto LABEL_23;
    }
    if ( (v7 & 1) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 6192) )
      {
        *(_DWORD *)(a1 + 6192) = 1;
        sub_60462A58(a1);
      }
      *(_DWORD *)(a1 + 124) = 0;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
      if ( *(_BYTE *)(a1 + 86) == 1 )
      {
        v8 = -987594752;
      }
      else
      {
        v9 = &flt_60462A50;
        if ( *(_DWORD *)(a1 + 6168) == 5 )
          v9 = &flt_60462A54;
        v8 = *(_DWORD *)v9;
      }
      *(_DWORD *)(a1 + 116) = v8;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
      result = *(unsigned __int8 *)(a1 + 2872);
      if ( (result & 8) != 0 )
      {
        *(_DWORD *)(a1 + 124) = 1082130432;
        return 1082130432;
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60462A58
 * RVA 0x00462a58   size 0x120   xrefs 11
 * ============================================================================ */
  int __fastcall sub_60462A58(int a1)
  {
    int v1; // r2
    float v2; // r3
    unsigned int v3; // r1
    unsigned int v4; // r2
    int v5; // r1
    int v6; // r3
    int v7; // r0
    _DWORD v9[4]; // [sp+0h] [bp-10h] BYREF
  
    v1 = *(_DWORD *)(a1 + 112);
    v2 = *(float *)(a1 + 116);
    v9[0] = *(_DWORD *)(a1 + 108);
    v9[1] = v1;
    *(float *)&v9[2] = v2 + 80.0;
    v3 = *(_DWORD *)(a1 + 5956);
    v4 = v3 >> 8;
    v5 = BYTE1(v3);
    if ( *(_DWORD *)(a1 + 6168) == 13 )
    {
      if ( v5 == 2 )
      {
        v6 = a1 + 144;
        v7 = 1187;
      }
      else if ( (unsigned int)(unsigned __int8)v4 - 3 >= 2 )
      {
        v6 = a1 + 144;
        if ( (unsigned __int8)v4 == 1 )
        {
          v7 = 1188;
        }
        else if ( v5 == 11 )
        {
          v7 = 1189;
        }
        else
        {
          v7 = 1185;
        }
      }
      else
      {
        v6 = a1 + 144;
        v7 = 1186;
      }
    }
    else if ( v5 == 2 )
    {
      v6 = a1 + 144;
      v7 = 938;
    }
    else if ( (unsigned int)(unsigned __int8)v4 - 3 >= 2 )
    {
      v6 = a1 + 144;
      if ( (unsigned __int8)v4 == 1 )
      {
        v7 = 939;
      }
      else if ( v5 == 11 )
      {
        v7 = 940;
      }
      else
      {
        v7 = 936;
      }
    }
    else
    {
      v6 = a1 + 144;
      v7 = 937;
    }
    return EffectData_create(v7, (int)v9, 0, v6);
  }

/* ============================================================================
 * sub_60462B7C
 * RVA 0x00462b7c   size 0x30   xrefs 9
 * ============================================================================ */
  int __fastcall sub_60462B7C(int result)
  {
    if ( *(_BYTE *)(result + 86) != 1 )
      return *(_DWORD *)(result + 6168);
    return result;
  }

/* ============================================================================
 * sub_60462BB8
 * RVA 0x00462bb8   size 0x34   xrefs 3
 * ============================================================================ */
  int __fastcall sub_60462BB8(int a1)
  {
    int v2; // r5
  
    v2 = 0;
    if ( sub_60003AE0(a1) == 1 )
    {
      v2 = 1;
      SE_OBJ_ITEM_DISAPP_ref(a1, 1, 1);
    }
    return v2;
  }

/* ============================================================================
 * sub_60462BEC
 * RVA 0x00462bec   size 0x1d8   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60462BEC(int a1, int a2)
  {
    int v4; // r1
    int v5; // r1
    int v6; // r0
    float v7; // s0
    float v8; // s2
    int v9; // r0
    int v10; // r7
    _BYTE v12[12]; // [sp+8h] [bp-A0h] BYREF
    int v13; // [sp+14h] [bp-94h]
    int v14; // [sp+18h] [bp-90h]
    char v15; // [sp+24h] [bp-84h]
    float v16[2]; // [sp+30h] [bp-78h] BYREF
    float v17[2]; // [sp+38h] [bp-70h] BYREF
    float v18[2]; // [sp+40h] [bp-68h] BYREF
    float v19[2]; // [sp+48h] [bp-60h] BYREF
    _BYTE v20[16]; // [sp+50h] [bp-58h] BYREF
    int v21; // [sp+60h] [bp-48h]
    int v22; // [sp+64h] [bp-44h]
    int v23; // [sp+68h] [bp-40h]
    int v24; // [sp+6Ch] [bp-3Ch]
    __int16 v25; // [sp+9Ch] [bp-Ch] BYREF
    char v26; // [sp+9Eh] [bp-Ah]
    char v27; // [sp+9Fh] [bp-9h]
    int v28; // [sp+A0h] [bp-8h]
    int v29; // [sp+A4h] [bp-4h]
  
    v25 = 256;
    v26 = *(_BYTE *)(a1 + 86);
    v27 = *(_BYTE *)(a1 + 87);
    v28 = 0;
    v29 = 0;
    TileCheck_ctor((int)v20, (int)&v25);
    v4 = v24;
    if ( v24 < v22 )
    {
      ++v24;
      v5 = v23 + v4;
      v6 = v5 - v22;
      if ( v5 < v22 )
        v6 = v5;
      *(_DWORD *)(v21 + 4 * v6) = a1;
    }
    v7 = *(float *)(a1 + 108);
    v8 = *(float *)(a1 + 112);
    v13 = 0;
    v14 = 0;
    v18[0] = v7 + -7.0;
    v18[1] = v8 + 4.0;
    v16[0] = v7 + -7.0;
    v16[1] = v8 + 12.0;
    v19[0] = v7 + 7.0;
    v17[0] = v7 + 7.0;
    v19[1] = v8 + 4.0;
    v17[1] = v8 + 12.0;
    v9 = TileCheck_check((int)v20, (int)v12, v18, v16, 14);
    if ( a2 )
    {
      v10 = 0;
      if ( v9 )
        v10 = (v15 & 0xF) != 2;
      v13 = 0;
      v14 = 0;
      if ( TileCheck_check((int)v20, (int)v12, v19, v17, 14) )
      {
        if ( (v15 & 0xF) != 2 )
          ++v10;
      }
      return a2 != 0 && v10 == 2;
    }
    if ( v9 != 1 || (v15 & 0xF) == 2 )
    {
      v10 = 0;
      v13 = 0;
      v14 = 0;
      if ( !TileCheck_check((int)v20, (int)v12, v19, v17, 14) || (v15 & 0xF) == 2 )
        return a2 != 0 && v10 == 2;
    }
    return 1;
  }

/* ============================================================================
 * sub_60462DE0
 * RVA 0x00462de0   size 0x180   xrefs 4
 * ============================================================================ */
  bool __fastcall sub_60462DE0(int a1, int a2)
  {
    float v3; // s0
    float v4; // s4
    float v5; // s6
    int v6; // r0
    int v7; // r0
    int v8; // r6
    int v9; // r0
    int v10; // r0
    int v11; // r7
    int v12; // r0
    int v13; // r0
    int v14; // r5
    float v16[2]; // [sp+4h] [bp-70h] BYREF
    _BYTE v17[76]; // [sp+Ch] [bp-68h] BYREF
    _BYTE v18[16]; // [sp+58h] [bp-1Ch] BYREF
    __int16 v19; // [sp+68h] [bp-Ch] BYREF
    char v20; // [sp+6Ah] [bp-Ah]
    char v21; // [sp+6Bh] [bp-9h]
    int v22; // [sp+6Ch] [bp-8h]
    int *v23; // [sp+70h] [bp-4h]
    int v24; // [sp+74h] [bp+0h] BYREF
  
    v3 = 1.0;
    v4 = *(float *)(a1 + 108);
    v5 = *(float *)(a1 + 112);
    v19 = 256;
    if ( !a2 )
      v3 = 16.0;
    v24 = 12564496;
    v16[1] = v3 + v5;
    v16[0] = v4 + -7.0;
    v20 = *(_BYTE *)(a1 + 86);
    v21 = *(_BYTE *)(a1 + 87);
    v22 = 0;
    v23 = &v24;
    v6 = TileCheck_ctor((int)v17, (int)&v19);
    v7 = sub_6015DF58(v6, (int)v18, (int)v16);
    v24 = 12564496;
    v19 = 256;
    v8 = v7;
    v16[0] = v16[0] + 7.0;
    v20 = *(_BYTE *)(a1 + 86);
    v21 = *(_BYTE *)(a1 + 87);
    v22 = 0;
    v23 = &v24;
    v9 = TileCheck_ctor((int)v17, (int)&v19);
    v10 = sub_6015DF58(v9, (int)v18, (int)v16);
    v24 = 12564496;
    v19 = 256;
    v11 = v10;
    v16[0] = v16[0] + 7.0;
    v20 = *(_BYTE *)(a1 + 86);
    v21 = *(_BYTE *)(a1 + 87);
    v22 = 0;
    v23 = &v24;
    v12 = TileCheck_ctor((int)v17, (int)&v19);
    v13 = sub_6015DF58(v12, (int)v18, (int)v16);
    v14 = 1;
    if ( !v8 && v13 == __PAIR64__(v11, 0) )
      return *(_BYTE *)(a1 + 6806) && sub_60462BEC(a1, 0) != 0;
    return v14;
  }

/* ============================================================================
 * sub_60462F64
 * RVA 0x00462f64   size 0x15c   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60462F64(int a1)
  {
    int v2; // r1
    int v3; // r1
    int v4; // r0
    float v5; // r0
    int v6; // r2
    int result; // r0
    _BYTE v8[4]; // [sp+8h] [bp-A0h] BYREF
    float v9; // [sp+Ch] [bp-9Ch]
    float v10; // [sp+10h] [bp-98h]
    int v11; // [sp+14h] [bp-94h]
    int v12; // [sp+18h] [bp-90h]
    float v13[2]; // [sp+30h] [bp-78h] BYREF
    float v14[2]; // [sp+38h] [bp-70h] BYREF
    float v15[2]; // [sp+40h] [bp-68h] BYREF
    float v16[2]; // [sp+48h] [bp-60h] BYREF
    _BYTE v17[16]; // [sp+50h] [bp-58h] BYREF
    int v18; // [sp+60h] [bp-48h]
    int v19; // [sp+64h] [bp-44h]
    int v20; // [sp+68h] [bp-40h]
    int v21; // [sp+6Ch] [bp-3Ch]
    __int16 v22; // [sp+9Ch] [bp-Ch] BYREF
    char v23; // [sp+9Eh] [bp-Ah]
    char v24; // [sp+9Fh] [bp-9h]
    int v25; // [sp+A0h] [bp-8h]
    int v26; // [sp+A4h] [bp-4h]
  
    v22 = 256;
    v23 = *(_BYTE *)(a1 + 86);
    v24 = *(_BYTE *)(a1 + 87);
    v25 = 0;
    v26 = 0;
    TileCheck_ctor((int)v17, (int)&v22);
    v2 = v21;
    if ( v21 < v19 )
    {
      ++v21;
      v3 = v20 + v2;
      v4 = v3 - v19;
      if ( v3 < v19 )
        v4 = v3;
      *(_DWORD *)(v18 + 4 * v4) = a1;
    }
    v5 = *(float *)(a1 + 6656);
    v15[0] = *(float *)(a1 + 6652);
    v15[1] = v5;
    v6 = *(_DWORD *)(a1 + 80);
    v11 = 0;
    v12 = 0;
    v16[0] = v15[0];
    v16[1] = v5;
    v13[0] = v15[0] + flt_60AF1EE8[v6];
    v13[1] = v5;
    v14[0] = v15[0];
    v14[1] = v5 + 16.0;
    if ( TileCheck_check((int)v17, (int)v8, v15, v13, 15) == 1 )
      *(float *)(a1 + 108) = v9 + flt_60AF2160[*(_DWORD *)(a1 + 80)];
    v11 = 0;
    v12 = 0;
    result = TileCheck_check((int)v17, (int)v8, v16, v14, 15);
    if ( result == 1 )
      *(float *)(a1 + 112) = v10 + -16.0;
    return result;
  }

/* ============================================================================
 * sub_604630C8
 * RVA 0x004630c8   size 0x70   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604630C8(int a1)
  {
    int v1; // r4
    int v2; // r6
    int v3; // r5
    int v4; // r5
  
    v1 = a1;
    v2 = a1 + 188;
    v3 = MEMORY[0xC88234];
    ActiveColldierMgr_removeFromActiveList(MEMORY[0xC88234], a1 + 188);
    ActiveColldierMgr_removeFromCreateList(v3, v2);
    ActiveColldierMgr_removeFromList3(v3, v2);
    v4 = MEMORY[0xC88234];
    v1 += 6332;
    ActiveColldierMgr_removeFromActiveList(MEMORY[0xC88234], v1);
    ActiveColldierMgr_removeFromCreateList(v4, v1);
    return ActiveColldierMgr_removeFromList3(v4, v1);
  }

/* ============================================================================
 * sub_6046313C
 * RVA 0x0046313c   size 0x3c   xrefs 4
 * ============================================================================ */
  int __fastcall sub_6046313C(int result)
  {
    _BYTE *v1; // r1
    int v2; // r2
    int v3; // t1
    int v4; // r2
  
    v1 = (_BYTE *)(result + 6197);
    if ( *(_BYTE *)(result + 6197) )
    {
      v3 = *(_DWORD *)(result + 6204);
      result += 6204;
      v2 = v3;
      if ( !v3 || (v4 = v2 - 1, (*(_DWORD *)result = v4) == 0) )
      {
        *v1 = 0;
        return 0;
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60463178
 * RVA 0x00463178   size 0xa8   xrefs 3
 * ============================================================================ */
  void __fastcall sub_60463178(int a1)
  {
    int v2; // r6
    int v3; // r5
    int v4; // r4
    int v5; // r5
  
    v2 = a1 + 188;
    *(_DWORD *)(a1 + 336) |= 0x8000u;
    v3 = MEMORY[0xC88234];
    if ( !ActiveColliderMgr_isInActiveList(MEMORY[0xC88234], a1 + 188) && !ActiveColliderMgr_isInCreateList(v3, v2) )
      ActiveColliderMgr_addToCreateList(v3, v2);
    v4 = a1 + 6332;
    v5 = MEMORY[0xC88234];
    if ( !ActiveColliderMgr_isInActiveList(MEMORY[0xC88234], v4) && !ActiveColliderMgr_isInCreateList(v5, v4) )
      ActiveColliderMgr_addToCreateList(v5, v4);
  }

/* ============================================================================
 * sub_60463584
 * RVA 0x00463584   size 0x6c   xrefs 6
 * ============================================================================ */
  int __fastcall sub_60463584(int result)
  {
    int v1; // r2
    int v2; // r2
  
    if ( *(_DWORD *)(result + 6224) != 2 )
    {
      v1 = *(_DWORD *)(result + 6228);
      if ( !v1 )
        return EffectWrapper_update(
                 (int32x4_t *)(result + 6684),
                 90,
                 (float *)(result + 6124),
                 nullptr,
                 (float *)(result + 144));
      v2 = v1 - 1;
      *(_DWORD *)(result + 6228) = v2;
      if ( !v2 )
        return EffectWrapper_update(
                 (int32x4_t *)(result + 6684),
                 90,
                 (float *)(result + 6124),
                 nullptr,
                 (float *)(result + 144));
    }
    return result;
  }

/* ============================================================================
 * sub_604635F4
 * RVA 0x004635f4   size 0x194   xrefs 4
 * ============================================================================ */
  int __fastcall sub_604635F4(int a1)
  {
    unsigned int v2; // r0
    int v3; // r5
    int result; // r0
    float v5[3]; // [sp+4h] [bp-Ch] BYREF
  
    v2 = *(_DWORD *)(a1 + 6184);
    if ( v2 >= 4 )
      v2 = 0;
    v3 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * v2 + 48);
    if ( _cxa_guard_acquire_0(13087612) )
    {
      MEMORY[0xC7B378] = 12320956;
      _cxa_guard_release_0(13087612);
    }
    if ( !v3
      || (**(int (__fastcall ***)(int, int))v3)(v3, 13087608) != 1
      || !sub_6075EE0C(v3)
      || Actor::getProfileId((Actor *)a1) != MEMORY[0xAF368C] )
    {
      goto LABEL_13;
    }
    if ( _cxa_guard_acquire_0(13087604) )
    {
      MEMORY[0xC7B370] = 12320944;
      _cxa_guard_release_0(13087604);
    }
    if ( (**(int (__fastcall ***)(int, int))v3)(v3, 13087600) != 1 || (result = *(_DWORD *)(v3 + 1320), result == 9) )
    {
  LABEL_13:
      v5[0] = *(float *)(a1 + 108) + *(float *)(a1 + 572);
      v5[1] = *(float *)(a1 + 112) + *(float *)(a1 + 576);
      v5[2] = *(float *)(a1 + 116) + *(float *)(a1 + 580);
      return EffectData_create(92, (int)v5, 0, a1 + 144);
    }
    return result;
  }

/* ============================================================================
 * sub_60463884
 * RVA 0x00463884   size 0xd0   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60463884(int a1)
  {
    int result; // r0
    float v3; // s0
    float v4; // s2
    float v5; // s8
    float v6; // s0
    float v7; // s4
    float v8; // s2
    float v9; // s10
    float v10; // s6
    float v11; // s0
    float v12[4]; // [sp+0h] [bp-10h] BYREF
  
    result = *(unsigned __int8 *)(a1 + 2872);
    if ( (result & 1) != 0 )
    {
      v3 = *(float *)(a1 + 108);
      v4 = *(float *)(a1 + 112);
      v5 = v3 + 16.0;
      v6 = v3 + -16.0;
      v7 = v4 + 16.0;
      v8 = v4 + -16.0;
      if ( v5 <= v6 )
        v9 = v5;
      else
        v9 = v6;
      if ( v5 > v6 )
        v6 = v5;
      v12[0] = v9;
      v12[2] = v6;
      if ( v7 <= v8 )
        v10 = v7;
      else
        v10 = v8;
      if ( v7 <= v8 )
        v11 = v8;
      else
        v11 = v7;
      v12[1] = v10;
      v12[3] = v11;
      result = sub_60007208(v12, flt_60B0266C);
      if ( !result )
      {
        result = *(unsigned __int8 *)(MEMORY[0xC9CF0C] + 1361);
        if ( *(_BYTE *)(MEMORY[0xC9CF0C] + 1361) )
        {
          if ( *(_BYTE *)(a1 + 6054) )
          {
            return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1);
          }
          else
          {
            *(_DWORD *)(a1 + 124) = 0x40000000;
            return 0x40000000;
          }
        }
      }
    }
    return result;
  }

/* ============================================================================
 * sub_6046395C
 * RVA 0x0046395c   size 0x38   xrefs 3
 * ============================================================================ */
  int __fastcall sub_6046395C(int a1, char a2)
  {
    return sub_604005D0(MEMORY[0xC99E3C], a2, 8, 2, 0, 0);
  }

/* ============================================================================
 * sub_60463998
 * RVA 0x00463998   size 0x24c   xrefs 14
 * ============================================================================ */
  int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4)
  {
    int v6; // r5
    unsigned int v9; // r0
    _DWORD *v10; // r4
    int v11; // r7
    int v12; // r0
    bool v13; // zf
    _DWORD *v15; // r10
    int ProfileId; // r0
  
    v6 = 0;
    *a2 = 0;
    v10 = (_DWORD *)((char *)a1 + 6208);
    v9 = *((_DWORD *)a1 + 1552);
    if ( v9 != -1 )
    {
      if ( v9 >= 4 )
        v9 = 0;
      v11 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * v9 + 48);
      if ( _cxa_guard_acquire_0(13087612) )
      {
        MEMORY[0xC7B378] = 12320956;
        _cxa_guard_release_0(13087612);
      }
      if ( !v11 || !(**(int (__fastcall ***)(int, int))v11)(v11, 13087608) )
        goto LABEL_11;
      v12 = sub_60766708(v11);
      v13 = v12 == 0;
      if ( !v12 )
        v13 = (*(_BYTE *)(v11 + 1219) & 8) == 0;
      if ( !v13 )
        goto LABEL_11;
      v6 = 1;
      if ( a4 == 1 )
      {
        if ( _cxa_guard_acquire_0(13087604) )
        {
          MEMORY[0xC7B370] = 12320944;
          _cxa_guard_release_0(13087604);
        }
        v15 = (_DWORD *)(**(int (__fastcall ***)(int, int))v11)(v11, 13087600);
        if ( v15 )
          v15 = (_DWORD *)v11;
        if ( sub_607A2820((int)v15, a3) == 1 )
        {
  LABEL_11:
          *v10 = -1;
          return 0;
        }
        if ( (*(int (__fastcall **)(_DWORD *, int))(*v15 + 1376))(v15, a3) == 1 )
        {
          if ( sub_607A27A8(v15, a3) == 1 )
          {
            *a2 = 1;
            return 1;
          }
        }
        else
        {
          *a2 = 2;
          if ( _cxa_guard_acquire_0(13226964) )
          {
            MEMORY[0xC9D3D0] = 12564600;
            _cxa_guard_release_0(13226964);
          }
          if ( (*(int (__fastcall **)(_DWORD *, int))*v15)(v15, 13226960) == 1 )
          {
            ProfileId = Actor::getProfileId(a1);
            sub_607C9370(v15, ProfileId);
          }
        }
      }
    }
    return v6;
  }

/* ============================================================================
 * sub_60463C30
 * RVA 0x00463c30   size 0x30   xrefs 1
 * ============================================================================ */
  bool __fastcall sub_60463C30(int a1)
  {
    int v1; // r1
  
    v1 = *(_DWORD *)(a1 + 6208);
    return v1 == -1 || v1 != *(char *)(a1 + 6250);
  }

/* ============================================================================
 * sub_60463C60
 * RVA 0x00463c60   size 0x70   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60463C60(int a1)
  {
    float v1; // s0
    int v2; // r4
    int v3; // r1
    int *v4; // r0
    int v5; // r0
    int v6; // r5
    int result; // r0
  
    v1 = 1.0;
    v2 = a1 + 6160;
    v3 = *(_DWORD *)(a1 + 80);
    v4 = *(int **)(*(_DWORD *)(a1 + 6160) + 12);
    if ( v3 == 1 )
      v1 = -1.0;
    v5 = *v4;
    v6 = *(_DWORD *)(v5 + 20);
    *(float *)(v5 + 24) = v1;
    sub_6041838C(**(_DWORD **)(*(_DWORD *)v2 + 12) + 4);
    result = **(_DWORD **)(*(_DWORD *)v2 + 12);
    *(_DWORD *)(result + 20) = v6;
    *(_DWORD *)(result + 28) |= 2u;
    return result;
  }

/* ============================================================================
 * SE_PLY_GET_ITEM_AGAIN_ref
 * RVA 0x00463cd0   size 0x138   xrefs 11
 * ============================================================================ */
  int __fastcall sub_60463CD0(int a1, int a2, unsigned int a3)
  {
    int v5; // r1
    int v6; // r6
    int v7; // r6
    unsigned int v8; // r6
    int v9; // r0
    _BYTE v11[8]; // [sp+8h] [bp-10h] BYREF
    _DWORD v12[2]; // [sp+10h] [bp-8h] BYREF
  
    switch ( a2 )
    {
      case 0:
        return 0;
      case 1:
        v8 = 0;
        sub_60400980(MEMORY[0xC99E3C], (char)a3, 0, 0, 0);
        if ( a3 < 4 )
          v8 = a3;
        v9 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * v8 + 32);
        if ( v9 )
          sub_607AA6F4(v9);
        break;
      case 2:
        sub_604005D0(MEMORY[0xC99E3C], (char)a3, 8, 2, 0, 0);
        v5 = *(_DWORD *)(a1 + 112);
        v6 = MEMORY[0xC7F534];
        v12[0] = *(_DWORD *)(a1 + 108);
        v12[1] = v5;
        mapPositionToScreen(v11, v12);
        BasicSoundActor2_play(v6, "SE_PLY_GET_ITEM_AGAIN", v11, 0);
        break;
    }
    v7 = 1;
    sub_600221A0(MEMORY[0xC7F52C], 4, a3, 1);
    sub_603FFD80(MEMORY[0xC99DD4] + 852);
    sub_604635F4(a1);
    *(_BYTE *)(a1 + 19) = 1;
    return v7;
  }

/* ============================================================================
 * sub_60464D3C
 * RVA 0x00464d3c   size 0xa8   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60464D3C(int a1)
  {
    int (__fastcall ***v1)(_DWORD, int); // r4
    int result; // r0
  
    v1 = (int (__fastcall ***)(_DWORD, int))ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168, *(_DWORD *)(a1 + 6268));
    if ( _cxa_guard_acquire_0(13087752) )
    {
      MEMORY[0xC7B404] = 12320944;
      _cxa_guard_release_0(13087752);
    }
    if ( !v1 )
      return 0;
    result = (**v1)(v1, 13087748);
    if ( result )
      return (int)v1;
    return result;
  }

/* ============================================================================
 * sub_60465CD4
 * RVA 0x00465cd4   size 0x64   xrefs 1
 * ============================================================================ */
  _DWORD *__fastcall sub_60465CD4(int a1)
  {
    _DWORD *result; // r0
    int v3; // r0
  
    result = (_DWORD *)MEMORY[0xC9D3E4];
    if ( !MEMORY[0xC9D3E4] )
    {
      v3 = operator new[](16, a1, 4);
      result = (_DWORD *)sead::IDisposer::IDisposer(v3, a1, 3);
      *result = 12564612;
      MEMORY[0xC9D3E0] = result;
      MEMORY[0xC9D3E4] = result;
    }
    return result;
  }

/* ============================================================================
 * sub_60465D70
 * RVA 0x00465d70   size 0xc0   xrefs 4
 * ============================================================================ */
  unsigned int __fastcall sub_60465D70(int a1, unsigned int a2)
  {
    int v2; // r4
    unsigned int v3; // r0
  
    if ( a2 >= 4 )
      a2 = 0;
    v2 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * a2 + 48);
    if ( _cxa_guard_acquire_0(13087612) )
    {
      MEMORY[0xC7B378] = 12320956;
      _cxa_guard_release_0(13087612);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int))v2)(v2, 13087608) == 1 && (v3 = *(_DWORD *)(v2 + 1320) - 1, v3 <= 8) )
      return (0x1FBu >> v3) & 1;
    else
      return 0;
  }

/* ============================================================================
 * ItemId_resolveGuardedByPlayerMode
 * RVA 0x00465e4c   size 0x1e4   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4)
  {
    int v6; // r6
    unsigned int v7; // r0
  
    if ( a4 == 1 )
      return dword_60B0267C[a2];
    if ( a3 == 15 )
      return 0;
    if ( a2 > 0x19 || ((1 << a2) & 0x24004E0) == 0 )
      return dword_60B0267C[a2];
    if ( a3 >= 4 )
      a3 = 0;
    v6 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * a3 + 48);
    if ( _cxa_guard_acquire_0(13087612) )
    {
      MEMORY[0xC7B378] = 12320956;
      _cxa_guard_release_0(13087612);
    }
    if ( v6
      && (**(int (__fastcall ***)(int, int))v6)(v6, 13087608) == 1
      && (v7 = *(_DWORD *)(v6 + 1320) - 1, v7 <= 8)
      && ((0x1FBu >> v7) & 1) != 0 )
    {
      return dword_60B0267C[a2];
    }
    else
    {
      return 0;
    }
  }

/* ============================================================================
 * sub_604660AC
 * RVA 0x004660ac   size 0x250   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604660AC(int a1, _DWORD *a2, int a3, int a4)
  {
    int v4; // r5
    int result; // r0
    int v7; // r6
    unsigned int v8; // r11
    unsigned int v9; // r0
    int v10; // r7
    unsigned int v11; // r0
    int v12; // r1
    int v13; // r2
    _DWORD *v14; // r1
    int v15; // [sp+Ch] [bp-8h]
  
    v4 = a3;
    if ( a4 || (unsigned int)(a3 - 8) < 2 || a3 == 2 )
    {
      result = dword_60B0267C[a3];
      *a2 = result;
      goto LABEL_7;
    }
    if ( a3 == 22 )
    {
      result = 0;
      *a2 = 10;
  LABEL_7:
      a2[1] = result;
      a2[2] = result;
      a2[3] = result;
      return result;
    }
    v7 = sub_6078A030(MEMORY[0xCC436C]);
    if ( v7 <= 1 )
      v7 = 1;
    v8 = 0;
    v15 = 0;
    do
    {
      v9 = 0;
      if ( v8 < 4 )
        v9 = v8;
      v10 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * v9 + 48);
      if ( _cxa_guard_acquire_0(13087612) )
      {
        MEMORY[0xC7B378] = 12320956;
        _cxa_guard_release_0(13087612);
      }
      if ( v10 )
      {
        if ( (**(int (__fastcall ***)(int, int))v10)(v10, 13087608) == 1 )
        {
          v11 = *(_DWORD *)(v10 + 1320) - 1;
          if ( v11 <= 8 )
            v15 += (0x1FBu >> v11) & 1;
        }
      }
      ++v8;
    }
    while ( (int)v8 < v7 );
    result = 0;
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    a2[3] = 0;
    if ( !v4 )
      v4 = 4;
    if ( v15 )
    {
      if ( v15 >= 1 )
      {
        v12 = 0;
        for ( result = dword_60B0267C[v4]; (v15 & 3) != v12; a2[v12++] = result )
          ;
        if ( (unsigned int)(v15 - 1) >= 3 )
        {
          v13 = v15 - v12;
          v14 = &a2[v12 + 3];
          do
          {
            *(v14 - 3) = result;
            *(v14 - 2) = result;
            *(v14 - 1) = result;
            *v14 = result;
            v14 += 4;
            v13 -= 4;
          }
          while ( v13 );
        }
      }
    }
    else
    {
      result = dword_60B0267C[v4];
      *a2 = result;
    }
    return result;
  }

/* ============================================================================
 * sub_60466328
 * RVA 0x00466328   size 0xcc   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60466328(int a1, int a2, int a3, int a4)
  {
    int v6; // r0
  
    v6 = ItemId_resolveGuardedByPlayerMode(a1, a3, *(_DWORD *)(a2 + 32), *(unsigned __int8 *)(a2 + 13));
    return sub_604663F4(
             v6,
             *(_DWORD *)a2,
             (*(_DWORD *)(a2 + 20) << 12) & 0x3000
           | ((*(_DWORD *)(a2 + 24) & 1) << 14)
           | (unsigned __int16)((unsigned __int16)*(_DWORD *)(a2 + 28) << 15)
           | (*(_DWORD *)(a2 + 32) << 16) & 0x30000
           | (*(_DWORD *)(a2 + 36) << 18) & 0xC0000
           | (*(_DWORD *)(a2 + 40) << 20) & 0x300000
           | (*(_DWORD *)(a2 + 48) << 24) & 0x1F000000
           | (*(_DWORD *)(a2 + 56) << 30) & 0x40000000
           | (*(_DWORD *)(a2 + 60) << 31)
           | (*(_DWORD *)(a2 + 64) << 10) & 0x400,
             v6,
             *(unsigned __int8 *)(a2 + 12),
             a4);
  }

/* ============================================================================
 * sub_604663F4
 * RVA 0x004663f4   size 0x1e4   xrefs 9
 * ============================================================================ */
  unsigned int __fastcall sub_604663F4(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6)
  {
    char v6; // r12
    unsigned int result; // r0
    int v11; // r6
    _DWORD v12[11]; // [sp+4h] [bp-2Ch] BYREF
  
    result = (unsigned int)&unk_60C9D3F0 & ~(1615225880 << v6);
    if ( (result & 1) == 0 )
    {
      result = _cxa_guard_acquire_0(&unk_60C9D3F0);
      if ( result )
      {
        dword_60C9D3F4 = MEMORY[0xAF3664];
        dword_60C9D3F8 = MEMORY[0xAF3668];
        dword_60C9D3FC = MEMORY[0xAF3A80];
        dword_60C9D400 = MEMORY[0xAF366C];
        dword_60C9D404 = MEMORY[0xAF3670];
        dword_60C9D408 = MEMORY[0xAF3674];
        dword_60C9D40C = MEMORY[0xAF3678];
        dword_60C9D410 = MEMORY[0xAF367C];
        dword_60C9D414 = MEMORY[0xAF3680];
        dword_60C9D418 = MEMORY[0xAF3684];
        dword_60C9D41C = MEMORY[0xAF368C];
        result = _cxa_guard_release_0(&unk_60C9D3F0);
      }
    }
    if ( a4 != -1 )
    {
      v11 = a4;
      if ( a4 > 10 )
        v11 = 0;
      if ( *(_DWORD *)(MEMORY[0xC99DD4] + 764) == 1
        && MEMORY[0xC9A1E0]
        && (unsigned int)a4 <= 0xA
        && ((1 << a4) & 0x512) != 0
        && *(_DWORD *)(MEMORY[0xC9A1E0] + 532) == 4 )
      {
        v11 = 6;
      }
      memset(&v12[1], 0, 0x28u);
      v12[0] = a3;
      if ( a6 )
        v12[2] = a6;
      v12[3] = Profile::get(*((_DWORD *)&unk_60C9D3F0 + v11 + 1));
      v12[4] = *a2;
      v12[5] = a2[1];
      v12[6] = a2[2];
      LOWORD(v12[8]) = a5;
      BYTE2(v12[8]) = 0;
      v12[10] = 0;
      return (unsigned int)ActorMgr::create(MEMORY[0xC7B400], (int)v12, 0);
    }
    return result;
  }

/* ============================================================================
 * sub_60466620
 * RVA 0x00466620   size 0x1d8   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60466620(int a1, _DWORD **a2, int a3)
  {
    int result; // r0
    int v5; // r1
    int *v6; // r10
    int v7; // r0
    unsigned int v8; // r4
    unsigned int v9; // r0
    int v10; // r9
    int v17; // r0
    int v18; // [sp+4h] [bp-18h]
    int v19; // [sp+10h] [bp-Ch]
    int v20; // [sp+18h] [bp-4h]
  
    v5 = (int)a2[2];
    result = v5;
    if ( v5 >= 4 )
      v5 = 4;
    if ( result < 0 )
      v5 = 0;
    if ( v5 >= 1 )
    {
      v6 = a2[1];
      if ( v5 == 1 )
      {
        v7 = ((_DWORD)a2[15] << 31)
           | (((unsigned int)a2[5] & 3) << 12)
           | ((_DWORD)a2[6] << 14) & 0x4000
           | (unsigned __int16)((unsigned __int16)a2[7] << 15)
           | ((_DWORD)a2[8] << 16) & 0x30000
           | ((_DWORD)a2[9] << 18) & 0xC0000
           | ((_DWORD)a2[10] << 20) & 0x300000
           | ((_DWORD)a2[12] << 24) & 0x1F000000;
        return sub_604663F4(v7, *a2, v7 | ((_DWORD)a2[14] << 30) & 0x40000000, *v6, *((_BYTE *)a2 + 12), a3);
      }
      else
      {
        v8 = 0;
        v19 = v5;
        do
        {
          v9 = 0;
          if ( v8 < 4 )
            v9 = v8;
          v20 = v6[v9];
          v18 = a3;
          v10 = a3;
          _R2 = dword_60AF2614[v8] << 22;
          __asm { UXTB16          R2, R2 }
          v17 = (dword_60AF28C4[v8] << 31)
              | (((unsigned int)a2[5] & 3) << 12)
              | ((_DWORD)a2[6] << 14) & 0x4000
              | (unsigned __int16)((unsigned __int16)a2[7] << 15)
              | ((_DWORD)a2[8] << 16) & 0x30000
              | ((_DWORD)a2[9] << 18) & 0xC0000
              | ((_DWORD)a2[10] << 20) & 0x300000
              | _R2
              | ((_DWORD)a2[12] << 24) & 0x1F000000;
          result = sub_604663F4(v17, *a2, v17 | ((_DWORD)a2[14] << 30) & 0x40000000, v20, *((_BYTE *)a2 + 12), v18);
          ++v8;
          a3 = v10;
        }
        while ( v19 != v8 );
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60466800
 * RVA 0x00466800   size 0xf4   xrefs 1
 * ============================================================================ */
  unsigned int __fastcall sub_60466800(int a1, int a2, int a3, int a4)
  {
    int v6; // r4
    int v7; // r0
    _DWORD *v8; // r10
    int v9; // lr
    int v10; // r8
    int v11; // r5
    int v12; // r9
    _DWORD *v13; // r3
    _DWORD *v14; // r1
    int v15; // r0
    int v22; // r0
    unsigned __int8 v24; // [sp+0h] [bp-Ch]
  
    v6 = a4;
    v7 = *(_DWORD *)(a2 + 8);
    if ( a4 >= 4 )
      v6 = 4;
    v8 = (_DWORD *)(a2 + 24);
    v9 = *(_DWORD *)(a2 + 56);
    v10 = *(_DWORD *)(a2 + 48);
    v11 = *(_DWORD *)(a2 + 20);
    v12 = *(_DWORD *)(a2 + 40);
    if ( a4 < 0 )
      v6 = 0;
    v13 = &dword_60AF28C4[v6];
    v14 = *(_DWORD **)a2;
    if ( v7 == 1 )
      v13 = (_DWORD *)(a2 + 60);
    v24 = *(_BYTE *)(a2 + 12);
    v15 = (v11 << 12) & 0x3000
        | (*v13 << 31)
        | (*v8 << 14) & 0x4000
        | (unsigned __int16)((unsigned __int16)*(_DWORD *)(a2 + 28) << 15)
        | (*(_DWORD *)(a2 + 32) << 16) & 0x30000
        | (*(_DWORD *)(a2 + 36) << 18) & 0xC0000
        | (v12 << 20) & 0x300000;
    _R2 = dword_60AF2614[v6] << 22;
    __asm { UXTB16          R2, R2 }
    v22 = v15 | _R2 | (v10 << 24) & 0x1F000000 | (v9 << 30) & 0x40000000;
    return sub_604663F4(v22, v14, v22 | 0x20000000, a3, v24, 0);
  }

/* ============================================================================
 * sub_604668FC
 * RVA 0x004668fc   size 0x38   xrefs 1
 * ============================================================================ */
  unsigned int __fastcall sub_604668FC(int a1, _DWORD *a2, int a3, char a4)
  {
    return sub_604663F4(dword_60B0267C[a3], a2, ((a4 & 3) << 16) | 0x6000000, dword_60B0267C[a3], 0, 0);
  }

/* ============================================================================
 * sub_60466938
 * RVA 0x00466938   size 0x38   xrefs 1
 * ============================================================================ */
  unsigned int __fastcall sub_60466938(int a1, _DWORD *a2, int a3, char a4)
  {
    return sub_604663F4(dword_60B0267C[a3], a2, ((a4 & 3) << 16) | 0x1000000, dword_60B0267C[a3], 0, 0);
  }

/* ============================================================================
 * sub_60466974
 * RVA 0x00466974   size 0x84   xrefs 1
 * ============================================================================ */
  _BYTE *__fastcall sub_60466974(int a1, _DWORD *a2)
  {
    _DWORD v4[11]; // [sp+4h] [bp-2Ch] BYREF
  
    memset(&v4[1], 0, 0x24u);
    v4[0] = 117440512;
    v4[3] = Profile::get(MEMORY[0xAF367C]);
    v4[4] = *a2;
    v4[5] = a2[1];
    v4[6] = a2[2];
    LOWORD(v4[8]) = 0;
    BYTE2(v4[8]) = 0;
    v4[10] = 0;
    return ActorMgr::create(MEMORY[0xC7B400], (int)v4, 0);
  }

/* ============================================================================
 * sub_60466A00
 * RVA 0x00466a00   size 0x8c   xrefs 1
 * ============================================================================ */
  _BYTE *__fastcall sub_60466A00(int a1, _DWORD *a2, int a3)
  {
    _DWORD v6[11]; // [sp+4h] [bp-2Ch] BYREF
  
    memset(&v6[1], 0, 0x24u);
    v6[0] = 184549376;
    v6[2] = a3;
    v6[3] = Profile::get(MEMORY[0xAF3680]);
    v6[4] = *a2;
    v6[5] = a2[1];
    v6[6] = a2[2];
    LOWORD(v6[8]) = 0;
    BYTE2(v6[8]) = 0;
    v6[10] = 0;
    return ActorMgr::create(MEMORY[0xC7B400], (int)v6, 0);
  }

/* ============================================================================
 * sub_60466A94
 * RVA 0x00466a94   size 0x94   xrefs 1
 * ============================================================================ */
  _BYTE *__fastcall sub_60466A94(int a1, float *a2)
  {
    float v2; // s16
    float v3; // r5
    _DWORD v5[11]; // [sp+4h] [bp-2Ch] BYREF
  
    v2 = a2[1];
    v3 = *a2;
    memset(&v5[1], 0, 0x24u);
    v5[0] = 0x8000000;
    v5[3] = Profile::get(MEMORY[0xAF3664]);
    *(float *)&v5[4] = v3;
    *(float *)&v5[5] = v2 + 8.0;
    v5[6] = 1143111680;
    LOWORD(v5[8]) = 0;
    BYTE2(v5[8]) = 0;
    v5[10] = 0;
    return ActorMgr::create(MEMORY[0xC7B400], (int)v5, 0);
  }

/* ============================================================================
 * sub_60466B30
 * RVA 0x00466b30   size 0x30   xrefs 1
 * ============================================================================ */
  unsigned int __fastcall sub_60466B30(int a1, _DWORD *a2, int a3, unsigned __int8 a4)
  {
    return sub_604663F4((int)dword_60B0267C, a2, 0x8000000, dword_60B0267C[a3], a4, 0);
  }

/* ============================================================================
 * sub_60466B64
 * RVA 0x00466b64   size 0x34   xrefs 1
 * ============================================================================ */
  unsigned int __fastcall sub_60466B64(int a1, _DWORD *a2, int a3, unsigned __int8 a4)
  {
    return sub_604663F4((int)dword_60B0267C, a2, 134219776, dword_60B0267C[a3], a4, 0);
  }

/* ============================================================================
 * Actor_kinoko_build
 * RVA 0x00467808   size 0x2c   xrefs 0
 * ============================================================================ */
  _DWORD *sub_60467808()
  {
    _DWORD *result; // r0
  
    operator new(6832);
    result = (_DWORD *)sub_60466BC4();
    *result = 12565000;
    return result;
  }

/* ============================================================================
 * sub_60467880
 * RVA 0x00467880   size 0x134   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60467880(int a1)
  {
    int v2; // r9
    int Model2; // r5
    _DWORD *v4; // r7
    _DWORD *v5; // r0
    int *v6; // r0
    int v7; // r5
    int v8; // r0
    int v9; // r0
    int result; // r0
    int v11; // [sp+14h] [bp-10h] BYREF
    const char *v12; // [sp+18h] [bp-Ch]
    int v13; // [sp+1Ch] [bp-8h] BYREF
    const char *v14; // [sp+20h] [bp-4h]
  
    v13 = 12321336;
    v14 = "I_kinoko";
    v11 = 12321336;
    v2 = LoadResource(MEMORY[0xC9CA88], &v13);
    v12 = "I_kinoko";
    Model2 = Resource_getModel2(v2, (int)&v11, 1, 1, 0, 0, 0, 0, 0);
    v4 = (_DWORD *)operator new(48, 0, 4);
    v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 0, 0, 0);
    ModelWrapper_setup(v5, v2, 0, 0);
    *(_DWORD *)(a1 + 6160) = v4;
    v6 = (int *)v4[5];
    v7 = *v6;
    *(_DWORD *)(a1 + 6164) = *v6;
    v13 = 12321336;
    v14 = "I_kinoko";
    v8 = LoadResource(MEMORY[0xC9CA88], &v13);
    v11 = 12321336;
    v12 = "I_kinoko_switch";
    TexAnim_play(v7, v8, &v11);
    AnimationCtrl_setRepeat(*(_DWORD *)(a1 + 6164) + 4, 0);
    v9 = *(_DWORD *)(a1 + 6164);
    *(_DWORD *)(v9 + 20) = 0;
    *(_DWORD *)(v9 + 28) |= 2u;
    result = *(_DWORD *)(a1 + 6164);
    *(_DWORD *)(result + 24) = 0;
    return result;
  }

/* ============================================================================
 * Actor_mamekinoko_build
 * RVA 0x00468284   size 0x2c   xrefs 0
 * ============================================================================ */
  _DWORD *sub_60468284()
  {
    _DWORD *result; // r0
  
    operator new(6832);
    result = (_DWORD *)sub_60466BC4();
    *result = 12565352;
    return result;
  }

/* ============================================================================
 * sub_60468324
 * RVA 0x00468324   size 0x138   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60468324(int a1)
  {
    int v2; // r5
    int Model2; // r6
    int v4; // r7
    _DWORD *v5; // r0
    int v6; // r5
    int v7; // r0
    int v8; // r0
    int result; // r0
    int v10; // [sp+14h] [bp-10h] BYREF
    const char *v11; // [sp+18h] [bp-Ch]
    int v12; // [sp+1Ch] [bp-8h] BYREF
    const char *v13; // [sp+20h] [bp-4h]
  
    v12 = 12321336;
    v13 = "I_kinoko";
    v10 = 12321336;
    v2 = LoadResource(MEMORY[0xC9CA88], &v12);
    v11 = "I_kinoko";
    Model2 = Resource_getModel2(v2, (int)&v10, 1, 1, 0, 0, 0, 0, 0);
    v4 = operator new(48, 0, 4);
    v5 = ModelWrapper_ctor((_DWORD *)v4, Model2, 1, 1, 0, 0, 0);
    ModelWrapper_setup(v5, v2, 0, 0);
    *(_DWORD *)(a1 + 6160) = v4;
    v6 = **(_DWORD **)(v4 + 20);
    *(_DWORD *)(a1 + 6164) = v6;
    v12 = 12321336;
    v13 = "I_kinoko";
    v7 = LoadResource(MEMORY[0xC9CA88], &v12);
    v10 = 12321336;
    v11 = "I_kinoko_switch";
    TexAnim_play(v6, v7, &v10);
    AnimationCtrl_setRepeat(*(_DWORD *)(a1 + 6164) + 4, 0);
    v8 = *(_DWORD *)(a1 + 6164);
    *(_DWORD *)(v8 + 20) = 0x40000000;
    *(_DWORD *)(v8 + 28) |= 2u;
    result = *(_DWORD *)(a1 + 6164);
    *(_DWORD *)(result + 24) = 0;
    return result;
  }

/* ============================================================================
 * Actor_musasabi_build
 * RVA 0x00468ebc   size 0x2c   xrefs 0
 * ============================================================================ */
  _DWORD *sub_60468EBC()
  {
    _DWORD *result; // r0
  
    operator new(6832);
    result = (_DWORD *)sub_60466BC4();
    *result = 12565748;
    return result;
  }

/* ============================================================================
 * Actor_1UPkinoko_build
 * RVA 0x004698ec   size 0x2c   xrefs 0
 * ============================================================================ */
  _DWORD *sub_604698EC()
  {
    _DWORD *result; // r0
  
    operator new(6832);
    result = (_DWORD *)sub_60466BC4();
    *result = 12566100;
    return result;
  }

/* ============================================================================
 * sub_6046999C
 * RVA 0x0046999c   size 0x138   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6046999C(int a1)
  {
    int v2; // r5
    int Model2; // r6
    int v4; // r7
    _DWORD *v5; // r0
    int v6; // r5
    int v7; // r0
    int v8; // r0
    int result; // r0
    int v10; // [sp+14h] [bp-10h] BYREF
    const char *v11; // [sp+18h] [bp-Ch]
    int v12; // [sp+1Ch] [bp-8h] BYREF
    const char *v13; // [sp+20h] [bp-4h]
  
    v12 = 12321336;
    v13 = "I_kinoko";
    v10 = 12321336;
    v2 = LoadResource(MEMORY[0xC9CA88], &v12);
    v11 = "I_kinoko";
    Model2 = Resource_getModel2(v2, (int)&v10, 1, 1, 0, 0, 0, 0, 0);
    v4 = operator new(48, 0, 4);
    v5 = ModelWrapper_ctor((_DWORD *)v4, Model2, 1, 1, 0, 0, 0);
    ModelWrapper_setup(v5, v2, 0, 0);
    *(_DWORD *)(a1 + 6160) = v4;
    v6 = **(_DWORD **)(v4 + 20);
    *(_DWORD *)(a1 + 6164) = v6;
    v12 = 12321336;
    v13 = "I_kinoko";
    v7 = LoadResource(MEMORY[0xC9CA88], &v12);
    v10 = 12321336;
    v11 = "I_kinoko_switch";
    TexAnim_play(v6, v7, &v10);
    AnimationCtrl_setRepeat(*(_DWORD *)(a1 + 6164) + 4, 0);
    v8 = *(_DWORD *)(a1 + 6164);
    *(_DWORD *)(v8 + 20) = 1065353216;
    *(_DWORD *)(v8 + 28) |= 2u;
    result = *(_DWORD *)(a1 + 6164);
    *(_DWORD *)(result + 24) = 0;
    return result;
  }

/* ============================================================================
 * Actor_Peach_Crown_build
 * RVA 0x0046a538   size 0x2c   xrefs 0
 * ============================================================================ */
  _DWORD *sub_6046A538()
  {
    _DWORD *result; // r0
  
    operator new(6832);
    result = (_DWORD *)sub_60466BC4();
    *result = 12566452;
    return result;
  }

/* ============================================================================
 * Actor_pengin_build
 * RVA 0x0046aef0   size 0x2c   xrefs 0
 * ============================================================================ */
  _DWORD *sub_6046AEF0()
  {
    _DWORD *result; // r0
  
    operator new(6832);
    result = (_DWORD *)sub_60466BC4();
    *result = 12566804;
    return result;
  }

/* ============================================================================
 * Actor_puropera_build
 * RVA 0x0046ba10   size 0x3c   xrefs 0
 * ============================================================================ */
  _DWORD *sub_6046BA10()
  {
    _DWORD *result; // r0
  
    operator new(6872);
    result = (_DWORD *)sub_60466BC4();
    *result = 12567156;
    result[1713] = 0;
    return result;
  }

/* ============================================================================
 * sub_6046BB70
 * RVA 0x0046bb70   size 0xe4   xrefs 3
 * ============================================================================ */
  int __fastcall sub_6046BB70(Actor *a1)
  {
    int v2; // r0
    int *v3; // r5
    int v4; // r0
    int v6; // [sp+4h] [bp-4h] BYREF
  
    v3 = (int *)((char *)a1 + 6220);
    v2 = *((_DWORD *)a1 + 1555);
    if ( !v2 )
      goto LABEL_5;
    v4 = v2 - 1;
    *v3 = v4;
    if ( v4 == 1 )
    {
      (*(void (__fastcall **)(Actor *))(*(_DWORD *)a1 + 244))(a1);
      v4 = *v3;
    }
    if ( !v4 )
    {
  LABEL_5:
      if ( sub_60463998(a1, &v6, 4, 1) == 1 )
        SE_PLY_GET_ITEM_AGAIN_ref(a1, v6, *((_DWORD *)a1 + 1552));
    }
    if ( !*((_BYTE *)a1 + 6856) )
    {
      StageAcor_handleYspeed(a1);
      *((float *)a1 + 27) = *((float *)a1 + 27) + *((float *)a1 + 30);
      *((float *)a1 + 28) = *((float *)a1 + 28) + *((float *)a1 + 31);
      *((float *)a1 + 29) = *((float *)a1 + 29) + *((float *)a1 + 32);
    }
    sub_6046C3AC(a1);
    return sub_60463584(a1);
  }

/* ============================================================================
 * P_body_ref
 * RVA 0x0046bee4   size 0x26c   xrefs 2
 * ============================================================================ */
  int *__fastcall sub_6046BEE4(int a1)
  {
    int **v1; // r4
    int v2; // r5
    unsigned int v3; // r0
    unsigned int v4; // r1
    unsigned int v5; // r5
    int v6; // s2
    int v7; // s14
    float *v8; // r1
    float *v9; // r0
    float v10; // s14
    float v11; // s0
    float v12; // s2
    float v13; // s10
    float v14; // s5
    float v15; // s6
    float v16; // s1
    float v17; // s13
    float v18; // s9
    int *v19; // t1
    int v20; // r0
    int (__fastcall *v21)(int, int *); // r2
    int v22; // r0
    int v23; // r0
    int (__fastcall *v24)(int, int *); // r2
    int v25; // r0
    int *result; // r0
    int v27; // [sp+0h] [bp-60h] BYREF
    const char *v28; // [sp+4h] [bp-5Ch]
    int *v29; // [sp+Ch] [bp-54h]
    int *v30; // [sp+1Ch] [bp-44h]
    int *v31; // [sp+2Ch] [bp-34h]
    float v32[12]; // [sp+30h] [bp-30h] BYREF
  
    v1 = (int **)a1;
    v2 = a1 + 156;
    v3 = *(_DWORD *)(a1 + 156);
    v4 = *(_DWORD *)(v2 + 4);
    v5 = *(_DWORD *)(v2 + 8);
    v6 = v4 & 0xFFFFFF;
    v7 = v3 & 0xFFFFFF;
    v8 = (float *)(((v4 >> 20) & 0xFF0) + 11773060);
    v9 = (float *)(((v3 >> 20) & 0xFF0) + 11773060);
    v10 = (float)(unsigned int)v7;
    v11 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
    v12 = (float)(unsigned int)v6 * 0.000000059605;
    v13 = *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v11 * *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A490));
    v14 = v8[2] + (float)(v12 * v8[3]);
    v15 = *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A484) + (float)(v11 * *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A488));
    v16 = *v8 + (float)(v12 * v8[1]);
    v17 = v9[2] + (float)((float)(v10 * 0.000000059605) * v9[3]);
    v18 = *v9 + (float)((float)(v10 * 0.000000059605) * v9[1]);
    v32[0] = v14 * v13;
    v32[4] = v14 * v15;
    v32[8] = -v16;
    v32[1] = (float)((float)(v18 * v16) * v13) - (float)(v17 * v15);
    v32[5] = (float)(v17 * v13) + (float)((float)(v18 * v16) * v15);
    v32[9] = v18 * v14;
    v32[2] = (float)(v16 * (float)(v17 * v13)) + (float)(v18 * v15);
    v32[6] = (float)(v16 * (float)(v17 * v15)) - (float)(v18 * v13);
    v32[10] = v17 * v14;
    LODWORD(v32[3]) = v1[27];
    LODWORD(v32[7]) = v1[28];
    LODWORD(v32[11]) = v1[29];
    v19 = v1[1540];
    v1 += 1540;
    (*(void (__fastcall **)(int, float *))(*(_DWORD *)*v19 + 60))(*v19, v32);
    (*(void (__fastcall **)(int, int **))(*(_DWORD *)**v1 + 68))(**v1, v1 - 1504);
    Animation_update(*(_DWORD *)(*v1)[3]);
    (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 52))(**v1);
    (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 56))(**v1);
    v20 = **v1;
    v21 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v20 + 84);
    v27 = 12321336;
    v28 = "P_body";
    v22 = v21(v20, &v27);
    (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)**v1 + 108))(**v1, v22, &v27);
    v1[167] = v29;
    v1[168] = v30;
    v1[169] = v31;
    v23 = **v1;
    v24 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v23 + 84);
    v27 = 12321336;
    v28 = "eff";
    v25 = v24(v23, &v27);
    (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)**v1 + 108))(**v1, v25, &v27);
    *(v1 - 9) = v29;
    *(v1 - 8) = v30;
    result = v31;
    *(v1 - 7) = v31;
    return result;
  }

/* ============================================================================
 * sub_6046C3AC
 * RVA 0x0046c3ac   size 0x398   xrefs 6
 * ============================================================================ */
  int __fastcall sub_6046C3AC(int a1)
  {
    int v1; // s0
    int result; // r0
    int *v4; // r5
    float v5; // s0
    float v6; // s4
    float v7; // s2
    char v8; // r1
    float v9; // s2
    int v10; // r1
    int v11; // r1
    int v12; // r0
    float *v13; // r2
    float v14; // s0
    float v15; // s2
    bool v16; // fzf
    int v17; // r0
    bool v18; // nf
  
    v4 = (int *)(a1 + 6840);
    result = *(_DWORD *)(a1 + 6840);
    switch ( result )
    {
      case 0:
        sub_60462B7C(a1);
        *(_DWORD *)(a1 + 116) = v1;
        *(_DWORD *)(a1 + 6848) = 32;
        if ( *(_DWORD *)(a1 + 6864) == 3 )
        {
          v5 = 1.8;
          v6 = 0.0;
          v7 = 2.5;
          v8 = 1;
          *(_DWORD *)(a1 + 100) = -1119879168;
          *(_DWORD *)(a1 + 132) = 0;
          *(_DWORD *)(a1 + 104) = 1031798784;
          result = 2;
        }
        else
        {
          v7 = 0.0;
          v5 = -0.5;
          v6 = 3.5;
          v8 = 0;
          *(_DWORD *)(a1 + 100) = MEMORY[0xC9D67C];
          *(_DWORD *)(a1 + 132) = MEMORY[0xB025DC];
          result = 1;
        }
        *(float *)(a1 + 120) = v7;
        *(float *)(a1 + 124) = v6;
        *(_DWORD *)(a1 + 128) = 0;
        *(float *)(a1 + 136) = v5;
        *(_DWORD *)(a1 + 140) = 0;
        *(_BYTE *)(a1 + 6856) = v8;
        *v4 = result;
        return result;
      case 1:
        if ( *(float *)(a1 + 124) < 0.0 )
        {
          *(_DWORD *)(a1 + 6860) = 0;
          if ( *(float *)(a1 + 120) < 0.0 )
            *(_DWORD *)(a1 + 6860) = 1;
          *(_BYTE *)(a1 + 6856) = 1;
          *(_DWORD *)(a1 + 120) = 0;
          *(_DWORD *)(a1 + 124) = 0;
          *v4 = 3;
          return 3;
        }
        return result;
      case 2:
        StageActor::accelerateX((float *)a1);
        result = StageAcor_handleYspeed(a1);
        v9 = *(float *)(a1 + 120);
        *(float *)(a1 + 108) = *(float *)(a1 + 108) + v9;
        *(float *)(a1 + 112) = *(float *)(a1 + 112) + *(float *)(a1 + 124);
        *(float *)(a1 + 116) = *(float *)(a1 + 116) + *(float *)(a1 + 128);
        if ( v9 == 0.0 )
        {
          *(_DWORD *)(a1 + 6860) = v9 < 0.0;
          *v4 = 3;
          *(_DWORD *)(a1 + 120) = 0;
          *(_DWORD *)(a1 + 124) = 0;
          return 0;
        }
        return result;
      case 3:
        result = a1 + 6848;
        v10 = *(_DWORD *)(a1 + 6848);
        if ( !v10 || (v11 = v10 - 1, (*(_DWORD *)result = v11) == 0) )
        {
          *v4 = 4;
          *(_BYTE *)(a1 + 6856) = 1;
          *(_DWORD *)(a1 + 6844) = 0;
          *(_DWORD *)(a1 + 136) = -1078774989;
          *(_DWORD *)(a1 + 120) = 0;
          *(_DWORD *)(a1 + 124) = 0;
          *(_DWORD *)(a1 + 128) = 0;
          *(_DWORD *)(a1 + 100) = 1023410176;
          *(_DWORD *)(a1 + 104) = 1023410176;
          v12 = sub_60465D48(MEMORY[0xC9D3E4]);
          v13 = (float *)&unk_60AF2158;
          if ( v12 )
            v13 = flt_60AF1EA0;
          result = LODWORD(v13[*(_DWORD *)(a1 + 6860)]);
          *(_DWORD *)(a1 + 132) = result;
        }
        return result;
      default:
        v14 = *(float *)(a1 + 124);
        v15 = *(float *)(a1 + 136);
        if ( v14 < v15 )
        {
          v14 = v14 + *(float *)(a1 + 100);
          if ( v14 <= v15 )
            goto LABEL_29;
  LABEL_25:
          *(float *)(a1 + 124) = v15;
          v17 = *(_DWORD *)(a1 + 6844) + 1;
          v18 = *(_DWORD *)(a1 + 6844) - 4 < 0;
          *(_DWORD *)(a1 + 6844) = v17;
          if ( v18 ^ __OFSUB__(v17, 5) | (v17 == 5) )
          {
            v14 = v15;
            *(_DWORD *)(a1 + 136) = *(_DWORD *)(4 * v17 + 0xB0283C);
            *(_DWORD *)(a1 + 100) = *(_DWORD *)(4 * v17 + 0xB02854);
            if ( v17 == 5 )
              goto LABEL_30;
          }
          else
          {
            *(_DWORD *)(a1 + 6844) = 6;
          }
          goto LABEL_32;
        }
        if ( v14 <= v15 )
        {
          v16 = v14 == v15;
          v15 = *(float *)(a1 + 124);
          if ( v16 )
            goto LABEL_25;
        }
        else
        {
          v14 = v14 - *(float *)(a1 + 100);
          if ( v14 < v15 )
            goto LABEL_25;
        }
  LABEL_29:
        *(float *)(a1 + 124) = v14;
        if ( *(_DWORD *)(a1 + 6844) == 5 )
        {
  LABEL_30:
          if ( v14 >= 0.0 )
          {
            *(_DWORD *)(a1 + 100) = 1040187392;
            *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 6160) + 12) + 24) = 0x40000000;
          }
        }
  LABEL_32:
        result = (int)StageActor::accelerateX((float *)a1);
        *(float *)(a1 + 108) = *(float *)(a1 + 108) + *(float *)(a1 + 120);
        *(float *)(a1 + 112) = *(float *)(a1 + 112) + *(float *)(a1 + 124);
        *(float *)(a1 + 116) = *(float *)(a1 + 116) + *(float *)(a1 + 128);
        return result;
    }
  }

/* ============================================================================
 * SE_OBJ_ITEM_PRPL_APPEAR_ref
 * RVA 0x0046c768   size 0xd4   xrefs 0
 * ============================================================================ */
  int *__fastcall SE_OBJ_ITEM_PRPL_APPEAR_ref(int a1)
  {
    int v1; // r4
    float v2; // r1
    float v3; // r0
    float v5[2]; // [sp+0h] [bp-10h] BYREF
    float v6[2]; // [sp+8h] [bp-8h] BYREF
  
    *(_DWORD *)(a1 + 132) = MEMORY[0xB025DC];
    *(_DWORD *)(a1 + 136) = -1090519040;
    *(_DWORD *)(a1 + 140) = 0;
    *(_DWORD *)(a1 + 6840) = 1;
    *(_DWORD *)(a1 + 100) = MEMORY[0xC9D67C];
    *(_DWORD *)(a1 + 6848) = 32;
    *(_DWORD *)(a1 + 116) = 1165623296;
    *(_DWORD *)(a1 + 6220) = 8;
    *(_DWORD *)(a1 + 6228) = 0;
    *(_DWORD *)(a1 + 6224) = 0;
    *(_DWORD *)(a1 + 6864) = 2;
    *(_BYTE *)(a1 + 6856) = 0;
    v1 = MEMORY[0xC7F534];
    v2 = *(float *)(a1 + 108);
    v3 = *(float *)(a1 + 112);
    v6[0] = v2;
    v6[1] = v3;
    mapPositionToScreen(v5, v6);
    return BasicSoundActor2_play(v1, (int)"SE_OBJ_ITEM_PRPL_APPEAR", v5, nullptr);
  }

/* ============================================================================
 * SE_OBJ_ITEM_PRPL_APPEAR_ref_2
 * RVA 0x0046c854   size 0x270   xrefs 0
 * ============================================================================ */
  int *__fastcall SE_OBJ_ITEM_PRPL_APPEAR_ref_2(int a1)
  {
    int v1; // s0
    int v3; // r1
    int v4; // r1
    int v5; // r5
    unsigned int U32; // r0
    int v8; // r5
    float v9; // s20
    unsigned int v10; // r0
    int v11; // r1
    float v12; // s4
    int v13; // r4
    int v14; // r5
    int v15; // r0
    float v16[2]; // [sp+0h] [bp-10h] BYREF
    int v17; // [sp+8h] [bp-8h] BYREF
    int v18; // [sp+Ch] [bp-4h]
  
    sub_60462B7C(a1);
    *(_DWORD *)(a1 + 116) = v1;
    if ( *(_DWORD *)(a1 + 6216) )
    {
      *(_DWORD *)(a1 + 120) = dword_60AF2168[*(_DWORD *)(a1 + 80)];
      *(_DWORD *)(a1 + 124) = 1075838976;
      v3 = MEMORY[0xB025DC];
      *(_DWORD *)(a1 + 128) = 0;
      *(_DWORD *)(a1 + 132) = v3;
      *(_DWORD *)(a1 + 136) = -1090519040;
      *(_DWORD *)(a1 + 140) = 0;
      *(_DWORD *)(a1 + 6840) = 1;
      *(_DWORD *)(a1 + 100) = MEMORY[0xC9D67C];
      *(_DWORD *)(a1 + 6848) = 32;
      *(_DWORD *)(a1 + 116) = 1165623296;
      *(_DWORD *)(a1 + 6220) = 8;
      *(_DWORD *)(a1 + 6228) = 0;
      *(_DWORD *)(a1 + 6224) = 0;
      *(_DWORD *)(a1 + 6864) = 2;
      *(_BYTE *)(a1 + 6856) = 0;
      v4 = *(_DWORD *)(a1 + 112);
      v5 = MEMORY[0xC7F534];
      v17 = *(_DWORD *)(a1 + 108);
      v18 = v4;
      mapPositionToScreen(v16, (float *)&v17);
      return BasicSoundActor2_play(v5, (int)"SE_OBJ_ITEM_PRPL_APPEAR", v16, nullptr);
    }
    else
    {
      U32 = sead::Random::getU32((int *)(MEMORY[0xC9CF0C] + 1340));
      v8 = *(_DWORD *)(a1 + 80);
      v9 = COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0;
      v10 = sead::Random::getU32((int *)(MEMORY[0xC9CF0C] + 1340));
      v11 = MEMORY[0xB025DC];
      v12 = -(float)((float)(v9 * 0.5) + 0.5);
      if ( v8 != 1 )
        v12 = (float)(v9 * 0.5) + 0.5;
      *(float *)(a1 + 120) = v12;
      *(float *)(a1 + 124) = (float)((float)((float)(COERCE_FLOAT((v10 >> 9) | 0x3F800000) + -1.0) * 1.1) + 3.5) + -1.0;
      *(_DWORD *)(a1 + 128) = 0;
      *(_DWORD *)(a1 + 132) = v11;
      *(_DWORD *)(a1 + 136) = -1090519040;
      *(_DWORD *)(a1 + 140) = 0;
      *(_DWORD *)(a1 + 6840) = 1;
      *(_DWORD *)(a1 + 100) = MEMORY[0xC9D67C];
      *(_DWORD *)(a1 + 6848) = 32;
      v13 = a1 + 6848;
      *(_DWORD *)(v13 - 6732) = 1165623296;
      *(_DWORD *)(v13 + 16) = 2;
      *(_DWORD *)(v13 - 628) = 8;
      *(_DWORD *)(v13 - 624) = 0;
      *(_DWORD *)(v13 - 620) = 0;
      *(_BYTE *)(v13 + 8) = 0;
      v14 = MEMORY[0xC7F534];
      v15 = *(_DWORD *)(v13 - 6736);
      v17 = *(_DWORD *)(v13 - 6740);
      v18 = v15;
      mapPositionToScreen(v16, (float *)&v17);
      BasicSoundActor2_play(v14, (int)"SE_OBJ_ITEM_PRPL_APPEAR", v16, nullptr);
      *(_DWORD *)v13 = 64;
      return (int *)64;
    }
  }

/* ============================================================================
 * I_musasabiP_ref_2
 * RVA 0x0046d6e4   size 0x2c4   xrefs 0
 * ============================================================================ */
  int sub_6046D6E4()
  {
    _DWORD v1[2]; // [sp+Ch] [bp-8h] BYREF
  
    unk_60C9D720 = 12321336;
    unk_60C9D724 = "I_musasabi";
    dword_60C9D728 = 12321336;
    dword_60C9D72C = (int)"I_star";
    dword_60C9D730 = 12321336;
    unk_60C9D734 = "I_kinoko";
    unk_60C9D738 = 12321336;
    unk_60C9D73C = "I_fireflower";
    dword_60C9D740 = 12321336;
    dword_60C9D744 = (int)"I_iceflower";
    dword_60C9D748 = 12321336;
    dword_60C9D74C = (int)"I_musasabi";
    dword_60C9D750 = 12321336;
    dword_60C9D754 = (int)"I_kinoko";
    sub_60000288();
    dword_60C9D758 = 12321336;
    unk_60C9D75C = "I_musasabiP";
    unk_60C9D760 = 12321336;
    unk_60C9D764 = "I_star";
    dword_60C9D768 = 12321336;
    unk_60C9D76C = "I_kinoko";
    unk_60C9D770 = 12321336;
    unk_60C9D774 = "I_fireflower";
    dword_60C9D778 = 12321336;
    dword_60C9D77C = (int)"I_iceflower";
    dword_60C9D780 = 12321336;
    dword_60C9D784 = (int)"I_musasabi";
    dword_60C9D788 = 12321336;
    dword_60C9D78C = (int)"I_kinoko";
    sub_60000288();
    dword_60C9D790 = 12321336;
    unk_60C9D794 = "wait2";
    unk_60C9D798 = 12321336;
    dword_60C9D79C = (int)"wait";
    dword_60C9D7A0 = 12321336;
    dword_60C9D7A4 = (int)"wait";
    dword_60C9D7A8 = 12321336;
    dword_60C9D7AC = (int)"wait";
    dword_60C9D7B0 = 12321336;
    dword_60C9D7B4 = (int)"wait";
    dword_60C9D7B8 = 12321336;
    dword_60C9D7BC = (int)"wait";
    dword_60C9D7C0 = 12321336;
    dword_60C9D7C4 = (int)"wait";
    sub_60000288();
    v1[0] = 12321336;
    v1[1] = &unk_60AC9980;
    Profile::Profile(13227656, 4643396, MEMORY[0xAF3464], (int)v1, &unk_60B0286C, 2);
    MEMORY[0xC9D6A4] = MEMORY[0xC7B788] + 1;
    MEMORY[0xC9D6A0] = 12567748;
    MEMORY[0xC9D6A8] = 4643516;
    MEMORY[0xC9D6AC] = 0;
    MEMORY[0xC9D6B0] = 4643544;
    MEMORY[0xC9D6B4] = 0;
    MEMORY[0xC9D6B8] = 4643604;
    MEMORY[0xC9D6BC] = 0;
    MEMORY[0xC9D6C0] = 12567748;
    MEMORY[0xC9D6C4] = MEMORY[0xC7B788] + 2;
    MEMORY[0xC9D6C8] = 4643608;
    MEMORY[0xC9D6CC] = 0;
    MEMORY[0xC9D6D0] = 4643736;
    MEMORY[0xC9D6D4] = 0;
    MEMORY[0xC9D6D8] = 4643984;
    MEMORY[0xC9D6DC] = 0;
    MEMORY[0xC9D6E0] = 12567748;
    MEMORY[0xC9D6E4] = MEMORY[0xC7B788] + 3;
    MEMORY[0xC7B788] += 4;
    MEMORY[0xC9D704] = MEMORY[0xC7B788];
    MEMORY[0xC9D6E8] = 4643988;
    MEMORY[0xC9D700] = 12567748;
    MEMORY[0xC9D6EC] = 0;
    MEMORY[0xC9D708] = 4644000;
    MEMORY[0xC9D6F0] = 4643992;
    MEMORY[0xC9D70C] = 0;
    MEMORY[0xC9D6F4] = 0;
    MEMORY[0xC9D710] = 4644004;
    MEMORY[0xC9D6F8] = 4643996;
    MEMORY[0xC9D6FC] = 0;
    MEMORY[0xC9D714] = 0;
    MEMORY[0xC9D718] = 4644008;
    MEMORY[0xC9D71C] = 0;
    return 13227776;
  }

/* ============================================================================
 * Actor_Quest_Item_build
 * RVA 0x0046da44   size 0x6c   xrefs 0
 * ============================================================================ */
  _DWORD *Actor_Quest_Item_build()
  {
    _DWORD *v0; // r5
  
    v0 = (_DWORD *)operator new(0x18A0u);
    StateActor_ctor(v0);
    *v0 = 12567548;
    v0[1531] = 0;
    EffectWrapper_ctor((int)(v0 + 1536));
    v0[1536] = 12325968;
    PlayerLookTarget_ctor((int)(v0 + 1562), v0[2]);
    return v0;
  }

/* ============================================================================
 * SE_SYS_KINO_GIVE_ITEM_ref
 * RVA 0x0046db18   size 0x78   xrefs 0
 * ============================================================================ */
  int *__fastcall SE_SYS_KINO_GIVE_ITEM_ref(float *a1)
  {
    int v1; // r4
    float v2; // r1
    float v3; // r0
    float v5[2]; // [sp+0h] [bp-10h] BYREF
    float v6[2]; // [sp+8h] [bp-8h] BYREF
  
    a1[30] = 0.0;
    a1[31] = 2.8;
    a1[32] = 0.0;
    a1[1527] = NAN;
    v1 = MEMORY[0xC7F534];
    v2 = a1[27];
    v3 = a1[28];
    v6[0] = v2;
    v6[1] = v3;
    mapPositionToScreen(v5, v6);
    return BasicSoundActor2_play(v1, (int)"SE_SYS_KINO_GIVE_ITEM", v5, nullptr);
  }

/* ============================================================================
 * sub_6046DD80
 * RVA 0x0046dd80   size 0x1d8   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6046DD80(int a1)
  {
    _DWORD *v2; // r4
    int Resource; // r5
    int Model2; // r6
    int v5; // r7
    _DWORD *v6; // r0
    int v7; // r5
    int v8; // r0
    int *v9; // r0
    int v10; // r5
    int *v11; // r8
    int v12; // r0
    int v13; // r0
    _DWORD v15[2]; // [sp+14h] [bp-10h] BYREF
    _DWORD v16[2]; // [sp+1Ch] [bp-8h] BYREF
  
    v2 = (_DWORD *)(a1 + 6140);
    Resource = LoadResource(MEMORY[0xC9CA88], (_DWORD *)&unk_60C9D720 + 2 * *(_DWORD *)(a1 + 6140));
    Model2 = Resource_getModel2(Resource, (int)&unk_60C9D720 + 8 * *v2 + 56, 1, 1, 0, 0, 0, 0, 0);
    v5 = operator new(48, 0, 4);
    v6 = ModelWrapper_ctor((_DWORD *)v5, Model2, 1, 1, 0, 0, 0);
    ModelWrapper_setup(v6, Resource, 0, 0);
    *(v2 - 10) = v5;
    v7 = **(_DWORD **)(v5 + 12);
    v8 = LoadResource(MEMORY[0xC9CA88], (_DWORD *)&unk_60C9D720 + 2 * *v2);
    SkeletalAnim_play(v7, v8, &dword_60C9D790[2 * *v2]);
    *(_DWORD *)(**(_DWORD **)(*(v2 - 10) + 12) + 24) = 1065353216;
    AnimationCtrl_setRepeat(**(_DWORD **)(*(v2 - 10) + 12) + 4, 1);
    sub_6041838C(**(_DWORD **)(*(v2 - 10) + 12) + 4);
    if ( *v2 == 6 )
    {
      v9 = *(int **)(*(v2 - 10) + 20);
      v10 = *v9;
      *(_DWORD *)(a1 + 6104) = *v9;
      v11 = (int *)(a1 + 6104);
      v16[0] = 12321336;
      v16[1] = "I_kinoko";
      v12 = LoadResource(MEMORY[0xC9CA88], v16);
      v15[0] = 12321336;
      v15[1] = "I_kinoko_switch";
      TexAnim_play(v10, v12, v15);
      AnimationCtrl_setRepeat(*v11 + 4, 0);
      v13 = *v11;
      *(_DWORD *)(v13 + 20) = 0x40000000;
      *(_DWORD *)(v13 + 28) |= 2u;
      *(_DWORD *)(*v11 + 24) = 0;
    }
    return 1;
  }

/* ============================================================================
 * sub_6046DF74
 * RVA 0x0046df74   size 0x24c   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6046DF74(int a1)
  {
    int **v2; // r6
    int result; // r0
    int v4; // r0
    int (__fastcall *v5)(int, _DWORD *); // r2
    int v6; // r0
    _DWORD v7[11]; // [sp+0h] [bp-60h] BYREF
    int v8; // [sp+2Ch] [bp-34h]
    float v9; // [sp+30h] [bp-30h] BYREF
    float v10; // [sp+34h] [bp-2Ch]
    float v11; // [sp+38h] [bp-28h]
    float v12; // [sp+3Ch] [bp-24h]
    float v13; // [sp+40h] [bp-20h]
    float v14; // [sp+44h] [bp-1Ch]
    float v15; // [sp+48h] [bp-18h]
    float v16; // [sp+4Ch] [bp-14h]
    float v17; // [sp+50h] [bp-10h]
    float v18; // [sp+54h] [bp-Ch]
    float v19; // [sp+58h] [bp-8h]
    float v20; // [sp+5Ch] [bp-4h]
  
    v9 = 1.0;
    v10 = 0.0;
    v11 = 0.0;
    v13 = 0.0;
    v14 = 1.0;
    v15 = 0.0;
    v17 = 0.0;
    v18 = 0.0;
    v19 = 1.0;
    v12 = *(float *)(a1 + 108);
    v16 = *(float *)(a1 + 112);
    v20 = *(float *)(a1 + 116);
    Mtx34_rotateY(&v9, a1 + 160);
    Mtx34_rotateX(&v9, a1 + 156);
    v12 = v12 + (float)((float)((float)(v10 * 8.0) + (float)(v9 * 0.0)) + (float)(v11 * 0.0));
    v16 = v16 + (float)((float)((float)(v14 * 8.0) + (float)(v13 * 0.0)) + (float)(v15 * 0.0));
    v20 = v20 + (float)((float)((float)(v18 * 8.0) + (float)(v17 * 0.0)) + (float)(v19 * 0.0));
    Mtx34_rotateZ(&v9, a1 + 164);
    v12 = v12 + (float)((float)((float)(v9 * 0.0) - (float)(v10 * 8.0)) + (float)(v11 * 0.0));
    v16 = v16 + (float)((float)((float)(v13 * 0.0) - (float)(v14 * 8.0)) + (float)(v15 * 0.0));
    v20 = v20 + (float)((float)((float)(v17 * 0.0) - (float)(v18 * 8.0)) + (float)(v19 * 0.0));
    v2 = (int **)(a1 + 6100);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6100) + 60))(**(_DWORD **)(a1 + 6100), &v9);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)**v2 + 68))(**v2, a1 + 144);
    (*(void (__fastcall **)(int))(*(_DWORD *)**v2 + 52))(**v2);
    (*(void (__fastcall **)(int))(*(_DWORD *)**v2 + 56))(**v2);
    result = *(_DWORD *)(a1 + 6140);
    if ( result == 1 )
    {
      v4 = **v2;
      v5 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v4 + 84);
      v7[0] = 12321336;
      v7[1] = "star";
      v6 = v5(v4, v7);
      (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v6, v7);
      *(_DWORD *)(a1 + 6128) = v7[3];
      *(_DWORD *)(a1 + 6132) = v7[7];
      result = v8;
      *(_DWORD *)(a1 + 6136) = v8;
    }
    return result;
  }

/* ============================================================================
 * Actor_resuta_build
 * RVA 0x0046e490   size 0x80   xrefs 0
 * ============================================================================ */
  int __fastcall Actor_resuta_build(int a1)
  {
    int v2; // r0
    int result; // r0
    int v4; // r2
    int v5; // r3
  
    v2 = operator new(0x7Cu);
    result = Actor::Actor(v2, a1);
    *(_DWORD *)result = 12567780;
    v4 = *(_DWORD *)(a1 + 20);
    v5 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(result + 80) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(result + 84) = v4;
    *(_DWORD *)(result + 88) = v5;
    *(_BYTE *)(result + 92) = *(_BYTE *)(a1 + 32);
    *(_DWORD *)(result + 96) = *(_DWORD *)(result + 20) >> 28;
    *(_BYTE *)(result + 100) = 0;
    *(_BYTE *)(result + 101) = 1;
    *(_DWORD *)(result + 104) = 2139095039;
    *(_DWORD *)(result + 108) = 2139095039;
    *(_DWORD *)(result + 112) = -8388609;
    *(_DWORD *)(result + 116) = -8388609;
    *(_DWORD *)(result + 120) = 0;
    return result;
  }

/* ============================================================================
 * sub_6046E5D4
 * RVA 0x0046e5d4   size 0x230   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6046E5D4(int (__fastcall **a1)(_DWORD))
  {
    int v2; // r6
    int v3; // r4
    int (__fastcall ****v4)(_DWORD, int); // r5
    _DWORD *v5; // r6
    int (__fastcall ****v6)(_DWORD, int); // t1
    int (__fastcall ***v7)(_DWORD, int); // r7
    int v8; // r1
    _DWORD *v9; // r2
    unsigned int v10; // r0
    bool v11; // zf
    unsigned int v12; // r3
    _DWORD *v13; // r0
    _DWORD *v14; // r1
    int v15; // r3
    int result; // r0
    int (__fastcall **v17[2])(_DWORD); // [sp+10h] [bp-54h] BYREF
    int v18; // [sp+18h] [bp-4Ch] BYREF
    int v19; // [sp+1Ch] [bp-48h]
    _DWORD *v20; // [sp+20h] [bp-44h]
    int v21; // [sp+24h] [bp-40h] BYREF
  
    v18 = 0;
    v19 = 0;
    v20 = nullptr;
    sub_608DEB0C(&v18, 16, &v21);
    v17[0] = (int (__fastcall **)(_DWORD))&unk_60BFC530;
    v17[1] = a1;
    v2 = MEMORY[0xC7B400];
    v3 = MEMORY[0xC7B400] + 27168;
    v4 = (int (__fastcall ****)(_DWORD, int))sub_60008D1C(
                                               MEMORY[0xC7B400] + 27168,
                                               v17,
                                               *(_DWORD *)(MEMORY[0xC7B400] + 27172));
    v6 = *(int (__fastcall *****)(_DWORD, int))(v2 + 27180);
    v5 = (_DWORD *)(v2 + 27180);
    if ( v4 != v6 )
    {
      do
      {
        if ( v18 >= v19 )
          break;
        v7 = *v4;
        if ( _cxa_guard_acquire_0(13228004) )
        {
          MEMORY[0xC9D7E0] = 12320920;
          _cxa_guard_release_0(13228004);
        }
        if ( v7 && (**v7)(v7, 13228000) == 1 && v18 < v19 )
          v20[v18++] = v7;
        v4 = (int (__fastcall ****)(_DWORD, int))sub_60008D1C(v3, v17, (unsigned int)(v4 + 1));
      }
      while ( v4 != (int (__fastcall ****)(_DWORD, int))*v5 );
    }
    v8 = v18;
    if ( v18 )
    {
      v9 = v20;
      v10 = 4 * v18 - 4;
      v11 = ((v10 >> 2) & 1) == 0;
      v12 = v10 >> 2;
      v13 = v20;
      if ( v11 )
      {
        *(_BYTE *)(*v20 + 100) = 0;
        v13 = v9 + 1;
        *(_BYTE *)(*v9 + 101) = 0;
      }
      if ( v12 )
      {
        v14 = &v9[v8];
        do
        {
          *(_BYTE *)(*v13 + 100) = 0;
          *(_BYTE *)(*v13 + 101) = 0;
          *(_BYTE *)(v13[1] + 100) = 0;
          v15 = v13[1];
          v13 += 2;
          *(_BYTE *)(v15 + 101) = 0;
        }
        while ( v13 != v14 );
      }
    }
    sub_608DEBEC(&v18, MEMORY[0xC9CF0C] + 1340);
    result = v18;
    if ( v18 )
    {
      result = *v20;
      if ( *v20 )
        *(_BYTE *)(result + 100) = 1;
    }
    return result;
  }

/* ============================================================================
 * sub_6046E898
 * RVA 0x0046e898   size 0x258   xrefs 1
 * ============================================================================ */
  bool __fastcall sub_6046E898(int a1)
  {
    _BOOL4 result; // r0
    int v3; // r1
    int v4; // r5
    float *v5; // r0
    float v6; // s0
    float v7; // s0
    float *v8; // r0
    float v9; // s0
    float v10; // s0
    float *v11; // r0
    float v12; // s0
    float v13; // s0
    float *v14; // r0
    float v15; // s0
    float v16; // s0
  
    result = 0;
    v3 = *(_DWORD *)(a1 + 120);
    if ( v3 == 1 )
    {
      v4 = MEMORY[0xCC436C];
      if ( (*(_BYTE *)(MEMORY[0xCC436C] + 66) & 1) == 0
        || (v5 = (float *)sub_60788F54(MEMORY[0xCC436C], 0)) == nullptr
        || (v6 = v5[27] + v5[143], *(float *)(a1 + 104) > v6)
        || v6 > *(float *)(a1 + 112)
        || (v7 = v5[28] + v5[144], *(float *)(a1 + 108) > v7)
        || (result = 1, v7 > *(float *)(a1 + 116)) )
      {
        if ( (*(_BYTE *)(v4 + 66) & 2) == 0
          || (v8 = (float *)sub_60788F54(v4, 1u)) == nullptr
          || (v9 = v8[27] + v8[143], *(float *)(a1 + 104) > v9)
          || v9 > *(float *)(a1 + 112)
          || (v10 = v8[28] + v8[144], *(float *)(a1 + 108) > v10)
          || (result = 1, v10 > *(float *)(a1 + 116)) )
        {
          if ( (*(_BYTE *)(v4 + 66) & 4) == 0
            || (v11 = (float *)sub_60788F54(v4, 2u)) == nullptr
            || (v12 = v11[27] + v11[143], *(float *)(a1 + 104) > v12)
            || v12 > *(float *)(a1 + 112)
            || (v13 = v11[28] + v11[144], *(float *)(a1 + 108) > v13)
            || (result = 1, v13 > *(float *)(a1 + 116)) )
          {
            if ( (*(_BYTE *)(v4 + 66) & 8) != 0
              && (v14 = (float *)sub_60788F54(v4, 3u)) != nullptr
              && (v15 = v14[27] + v14[143], *(float *)(a1 + 104) <= v15)
              && v15 <= *(float *)(a1 + 112)
              && (v16 = v14[28] + v14[144], *(float *)(a1 + 108) <= v16) )
            {
              return v16 <= *(float *)(a1 + 116);
            }
            else
            {
              return 0;
            }
          }
        }
      }
    }
    else if ( !v3 )
    {
      return (float)(*(float *)(a1 + 80) + -32.0) <= *(float *)(MEMORY[0xCC6484] + 120);
    }
    return result;
  }

/* ============================================================================
 * Actor_suta_build
 * RVA 0x0046eda0   size 0x8c   xrefs 0
 * ============================================================================ */
  int sub_6046EDA0()
  {
    int v0; // r4
  
    v0 = operator new(6992);
    sub_60466BC4();
    *(_DWORD *)v0 = 12567868;
    LightMask::LightMask((LightMask *)(v0 + 6828));
    EffectWrapper_ctor(v0 + 6868);
    *(_DWORD *)(v0 + 6868) = 12325968;
    *(_WORD *)(v0 + 6988) = 0;
    *(_DWORD *)(v0 + 6984) = 0;
    *(_DWORD *)(v0 + 6980) = 0;
    *(_DWORD *)(v0 + 6972) = 0;
    *(_DWORD *)(v0 + 6976) = 0;
    return v0;
  }

/* ============================================================================
 * sub_6046EFC4
 * RVA 0x0046efc4   size 0x230   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6046EFC4(int a1)
  {
    int v2; // r5
    unsigned int v3; // r0
    unsigned int v4; // r1
    unsigned int v5; // r5
    int v6; // s2
    int v7; // s14
    float *v8; // r1
    float *v9; // r0
    float v10; // s14
    float v11; // s0
    float v12; // s2
    float v13; // s10
    float v14; // s5
    float v15; // s6
    float v16; // s1
    float v17; // s13
    float v18; // s9
    int **v19; // r5
    int v20; // r1
    int v21; // r0
    int (__fastcall *v22)(int, _DWORD *); // r2
    int v23; // r0
    int result; // r0
    _DWORD v25[11]; // [sp+0h] [bp-60h] BYREF
    int v26; // [sp+2Ch] [bp-34h]
    float v27[12]; // [sp+30h] [bp-30h] BYREF
  
    v2 = a1 + 156;
    v3 = *(_DWORD *)(a1 + 156);
    v4 = *(_DWORD *)(v2 + 4);
    v5 = *(_DWORD *)(v2 + 8);
    v6 = v4 & 0xFFFFFF;
    v7 = v3 & 0xFFFFFF;
    v8 = (float *)(((v4 >> 20) & 0xFF0) + 11773060);
    v9 = (float *)(((v3 >> 20) & 0xFF0) + 11773060);
    v10 = (float)(unsigned int)v7;
    v11 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
    v12 = (float)(unsigned int)v6 * 0.000000059605;
    v13 = *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v11 * *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A490));
    v14 = v8[2] + (float)(v12 * v8[3]);
    v15 = *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A484) + (float)(v11 * *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A488));
    v16 = *v8 + (float)(v12 * v8[1]);
    v17 = v9[2] + (float)((float)(v10 * 0.000000059605) * v9[3]);
    v18 = *v9 + (float)((float)(v10 * 0.000000059605) * v9[1]);
    v27[0] = v14 * v13;
    v27[4] = v14 * v15;
    v27[8] = -v16;
    v27[1] = (float)((float)(v18 * v16) * v13) - (float)(v17 * v15);
    v27[5] = (float)(v17 * v13) + (float)((float)(v18 * v16) * v15);
    v27[9] = v18 * v14;
    v27[2] = (float)(v16 * (float)(v17 * v13)) + (float)(v18 * v15);
    v27[6] = (float)(v16 * (float)(v17 * v15)) - (float)(v18 * v13);
    v27[10] = v17 * v14;
    v27[3] = *(float *)(a1 + 108);
    v27[7] = *(float *)(a1 + 112);
    v27[11] = *(float *)(a1 + 116);
    v19 = (int **)(a1 + 6160);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6160) + 60))(**(_DWORD **)(a1 + 6160), v27);
    if ( *(_BYTE *)(a1 + 6256) )
      v20 = a1 + 144;
    else
      v20 = a1 + 6304;
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6160) + 68))(**(_DWORD **)(a1 + 6160), v20);
    Animation_update(*(_DWORD *)(*v19)[3]);
    (*(void (__fastcall **)(int))(*(_DWORD *)**v19 + 52))(**v19);
    (*(void (__fastcall **)(int))(*(_DWORD *)**v19 + 56))(**v19);
    v21 = **v19;
    v22 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v21 + 84);
    v25[0] = 12321336;
    v25[1] = "star";
    v23 = v22(v21, v25);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v19 + 108))(**v19, v23, v25);
    *(_DWORD *)(a1 + 6972) = v25[3];
    *(_DWORD *)(a1 + 6976) = v25[7];
    result = v26;
    *(_DWORD *)(a1 + 6980) = v26;
    return result;
  }

/* ============================================================================
 * Actor_3UPmun_build
 * RVA 0x0046fec8   size 0x3c   xrefs 0
 * ============================================================================ */
  _DWORD *sub_6046FEC8()
  {
    _DWORD *result; // r0
  
    operator new(6832);
    result = (_DWORD *)sub_60466BC4();
    *result = 12568240;
    result[1707] = 0;
    return result;
  }

/* ============================================================================
 * I_moon_ref
 * RVA 0x0046ff08   size 0x13c   xrefs 0
 * ============================================================================ */
  int __fastcall I_moon_ref(int a1)
  {
    int v2; // r5
    int v3; // r9
    int Model2; // r8
    _DWORD *v5; // r7
    _DWORD *v6; // r0
    int v8; // [sp+18h] [bp-8h] BYREF
    const char *v9; // [sp+1Ch] [bp-4h]
  
    *(_DWORD *)(a1 + 6112) = *(_DWORD *)(a1 + 108);
    *(_DWORD *)(a1 + 6116) = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 6120) = *(_DWORD *)(a1 + 116);
    v2 = 2;
    if ( !sub_60461BE4(a1) )
    {
      v2 = 1;
      *(_BYTE *)(a1 + 6199) = 1;
      *(_DWORD *)(a1 + 6168) = 12;
      v8 = 12321336;
      v9 = "I_moon";
      v3 = LoadResource(MEMORY[0xC9CA88], &v8);
      *(_DWORD *)(a1 + 6828) = v3;
      v8 = 12321336;
      v9 = "I_moon";
      Model2 = Resource_getModel2(v3, (int)&v8, 1, 1, 0, 0, 0, 0, 0);
      v5 = (_DWORD *)operator new(0x30u, 0, 4);
      v6 = ModelWrapper_ctor(v5, Model2, 1, 1, 0, 0, 0);
      ModelWrapper_setup(v6, v3, 0, 0);
      *(_DWORD *)(a1 + 6160) = v5;
      sub_6046135C((_DWORD *)a1);
      sub_60461C50(a1);
      sub_60462018(a1);
    }
    return v2;
  }

/* ============================================================================
 * Actor_taitoruDemo_mid_Item_build
 * RVA 0x00470984   size 0x44   xrefs 0
 * ============================================================================ */
  _DWORD *Actor_taitoruDemo_mid_Item_build()
  {
    _DWORD *v0; // r0
    _DWORD *result; // r0
  
    v0 = (_DWORD *)operator new(0x17E0u);
    result = MultiStateActor::MultiStateActor(v0);
    *result = 12568592;
    result[1526] = 0;
    result[1527] = 0;
    return result;
  }

/* ============================================================================
 * sub_60470DD4
 * RVA 0x00470dd4   size 0x18c   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60470DD4(_DWORD *a1)
  {
    _DWORD **v1; // r4
    unsigned int v2; // r12
    unsigned int v3; // r1
    unsigned int v4; // r0
    int v5; // s0
    int v6; // s14
    float *v7; // r1
    float v8; // s0
    float v9; // s2
    float *v10; // r0
    float v11; // s14
    float v12; // s10
    float v13; // s6
    float v14; // s5
    float v15; // s1
    float v16; // s13
    float v17; // s9
    _DWORD *v18; // t1
    float v20[12]; // [sp+0h] [bp-30h] BYREF
  
    v1 = (_DWORD **)a1;
    v2 = a1[40];
    v3 = a1[41];
    v4 = a1[39];
    v5 = v3 & 0xFFFFFF;
    v6 = v4 & 0xFFFFFF;
    v7 = (float *)(((v3 >> 20) & 0xFF0) + 11773060);
    v8 = (float)(unsigned int)v5 * 0.000000059605;
    v9 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
    v10 = (float *)(((v4 >> 20) & 0xFF0) + 11773060);
    v11 = (float)(unsigned int)v6;
    v12 = v7[2] + (float)(v8 * v7[3]);
    v13 = *v7 + (float)(v8 * v7[1]);
    v14 = *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v9 * *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A490));
    v15 = *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A484) + (float)(v9 * *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A488));
    v16 = v10[2] + (float)((float)(v11 * 0.000000059605) * v10[3]);
    v17 = *v10 + (float)((float)(v11 * 0.000000059605) * v10[1]);
    v20[0] = v14 * v12;
    v20[4] = v14 * v13;
    v20[8] = -v15;
    v20[1] = (float)((float)(v17 * v15) * v12) - (float)(v16 * v13);
    v20[5] = (float)(v16 * v12) + (float)((float)(v17 * v15) * v13);
    v20[9] = v17 * v14;
    v20[2] = (float)(v15 * (float)(v16 * v12)) + (float)(v17 * v13);
    v20[6] = (float)(v15 * (float)(v16 * v13)) - (float)(v17 * v12);
    v20[10] = v16 * v14;
    LODWORD(v20[3]) = v1[27];
    LODWORD(v20[7]) = v1[28];
    LODWORD(v20[11]) = v1[29];
    v18 = v1[1526];
    v1 += 1526;
    (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v18 + 60))(*v18, v20);
    ModelWrapper_updateAnims((int)*v1);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 52))(**v1);
    return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 56))(**v1);
  }

/* ============================================================================
 * Actor_Battle_for_Item_2_build
 * RVA 0x00471228   size 0x64   xrefs 0
 * ============================================================================ */
  _DWORD *Actor_Battle_for_Item_2_build()
  {
    _DWORD *v0; // r0
    _DWORD *result; // r0
  
    v0 = (_DWORD *)operator new(0x17F0u);
    result = StateActor_ctor(v0);
    *result = 12568816;
    result[1530] = 0;
    result[1529] = 0;
    result[1528] = 0;
    result[1527] = 0;
    result[1525] = 0;
    result[1526] = 0;
    return result;
  }

/* ============================================================================
 * sub_604714E4
 * RVA 0x004714e4   size 0x194   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604714E4(int a1)
  {
    _DWORD *v2; // r4
    int Resource; // r5
    int Model2; // r6
    _DWORD *v5; // r7
    _DWORD *v6; // r0
    int result; // r0
    int v8; // r0
    int *v9; // r8
    int v10; // r1
    float v11; // s0
    int v12; // r0
    int v13; // [sp+18h] [bp-8h] BYREF
    const char *v14; // [sp+1Ch] [bp-4h]
  
    v2 = (_DWORD *)(a1 + 6112);
    Resource = LoadResource(MEMORY[0xC9CA88], &dword_60C9D920[2 * *(_DWORD *)(a1 + 6112)]);
    *(v2 - 3) = Resource;
    Model2 = Resource_getModel2(Resource, (int)&unk_60C9D960 + 8 * *v2, 1, 1, 0, 0, 0, 0, 0);
    v5 = (_DWORD *)operator new(48, 0, 4);
    v6 = ModelWrapper_ctor(v5, Model2, 1, 1, 0, 0, 0);
    ModelWrapper_setup(v6, Resource, 0, 0);
    *(v2 - 2) = v5;
    v13 = 12321336;
    v14 = "wait2";
    sub_6040F4B8((int)v5, (int)&v13, 1);
    result = *v2 | 4;
    if ( result == 4 )
    {
      v8 = **(_DWORD **)(*(v2 - 2) + 20);
      *(_DWORD *)(a1 + 6108) = v8;
      v9 = (int *)(a1 + 6108);
      v10 = *(v2 - 3);
      v13 = 12321336;
      v14 = "I_kinoko_switch";
      TexAnim_play(v8, v10, &v13);
      AnimationCtrl_setRepeat(*v9 + 4, 0);
      v11 = 2.0;
      v12 = *v9;
      if ( *v2 != 4 )
        v11 = 0.0;
      *(float *)(v12 + 20) = v11;
      *(_DWORD *)(v12 + 28) |= 2u;
      result = *v9;
      *(_DWORD *)(*v9 + 24) = 0;
    }
    return result;
  }

/* ============================================================================
 * sub_60471698
 * RVA 0x00471698   size 0x1b4   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60471698(int *a1)
  {
    int *v1; // r4
    int *v2; // r2
    unsigned int v3; // r0
    unsigned int v4; // r1
    unsigned int v5; // r2
    float v6; // s0
    float v7; // s2
    float v8; // s4
    float v9; // s12
    float v10; // s5
    float v11; // s8
    float v12; // s1
    float v13; // s9
    float v14; // s13
    _DWORD *v15; // t1
    float v16; // s2
    int v17; // r0
    float v18; // s4
    void (__fastcall *v19)(int, float *); // r2
    float v20; // s6
    float v22[3]; // [sp+4h] [bp-3Ch] BYREF
    float v23[12]; // [sp+10h] [bp-30h] BYREF
  
    v1 = a1;
    v2 = a1 + 39;
    v3 = a1[39];
    v4 = v2[1];
    v5 = v2[2];
    v6 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
    v7 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
    v8 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
    v9 = *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v6 * *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A490));
    v10 = *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v7 * *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A490));
    v11 = *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A484) + (float)(v6 * *(float *)(((v5 >> 20) & 0xFF0) + 0xB3A488));
    v12 = *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A484) + (float)(v7 * *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A488));
    v13 = *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A484) + (float)(v8 * *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A488));
    v14 = *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v8 * *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A490));
    v23[0] = (float)(v10 * v9) + (float)(v13 * (float)(v12 * v11));
    v23[4] = v14 * v11;
    v23[8] = (float)(v13 * (float)(v10 * v11)) - (float)(v12 * v9);
    v23[1] = (float)(v13 * (float)(v12 * v9)) - (float)(v10 * v11);
    v23[5] = v14 * v9;
    v23[9] = (float)(v12 * v11) + (float)(v13 * (float)(v10 * v9));
    v23[2] = v14 * v12;
    v23[6] = -v13;
    v23[10] = v14 * v10;
    LODWORD(v23[3]) = v1[27];
    LODWORD(v23[7]) = v1[28];
    LODWORD(v23[11]) = v1[29];
    v15 = (_DWORD *)v1[1526];
    v1 += 1526;
    (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v15 + 60))(*v15, v23);
    v16 = *((float *)v1 + 4);
    v17 = *(_DWORD *)*v1;
    v18 = v16 * *((float *)v1 - 1489);
    v19 = *(void (__fastcall **)(int, float *))(*(_DWORD *)v17 + 68);
    v20 = *((float *)v1 - 1488);
    v22[0] = v16 * *((float *)v1 - 1490);
    v22[1] = v18;
    v22[2] = v16 * v20;
    v19(v17, v22);
    ModelWrapper_updateAnims(*v1);
    return ModelWrapper_updateModel(*v1);
  }

/* ============================================================================
 * sub_60471B68
 * RVA 0x00471b68   size 0x1ac   xrefs 2
 * ============================================================================ */
  _DWORD *__fastcall sub_60471B68(_DWORD *a1)
  {
    _DWORD *v2; // r0
  
    *a1 = 12569036;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 0;
    a1[5] = 32;
    v2 = a1 + 6;
    a1[2] = v2;
    a1[6] = a1 + 31;
    a1[31] = a1 + 56;
    a1[56] = a1 + 81;
    a1[81] = a1 + 106;
    a1[106] = a1 + 131;
    a1[131] = a1 + 156;
    a1[156] = a1 + 181;
    a1[181] = a1 + 206;
    a1[206] = a1 + 231;
    a1[231] = a1 + 256;
    a1[256] = a1 + 281;
    a1[281] = a1 + 306;
    a1[306] = a1 + 331;
    a1[331] = a1 + 356;
    a1[356] = a1 + 381;
    a1[381] = a1 + 406;
    a1[406] = a1 + 431;
    a1[431] = a1 + 456;
    a1[456] = a1 + 481;
    a1[481] = a1 + 506;
    a1[506] = a1 + 531;
    a1[531] = a1 + 556;
    a1[556] = a1 + 581;
    a1[581] = a1 + 606;
    a1[606] = a1 + 631;
    a1[631] = a1 + 656;
    a1[656] = a1 + 681;
    a1[681] = a1 + 706;
    a1[706] = a1 + 731;
    a1[731] = a1 + 756;
    a1[756] = a1 + 781;
    a1[781] = 0;
    a1[3] = v2;
    sub_6047684C(a1 + 806);
    a1[817] = 0;
    a1[818] = 0;
    a1[819] = 0;
    a1[820] = 0;
    a1[821] = 0;
    a1[822] = 0;
    a1[823] = 0;
    a1[824] = 0;
    return a1;
  }

/* ============================================================================
 * sub_60471D18
 * RVA 0x00471d18   size 0x48   xrefs 4
 * ============================================================================ */
  _DWORD *__fastcall sub_60471D18(_DWORD *a1)
  {
    int v2; // r0
  
    *a1 = 12569036;
    v2 = a1[818];
    if ( v2 )
    {
      operator delete[](v2);
      a1[817] = 0;
      a1[818] = 0;
    }
    sub_608DEB70(a1 + 819);
    return a1;
  }

/* ============================================================================
 * sub_604721C8
 * RVA 0x004721c8   size 0x21c   xrefs 2
 * ============================================================================ */
  int __fastcall sub_604721C8(int a1, const char **a2, int a3)
  {
    int v4; // r6
    int (__fastcall ***v7)(_DWORD, int); // r5
    int v8; // r0
    _DWORD v10[67]; // [sp+0h] [bp-144h] BYREF
    _DWORD v11[2]; // [sp+10Ch] [bp-38h] BYREF
    int v12; // [sp+114h] [bp-30h]
    int v13; // [sp+118h] [bp-2Ch]
    int v14; // [sp+11Ch] [bp-28h]
    int v15; // [sp+120h] [bp-24h]
    int v16; // [sp+124h] [bp-20h]
    int v17; // [sp+128h] [bp-1Ch]
    int v18; // [sp+12Ch] [bp-18h]
    _DWORD *v19; // [sp+130h] [bp-14h]
    int v20; // [sp+134h] [bp-10h]
    int v21; // [sp+138h] [bp-Ch]
    char v22; // [sp+13Ch] [bp-8h]
    int v23; // [sp+140h] [bp-4h]
    _DWORD v24[8]; // [sp+144h] [bp+0h] BYREF
    int v25; // [sp+164h] [bp+20h] BYREF
    char *v26; // [sp+168h] [bp+24h]
    int v27; // [sp+16Ch] [bp+28h]
    char v28; // [sp+170h] [bp+2Ch] BYREF
  
    v4 = 0;
    v24[0] = 12962664;
    v24[4] = 0;
    v24[5] = 0;
    v24[6] = v24;
    v24[7] = 0;
    sead_IDisposer_ctor(v24);
    v24[0] = 12962664;
    v26 = &v28;
    v25 = 12322272;
    v27 = 32;
    sead::BufferedSafeStringBase<char>::assureTerminationImpl_(&v25);
    *v26 = MEMORY[0xB3BA34];
    v25 = 12405792;
    v24[0] = 12569140;
    v11[0] = 12321336;
    v11[1] = 11778612;
    v12 = 0;
    v13 = 0;
    v14 = 32;
    v21 = 0;
    v20 = 0;
    v19 = nullptr;
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v22 = 1;
    v23 = 0;
    (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
    sub_6017D5C0(v10, "Layout/anim_text/%s.bin", a2[1]);
    sead::SafeStringBase<char>::operator=(v11, v10);
    v13 = a3;
    v12 = a3;
    v19 = v24;
    v7 = (int (__fastcall ***)(_DWORD, int))sead_ResourceMgr_OpenFileRelated(MEMORY[0xCCEF7C], v11);
    if ( _cxa_guard_acquire_0(13220652) )
    {
      MEMORY[0xC9BB28] = 12558156;
      _cxa_guard_release_0(13220652);
    }
    if ( v7 )
    {
      v4 = (**v7)(v7, 13220648);
      if ( v4 )
        v4 = (int)v7;
    }
    sub_60902104(v24);
    if ( !v4 )
      return 0;
    v8 = sub_609051E4(v10, *(_DWORD *)(v4 + 4), *(_DWORD *)(v4 + 8), 0);
    sub_609052F4(v8, 0);
    sub_6047241C(a1, v10, a3);
    sub_60905250(v10);
    return 1;
  }

/* ============================================================================
 * sub_6047241C
 * RVA 0x0047241c   size 0x224   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6047241C(int a1, int a2, int a3)
  {
    int v5; // r8
    int result; // r0
    _DWORD *v7; // r6
    int v8; // r10
    _DWORD *v9; // r5
    _DWORD *v10; // r0
    unsigned __int8 *v11; // r7
    unsigned __int8 *v12; // r0
    int v13; // r1
    int v14; // r3
    bool v15; // nf
    int v16; // r0
    int v17; // r11
    unsigned __int8 *v18; // r4
    const void *v19; // r5
    signed int v20; // r7
    bool v21; // cc
    signed int v22; // r0
    int v23; // r1
    _DWORD *v24; // [sp+8h] [bp-6Ch]
    int v26; // [sp+10h] [bp-64h]
    int v27; // [sp+14h] [bp-60h] BYREF
    int v28; // [sp+18h] [bp-5Ch] BYREF
    unsigned __int8 *v29; // [sp+1Ch] [bp-58h]
    int v30; // [sp+64h] [bp-10h]
    int v31; // [sp+68h] [bp-Ch]
    __int16 v32; // [sp+6Ch] [bp-8h]
    int v33; // [sp+70h] [bp-4h] BYREF
  
    sub_60476920(a2, a1 + 3224);
    v5 = 0;
    v26 = a2;
    v33 = 0;
    sub_609054A8(a2, &v33);
    result = v33;
    if ( v33 >= 1 )
    {
      v7 = (_DWORD *)(a1 + 4);
      v24 = (_DWORD *)(a1 + 4);
      v8 = MEMORY[0xB3BA34];
      do
      {
        sub_60476898(&v28);
        sub_604769E0(v26, &v28);
        v9 = (_DWORD *)*v7;
        if ( *v7 )
        {
          while ( 1 )
          {
            (*(void (__fastcall **)(int *))(v28 + 12))(&v28);
            (*(void (__fastcall **)(int *))(v28 + 12))(&v28);
            v11 = v29;
            (*(void (__fastcall **)(_DWORD *))(v9[4] + 12))(v9 + 4);
            v12 = (unsigned __int8 *)v9[5];
            if ( v11 == v12 )
              break;
            v13 = 0;
            while ( 1 )
            {
              v14 = v29[v13];
              v15 = v14 - v12[v13] < 0;
              if ( v14 != v12[v13] )
                break;
              if ( v14 != v8 && ++v13 < 0x80000 )
                continue;
              if ( v9 )
                goto LABEL_27;
              goto LABEL_14;
            }
            v10 = v9 + 2;
            if ( v15 )
              v10 = v9 + 1;
            v9 = (_DWORD *)*v10;
            if ( !*v10 )
              goto LABEL_14;
          }
        }
        else
        {
  LABEL_14:
          v16 = operator new(88, a3, 4);
          v27 = sub_60476898(v16);
          sub_60472DBC(v7, &v28, &v27);
          v17 = v27;
          v18 = *(unsigned __int8 **)(v27 + 4);
          (*(void (__fastcall **)(int *))(v28 + 12))(&v28);
          v19 = v29;
          if ( v18 != v29 )
          {
            (*(void (__fastcall **)(int *))(v28 + 12))(&v28);
            v20 = 0;
            while ( v29[v20] != v8 )
            {
              if ( v29[v20 + 1] == v8 )
              {
                ++v20;
                break;
              }
              if ( v29[v20 + 2] == v8 )
              {
                v20 += 2;
                break;
              }
              v21 = v20 + 2 < 0x80000;
              v20 += 3;
              if ( !v21 )
              {
                v20 = 0;
                break;
              }
            }
            v22 = *(_DWORD *)(v17 + 8);
            if ( v20 >= v22 )
              v20 = v22 - 1;
            qmemcpy(v18, v19, v20);
            v18[v20] = v8;
          }
          *(_WORD *)(v17 + 84) = v32;
          v23 = v31;
          *(_DWORD *)(v17 + 76) = v30;
          *(_DWORD *)(v17 + 80) = v23;
          v7 = v24;
        }
  LABEL_27:
        result = v33;
        ++v5;
      }
      while ( v5 < v33 );
    }
    return result;
  }

/* ============================================================================
 * sub_60472644
 * RVA 0x00472644   size 0x314   xrefs 3
 * ============================================================================ */
  int __fastcall sub_60472644(int a1)
  {
    int result; // r0
    bool v3; // zf
    float *v4; // r8
    unsigned int v5; // r11
    int v6; // r6
    float *v7; // r9
    float i; // s16
    float v9; // s26
    float v10; // s0
    int v11; // r1
    float v12; // s24
    int v13; // r5
    unsigned int v14; // r7
    int v15; // r1
    float v16; // s2
    int v17; // r0
    float v18; // s24
    int v19; // r10
    int v20; // r7
    int v21; // r5
    float v22; // s0
    float v23; // s30
    float v24; // s28
    float v25; // s0
    float v26; // s17
    float v27; // s19
    int v28; // r0
    float v29; // s0
    float *v30; // [sp+0h] [bp-40h]
    float *v31; // [sp+4h] [bp-3Ch]
    int v32; // [sp+Ch] [bp-34h]
    int v33; // [sp+1Ch] [bp-24h]
    float v34; // [sp+20h] [bp-20h] BYREF
    float v35; // [sp+24h] [bp-1Ch]
    float v36; // [sp+28h] [bp-18h]
    float v37; // [sp+2Ch] [bp-14h]
    float v38[2]; // [sp+30h] [bp-10h] BYREF
    float v39; // [sp+38h] [bp-8h]
  
    result = *(_DWORD *)(a1 + 3272);
    v33 = result;
    if ( result )
    {
      result = *(_DWORD *)(a1 + 3284);
      v3 = result == 0;
      if ( result )
      {
        v32 = *(_DWORD *)(a1 + 3268);
        v3 = v32 == 0;
      }
      if ( !v3 )
      {
        v4 = (float *)(a1 + 3232);
        v5 = 0;
        v6 = 0;
        v31 = (float *)(a1 + 3240);
        v30 = (float *)(a1 + 3236);
        v7 = (float *)(a1 + 3228);
        for ( i = *(float *)(a1 + 3260); ; i = i - (float)(v9 + *(float *)(a1 + 3264)) )
        {
          v10 = 0.0;
          v11 = *(_DWORD *)(v33 + 4 * v6);
          if ( v11 >= 1 )
          {
            v10 = 0.0;
            if ( result )
            {
              v12 = 0.0;
              v13 = v11 + v5;
              v14 = v5;
              do
              {
                v15 = 0;
                if ( *(_DWORD *)(a1 + 3276) > v14 )
                  v15 = *(_DWORD *)(*(_DWORD *)(a1 + 3284) + 4 * v14);
                if ( *(_BYTE *)(a1 + 3224) )
                {
                  v16 = *v7;
                }
                else
                {
                  sub_6085D270(v38, v15);
                  v16 = v39 - v38[0];
                }
                ++v14;
                v12 = v12 + (float)(v16 + *v4);
              }
              while ( (int)v14 < v13 );
              v10 = v12 - *v4;
            }
          }
          v17 = *(_DWORD *)(a1 + 3244);
          if ( v17 )
          {
            if ( v17 == 2 )
            {
              v18 = *v31 - v10;
            }
            else
            {
              v18 = 0.0;
              if ( v17 == 1 )
                v18 = *v30;
            }
          }
          else
          {
            v18 = *v30 + (float)((float)((float)(*v31 - *v30) - v10) * 0.5);
          }
          if ( *(int *)(v33 + 4 * v6) < 1 )
          {
            v9 = 0.0;
          }
          else
          {
            v9 = 0.0;
            v19 = 0;
            do
            {
              v20 = 0;
              v21 = 0;
              if ( *(_DWORD *)(a1 + 3276) > v5 )
              {
                v20 = *(_DWORD *)(*(_DWORD *)(a1 + 3284) + 4 * v5);
                v21 = v20;
              }
              sub_6085D270(&v34, v20);
              v22 = v36 - v34;
              if ( (float)(v36 - v34) <= 0.0 )
                v22 = -(float)(v36 - v34);
              v23 = v18 + (float)(v22 * 0.5);
              if ( (float)(v37 - v35) <= 0.0 )
                v24 = -(float)(v37 - v35);
              else
                v24 = v37 - v35;
              v25 = i;
              if ( *(_BYTE *)(a1 + 3248) )
              {
                v26 = *(float *)(a1 + 3256);
                v27 = *(float *)(a1 + 3252);
                v25 = (float)(i + v27)
                    + (float)((float)(v26 - v27)
                            * (float)(COERCE_FLOAT((sead::Random::getU32(MEMORY[0xCCF4E4]) >> 9) | 0x3F800000) + -1.0));
              }
              v28 = *(_DWORD *)(v21 + 12);
              if ( v9 <= v24 )
                v9 = v24;
              *(_DWORD *)(v28 + 32) = 0;
              *(float *)(v28 + 24) = v23;
              *(float *)(v28 + 28) = v25;
              *(_BYTE *)(v28 + 64) |= 0x10u;
              if ( *(_BYTE *)(a1 + 3224) )
              {
                v29 = *v7;
              }
              else
              {
                sub_6085D270(v38, v20);
                v29 = v39 - v38[0];
              }
              ++v19;
              ++v5;
              v18 = v18 + (float)(v29 + *v4);
            }
            while ( v19 < *(_DWORD *)(v33 + 4 * v6) );
          }
          result = v32;
          if ( ++v6 == v32 )
            break;
          result = *(_DWORD *)(a1 + 3284);
        }
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60472960
 * RVA 0x00472960   size 0x64   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60472960(int a1, int a2, int a3)
  {
    _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF
  
    *(_DWORD *)(a1 + 3244) = *(_BYTE *)(a2 + 218) & 3;
    *(_DWORD *)(a1 + 3264) = *(_DWORD *)(a2 + 200);
    sub_60858A78(v5, a3);
    *(_DWORD *)(a1 + 3236) = v5[0];
    *(_DWORD *)(a1 + 3240) = v5[2];
    *(float *)(a1 + 3260) = (float)(*(float *)&v5[1] + *(float *)&v5[3]) * 0.5;
    return a1 + 3260;
  }

/* ============================================================================
 * sub_604729F0
 * RVA 0x004729f0   size 0xe8   xrefs 2
 * ============================================================================ */
  _DWORD *__fastcall sub_604729F0(_DWORD *result, _DWORD *a2)
  {
    int v2; // r8
    _DWORD *v4; // r7
    int v5; // r4
    _DWORD *v6; // r9
    int v7; // r2
    int v8; // r3
    bool v9; // nf
    int v10; // r0
  
    v2 = (int)result;
    v4 = (_DWORD *)result[1];
    if ( v4 )
    {
      v5 = MEMORY[0xB3BA34];
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v6 = (_DWORD *)a2[1];
        (*(void (__fastcall **)(_DWORD *))(v4[4] + 12))(v4 + 4);
        result = (_DWORD *)v4[5];
        if ( v6 == result )
        {
  LABEL_14:
          v10 = v4[6];
          *(_DWORD *)(v2 + 3296) = v10;
          if ( v10 )
          {
            if ( *(_BYTE *)(v10 + 84) )
              sub_60472644(v2);
          }
          *(_DWORD *)(v2 + 3288) = 0;
          return nullptr;
        }
        else
        {
          v7 = 0;
          while ( 1 )
          {
            v8 = *(unsigned __int8 *)(a2[1] + v7);
            v9 = v8 - *((unsigned __int8 *)result + v7) < 0;
            if ( v8 != *((unsigned __int8 *)result + v7) )
              break;
            if ( v8 != v5 && ++v7 < 0x80000 )
              continue;
            if ( !v4 )
              return result;
            goto LABEL_14;
          }
          result = v4 + 2;
          if ( v9 )
            result = v4 + 1;
          v4 = (_DWORD *)*result;
          if ( *result )
            continue;
        }
        break;
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60472ADC
 * RVA 0x00472adc   size 0x44   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60472ADC(int result)
  {
    float *v1; // r4
  
    if ( *(_DWORD *)(result + 3296) )
    {
      v1 = (float *)(result + 3288);
      result = sub_60472B20();
      *v1 = *v1 + 1.0;
    }
    return result;
  }

/* ============================================================================
 * sub_60472B20
 * RVA 0x00472b20   size 0x29c   xrefs 1
 * ============================================================================ */
  bool __fastcall sub_60472B20(_DWORD *a1)
  {
    float v1; // s0
    float v2; // s1
    int v4; // r6
    int v5; // r9
    int v6; // r0
    int v7; // r1
    int v8; // r8
    float v9; // s2
    unsigned int v10; // r1
    float v11; // s16
    float v12; // s0
    int v13; // r6
    bool v14; // cc
    int v15; // r7
    int v16; // r4
    int v17; // r1
    int v18; // r7
  
    v4 = 1;
    v5 = a1[824];
    if ( v5 )
    {
      v6 = a1[823];
      if ( v6 >= 1 )
      {
        if ( v6 == 1 )
        {
          (*(void (__fastcall **)(_DWORD *, _DWORD, int))(*a1 + 20))(a1, 0, v5);
          return v4;
        }
        v7 = *(_DWORD *)(v5 + 76);
        if ( v7 < 1 )
        {
          v10 = *(_DWORD *)(v5 + 80);
          v11 = 1.0;
          v8 = v6 - 1;
        }
        else
        {
          v8 = 0;
          v9 = (float)v7;
          v10 = *(_DWORD *)(v5 + 80);
          v11 = v1 / v9;
          if ( v10 <= 3 )
          {
            v12 = 1.0 / (float)(v6 - 1);
            v8 = (int)(float)((float)(v2 / v9) / v12);
            v13 = (int)(float)(v11 / v12);
            goto LABEL_10;
          }
        }
        v13 = 0;
  LABEL_10:
        switch ( v10 )
        {
          case 0u:
            v14 = v13 <= v8;
            if ( v13 <= v8 )
              v14 = v13 <= v6;
            for ( ; v14; v14 = v13++ < a1[823] )
            {
              (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, v13, v5);
              if ( v13 >= v8 )
                break;
            }
            return v11 >= 1.0;
          case 1u:
            if ( v13 <= v8 && v6 >= v13 )
            {
              v18 = ~v13;
              do
              {
                (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, v6 + v18, v5);
                if ( v13 >= v8 )
                  break;
                v6 = a1[823];
                --v18;
                v14 = v6 <= v13++;
              }
              while ( !v14 );
            }
            return v11 >= 1.0;
          case 2u:
            if ( v13 > v8 )
              return v11 >= 1.0;
            break;
          case 3u:
            if ( v13 <= v8 )
            {
              do
              {
                (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, v13 / 2, v5);
                (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, a1[823] + ~(v13 / 2), v5);
                v14 = v13++ < v8;
              }
              while ( v14 );
            }
            return v11 >= 1.0;
          default:
            return v11 >= 1.0;
        }
        while ( 1 )
        {
          v15 = v6 + ((unsigned int)v6 >> 31);
          if ( v6 % 2 == 1 )
          {
            v16 = (v6 - 1) / 2;
            (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, v16 - v13 / 2, v5);
            v17 = v16 + v13 / 2;
          }
          else
          {
            if ( !v13 )
              goto LABEL_26;
            (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, ~((v13 - 1) / 2) + v6 / 2, v5);
            v17 = (v15 >> 1) + (v13 - 1) / 2;
          }
          (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, v17, v5);
  LABEL_26:
          if ( v13 >= v8 )
            return v11 >= 1.0;
          v6 = a1[823];
          ++v13;
        }
      }
    }
    return v4;
  }

/* ============================================================================
 * sub_60472DBC
 * RVA 0x00472dbc   size 0x274   xrefs 1
 * ============================================================================ */
  _DWORD *__fastcall sub_60472DBC(int a1, _DWORD *a2, _DWORD *a3)
  {
    _DWORD *v6; // r1
    _DWORD *v7; // r6
    void *v8; // r8
    const void *v9; // r10
    _DWORD *v10; // r11
    char v11; // r7
    int v12; // r0
    signed int v13; // r5
    bool v14; // cc
    _DWORD *v15; // r6
    int v16; // r7
    int v17; // r9
    int v18; // r0
    int v19; // r2
    int v20; // r3
    bool v21; // nf
    _DWORD *v22; // r0
    _DWORD *v23; // r0
    int v25; // [sp+0h] [bp-Ch] BYREF
    _DWORD *v26; // [sp+4h] [bp-8h]
    int v27; // [sp+8h] [bp-4h]
  
    if ( *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a1 + 16) )
    {
      v15 = *(_DWORD **)a1;
      if ( *(_DWORD *)a1 )
      {
        v10 = nullptr;
        v16 = MEMORY[0xB3BA34];
        while ( 2 )
        {
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          v17 = a2[1];
          (*(void (__fastcall **)(_DWORD *))(v15[4] + 12))(v15 + 4);
          v18 = v15[5];
          if ( v17 == v18 )
          {
  LABEL_24:
            v15[6] = *a3;
            return v15 + 6;
          }
          else
          {
            v19 = 0;
            while ( 1 )
            {
              v20 = *(unsigned __int8 *)(a2[1] + v19);
              v21 = v20 - *(unsigned __int8 *)(v18 + v19) < 0;
              if ( v20 != *(unsigned __int8 *)(v18 + v19) )
                break;
              if ( v20 != v16 && ++v19 < 0x80000 )
                continue;
              if ( !v15 )
                return nullptr;
              goto LABEL_24;
            }
            v22 = v15 + 2;
            if ( v21 )
              v22 = v15 + 1;
            v15 = (_DWORD *)*v22;
            if ( *v22 )
              continue;
          }
          break;
        }
      }
      else
      {
        return nullptr;
      }
    }
    else
    {
      v6 = *(_DWORD **)(a1 + 4);
      v7 = nullptr;
      if ( v6 )
      {
        v7 = *(_DWORD **)(a1 + 4);
        *(_DWORD *)(a1 + 4) = *v6;
      }
      v7[4] = 12321336;
      v7[5] = 11778612;
      v7[1] = 0;
      v7[2] = 0;
      v7[3] = 0;
      *v7 = 12569180;
      v7[6] = *a3;
      v7[7] = a1;
      v26 = v7 + 8;
      v25 = 12322272;
      v27 = 65;
      sead::BufferedSafeStringBase<char>::assureTerminationImpl_(&v25);
      v8 = v26;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v9 = (const void *)a2[1];
      v10 = v7 + 6;
      if ( v8 != v9 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v11 = MEMORY[0xB3BA34];
        v12 = a2[1];
        v13 = 0;
        while ( *(unsigned __int8 *)(v12 + v13) != MEMORY[0xB3BA34] )
        {
          if ( *(unsigned __int8 *)(v12 + v13 + 1) == MEMORY[0xB3BA34] )
          {
            ++v13;
            break;
          }
          if ( *(unsigned __int8 *)(v12 + v13 + 2) == MEMORY[0xB3BA34] )
          {
            v13 += 2;
            break;
          }
          v14 = v13 + 2 < 0x80000;
          v13 += 3;
          if ( !v14 )
          {
            v13 = 0;
            break;
          }
        }
        if ( v13 >= v27 )
          v13 = v27 - 1;
        qmemcpy(v8, v9, v13);
        *((_BYTE *)v8 + v13) = v11;
      }
      sead::SafeStringBase<char>::operator=(v7 + 4, &v25);
      ++*(_DWORD *)(a1 + 12);
      v23 = sub_6041FD48(a1, *(_DWORD **)a1, v7);
      *(_DWORD *)a1 = v23;
      v23[3] = 1;
    }
    return v10;
  }

/* ============================================================================
 * sub_604734E4
 * RVA 0x004734e4   size 0x128   xrefs 142
 * ============================================================================ */
  int __fastcall sub_604734E4(_DWORD *a1, int a2)
  {
    int CurrentHeap; // r2
    int v5; // r6
    int v6; // r0
    int v7; // r0
    int v8; // r0
    int v9; // r0
    _DWORD *v10; // r0
    int result; // r0
  
    CurrentHeap = a2;
    if ( !a2 )
      CurrentHeap = sead::HeapMgr::getCurrentHeap(MEMORY[0xCCEE90]);
    a1[5] = CurrentHeap;
    sub_60855B70(4690912, 4690940);
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 12))(a1, a2);
    v5 = operator new(84, a2, 4);
    v6 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
    sub_60479C44(v5, v6);
    a1[4] = v5;
    v7 = operator new(240, a2, 16);
    v8 = sub_60853EC0(v7);
    *(_DWORD *)v8 = 12569292;
    *(_DWORD *)(v8 + 224) = 0;
    *(_BYTE *)(v8 + 228) = 0;
    *(_DWORD *)(v8 + 232) = v8 + 232;
    *(_DWORD *)(v8 + 236) = v8 + 232;
    a1[6] = v8;
    v9 = operator new(60, a2, 4);
    v10 = (_DWORD *)sub_60987E7C(v9, *(_DWORD *)(MEMORY[0xCD0C84] + 852), *(_DWORD *)(MEMORY[0xCD0C84] + 856));
    *v10 = 12571036;
    v10[14] = 1065353216;
    a1[879] = v10;
    result = operator new(48, a2, 16);
    a1[7] = result;
    return result;
  }

/* ============================================================================
 * sub_60473624
 * RVA 0x00473624   size 0x128   xrefs 3
 * ============================================================================ */
  int __fastcall sub_60473624(int a1, _DWORD *a2)
  {
    int v4; // r6
    int v5; // r0
    int v6; // r6
    int *v7; // r8
    int v8; // r7
    int v9; // r0
    unsigned int v10; // r6
    int v11; // r7
    int v12; // r0
    int v14; // [sp+0h] [bp-10h] BYREF
    unsigned int v15; // [sp+4h] [bp-Ch]
    int *v16; // [sp+8h] [bp-8h]
  
    v4 = *(_DWORD *)(a1 + 16);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v5 = sub_60980818(v4, a2[1]);
    sub_60851BDC(&v14, v5);
    v6 = sub_60851D10(&v14);
    v7 = (int *)operator new[](4 * v6, MEMORY[0xCC7F90], 4);
    v16 = v7;
    sub_6090B310(MEMORY[0xCCF464]);
    v8 = *(_DWORD *)(a1 + 16);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v9 = sub_60980680(v8, a2[1], 0);
    v14 = v9;
    v15 = v6;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        *v7 = v9;
      }
      else
      {
        v10 = 0;
        do
        {
          v11 = *(_DWORD *)(a1 + 16);
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          v12 = sub_60980940(v11, a2[1], v10, 0, v14);
          v16[v10++] = v12;
        }
        while ( v10 < v15 );
      }
    }
    sub_6090B32C(MEMORY[0xCCF464]);
    return sub_60473758(a1 + 32, a2, &v14);
  }

/* ============================================================================
 * sub_60473758
 * RVA 0x00473758   size 0x278   xrefs 1
 * ============================================================================ */
  _DWORD *__fastcall sub_60473758(int a1, _DWORD *a2, _DWORD *a3)
  {
    _DWORD *v6; // r1
    _DWORD *v7; // r6
    int v8; // r1
    int v9; // r2
    void *v10; // r11
    const void *v11; // r10
    _DWORD *v12; // r9
    char v13; // r7
    int v14; // r0
    signed int v15; // r5
    bool v16; // cc
    _DWORD *v17; // r6
    int v18; // r7
    int v19; // r8
    int v20; // r0
    int v21; // r2
    int v22; // r3
    bool v23; // nf
    _DWORD *v24; // r0
    int v25; // r1
    int v26; // r2
    _DWORD *v27; // r0
    int v29; // [sp+0h] [bp-Ch] BYREF
    _DWORD *v30; // [sp+4h] [bp-8h]
    int v31; // [sp+8h] [bp-4h]
  
    if ( *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a1 + 16) )
    {
      v17 = *(_DWORD **)a1;
      if ( *(_DWORD *)a1 )
      {
        v12 = nullptr;
        v18 = MEMORY[0xB3BA34];
        while ( 2 )
        {
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          v19 = a2[1];
          (*(void (__fastcall **)(_DWORD *))(v17[4] + 12))(v17 + 4);
          v20 = v17[5];
          if ( v19 == v20 )
          {
  LABEL_24:
            v25 = a3[1];
            v26 = a3[2];
            v17[6] = *a3;
            v12 = v17 + 6;
            v17[7] = v25;
            v17[8] = v26;
          }
          else
          {
            v21 = 0;
            while ( 1 )
            {
              v22 = *(unsigned __int8 *)(a2[1] + v21);
              v23 = v22 - *(unsigned __int8 *)(v20 + v21) < 0;
              if ( v22 != *(unsigned __int8 *)(v20 + v21) )
                break;
              if ( v22 != v18 && ++v21 < 0x80000 )
                continue;
              if ( !v17 )
                return nullptr;
              goto LABEL_24;
            }
            v24 = v17 + 2;
            if ( v23 )
              v24 = v17 + 1;
            v17 = (_DWORD *)*v24;
            if ( *v24 )
              continue;
          }
          break;
        }
      }
      else
      {
        return nullptr;
      }
    }
    else
    {
      v6 = *(_DWORD **)(a1 + 4);
      v7 = nullptr;
      if ( v6 )
      {
        v7 = *(_DWORD **)(a1 + 4);
        *(_DWORD *)(a1 + 4) = *v6;
      }
      v7[4] = 12321336;
      v7[5] = 11778612;
      v7[1] = 0;
      v7[2] = 0;
      v7[3] = 0;
      *v7 = 12569628;
      v8 = a3[1];
      v9 = a3[2];
      v7[6] = *a3;
      v7[7] = v8;
      v7[8] = v9;
      v7[9] = a1;
      v30 = v7 + 10;
      v29 = 12322272;
      v31 = 65;
      sead::BufferedSafeStringBase<char>::assureTerminationImpl_(&v29);
      v10 = v30;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v11 = (const void *)a2[1];
      v12 = v7 + 6;
      if ( v10 != v11 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v13 = MEMORY[0xB3BA34];
        v14 = a2[1];
        v15 = 0;
        while ( *(unsigned __int8 *)(v14 + v15) != MEMORY[0xB3BA34] )
        {
          if ( *(unsigned __int8 *)(v14 + v15 + 1) == MEMORY[0xB3BA34] )
          {
            ++v15;
            break;
          }
          if ( *(unsigned __int8 *)(v14 + v15 + 2) == MEMORY[0xB3BA34] )
          {
            v15 += 2;
            break;
          }
          v16 = v15 + 2 < 0x80000;
          v15 += 3;
          if ( !v16 )
          {
            v15 = 0;
            break;
          }
        }
        if ( v15 >= v31 )
          v15 = v31 - 1;
        qmemcpy(v10, v11, v15);
        *((_BYTE *)v10 + v15) = v13;
      }
      sead::SafeStringBase<char>::operator=(v7 + 4, &v29);
      ++*(_DWORD *)(a1 + 12);
      v27 = sub_6041FD48(a1, *(_DWORD **)a1, v7);
      *(_DWORD *)a1 = v27;
      v27[3] = 1;
    }
    return v12;
  }

/* ============================================================================
 * sub_604739E8
 * RVA 0x004739e8   size 0x164   xrefs 5
 * ============================================================================ */
  int __fastcall sub_604739E8(_DWORD *a1, __int64 *a2, __int64 *a3)
  {
    int v4; // r6
    int v5; // lr
    int v6; // r3
    unsigned int i; // r5
    _BYTE *v8; // r0
    __int64 *v9; // r0
    __int64 *v10; // r1
    __int64 v11; // d16
    __int64 v12; // d17
    _QWORD *v13; // r3
    __int64 v14; // d20
    __int64 v15; // d21
    __int64 v16; // d18
    __int64 v17; // d19
    __int64 *v18; // r0
    __int64 *v19; // r2
    __int64 v20; // d16
    __int64 v21; // d17
    _QWORD *v22; // r1
    __int64 v23; // d18
    __int64 v24; // d19
    __int64 v25; // d20
    __int64 v26; // d21
    _QWORD *v27; // r0
    int v28; // r0
    int v29; // r0
    int v30; // r5
    int v31; // r6
    int v32; // r0
    int v33; // r0
    int v34; // r0
  
    v4 = a1[877];
    if ( v4 >= 1 )
    {
      v5 = v4 - 1;
      v6 = 0;
      for ( i = 0; ; ++i )
      {
        v8 = (_BYTE *)a1[878];
        if ( v4 > i )
          v8 += v6;
        if ( *(_DWORD *)v8 && !v8[16] && (*(_BYTE *)(*(_DWORD *)v8 + 51) & 1) != 0 )
          v8[16] = 1;
        if ( v5 == i )
          break;
        v4 = a1[877];
        v6 += 20;
      }
    }
    v9 = a2 + 4;
    v11 = *a2;
    v12 = a2[1];
    v10 = a2 + 2;
    v13 = (_QWORD *)a1[6];
    v14 = *v10;
    v15 = v10[1];
    v16 = *v9;
    v17 = v9[1];
    v13[10] = v11;
    v13[11] = v12;
    v13[12] = v14;
    v13[13] = v15;
    v13[14] = v16;
    v13[15] = v17;
    *(_BYTE *)(*(_DWORD *)(a1[4] + 12) + 64) &= ~0x20u;
    if ( a3 )
    {
      v18 = a3 + 4;
      v20 = *a3;
      v21 = a3[1];
      v19 = a3 + 2;
      v22 = (_QWORD *)a1[7];
      v23 = *v18;
      v24 = v18[1];
      v25 = *v19;
      v26 = v19[1];
      v27 = v22 + 4;
      *v22 = v20;
      v22[1] = v21;
      v22 += 2;
      *v22 = v25;
      v22[1] = v26;
      *v27 = v23;
      v27[1] = v24;
      v28 = *(_DWORD *)(a1[4] + 12);
      *(_DWORD *)(v28 + 128) = a1[7];
      *(_BYTE *)(v28 + 64) |= 0x20u;
    }
    v29 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 232))(v29);
    v30 = a1[4];
    v31 = a1[6];
    v32 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
    v33 = (*(int (__fastcall **)(int))(*(_DWORD *)v32 + 228))(v32);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v30 + 72))(v30, v31, v33);
    v34 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
    return nullsub_128(v34);
  }

/* ============================================================================
 * sub_60473B88
 * RVA 0x00473b88   size 0x138   xrefs 86
 * ============================================================================ */
  int __fastcall sub_60473B88(_DWORD *a1, _DWORD *a2, int a3)
  {
    int v6; // r0
    __int64 *v7; // r1
    __int64 *v8; // r2
    __int64 *v9; // r0
    __int64 v10; // d16
    __int64 v11; // d17
    __int64 v12; // d20
    __int64 v13; // d21
    __int64 v14; // d18
    __int64 v15; // d19
    __int64 v16; // d22
    __int64 v17; // d23
    int v18; // r0
    int v19; // r5
    int v20; // r6
    int v21; // r2
    int result; // r0
    _DWORD v23[4]; // [sp+4h] [bp-D4h] BYREF
    int v24; // [sp+14h] [bp-C4h]
    _WORD v25[44]; // [sp+18h] [bp-C0h] BYREF
    char v26; // [sp+71h] [bp-67h]
    __int64 v27; // [sp+80h] [bp-58h]
    __int64 v28; // [sp+88h] [bp-50h]
    __int64 v29; // [sp+90h] [bp-48h]
    __int64 v30; // [sp+98h] [bp-40h]
    __int64 v31; // [sp+A0h] [bp-38h]
    __int64 v32; // [sp+A8h] [bp-30h]
    __int64 v33; // [sp+B0h] [bp-28h]
    __int64 v34; // [sp+B8h] [bp-20h]
  
    v6 = sub_6090B350(v25);
    if ( !a3 )
    {
      a3 = v6;
      v25[0] = 0;
      v26 = 0;
    }
    sub_6090B4B0(a3, a2[10]);
    v23[0] = a2[3];
    v23[1] = a3;
    v23[2] = a2[8];
    v23[3] = 0;
    v24 = a2[10];
    v7 = (__int64 *)sub_6090BE54(a2[7]);
    v8 = v7 + 4;
    v9 = v7 + 6;
    v10 = *v7;
    v11 = v7[1];
    v7 += 2;
    v12 = *v8;
    v13 = v8[1];
    v14 = *v9;
    v15 = v9[1];
    v16 = *v7;
    v17 = v7[1];
    v27 = v10;
    v28 = v11;
    v29 = v16;
    v30 = v17;
    v31 = v12;
    v32 = v13;
    v33 = v14;
    v34 = v15;
    sub_6085402C(a1[6]);
    *(_DWORD *)(a1[6] + 224) = v23;
    v18 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
    v19 = a1[4];
    v20 = a1[6];
    v21 = 0;
    if ( v18 )
      v21 = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 228))(v18);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v19 + 72))(v19, v20, v21);
    (*(void (__fastcall **)(_DWORD, _DWORD, int))(*(_DWORD *)a1[4] + 48))(a1[4], a1[6], v24 + 8);
    sub_6097F554(a1[6]);
    result = a1[6];
    *(_DWORD *)(result + 224) = 0;
    return result;
  }

/* ============================================================================
 * sub_60473CC0
 * RVA 0x00473cc0   size 0xe4   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60473CC0(_DWORD *a1, int a2, __int64 *a3)
  {
    __int64 *v4; // r0
    __int64 *v6; // r1
    __int64 *v7; // r2
    __int64 v8; // d16
    __int64 v9; // d17
    int v10; // r0
    int v11; // r6
    int v12; // r7
    int v13; // r2
    int result; // r0
    __int64 v15; // [sp+10h] [bp-48h]
    __int64 v16; // [sp+18h] [bp-40h]
    __int64 v17; // [sp+20h] [bp-38h]
    __int64 v18; // [sp+28h] [bp-30h]
    __int64 v19; // [sp+30h] [bp-28h]
    __int64 v20; // [sp+38h] [bp-20h]
  
    v4 = a3;
    v6 = a3 + 4;
    v7 = a3 + 6;
    v8 = *v4;
    v9 = v4[1];
    v4 += 2;
    v15 = *v4;
    v16 = v4[1];
    v17 = *v6;
    v18 = v6[1];
    v19 = *v7;
    v20 = v7[1];
    sub_6085402C(a1[6]);
    *(_DWORD *)(a1[6] + 224) = a2;
    v10 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
    v11 = a1[4];
    v12 = a1[6];
    v13 = 0;
    if ( v10 )
      v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 228))(v10);
    (*(void (__fastcall **)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v11 + 72))(
      v11,
      v12,
      v13,
      *(_DWORD *)(*(_DWORD *)v11 + 72),
      v8,
      HIDWORD(v8),
      v9,
      HIDWORD(v9),
      v15,
      HIDWORD(v15),
      v16,
      HIDWORD(v16),
      v17,
      HIDWORD(v17),
      v18,
      HIDWORD(v18),
      v19,
      HIDWORD(v19),
      v20,
      HIDWORD(v20));
    (*(void (__fastcall **)(_DWORD, _DWORD, int))(*(_DWORD *)a1[4] + 48))(a1[4], a1[6], *(_DWORD *)(a2 + 16) + 8);
    sub_6097F554(a1[6]);
    result = a1[6];
    *(_DWORD *)(result + 224) = 0;
    return result;
  }

/* ============================================================================
 * sub_60473DA4
 * RVA 0x00473da4   size 0x3c   xrefs 7
 * ============================================================================ */
  int __fastcall sub_60473DA4(int a1)
  {
    int v1; // r0
  
    v1 = *(_DWORD *)(a1 + 16);
    if ( v1 )
      return *(_DWORD *)(v1 + 28);
    (*((void (**)(void))off_60BFCA68 + 3))();
    return dword_60BFCA6C;
  }

/* ============================================================================
 * sub_60473DE4
 * RVA 0x00473de4   size 0xf4   xrefs 436
 * ============================================================================ */
  int __fastcall sub_60473DE4(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4)
  {
    int *v8; // r1
    bool v9; // cc
    _DWORD *v10; // r0
    int v11; // r9
    int v12; // r7
    int v13; // r2
    _DWORD *v14; // r6
    int v15; // r4
    int v16; // r0
    int v17; // r3
    bool v18; // nf
  
    v8 = (int *)a1[878];
    v9 = a1[877] > a2;
    v10 = a1 + 8;
    if ( v9 )
      v8 += 5 * a2;
    v11 = *v8;
    v12 = MEMORY[0xB3BA34];
    while ( 1 )
    {
      v14 = (_DWORD *)*v10;
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v15 = a3[1];
      (*(void (__fastcall **)(_DWORD *))(v14[4] + 12))(v14 + 4);
      v16 = v14[5];
      if ( v15 == v16 )
        break;
      v13 = 0;
      while ( 1 )
      {
        v17 = *(unsigned __int8 *)(a3[1] + v13);
        v18 = v17 - *(unsigned __int8 *)(v16 + v13) < 0;
        if ( v17 != *(unsigned __int8 *)(v16 + v13) )
          break;
        if ( v17 != v12 && ++v13 < 0x80000 )
          continue;
        goto LABEL_13;
      }
      v10 = v14 + 2;
      if ( v18 )
        v10 = v14 + 1;
    }
  LABEL_13:
    sub_60473EDC(a1, a2, a3, a4, v14[6]);
    return v11;
  }

/* ============================================================================
 * sub_60473EDC
 * RVA 0x00473edc   size 0x2d4   xrefs 5
 * ============================================================================ */
  int __fastcall sub_60473EDC(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4, int *a5)
  {
    int *v8; // r1
    int v9; // r11
    char *v10; // r0
    int i; // r2
    int v12; // r7
    int j; // r2
    int v14; // r7
    char *v15; // r0
    int v16; // r7
    int k; // r1
    int v18; // r3
    char *v19; // r0
    int m; // r1
    int v21; // r3
    int v22; // r0
    _DWORD *v23; // r2
    int v24; // r1
    int result; // r0
    char v26; // r1
    int **v27; // r1
    int v28; // r1
    int v29; // r0
    int v30; // r1
  
    v8 = (int *)a1[878];
    if ( a1[877] > a2 )
      v8 += 5 * a2;
    v9 = *v8;
    if ( *v8 )
    {
      v10 = *(char **)(v9 + 56);
      if ( v10 != "LoopRandom" )
      {
        for ( i = 0; i < 524289; ++i )
        {
          v12 = (unsigned __int8)v10[i];
          if ( v12 != (unsigned __int8)aLooprandom[i] )
            break;
          if ( v12 == MEMORY[0xB3BA34] )
            goto LABEL_15;
        }
        if ( v10 != "Loop" )
        {
          for ( j = 0; j < 524289; ++j )
          {
            v14 = (unsigned __int8)v10[j];
            if ( v14 != (unsigned __int8)aLoop[j] )
              break;
            if ( v14 == MEMORY[0xB3BA34] )
              goto LABEL_15;
          }
          sub_608502F4(v9, 0);
          *(_DWORD *)(v9 + 44) = 0;
        }
      }
    }
  LABEL_15:
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v15 = (char *)a3[1];
    if ( v15 != "LoopRandom" )
    {
      v16 = MEMORY[0xB3BA34];
      for ( k = 0; k < 524289; ++k )
      {
        v18 = (unsigned __int8)v15[k];
        if ( v18 != (unsigned __int8)aLooprandom[k] )
          break;
        if ( v18 == MEMORY[0xB3BA34] )
          goto LABEL_26;
      }
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v19 = (char *)a3[1];
      if ( v19 != "Loop" )
      {
        for ( m = 0; m < 524289; ++m )
        {
          v21 = (unsigned __int8)v19[m];
          if ( v21 != (unsigned __int8)aLoop[m] )
            break;
          if ( v21 == v16 )
            goto LABEL_26;
        }
  LABEL_34:
        v27 = (int **)a1[878];
        if ( a1[877] > a2 )
          v27 += 5 * a2;
        *v27 = a5;
        v28 = a1[878];
        if ( a1[877] > a2 )
          v28 += 20 * a2;
        sead::SafeStringBase<char>::operator=(v28 + 4, a3);
        if ( a4 )
        {
          if ( a4 == 2 )
          {
            v29 = *a5;
            v30 = 2;
          }
          else
          {
            if ( a4 != 1 )
              goto LABEL_45;
            v29 = *a5;
            v30 = 1;
          }
        }
        else
        {
          v29 = *a5;
          v30 = 0;
        }
        (*(void (__fastcall **)(int *, int))(v29 + 84))(a5, v30);
  LABEL_45:
        result = a1[878];
        v26 = 0;
        if ( a1[877] > a2 )
          result += 20 * a2;
        goto LABEL_47;
      }
    }
  LABEL_26:
    v22 = *(_DWORD *)(a1[4] + 64);
    if ( !v22 )
      goto LABEL_34;
    v23 = (_DWORD *)a1[878];
    if ( a1[877] > a2 )
      v23 += 5 * a2;
    *v23 = v22;
    v24 = a1[878];
    if ( a1[877] > a2 )
      v24 += 20 * a2;
    sead::SafeStringBase<char>::operator=(v24 + 4, a3);
    result = a1[878];
    if ( a1[877] > a2 )
      result += 20 * a2;
    v26 = *(_BYTE *)(*(_DWORD *)(a1[4] + 64) + 51) & 1;
  LABEL_47:
    *(_BYTE *)(result + 16) = v26;
    return result;
  }

/* ============================================================================
 * sub_604741D8
 * RVA 0x004741d8   size 0xf4   xrefs 105
 * ============================================================================ */
  int __fastcall sub_604741D8(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4)
  {
    int *v8; // r1
    bool v9; // cc
    int *v10; // r0
    int v11; // r9
    int v12; // r7
    int v13; // r2
    int v14; // r6
    int v15; // r4
    int v16; // r0
    int v17; // r3
    bool v18; // nf
  
    v8 = (int *)a1[878];
    v9 = a1[877] > a2;
    v10 = a1 + 8;
    if ( v9 )
      v8 += 5 * a2;
    v11 = *v8;
    v12 = MEMORY[0xB3BA34];
    while ( 1 )
    {
      v14 = *v10;
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v15 = a3[1];
      (*(void (__fastcall **)(int))(*(_DWORD *)(v14 + 16) + 12))(v14 + 16);
      v16 = *(_DWORD *)(v14 + 20);
      if ( v15 == v16 )
        break;
      v13 = 0;
      while ( 1 )
      {
        v17 = *(unsigned __int8 *)(a3[1] + v13);
        v18 = v17 - *(unsigned __int8 *)(v16 + v13) < 0;
        if ( v17 != *(unsigned __int8 *)(v16 + v13) )
          break;
        if ( v17 != v12 && ++v13 < 0x80000 )
          continue;
        goto LABEL_13;
      }
      v10 = (int *)(v14 + 8);
      if ( v18 )
        v10 = (int *)(v14 + 4);
    }
  LABEL_13:
    sub_60473EDC(a1, a2, a3, a4, *(int **)(v14 + 24));
    return v11;
  }

/* ============================================================================
 * sub_604742D0
 * RVA 0x004742d0   size 0x14c   xrefs 76
 * ============================================================================ */
  int __fastcall sub_604742D0(_DWORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5)
  {
    int *v9; // r1
    _DWORD *v10; // r5
    int v11; // r6
    int v12; // r7
    int v13; // r8
    int v14; // r0
    int v15; // r2
    int v16; // r3
    bool v17; // nf
    _DWORD *v18; // r0
    _DWORD *v19; // r0
    int v21; // [sp+4h] [bp-4h]
  
    v9 = (int *)a1[878];
    v10 = (_DWORD *)a1[8];
    if ( a1[877] > a2 )
      v9 += 5 * a2;
    v11 = *v9;
    if ( v10 )
    {
      v21 = *v9;
      v12 = MEMORY[0xB3BA34];
      while ( 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        v13 = a3[1];
        (*(void (__fastcall **)(_DWORD *))(v10[4] + 12))(v10 + 4);
        v14 = v10[5];
        if ( v13 == v14 )
          break;
        v15 = 0;
        while ( 1 )
        {
          v16 = *(unsigned __int8 *)(a3[1] + v15);
          v17 = v16 - *(unsigned __int8 *)(v14 + v15) < 0;
          if ( v16 != *(unsigned __int8 *)(v14 + v15) )
            break;
          if ( v16 != v12 && ++v15 < 0x80000 )
            continue;
          if ( v10 )
            goto LABEL_16;
          goto LABEL_18;
        }
        v18 = v10 + 2;
        if ( v17 )
          v18 = v10 + 1;
        v10 = (_DWORD *)*v18;
        if ( !*v18 )
        {
  LABEL_18:
          v19 = nullptr;
          goto LABEL_19;
        }
      }
  LABEL_16:
      v19 = v10 + 6;
  LABEL_19:
      v11 = v21;
    }
    else
    {
      v19 = nullptr;
    }
    if ( v19[1] > a4 )
      sub_60473EDC(a1, a2, a3, a5, *(int **)(v19[2] + 4 * a4));
    return v11;
  }

/* ============================================================================
 * sub_60474420
 * RVA 0x00474420   size 0x138   xrefs 32
 * ============================================================================ */
  int __fastcall sub_60474420(_DWORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5)
  {
    int *v9; // r1
    _DWORD *v10; // r5
    int v11; // r6
    int v12; // r7
    int v13; // r8
    int v14; // r0
    int v15; // r2
    int v16; // r3
    bool v17; // nf
    _DWORD *v18; // r0
    _DWORD *v19; // r0
    int v21; // [sp+8h] [bp-4h]
  
    v9 = (int *)a1[878];
    v10 = (_DWORD *)a1[8];
    if ( a1[877] > a2 )
      v9 += 5 * a2;
    v11 = *v9;
    if ( v10 )
    {
      v21 = *v9;
      v12 = MEMORY[0xB3BA34];
      while ( 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        v13 = a3[1];
        (*(void (__fastcall **)(_DWORD *))(v10[4] + 12))(v10 + 4);
        v14 = v10[5];
        if ( v13 == v14 )
          break;
        v15 = 0;
        while ( 1 )
        {
          v16 = *(unsigned __int8 *)(a3[1] + v15);
          v17 = v16 - *(unsigned __int8 *)(v14 + v15) < 0;
          if ( v16 != *(unsigned __int8 *)(v14 + v15) )
            break;
          if ( v16 != v12 && ++v15 < 0x80000 )
            continue;
          if ( v10 )
            goto LABEL_16;
          goto LABEL_18;
        }
        v18 = v10 + 2;
        if ( v17 )
          v18 = v10 + 1;
        v10 = (_DWORD *)*v18;
        if ( !*v18 )
        {
  LABEL_18:
          v19 = nullptr;
          goto LABEL_19;
        }
      }
  LABEL_16:
      v19 = v10 + 6;
  LABEL_19:
      v11 = v21;
    }
    else
    {
      v19 = nullptr;
    }
    if ( v19[1] > a4 )
      sub_60473EDC(a1, a2, a3, a5, *(int **)(v19[2] + 4 * a4));
    return v11;
  }

/* ============================================================================
 * sub_604745EC
 * RVA 0x004745ec   size 0x90   xrefs 3
 * ============================================================================ */
  int __fastcall sub_604745EC(int result, unsigned int a2, int a3)
  {
    unsigned int v3; // r2
    _DWORD *v4; // r0
    unsigned int v5; // r2
    _DWORD *v6; // r0
    unsigned int v7; // r2
    _DWORD *v8; // r0
  
    if ( a3 )
    {
      if ( a3 == 2 )
      {
        v7 = *(_DWORD *)(result + 3508);
        v8 = *(_DWORD **)(result + 3512);
        if ( v7 > a2 )
          v8 += 5 * a2;
        return (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*v8 + 92))(*v8, 2);
      }
      else if ( a3 == 1 )
      {
        v3 = *(_DWORD *)(result + 3508);
        v4 = *(_DWORD **)(result + 3512);
        if ( v3 > a2 )
          v4 += 5 * a2;
        return (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*v4 + 92))(*v4, 1);
      }
    }
    else
    {
      v5 = *(_DWORD *)(result + 3508);
      v6 = *(_DWORD **)(result + 3512);
      if ( v5 > a2 )
        v6 += 5 * a2;
      return (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6 + 92))(*v6, 0);
    }
    return result;
  }

/* ============================================================================
 * sub_6047467C
 * RVA 0x0047467c   size 0x68   xrefs 190
 * ============================================================================ */
  int __fastcall sub_6047467C(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4, int a5)
  {
    unsigned int v8; // r3
  
    v8 = sub_604746E4(a1, a3, a4);
    if ( v8 == -1 )
      return 0;
    sub_604742D0(a1, a2, a3, v8, a5);
    return 1;
  }

/* ============================================================================
 * sub_604746E4
 * RVA 0x004746e4   size 0x140   xrefs 85
 * ============================================================================ */
  int __fastcall sub_604746E4(int a1, _DWORD *a2, _DWORD *a3)
  {
    int v4; // r6
    int v6; // r0
    unsigned int v7; // r11
    int v8; // r9
    int v9; // r7
    int v10; // r6
    int v11; // r5
    int v12; // r1
    int i; // r2
    int v14; // r3
    int v15; // r3
    int v17; // [sp+4h] [bp-18h] BYREF
    int v18; // [sp+8h] [bp-14h]
    _BYTE v19[16]; // [sp+Ch] [bp-10h] BYREF
  
    v4 = *(_DWORD *)(a1 + 16);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v6 = sub_60980818(v4, a2[1]);
    sub_60851BDC(v19, v6);
    v7 = sub_60851D10(v19);
    v8 = sub_60851D24(v19);
    if ( !v7 )
      return -1;
    v9 = 0;
    v10 = MEMORY[0xB3BA34];
    while ( 1 )
    {
      v17 = 12321336;
      v18 = v8 + 36 * v9;
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v11 = a3[1];
      (*(void (__fastcall **)(int *))(v17 + 12))(&v17);
      if ( v11 == v18 )
        break;
      v12 = a3[1];
      for ( i = 1; ; i += 2 )
      {
        v14 = *(unsigned __int8 *)(v12 + i - 1);
        if ( v14 != *(unsigned __int8 *)(v18 + i - 1) )
          break;
        if ( v14 == v10 )
          return v9;
        if ( i > 0x80000 )
          break;
        v15 = *(unsigned __int8 *)(v12 + i);
        if ( v15 != *(unsigned __int8 *)(v18 + i) )
          break;
        if ( v15 == v10 )
          return v9;
      }
      if ( ++v9 >= v7 )
        return -1;
    }
    return v9;
  }

/* ============================================================================
 * sub_60474848
 * RVA 0x00474848   size 0x44   xrefs 25
 * ============================================================================ */
  int __fastcall sub_60474848(int a1, _DWORD *a2, int *a3)
  {
    int result; // r0
    int v7; // r7
  
    result = *a3;
    if ( *a3 >= 1 )
    {
      v7 = 0;
      do
      {
        sub_60473624(a1, a2);
        result = *a3;
        ++v7;
        a2 += 2;
      }
      while ( v7 < *a3 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047488C
 * RVA 0x0047488c   size 0x110   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6047488C(int a1, _DWORD *a2)
  {
    int v3; // r5
    int (__fastcall *v4)(int, _DWORD, int); // r6
    int v5; // r4
    _DWORD *v6; // r0
  
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12);
    v4 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 48);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v5 = v4(v3, a2[1], 1);
    if ( _cxa_guard_acquire_0(13228492) )
    {
      if ( _cxa_guard_acquire_0(13228500) )
      {
        MEMORY[0xC9D9D0] = 0;
        _cxa_guard_release_0(13228500);
      }
      MEMORY[0xC9D9C8] = 13228496;
      _cxa_guard_release_0(13228492);
    }
    if ( !v5 )
      return 0;
    v6 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( !v6 )
      return 0;
    while ( v6 != (_DWORD *)13228488 )
    {
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        return 0;
    }
    return v5;
  }

/* ============================================================================
 * sub_604749C4
 * RVA 0x004749c4   size 0x124   xrefs 20
 * ============================================================================ */
  int __fastcall sub_604749C4(int a1)
  {
    _DWORD *v2; // r0
  
    if ( _cxa_guard_acquire_0(13228508) )
    {
      if ( _cxa_guard_acquire_0(13228516) )
      {
        if ( _cxa_guard_acquire_0(13228500) )
        {
          MEMORY[0xC9D9D0] = 0;
          _cxa_guard_release_0(13228500);
        }
        MEMORY[0xC9D9E0] = 13228496;
        _cxa_guard_release_0(13228516);
      }
      MEMORY[0xC9D9D8] = 13228512;
      _cxa_guard_release_0(13228508);
    }
    if ( !a1 )
      return 0;
    v2 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
    if ( !v2 )
      return 0;
    while ( v2 != (_DWORD *)13228504 )
    {
      v2 = (_DWORD *)*v2;
      if ( !v2 )
        return 0;
    }
    return a1;
  }

/* ============================================================================
 * sub_60474B24
 * RVA 0x00474b24   size 0x110   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60474B24(int a1, _DWORD *a2)
  {
    int v3; // r5
    int (__fastcall *v4)(int, _DWORD, int); // r6
    int v5; // r4
    _DWORD *v6; // r0
  
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12);
    v4 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 48);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v5 = v4(v3, a2[1], 1);
    if ( _cxa_guard_acquire_0(13228524) )
    {
      if ( _cxa_guard_acquire_0(13228500) )
      {
        MEMORY[0xC9D9D0] = 0;
        _cxa_guard_release_0(13228500);
      }
      MEMORY[0xC9D9E8] = 13228496;
      _cxa_guard_release_0(13228524);
    }
    if ( !v5 )
      return 0;
    v6 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( !v6 )
      return 0;
    while ( v6 != (_DWORD *)13228520 )
    {
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        return 0;
    }
    return v5;
  }

/* ============================================================================
 * sub_60474C5C
 * RVA 0x00474c5c   size 0x110   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60474C5C(int a1, _DWORD *a2)
  {
    int v3; // r5
    int (__fastcall *v4)(int, _DWORD, int); // r6
    int v5; // r4
    _DWORD *v6; // r0
  
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12);
    v4 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 48);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v5 = v4(v3, a2[1], 1);
    if ( _cxa_guard_acquire_0(13228532) )
    {
      if ( _cxa_guard_acquire_0(13228500) )
      {
        MEMORY[0xC9D9D0] = 0;
        _cxa_guard_release_0(13228500);
      }
      MEMORY[0xC9D9F0] = 13228496;
      _cxa_guard_release_0(13228532);
    }
    if ( !v5 )
      return 0;
    v6 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( !v6 )
      return 0;
    while ( v6 != (_DWORD *)13228528 )
    {
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        return 0;
    }
    return v5;
  }

/* ============================================================================
 * sub_60474D94
 * RVA 0x00474d94   size 0x100   xrefs 2
 * ============================================================================ */
  int (__fastcall ***__fastcall sub_60474D94(int a1, _DWORD *a2))(_DWORD)
  {
    int v3; // r5
    int (__fastcall ***v4)(_DWORD); // r4
    _DWORD *v5; // r0
  
    v3 = *(_DWORD *)(a1 + 16);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v4 = *(int (__fastcall ****)(_DWORD))(sub_6085768C(v3, a2[1]) + 180);
    if ( _cxa_guard_acquire_0(13228540) )
    {
      if ( _cxa_guard_acquire_0(13228548) )
      {
        MEMORY[0xC9DA00] = 0;
        _cxa_guard_release_0(13228548);
      }
      MEMORY[0xC9D9F8] = 13228544;
      _cxa_guard_release_0(13228540);
    }
    if ( !v4 )
      return nullptr;
    v5 = (_DWORD *)(**v4)(v4);
    if ( !v5 )
      return nullptr;
    while ( v5 != (_DWORD *)13228536 )
    {
      v5 = (_DWORD *)*v5;
      if ( !v5 )
        return nullptr;
    }
    return v4;
  }

/* ============================================================================
 * sub_60474EBC
 * RVA 0x00474ebc   size 0x30   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60474EBC(int a1, _DWORD *a2)
  {
    int v3; // r5
  
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 16);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    return sub_60855AD8(v3, a2[1]);
  }

/* ============================================================================
 * sub_60474EEC
 * RVA 0x00474eec   size 0x3c   xrefs 15
 * ============================================================================ */
  int __fastcall sub_60474EEC(_DWORD *a1)
  {
    int result; // r0
    int v3; // r0
  
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
    if ( result )
    {
      v3 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
      return sub_6098D238(v3, a1[4]);
    }
    return result;
  }

/* ============================================================================
 * sub_60474F40
 * RVA 0x00474f40   size 0xec   xrefs 5
 * ============================================================================ */
  int (__fastcall ***__fastcall sub_60474F40(int a1, _DWORD *a2))(_DWORD)
  {
    int (__fastcall ***v2)(_DWORD); // r4
    _DWORD *v3; // r0
  
    v2 = sub_60474D94(a1, a2);
    if ( _cxa_guard_acquire_0(13228540) )
    {
      if ( _cxa_guard_acquire_0(13228548) )
      {
        MEMORY[0xC9DA00] = 0;
        _cxa_guard_release_0(13228548);
      }
      MEMORY[0xC9D9F8] = 13228544;
      _cxa_guard_release_0(13228540);
    }
    if ( !v2 )
      return nullptr;
    v3 = (_DWORD *)(**v2)(v2);
    if ( !v3 )
      return nullptr;
    while ( v3 != (_DWORD *)13228536 )
    {
      v3 = (_DWORD *)*v3;
      if ( !v3 )
        return nullptr;
    }
    return v2;
  }

/* ============================================================================
 * sub_60475054
 * RVA 0x00475054   size 0x110   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60475054(int a1, _DWORD *a2)
  {
    int v3; // r5
    int (__fastcall *v4)(int, _DWORD, int); // r6
    int v5; // r4
    _DWORD *v6; // r0
  
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12);
    v4 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 48);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v5 = v4(v3, a2[1], 1);
    if ( _cxa_guard_acquire_0(13228556) )
    {
      if ( _cxa_guard_acquire_0(13228500) )
      {
        MEMORY[0xC9D9D0] = 0;
        _cxa_guard_release_0(13228500);
      }
      MEMORY[0xC9DA08] = 13228496;
      _cxa_guard_release_0(13228556);
    }
    if ( !v5 )
      return 0;
    v6 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( !v6 )
      return 0;
    while ( v6 != (_DWORD *)13228552 )
    {
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        return 0;
    }
    return v5;
  }

/* ============================================================================
 * sub_6047518C
 * RVA 0x0047518c   size 0x70   xrefs 48
 * ============================================================================ */
  int __fastcall sub_6047518C(int a1, int a2, _DWORD *a3, int *a4)
  {
    int result; // r0
    int v9; // r4
    int v10; // r6
    int (__fastcall *v11)(int, _DWORD, int); // r7
  
    result = *a4;
    if ( *a4 >= 1 )
    {
      v9 = 0;
      do
      {
        v10 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12);
        v11 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v10 + 48);
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        *(_DWORD *)(a2 + 4 * v9++) = v11(v10, a3[1], 1);
        a3 += 2;
        result = *a4;
      }
      while ( v9 < *a4 );
    }
    return result;
  }

/* ============================================================================
 * sub_604751FC
 * RVA 0x004751fc   size 0x8c   xrefs 10
 * ============================================================================ */
  int __fastcall sub_604751FC(int a1, int a2, _DWORD *a3, int *a4)
  {
    int v8; // r6
    int v9; // r4
    int v10; // r7
    int (__fastcall *v11)(int, _DWORD, int); // r11
    int v12; // r0
  
    v8 = 1;
    if ( *a4 >= 1 )
    {
      v9 = 0;
      do
      {
        v10 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12);
        v11 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v10 + 48);
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        v12 = v11(v10, a3[1], 1);
        *(_DWORD *)(a2 + 4 * v9++) = v12;
        a3 += 2;
        v8 = (unsigned __int8)v8 & (v12 != 0);
      }
      while ( v9 < *a4 );
    }
    return v8;
  }

/* ============================================================================
 * ??Player__applyPowerUpTransform
 * RVA 0x00475288   size 0x4c   xrefs 12
 * ============================================================================ */
  int __fastcall __Player__applyPowerUpTransform(int a1, int a2, int a3, int *a4)
  {
    int result; // r0
    int v9; // r6
  
    result = *a4;
    if ( *a4 >= 1 )
    {
      v9 = 0;
      do
      {
        *(_DWORD *)(a2 + 4 * v9++) = sub_6047488C(a1, a3);
        a3 += 8;
        result = *a4;
      }
      while ( v9 < *a4 );
    }
    return result;
  }

/* ============================================================================
 * sub_604752D4
 * RVA 0x004752d4   size 0x60   xrefs 7
 * ============================================================================ */
  int __fastcall sub_604752D4(int a1, int a2, _DWORD *a3, int *a4)
  {
    int v8; // r6
    int v9; // r4
    int v10; // r0
  
    v8 = 1;
    if ( *a4 >= 1 )
    {
      v9 = 0;
      do
      {
        v10 = sub_6047488C(a1, a3);
        *(_DWORD *)(a2 + 4 * v9++) = v10;
        a3 += 2;
        v8 = (unsigned __int8)v8 & (v10 != 0);
      }
      while ( v9 < *a4 );
    }
    return v8;
  }

/* ============================================================================
 * sub_60475334
 * RVA 0x00475334   size 0x74   xrefs 44
 * ============================================================================ */
  int __fastcall sub_60475334(int a1, int a2, _DWORD *a3, int *a4)
  {
    int result; // r0
    int v9; // r7
    int v10; // r6
    int (__fastcall *v11)(int, _DWORD, int); // r4
    int v12; // r0
  
    result = *a4;
    if ( *a4 >= 1 )
    {
      v9 = 0;
      do
      {
        v10 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12);
        v11 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v10 + 48);
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        v12 = v11(v10, a3[1], 1);
        *(_DWORD *)(a2 + 4 * v9++) = sub_604749C4(v12);
        a3 += 2;
        result = *a4;
      }
      while ( v9 < *a4 );
    }
    return result;
  }

/* ============================================================================
 * sub_604753A8
 * RVA 0x004753a8   size 0x90   xrefs 13
 * ============================================================================ */
  int __fastcall sub_604753A8(int a1, int a2, _DWORD *a3, int *a4)
  {
    int v8; // r6
    int v9; // r4
    int v10; // r7
    int (__fastcall *v11)(int, _DWORD, int); // r11
    int v12; // r0
    int v13; // r0
  
    v8 = 1;
    if ( *a4 >= 1 )
    {
      v9 = 0;
      do
      {
        v10 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12);
        v11 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v10 + 48);
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        v12 = v11(v10, a3[1], 1);
        v13 = sub_604749C4(v12);
        *(_DWORD *)(a2 + 4 * v9++) = v13;
        a3 += 2;
        v8 = (unsigned __int8)v8 & (v13 != 0);
      }
      while ( v9 < *a4 );
    }
    return v8;
  }

/* ============================================================================
 * sub_60475438
 * RVA 0x00475438   size 0x4c   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60475438(int a1, int a2, _DWORD *a3, int *a4)
  {
    int result; // r0
    int v9; // r6
  
    result = *a4;
    if ( *a4 >= 1 )
    {
      v9 = 0;
      do
      {
        *(_DWORD *)(a2 + 4 * v9++) = sub_60474B24(a1, a3);
        a3 += 2;
        result = *a4;
      }
      while ( v9 < *a4 );
    }
    return result;
  }

/* ============================================================================
 * sub_60475484
 * RVA 0x00475484   size 0x60   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60475484(int a1, int a2, _DWORD *a3, int *a4)
  {
    int v8; // r6
    int v9; // r4
    int v10; // r0
  
    v8 = 1;
    if ( *a4 >= 1 )
    {
      v9 = 0;
      do
      {
        v10 = sub_60474B24(a1, a3);
        *(_DWORD *)(a2 + 4 * v9++) = v10;
        a3 += 2;
        v8 = (unsigned __int8)v8 & (v10 != 0);
      }
      while ( v9 < *a4 );
    }
    return v8;
  }

/* ============================================================================
 * sub_604754E4
 * RVA 0x004754e4   size 0x3c   xrefs 4
 * ============================================================================ */
  int __fastcall sub_604754E4(int result, int *a2, _DWORD *a3, int a4)
  {
    int v4; // r4
    int v7; // r7
  
    v4 = a4;
    v7 = result;
    if ( a4 >= 1 )
    {
      do
      {
        result = sub_60474C5C(v7, a3);
        *a2++ = result;
        --v4;
        a3 += 2;
      }
      while ( v4 );
    }
    return result;
  }

/* ============================================================================
 * sub_60475520
 * RVA 0x00475520   size 0x50   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60475520(int a1, int a2, _DWORD *a3, int *a4)
  {
    int result; // r0
    int v9; // r6
    int (__fastcall ***v10)(_DWORD); // r0
  
    result = *a4;
    if ( *a4 >= 1 )
    {
      v9 = 0;
      do
      {
        v10 = sub_60474F40(a1, a3);
        a3 += 2;
        *(_DWORD *)(a2 + 4 * v9++) = v10[3];
        result = *a4;
      }
      while ( v9 < *a4 );
    }
    return result;
  }

/* ============================================================================
 * sub_60475570
 * RVA 0x00475570   size 0x54   xrefs 21
 * ============================================================================ */
  int __fastcall sub_60475570(int a1, int a2, _DWORD *a3, int a4, int *a5)
  {
    int (__fastcall ***v7)(_DWORD); // r6
    int result; // r0
    int v9; // r7
  
    v7 = sub_60474F40(a1, a3);
    result = *a5;
    if ( *a5 >= 1 )
    {
      v9 = 0;
      do
      {
        *(_DWORD *)(a2 + 4 * v9++) = sub_60479C64(v7, a4);
        a4 += 8;
        result = *a5;
      }
      while ( v9 < *a5 );
    }
    return result;
  }

/* ============================================================================
 * sub_604755C4
 * RVA 0x004755c4   size 0x54   xrefs 67
 * ============================================================================ */
  int __fastcall sub_604755C4(int a1, int a2, _DWORD *a3, int a4, int *a5)
  {
    int (__fastcall ***v7)(_DWORD); // r6
    int result; // r0
    int v9; // r7
  
    v7 = sub_60474F40(a1, a3);
    result = *a5;
    if ( *a5 >= 1 )
    {
      v9 = 0;
      do
      {
        *(_DWORD *)(a2 + 4 * v9++) = sub_60479DF4(v7, a4);
        a4 += 8;
        result = *a5;
      }
      while ( v9 < *a5 );
    }
    return result;
  }

/* ============================================================================
 * sub_60475618
 * RVA 0x00475618   size 0x54   xrefs 20
 * ============================================================================ */
  int __fastcall sub_60475618(int a1, int a2, _DWORD *a3, int a4, int *a5)
  {
    int (__fastcall ***v7)(_DWORD); // r6
    int result; // r0
    int v9; // r7
  
    v7 = sub_60474F40(a1, a3);
    result = *a5;
    if ( *a5 >= 1 )
    {
      v9 = 0;
      do
      {
        *(_DWORD *)(a2 + 4 * v9++) = sub_60479F28(v7, a4);
        a4 += 8;
        result = *a5;
      }
      while ( v9 < *a5 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047566C
 * RVA 0x0047566c   size 0x74   xrefs 24
 * ============================================================================ */
  int __fastcall sub_6047566C(int a1, int a2, _DWORD *a3, _DWORD *a4, int *a5)
  {
    int (__fastcall ***v7)(_DWORD); // r10
    int result; // r0
    int v9; // r5
    int (__fastcall **v10)(_DWORD); // r7
    int (__fastcall *v11)(int (__fastcall **)(_DWORD), _DWORD, int); // r6
  
    v7 = sub_60474F40(a1, a3);
    result = *a5;
    if ( *a5 >= 1 )
    {
      v9 = 0;
      do
      {
        v10 = v7[3];
        v11 = *((int (__fastcall **)(int (__fastcall **)(_DWORD), _DWORD, int))*v10 + 12);
        (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
        *(_DWORD *)(a2 + 4 * v9++) = v11(v10, a4[1], 1);
        a4 += 2;
        result = *a5;
      }
      while ( v9 < *a5 );
    }
    return result;
  }

/* ============================================================================
 * sub_604756E0
 * RVA 0x004756e0   size 0x4c   xrefs 26
 * ============================================================================ */
  int __fastcall sub_604756E0(int a1, int a2, _DWORD *a3, int *a4)
  {
    int result; // r0
    int v9; // r6
  
    result = *a4;
    if ( *a4 >= 1 )
    {
      v9 = 0;
      do
      {
        *(_DWORD *)(a2 + 4 * v9++) = sub_60475054(a1, a3);
        a3 += 2;
        result = *a4;
      }
      while ( v9 < *a4 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047572C
 * RVA 0x0047572c   size 0x1bc   xrefs 3
 * ============================================================================ */
  int __fastcall sub_6047572C(int result, _DWORD *a2, int a3, unsigned int a4, int a5)
  {
    int v7; // r9
    int v8; // r3
    int v9; // r11
    int v10; // r5
    int *v11; // r0
    int v12; // r2
    int v13; // r7
    int v14; // r8
    int v15; // r0
    int v16; // r3
    bool v17; // nf
    bool v18; // zf
    float v19; // s0
    int v20; // r0
    unsigned int v21; // [sp+4h] [bp-8h]
  
    v7 = result;
    if ( a3 >= 0 )
    {
      v8 = MEMORY[0xC99DD4] + 272;
      if ( !MEMORY[0xC99DD4] )
        v8 = MEMORY[0xC99DEC] + 16;
      if ( (unsigned int)a3 >= 6 )
        a3 = 0;
      v9 = v8 + 72 * a3;
      v10 = MEMORY[0xB3BA34];
      v21 = *(_DWORD *)(v9 + 36);
      v11 = (int *)(result + 32);
      while ( 1 )
      {
        v13 = *v11;
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v14 = a2[1];
        (*(void (__fastcall **)(int))(*(_DWORD *)(v13 + 16) + 12))(v13 + 16);
        v15 = *(_DWORD *)(v13 + 20);
        if ( v14 == v15 )
          break;
        v12 = 0;
        while ( 1 )
        {
          v16 = *(unsigned __int8 *)(a2[1] + v12);
          v17 = v16 - *(unsigned __int8 *)(v15 + v12) < 0;
          if ( v16 != *(unsigned __int8 *)(v15 + v12) )
            break;
          if ( v16 != v10 && ++v12 < 0x80000 )
            continue;
          goto LABEL_16;
        }
        v11 = (int *)(v13 + 8);
        if ( v17 )
          v11 = (int *)(v13 + 4);
      }
  LABEL_16:
      sub_60473EDC((_DWORD *)v7, 0, a2, 0, *(int **)(v13 + 24));
      v18 = a5 == 1;
      if ( a5 == 1 )
        v18 = *(_DWORD *)(v9 + 32) == 6;
      if ( v18 )
      {
        v19 = 4.0;
      }
      else if ( v21 > 5 )
      {
        v19 = 0.0;
      }
      else
      {
        v19 = flt_60B02950[v21];
      }
      *(float *)(**(_DWORD **)(v7 + 3512) + 16) = v19;
      v20 = *(_DWORD *)(MEMORY[0xCD0B40] + 36);
      if ( *(_DWORD *)(MEMORY[0xCD0B40] + 32) > a4 )
        v20 += 4 * a4;
      sub_604739E8((_DWORD *)v7, (__int64 *)(*(_DWORD *)(*(_DWORD *)v20 + 72) + 4), nullptr);
      return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(v7 + 3512) + 100))(**(_DWORD **)(v7 + 3512));
    }
    return result;
  }

/* ============================================================================
 * sub_60475900
 * RVA 0x00475900   size 0x1e0   xrefs 96
 * ============================================================================ */
  _DWORD *__fastcall sub_60475900(int a1, int a2, int a3)
  {
    _DWORD *result; // r0
    char v6; // r3
    int v7; // r2
  
    result = (_DWORD *)sead_IDisposer_ctor(a1);
    *result = 12569208;
    result[5] = 0;
    result[6] = 0;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
    result[11] = 0;
    result[4] = 0;
    result[12] = 32;
    result[9] = result + 13;
    result[13] = result + 40;
    result[40] = result + 67;
    result[67] = result + 94;
    result[94] = result + 121;
    result[121] = result + 148;
    result[148] = result + 175;
    result[175] = result + 202;
    result[202] = result + 229;
    result[229] = result + 256;
    result[256] = result + 283;
    result[283] = result + 310;
    result[310] = result + 337;
    result[337] = result + 364;
    result[364] = result + 391;
    result[391] = result + 418;
    result[418] = result + 445;
    result[445] = result + 472;
    result[472] = result + 499;
    result[499] = result + 526;
    result[526] = result + 553;
    result[553] = result + 580;
    result[580] = result + 607;
    result[607] = result + 634;
    result[634] = result + 661;
    result[661] = result + 688;
    result[688] = result + 715;
    result[715] = result + 742;
    result[742] = result + 769;
    result[769] = result + 796;
    result[796] = result + 823;
    result[823] = result + 850;
    result[850] = 0;
    result[10] = result + 13;
    v6 = a2;
    if ( a2 )
      v6 = 1;
    v7 = (unsigned __int8)v6 & (a3 > 0);
    if ( ((unsigned __int8)v6 & (a3 > 0)) != 0 )
      v7 = a2;
    else
      a3 = 0;
    result[877] = a3;
    result[878] = v7;
    *result = 12569236;
    result[880] = 0;
    result[881] = 0;
    return result;
  }

/* ============================================================================
 * sub_60475AE8
 * RVA 0x00475ae8   size 0xb8   xrefs 233
 * ============================================================================ */
  void __fastcall sub_60475AE8(sead::IDisposer *a1)
  {
    int v2; // r0
    int v3; // r0
  
    *(_DWORD *)a1 = 12569236;
    if ( *((_DWORD *)a1 + 4) )
    {
      sub_6047A05C();
      v2 = *((_DWORD *)a1 + 4);
      *(_DWORD *)a1 = 12569208;
      if ( v2 )
      {
        sub_60855B70(4690912, 4690940);
        sub_60855C88(*((_DWORD *)a1 + 4), *(_DWORD *)(MEMORY[0xCCFC8C] + 24));
        v3 = *((_DWORD *)a1 + 4);
        if ( v3 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
        *((_DWORD *)a1 + 4) = 0;
        *((_DWORD *)a1 + 5) = 0;
      }
    }
    else
    {
      *(_DWORD *)a1 = 12569208;
    }
    sead::IDisposer::~IDisposer(a1);
  }

/* ============================================================================
 * sub_60475C8C
 * RVA 0x00475c8c   size 0x48   xrefs 90
 * ============================================================================ */
  int __fastcall sub_60475C8C(int a1)
  {
    int CurrentHeap; // r0
    int v3; // r0
    int result; // r0
  
    CurrentHeap = sead::HeapMgr::getCurrentHeap(MEMORY[0xCCEE90]);
    v3 = operator new(36, CurrentHeap, 4);
    result = sub_60982D30(v3, *(_DWORD *)(MEMORY[0xCD0C84] + 836), *(_DWORD *)(MEMORY[0xCD0C84] + 856));
    *(_DWORD *)(a1 + 3520) = result;
    return result;
  }

/* ============================================================================
 * sub_60475CDC
 * RVA 0x00475cdc   size 0x314   xrefs 91
 * ============================================================================ */
  int __fastcall sub_60475CDC(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5)
  {
    int v9; // r0
    int v10; // r1
    int v11; // r0
    int v12; // r6
    int v13; // r5
    int v14; // r7
    int v15; // r4
    int v16; // r4
    int v17; // r5
    int v18; // r0
    int v19; // r2
    int v20; // r1
    int v21; // r1
    int v22; // r0
    _BYTE v24[8]; // [sp+1Ch] [bp-540h] BYREF
    _DWORD v25[3]; // [sp+24h] [bp-538h] BYREF
    int v26; // [sp+30h] [bp-52Ch] BYREF
    int *v27; // [sp+34h] [bp-528h]
    int v28; // [sp+38h] [bp-524h]
    int v29; // [sp+3Ch] [bp-520h] BYREF
    int v30; // [sp+43Ch] [bp-120h] BYREF
    int *v31; // [sp+440h] [bp-11Ch]
    int v32; // [sp+444h] [bp-118h]
    int v33; // [sp+448h] [bp-114h] BYREF
    _BYTE v34[16]; // [sp+548h] [bp-14h] BYREF
    int v35; // [sp+558h] [bp-4h] BYREF
  
    sub_6090B310(MEMORY[0xCCF464]);
    sub_60476A60(v34, a3, a4, a5);
    v31 = &v33;
    v30 = 12322272;
    v32 = 256;
    sead::BufferedSafeStringBase<char>::assureTerminationImpl_(&v30);
    *(_BYTE *)v31 = MEMORY[0xB3BA34];
    v30 = 12424380;
    sub_608E978C(&v30, a2);
    v9 = (*(int (__fastcall **)(_DWORD, int *))(**(_DWORD **)(MEMORY[0xCD0C84] + 836) + 32))(
           *(_DWORD *)(MEMORY[0xCD0C84] + 836),
           &v30);
    sub_60982EE0(a1[880], *(_DWORD *)(v9 + 104), *(_DWORD *)(v9 + 108));
    v10 = sub_60986F04(*(_DWORD *)(MEMORY[0xCD0C84] + 852), &v30);
    if ( !v10 )
    {
      v11 = *(_DWORD *)(MEMORY[0xCD0C84] + 852);
      v25[0] = 12321336;
      v25[1] = "message";
      v10 = sub_60986F04(v11, v25);
    }
    sub_609897B0(v25, v10, a1[879]);
    v25[0] = 12571388;
    v27 = &v29;
    v26 = 12569116;
    v28 = 512;
    sub_608FDDB4(&v26);
    v12 = 0;
    *(_WORD *)v27 = MEMORY[0xB3BA36];
    v26 = 12569312;
    v13 = a1[880];
    v14 = a1[4];
    v15 = *(_DWORD *)(MEMORY[0xCCF464] + 36);
    LOBYTE(v35) = 0;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    if ( sub_60855E14(v14, v24, v15, v13, v34, v25, &v35, a2[1], 0) == 1 )
    {
      v16 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
      v17 = MEMORY[0xCD0C84];
      (*(void (__fastcall **)(int *))(v30 + 12))(&v30);
      sub_6098C20C(v16, v17, v31);
      v18 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
      v19 = a1[4];
      v20 = *(_DWORD *)(v19 + 12);
      v35 = 0;
      sub_6098BD10(v18, v20, v19, &v35);
      v21 = a1[4];
      if ( *(_DWORD *)(v21 + 56) )
      {
        sub_60989E30();
        v21 = a1[4];
      }
      v22 = *(_DWORD *)(v21 + 64);
      if ( v22 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 88))(v22);
      *(_DWORD *)(a1[6] + 184) = MEMORY[0xCD0C84] + 40;
      sub_6098F300(a1[6], a1[4] + 20);
      sub_6098B5A8(*(_DWORD *)(MEMORY[0xCD0C84] + 864), a1[6]);
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[4] + 52))(a1[4], a1[879]);
      v12 = 1;
    }
    sub_6090B32C(MEMORY[0xCCF464]);
    return v12;
  }

/* ============================================================================
 * sub_60476030
 * RVA 0x00476030   size 0x60   xrefs 74
 * ============================================================================ */
  int __fastcall sub_60476030(int a1, _DWORD *a2, int *a3)
  {
    int v6; // r7
  
    if ( *a3 >= 1 )
    {
      v6 = 0;
      do
      {
        sub_60473624(a1, a2);
        ++v6;
        a2 += 2;
      }
      while ( v6 < *a3 );
    }
    return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 3520) + 12))(
             *(_DWORD *)(a1 + 3520),
             10029528,
             0);
  }

/* ============================================================================
 * sub_6047611C
 * RVA 0x0047611c   size 0x1d4   xrefs 54
 * ============================================================================ */
  _DWORD *__fastcall sub_6047611C(int a1, int a2, int a3)
  {
    _DWORD *result; // r0
    char v6; // r2
    int v7; // r1
  
    result = (_DWORD *)sead_IDisposer_ctor(a1);
    *result = 12569208;
    result[5] = 0;
    result[6] = 0;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
    result[11] = 0;
    result[4] = 0;
    result[12] = 32;
    result[9] = result + 13;
    result[13] = result + 40;
    result[40] = result + 67;
    result[67] = result + 94;
    result[94] = result + 121;
    result[121] = result + 148;
    result[148] = result + 175;
    result[175] = result + 202;
    result[202] = result + 229;
    result[229] = result + 256;
    result[256] = result + 283;
    result[283] = result + 310;
    result[310] = result + 337;
    result[337] = result + 364;
    result[364] = result + 391;
    result[391] = result + 418;
    result[418] = result + 445;
    result[445] = result + 472;
    result[472] = result + 499;
    result[499] = result + 526;
    result[526] = result + 553;
    result[553] = result + 580;
    result[580] = result + 607;
    result[607] = result + 634;
    result[634] = result + 661;
    result[661] = result + 688;
    result[688] = result + 715;
    result[715] = result + 742;
    result[742] = result + 769;
    result[769] = result + 796;
    result[796] = result + 823;
    result[823] = result + 850;
    result[850] = 0;
    result[10] = result + 13;
    v6 = a2;
    if ( a2 )
      v6 = 1;
    v7 = (unsigned __int8)v6 & (a3 > 0);
    if ( ((unsigned __int8)v6 & (a3 > 0)) != 0 )
      v7 = a2;
    else
      a3 = 0;
    result[877] = a3;
    result[878] = v7;
    *result = 12569264;
    return result;
  }

/* ============================================================================
 * sub_604762F8
 * RVA 0x004762f8   size 0x8c   xrefs 3
 * ============================================================================ */
  int __fastcall sub_604762F8(_DWORD *a1, int a2)
  {
    int v3; // r0
  
    a1[4] = a2;
    if ( *(_DWORD *)(a2 + 56) )
    {
      sub_60989E30();
      a2 = a1[4];
    }
    v3 = *(_DWORD *)(a2 + 64);
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 88))(v3);
    *(_DWORD *)(a1[6] + 184) = MEMORY[0xCD0C84] + 40;
    sub_6098F300(a1[6], a1[4] + 20);
    sub_6098B5A8(*(_DWORD *)(MEMORY[0xCD0C84] + 864), a1[6]);
    return (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[4] + 52))(a1[4], a1[879]);
  }

/* ============================================================================
 * sub_60476388
 * RVA 0x00476388   size 0x9c   xrefs 49
 * ============================================================================ */
  int __fastcall sub_60476388(_DWORD *a1, int a2, _DWORD *a3)
  {
    int (__fastcall ***v4)(_DWORD); // r0
    int (__fastcall **v5)(_DWORD); // r0
  
    v4 = sub_60474D94(a2, a3);
    a1[4] = v4;
    if ( v4[14] )
    {
      sub_60989E30(v4[14]);
      v4 = (int (__fastcall ***)(_DWORD))a1[4];
    }
    v5 = v4[16];
    if ( v5 )
      (*((void (__fastcall **)(int (__fastcall **)(_DWORD)))*v5 + 22))(v5);
    *(_DWORD *)(a1[6] + 184) = MEMORY[0xCD0C84] + 40;
    sub_6098F300(a1[6], a1[4] + 20);
    sub_6098B5A8(*(_DWORD *)(MEMORY[0xCD0C84] + 864), a1[6]);
    return (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[4] + 52))(a1[4], a1[879]);
  }

/* ============================================================================
 * sub_6047643C
 * RVA 0x0047643c   size 0x84   xrefs 110
 * ============================================================================ */
  void __fastcall sub_6047643C(sead::IDisposer *a1)
  {
    int v2; // r0
  
    *(_DWORD *)a1 = 12569208;
    if ( *((_DWORD *)a1 + 4) )
    {
      sub_60855B70(4690912, 4690940);
      sub_60855C88(*((_DWORD *)a1 + 4), *(_DWORD *)(MEMORY[0xCCFC8C] + 24));
      v2 = *((_DWORD *)a1 + 4);
      if ( v2 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      *((_DWORD *)a1 + 4) = 0;
      *((_DWORD *)a1 + 5) = 0;
    }
    sead::IDisposer::~IDisposer(a1);
  }

/* ============================================================================
 * sub_6047684C
 * RVA 0x0047684c   size 0x4c   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6047684C(int result)
  {
    *(_BYTE *)result = 0;
    *(_DWORD *)(result + 4) = 1106247680;
    *(_DWORD *)(result + 8) = 1084227584;
    *(_BYTE *)(result + 24) = 0;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 16) = 0;
    *(_DWORD *)(result + 12) = 0;
    *(_DWORD *)(result + 28) = 1084227584;
    *(_DWORD *)(result + 32) = 1112014848;
    *(_DWORD *)(result + 36) = 1056964608;
    return result;
  }

/* ============================================================================
 * sub_60476898
 * RVA 0x00476898   size 0x7c   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60476898(int a1)
  {
    char v2; // r0
  
    *(_DWORD *)(a1 + 4) = a1 + 12;
    *(_DWORD *)a1 = 12322272;
    *(_DWORD *)(a1 + 8) = 64;
    sead::BufferedSafeStringBase<char>::assureTerminationImpl_(a1);
    v2 = MEMORY[0xB3BA34];
    **(_BYTE **)(a1 + 4) = MEMORY[0xB3BA34];
    *(_DWORD *)a1 = 12405744;
    *(_DWORD *)(a1 + 76) = 60;
    *(_DWORD *)(a1 + 80) = 0;
    *(_WORD *)(a1 + 84) = 257;
    **(_BYTE **)(a1 + 4) = v2;
    return a1;
  }

/* ============================================================================
 * sub_60476920
 * RVA 0x00476920   size 0xc0   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60476920(int a1, int a2)
  {
    char v4; // r0
    char v5; // r0
    int v7; // [sp+0h] [bp-8h] BYREF
    char v8; // [sp+6h] [bp-2h] BYREF
    char v9; // [sp+7h] [bp-1h] BYREF
  
    sub_609053CC(a1, &v8);
    v4 = v8;
    if ( v8 )
      v4 = 1;
    *(_BYTE *)a2 = v4;
    sub_609054D4(a1, a2 + 4);
    sub_609054D4(a1, a2 + 8);
    sub_609054D4(a1, a2 + 12);
    sub_609054D4(a1, a2 + 16);
    sub_609054A8(a1, &v7);
    *(_DWORD *)(a2 + 20) = v7;
    sub_609053CC(a1, &v9);
    v5 = v9;
    if ( v9 )
      v5 = 1;
    *(_BYTE *)(a2 + 24) = v5;
    sub_609054D4(a1, a2 + 28);
    sub_609054D4(a1, a2 + 32);
    sub_609054D4(a1, a2 + 36);
    return sub_609054D4(a1, a2 + 40);
  }

/* ============================================================================
 * sub_604769E0
 * RVA 0x004769e0   size 0x80   xrefs 1
 * ============================================================================ */
  int __fastcall sub_604769E0(int a1, int a2)
  {
    char v4; // r0
    int result; // r0
    int v6; // [sp+0h] [bp-8h] BYREF
    char v7; // [sp+6h] [bp-2h] BYREF
    unsigned __int8 v8; // [sp+7h] [bp-1h] BYREF
  
    sub_60905500(a1, a2, *(_DWORD *)(a2 + 8) - 1);
    sub_609054A8(a1, a2 + 76);
    sub_609054A8(a1, &v6);
    *(_DWORD *)(a2 + 80) = v6;
    sub_609053CC(a1, &v7);
    v4 = v7;
    if ( v7 )
      v4 = 1;
    *(_BYTE *)(a2 + 84) = v4;
    sub_609053CC(a1, &v8);
    result = v8;
    if ( v8 )
      result = 1;
    *(_BYTE *)(a2 + 85) = result;
    return result;
  }

/* ============================================================================
 * MenuLayoutTable_init
 * RVA 0x00476a7c   size 0x9d4   xrefs 0
 * ============================================================================ */
  int __fastcall sub_60476A7C(int a1, int a2, int a3, char **a4)
  {
    char *v7; // r7
    int result; // r0
    int v9; // r4
    int v10; // r2
    int i; // r1
    int v12; // r3
    int v13; // r3
    char *v14; // r7
    int j; // r1
    int v16; // r3
    int v17; // r3
    int v18; // r0
    int v19; // r7
    char *v20; // r7
    int k; // r1
    int v22; // r3
    int v23; // r3
    char *v24; // r7
    int m; // r1
    int v26; // r3
    int v27; // r3
    int v28; // r0
    char *v29; // r7
    int n; // r1
    int v31; // r3
    int v32; // r3
    char *v33; // r7
    int ii; // r1
    int v35; // r3
    int v36; // r3
    char *v37; // r7
    int jj; // r1
    int v39; // r3
    int v40; // r3
    char *v41; // r7
    int kk; // r1
    int v43; // r3
    int v44; // r3
    bool v45; // zf
    int mm; // r1
    int v47; // r3
    int nn; // r1
    int v49; // r3
    int i1; // r1
    int v51; // r3
    int i2; // r1
    int v53; // r3
    int v54; // [sp+0h] [bp-10h] BYREF
    const char *v55; // [sp+4h] [bp-Ch]
    int v56; // [sp+8h] [bp-8h] BYREF
    char *v57; // [sp+Ch] [bp-4h]
  
    v7 = *a4;
    v56 = 12321336;
    v57 = v7;
    result = (int)"NormalButton";
    if ( v7 != "NormalButton" )
    {
      v9 = MEMORY[0xB3BA34];
      for ( result = 0; result < 524289; ++result )
      {
        v10 = (unsigned __int8)v7[result];
        if ( v10 != (unsigned __int8)aNormalbutton[result] )
          break;
        if ( v10 == MEMORY[0xB3BA34] )
          return result;
      }
      v54 = 12321336;
      v55 = "DecisionButton";
      sead::SafeStringBase<char>::assureTerminationImpl_(&v54);
      result = (int)v55;
      if ( v7 != v55 )
      {
        for ( i = 1; ; i += 2 )
        {
          v12 = (unsigned __int8)v57[i - 1];
          if ( v12 != (unsigned __int8)v55[i - 1] )
            break;
          if ( v12 == v9 )
            return result;
          if ( i >= 524289 )
            break;
          v13 = (unsigned __int8)v57[i];
          if ( v13 != (unsigned __int8)v55[i] )
            break;
          if ( v13 == v9 )
            return result;
        }
        v54 = 12321336;
        v55 = "CursorDecisionButton";
        (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
        (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
        v14 = v57;
        (*(void (__fastcall **)(int *))(v54 + 12))(&v54);
        if ( v14 == v55 )
        {
  LABEL_23:
          v18 = sub_60855BC8(220);
          v19 = v18;
          if ( !v18 )
            goto LABEL_88;
          sub_60478B70(v18);
        }
        else
        {
          for ( j = 1; ; j += 2 )
          {
            v16 = (unsigned __int8)v57[j - 1];
            if ( v16 != (unsigned __int8)v55[j - 1] )
              break;
            if ( v16 == v9 )
              goto LABEL_23;
            if ( j >= 524289 )
              break;
            v17 = (unsigned __int8)v57[j];
            if ( v17 != (unsigned __int8)v55[j] )
              break;
            if ( v17 == v9 )
              goto LABEL_23;
          }
          v54 = 12321336;
          v55 = "CursorNormalButton";
          (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
          (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
          v20 = v57;
          (*(void (__fastcall **)(int *))(v54 + 12))(&v54);
          if ( v20 == v55 )
          {
  LABEL_33:
            v19 = sub_60855BC8(220);
            if ( !v19 )
              goto LABEL_88;
            SE_SYS_BTN_OVER_ref();
            *(_DWORD *)v19 = 12570580;
            *(_DWORD *)(v19 + 8) |= 0x20u;
            *(_DWORD *)(v19 + 164) = 1;
          }
          else
          {
            for ( k = 1; ; k += 2 )
            {
              v22 = (unsigned __int8)v57[k - 1];
              if ( v22 != (unsigned __int8)v55[k - 1] )
                break;
              if ( v22 == v9 )
                goto LABEL_33;
              if ( k >= 524289 )
                break;
              v23 = (unsigned __int8)v57[k];
              if ( v23 != (unsigned __int8)v55[k] )
                break;
              if ( v23 == v9 )
                goto LABEL_33;
            }
            v54 = 12321336;
            v55 = "CursorNormalButtonArrowL";
            (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
            (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
            v24 = v57;
            (*(void (__fastcall **)(int *))(v54 + 12))(&v54);
            if ( v24 == v55 )
            {
  LABEL_43:
              v19 = sub_60855BC8(220);
              if ( !v19 )
                goto LABEL_88;
              SE_SYS_BTN_OVER_ref();
              *(_DWORD *)(v19 + 8) |= 0x20u;
              *(_DWORD *)(v19 + 164) = 1;
              v28 = 12569660;
            }
            else
            {
              for ( m = 1; ; m += 2 )
              {
                v26 = (unsigned __int8)v57[m - 1];
                if ( v26 != (unsigned __int8)v55[m - 1] )
                  break;
                if ( v26 == v9 )
                  goto LABEL_43;
                if ( m >= 524289 )
                  break;
                v27 = (unsigned __int8)v57[m];
                if ( v27 != (unsigned __int8)v55[m] )
                  break;
                if ( v27 == v9 )
                  goto LABEL_43;
              }
              v54 = 12321336;
              v55 = "CursorNormalButtonArrowR";
              (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
              (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
              v29 = v57;
              (*(void (__fastcall **)(int *))(v54 + 12))(&v54);
              if ( v29 != v55 )
              {
                for ( n = 1; ; n += 2 )
                {
                  v31 = (unsigned __int8)v57[n - 1];
                  if ( v31 != (unsigned __int8)v55[n - 1] )
                    break;
                  if ( v31 == v9 )
                    goto LABEL_53;
                  if ( n >= 524289 )
                    break;
                  v32 = (unsigned __int8)v57[n];
                  if ( v32 != (unsigned __int8)v55[n] )
                    break;
                  if ( v32 == v9 )
                    goto LABEL_53;
                }
                v54 = 12321336;
                v55 = "CursorCheckButton";
                (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                v33 = v57;
                (*(void (__fastcall **)(int *))(v54 + 12))(&v54);
                if ( v33 == v55 )
                {
  LABEL_64:
                  v19 = sub_60855BC8(228);
                  if ( v19 )
                  {
                    SE_SYS_BTN_OVER_ref();
                    *(_DWORD *)v19 = 12570124;
                    *(_BYTE *)(v19 + 220) = 0;
                    *(_DWORD *)(v19 + 224) = 0;
                    *(_DWORD *)(v19 + 8) |= 0x20u;
                    *(_DWORD *)(v19 + 164) = 2;
                  }
                  else
                  {
                    v19 = 0;
                  }
                  result = j_OnOff((_DWORD *)v19, (int)a4, a3);
                }
                else
                {
                  for ( ii = 1; ; ii += 2 )
                  {
                    v35 = (unsigned __int8)v57[ii - 1];
                    if ( v35 != (unsigned __int8)v55[ii - 1] )
                      break;
                    if ( v35 == v9 )
                      goto LABEL_64;
                    if ( ii >= 524289 )
                      break;
                    v36 = (unsigned __int8)v57[ii];
                    if ( v36 != (unsigned __int8)v55[ii] )
                      break;
                    if ( v36 == v9 )
                      goto LABEL_64;
                  }
                  v54 = 12321336;
                  v55 = "CursorDragButton";
                  (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                  (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                  v37 = v57;
                  (*(void (__fastcall **)(int *))(v54 + 12))(&v54);
                  if ( v37 != v55 )
                  {
                    for ( jj = 1; ; jj += 2 )
                    {
                      v39 = (unsigned __int8)v57[jj - 1];
                      if ( v39 != (unsigned __int8)v55[jj - 1] )
                        break;
                      if ( v39 == v9 )
                        goto LABEL_74;
                      if ( jj >= 524289 )
                        break;
                      v40 = (unsigned __int8)v57[jj];
                      if ( v40 != (unsigned __int8)v55[jj] )
                        break;
                      if ( v40 == v9 )
                        goto LABEL_74;
                    }
                    v54 = 12321336;
                    v55 = "CursorPushButton";
                    (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                    (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                    v41 = v57;
                    (*(void (__fastcall **)(int *))(v54 + 12))(&v54);
                    if ( v41 != v55 )
                    {
                      for ( kk = 1; ; kk += 2 )
                      {
                        v43 = (unsigned __int8)v57[kk - 1];
                        if ( v43 != (unsigned __int8)v55[kk - 1] )
                          break;
                        if ( v43 == v9 )
                          goto LABEL_86;
                        if ( kk >= 524289 )
                          break;
                        v44 = (unsigned __int8)v57[kk];
                        if ( v44 != (unsigned __int8)v55[kk] )
                          break;
                        if ( v44 == v9 )
                          goto LABEL_86;
                      }
                      (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                      (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                      result = (int)v57;
                      if ( v57 != "SelectButton" )
                      {
                        for ( mm = 0; mm < 524289; ++mm )
                        {
                          v47 = (unsigned __int8)v57[mm];
                          if ( v47 != (unsigned __int8)aSelectbutton[mm] )
                            break;
                          if ( v47 == v9 )
                            return result;
                        }
                        (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                        (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                        result = (int)v57;
                        if ( v57 != "CheckButton" )
                        {
                          for ( nn = 0; nn < 524289; ++nn )
                          {
                            v49 = (unsigned __int8)v57[nn];
                            if ( v49 != (unsigned __int8)aCheckbutton[nn] )
                              break;
                            if ( v49 == v9 )
                              return result;
                          }
                          (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                          (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                          result = (int)v57;
                          if ( v57 != "FlexibleTextBoxR" )
                          {
                            for ( i1 = 0; i1 < 524289; ++i1 )
                            {
                              v51 = (unsigned __int8)v57[i1];
                              if ( v51 != (unsigned __int8)aFlexibletextbo[i1] )
                                break;
                              if ( v51 == v9 )
                                return result;
                            }
                            (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                            (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                            result = (int)v57;
                            if ( v57 != "FlexibleTextBoxL" )
                            {
                              for ( i2 = 0; i2 < 524289; ++i2 )
                              {
                                v53 = (unsigned __int8)v57[i2];
                                if ( v53 != (unsigned __int8)aFlexibletextbo_0[i2] )
                                  break;
                                if ( v53 == v9 )
                                  return result;
                              }
                              (*(void (__fastcall **)(int *))(v56 + 12))(&v56);
                              return (*(int (__fastcall **)(int *))(v56 + 12))(&v56);
                            }
                          }
                        }
                      }
                      return result;
                    }
  LABEL_86:
                    v19 = sub_60855BC8(220);
                    if ( v19 )
                    {
                      SE_SYS_BTN_OVER_ref();
                      *(_DWORD *)v19 = 12570732;
                      *(_DWORD *)(v19 + 164) = 4;
                      goto LABEL_89;
                    }
  LABEL_88:
                    v19 = 0;
                    goto LABEL_89;
                  }
  LABEL_74:
                  v19 = sub_60855BC8(260);
                  if ( v19 )
                  {
                    SE_SYS_BTN_OVER_ref();
                    *(_DWORD *)v19 = 12570428;
                    *(_DWORD *)(v19 + 220) = 0;
                    *(_WORD *)(v19 + 240) = 0;
                    *(_DWORD *)(v19 + 8) |= 0x20u;
                    *(_DWORD *)(v19 + 164) = 3;
                  }
                  else
                  {
                    v19 = 0;
                  }
                  result = sub_60478D70((_DWORD *)v19, (int)a4, a3);
                }
  LABEL_90:
                v45 = v19 == 0;
                if ( v19 )
                {
                  v9 = *(_DWORD *)(a1 + 4);
                  v45 = v9 == 0;
                }
                if ( !v45 )
                {

/* ============================================================================
 * sub_60477558
 * RVA 0x00477558   size 0xe4   xrefs 2
 * ============================================================================ */
  int sub_60477558()
  {
    if ( _cxa_guard_acquire_0(13228580) )
    {
      if ( _cxa_guard_acquire_0(13228588) )
      {
        if ( _cxa_guard_acquire_0(13228596) )
        {
          MEMORY[0xC9DA30] = 0;
          _cxa_guard_release_0(13228596);
        }
        MEMORY[0xC9DA28] = 13228592;
        _cxa_guard_release_0(13228588);
      }
      MEMORY[0xC9DA20] = 13228584;
      _cxa_guard_release_0(13228580);
    }
    return 13228576;
  }

/* ============================================================================
 * SE_SYS_BTN_OVER_ref
 * RVA 0x004776f0   size 0x88   xrefs 7
 * ============================================================================ */
  int sub_604776F0()
  {
    int result; // r0
  
    result = sub_60852BBC();
    *(_DWORD *)result = 12569972;
    *(_DWORD *)(result + 92) = 0;
    *(_BYTE *)(result + 160) = 0;
    *(_BYTE *)(result + 168) = 0;
    *(_DWORD *)(result + 172) = "SE_SYS_DECIDE";
    *(_DWORD *)(result + 176) = "SE_SYS_BTN_OVER";
    *(_DWORD *)(result + 180) = "SE_SYS_BTN_OVER_OFF";
    *(_DWORD *)(result + 184) = "SE_SYS_CURSOR";
    *(_BYTE *)(result + 188) = 0;
    *(_DWORD *)(result + 192) = 9;
    *(_DWORD *)(result + 196) = 9;
    *(_DWORD *)(result + 200) = 9;
    *(_DWORD *)(result + 204) = 9;
    *(_BYTE *)(result + 208) = 1;
    *(_DWORD *)(result + 212) = 0;
    *(_DWORD *)(result + 216) = 0;
    *(_DWORD *)(result + 164) = 0;
    return result;
  }

/* ============================================================================
 * sub_6047778C
 * RVA 0x0047778c   size 0x258   xrefs 3
 * ============================================================================ */
  int __fastcall sub_6047778C(_DWORD *a1, int a2, int a3)
  {
    int v6; // r0
    int v7; // r0
    int v8; // r0
    int v9; // r7
    _BYTE *v10; // r0
    _BYTE *v11; // r6
    bool v12; // zf
    int v13; // r7
    int v14; // r0
    int v15; // r0
    _BYTE *v16; // r1
    int v17; // r0
    _BYTE *v18; // r1
    _BYTE *v19; // r1
    int result; // r0
  
    sub_60852BFC(a1, *(_DWORD *)(MEMORY[0xCCF464] + 36), a3, a2);
    v6 = sub_60853E04(a2, "OnOff");
    v7 = sub_60980A38(a3, v6, 1);
    a1[32] = v7;
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 104))(v7);
    v8 = sub_60853E04(a2, "Down");
    v9 = 0;
    a1[33] = sub_60980A38(a3, v8, 0);
    a1[34] = 0;
    v10 = (_BYTE *)sub_60853E04(a2, "Disable");
    v11 = v10;
    v12 = v10 == nullptr;
    if ( v10 )
      v12 = *v10 == 0;
    if ( v12 )
    {
      a1[30] = 0;
    }
    else
    {
      a1[30] = sub_60980684(a3, v10, 0);
      v9 = sub_60980684(a3, v11, 0);
    }
    a1[37] = v9;
    v13 = 0;
    a1[35] = sub_60980684(a3, "PlayMode", 0);
    a1[36] = sub_60980684(a3, "Empty", 0);
    a1[38] = sub_60980684(a3, "Key", 0);
    a1[39] = sub_60980684(a3, "Loop", 0);
    v14 = sub_60853DE0(a2, 2);
    a1[28] = sub_60980A38(a3, v14, 0);
    v15 = sub_60853DE0(a2, 3);
    a1[29] = sub_60980A38(a3, v15, 0);
    if ( *(unsigned __int16 *)(a2 + 10) >= 6u )
    {
      v16 = (_BYTE *)sub_60853DE0(a2, 4);
      if ( *v16 )
      {
        if ( a1[30] )
          goto LABEL_13;
        v17 = sub_60980A38(a3, v16, 0);
      }
      else
      {
        v17 = 0;
      }
      a1[30] = v17;
  LABEL_13:
      v18 = (_BYTE *)sub_60853DE0(a2, 5);
      if ( *v18 )
        v13 = sub_60980A38(a3, v18, 0);
      else
        v13 = 0;
      goto LABEL_16;
    }
    a1[30] = 0;
  LABEL_16:
    a1[31] = v13;
    v19 = (_BYTE *)sub_60853D80(a2, "Cursor");
    if ( *v19 )
    {
      result = (*(int (__fastcall **)(_DWORD, _BYTE *, int))(**(_DWORD **)(a3 + 12) + 48))(*(_DWORD *)(a3 + 12), v19, 1);
      a1[23] = result;
    }
    else
    {
      a1[23] = 0;
      return 0;
    }
    return result;
  }

/* ============================================================================
 * sub_60477B30
 * RVA 0x00477b30   size 0x130   xrefs 16
 * ============================================================================ */
  int __fastcall sub_60477B30(_DWORD *a1, int a2)
  {
    int v4; // r0
    int v5; // r0
    int v6; // r0
    int v7; // r0
    int v8; // r0
    int v9; // r0
    int v10; // r0
    int result; // r0
  
    v4 = a1[28];
    if ( v4 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v4 + 16))(v4, v4 == a2);
    v5 = a1[29];
    if ( v5 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v5 + 16))(v5, v5 == a2);
    v6 = a1[30];
    if ( v6 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v6 + 16))(v6, v6 == a2);
    v7 = a1[31];
    if ( v7 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v7 + 16))(v7, v7 == a2);
    v8 = a1[32];
    if ( v8 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v8 + 16))(v8, v8 == a2);
    v9 = a1[33];
    if ( v9 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v9 + 16))(v9, v9 == a2);
    v10 = a1[34];
    if ( v10 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v10 + 16))(v10, v10 == a2);
    result = a1[30];
    if ( result )
      return (*(int (__fastcall **)(int, bool))(*(_DWORD *)result + 16))(result, result == a2);
    return result;
  }

/* ============================================================================
 * sub_60478080
 * RVA 0x00478080   size 0x148   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60478080(int a1)
  {
    int v2; // r0
    float v3; // s16
    int v4; // r0
    int v5; // r0
    int v6; // r0
  
    if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
    {
      v2 = *(_DWORD *)(a1 + 128);
      if ( v2 )
      {
        v3 = *(float *)(v2 + 16);
        if ( v3 == (float)(unsigned int)sub_608502E4()
          || *(_BYTE *)(*(_DWORD *)(a1 + 132) + 20)
          || *(_BYTE *)(*(_DWORD *)(a1 + 116) + 20) )
        {
          (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 128) + 108))(*(_DWORD *)(a1 + 128));
          sub_608535C4(a1);
        }
        else
        {
          (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 128) + 104))(*(_DWORD *)(a1 + 128));
          sub_608535AC(a1);
        }
        (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 128) + 16))(*(_DWORD *)(a1 + 128), 1);
      }
      else
      {
        sub_608535AC(a1);
      }
      v4 = *(_DWORD *)(a1 + 132);
      if ( v4 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
        (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 132) + 16))(*(_DWORD *)(a1 + 132), 0);
      }
      v5 = *(_DWORD *)(a1 + 112);
      if ( v5 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 104))(v5);
        (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 112) + 16))(*(_DWORD *)(a1 + 112), 0);
      }
      v6 = *(_DWORD *)(a1 + 116);
      if ( v6 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 104))(v6);
        (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 116) + 16))(*(_DWORD *)(a1 + 116), 0);
      }
    }
    *(_BYTE *)(a1 + 160) = 0;
    return 0;
  }

/* ============================================================================
 * sub_6047823C
 * RVA 0x0047823c   size 0x108   xrefs 7
 * ============================================================================ */
  int __fastcall sub_6047823C(_DWORD *a1)
  {
    int *v2; // r0
    int v3; // r2
    int v4; // r1
    void (*v5)(void); // r1
    float *v6; // r0
    int v7; // r2
    float v8; // r1
    void (*v9)(void); // r1
    int v10; // r0
    int v11; // r1
  
    v2 = (int *)a1[32];
    if ( !*((_BYTE *)v2 + 20) )
    {
      v4 = *v2;
      goto LABEL_6;
    }
    v3 = (int)(float)(*((float *)v2 + 11) * 10.0);
    if ( v3 )
    {
      v4 = *v2;
      if ( v3 < 1 )
      {
        v5 = *(void (**)(void))(v4 + 104);
  LABEL_7:
        v5();
        goto LABEL_8;
      }
  LABEL_6:
      v5 = *(void (**)(void))(v4 + 108);
      goto LABEL_7;
    }
  LABEL_8:
    v6 = (float *)a1[33];
    if ( *((_BYTE *)v6 + 20) )
    {
      v7 = (int)(float)(v6[11] * 10.0);
      if ( v7 )
      {
        v8 = *v6;
        if ( v7 < 1 )
          v9 = *(void (**)(void))(LODWORD(v8) + 104);
        else
          v9 = *(void (**)(void))(LODWORD(v8) + 108);
        v9();
      }
    }
    v10 = a1[28];
    if ( v10 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 108))(v10);
    v11 = a1[30];
    if ( v11 )
    {
      sub_60477B30(a1, v11);
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[30] + 92))(a1[30], 0);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)a1[30] + 108))(a1[30]);
    }
    return (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 40))(a1, 0);
  }

/* ============================================================================
 * sub_60478344
 * RVA 0x00478344   size 0xbc   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60478344(int a1)
  {
    int result; // r0
    float *v3; // r0
    int v4; // r2
    float v5; // r1
    void (*v6)(void); // r1
    int v7; // r1
  
    result = *(unsigned __int8 *)(a1 + 8);
    if ( (result & 0x10) != 0 )
    {
      v3 = *(float **)(a1 + 128);
      if ( *((_BYTE *)v3 + 20) || (v3 = *(float **)(a1 + 132), *((_BYTE *)v3 + 20)) )
      {
        v4 = (int)(float)(v3[11] * 10.0);
        if ( v4 )
        {
          v5 = *v3;
          if ( v4 < 1 )
            v6 = *(void (**)(void))(LODWORD(v5) + 104);
          else
            v6 = *(void (**)(void))(LODWORD(v5) + 108);
          v6();
        }
      }
      v7 = *(_DWORD *)(a1 + 120);
      if ( v7 )
      {
        sub_60477B30((_DWORD *)a1, v7);
        (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 120) + 92))(*(_DWORD *)(a1 + 120), 0);
        *(_DWORD *)(*(_DWORD *)(a1 + 120) + 16) = 0;
      }
      return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 40))(a1, 0);
    }
    return result;
  }

/* ============================================================================
 * sub_60478440
 * RVA 0x00478440   size 0xac   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60478440(_DWORD *a1)
  {
    int v2; // r0
    int v3; // r0
    int v4; // r1
  
    if ( a1[41] == 4 )
      (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 108))(a1, 0);
    v2 = a1[32];
    if ( v2 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 104))(v2);
    v3 = a1[28];
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
    v4 = a1[31];
    if ( v4 )
    {
      sub_60477B30(a1, v4);
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[31] + 92))(a1[31], 0);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)a1[31] + 108))(a1[31]);
    }
    return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 40))(a1, 1);
  }

/* ============================================================================
 * sub_604784EC
 * RVA 0x004784ec   size 0x64   xrefs 2
 * ============================================================================ */
  int __fastcall sub_604784EC(int a1)
  {
    int result; // r0
    int v3; // r1
  
    result = *(unsigned __int8 *)(a1 + 8);
    if ( (result & 0x10) == 0 )
    {
      v3 = *(_DWORD *)(a1 + 124);
      if ( v3 )
      {
        sub_60477B30((_DWORD *)a1, v3);
        (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 124) + 92))(*(_DWORD *)(a1 + 124), 0);
        *(_DWORD *)(*(_DWORD *)(a1 + 124) + 16) = 0;
      }
      return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 40))(a1, 1);
    }
    return result;
  }

/* ============================================================================
 * sub_604785EC
 * RVA 0x004785ec   size 0x4c   xrefs 2
 * ============================================================================ */
  int __fastcall sub_604785EC(int a1)
  {
    int v1; // r1
    bool v2; // zf
    int result; // r0
  
    v1 = *(_DWORD *)(a1 + 64);
    v2 = (*(_BYTE *)(a1 + 8) & 0x10) == 0;
    if ( (*(_BYTE *)(a1 + 8) & 0x10) == 0 )
      v2 = *(_BYTE *)(a1 + 168) == 0;
    if ( v2 )
      return 0;
    result = 0;
    if ( *(_BYTE *)(v1 + 66) )
    {
      while ( (*(_BYTE *)(v1 + 64) & 1) != 0 )
      {
        v1 = *(_DWORD *)(v1 + 12);
        if ( !v1 )
          return 1;
      }
    }
    return result;
  }

/* ============================================================================
 * sub_60478650
 * RVA 0x00478650   size 0x30   xrefs 3
 * ============================================================================ */
  int __fastcall sub_60478650(_DWORD *a1)
  {
    int result; // r0
  
    result = a1[28];
    if ( result )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)result + 104))(result);
      return sub_60477B30(a1, a1[28]);
    }
    return result;
  }

/* ============================================================================
 * sub_60478680
 * RVA 0x00478680   size 0xbc   xrefs 51
 * ============================================================================ */
  int __fastcall sub_60478680(int a1, int a2)
  {
    char v3; // r5
    int result; // r0
  
    v3 = a2;
    result = MEMORY[0xCC6D78];
    if ( MEMORY[0xCC6D78] )
    {
      if ( (unsigned __int8)a2 == 15 )
        return sub_60807FC0(MEMORY[0xCC6AF8], a1, 0, 1048577);
      result = *(unsigned __int8 *)(MEMORY[0xCC6D78] + 20);
      if ( *(_BYTE *)(MEMORY[0xCC6D78] + 20) )
      {
        if ( !a2 )
          return result;
        return sub_60807EF0(MEMORY[0xCC6AF8], a1, 0, 1);
      }
      if ( (a2 & 4) != 0 )
        result = sub_60807EF0(MEMORY[0xCC6AF8], a1, 0, 1);
      if ( (v3 & 8) != 0 )
        return sub_60807EF0(MEMORY[0xCC6AF8], a1, 0, 1);
    }
    return result;
  }

/* ============================================================================
 * sub_6047877C
 * RVA 0x0047877c   size 0xd4   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6047877C(int a1, int a2)
  {
    char v3; // r5
    int result; // r0
  
    v3 = a2;
    result = MEMORY[0xCC6D78];
    if ( MEMORY[0xCC6D78] )
    {
      if ( (unsigned __int8)a2 == 15 )
        return sub_60808374(MEMORY[0xCC6AF8], a1, 0, 0);
      result = *(unsigned __int8 *)(MEMORY[0xCC6D78] + 20);
      if ( *(_BYTE *)(MEMORY[0xCC6D78] + 20) )
      {
        if ( !a2 )
          return result;
        return sub_6080840C(MEMORY[0xCC6AF8], a1, 1, 0, 0);
      }
      if ( (a2 & 4) != 0 )
        result = sub_6080840C(MEMORY[0xCC6AF8], a1, 0, 0, 0);
      if ( (v3 & 8) != 0 )
        return sub_6080840C(MEMORY[0xCC6AF8], a1, 1, 0, 0);
    }
    return result;
  }

/* ============================================================================
 * sub_60478D70
 * RVA 0x00478d70   size 0x40   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60478D70(_DWORD *a1, int a2, int a3)
  {
    int v6; // r0
    int result; // r0
  
    sub_6047778C(a1, a2, a3);
    v6 = sub_60853DE0(a2, 2);
    a1[34] = sub_60980A38(a3, v6, 0);
    result = *(_DWORD *)(a3 + 12);
    a1[55] = result;
    return result;
  }

/* ============================================================================
 * sub_60479414
 * RVA 0x00479414   size 0x9c   xrefs 4
 * ============================================================================ */
  int __fastcall sub_60479414(int a1, int a2, int a3)
  {
    _DWORD *v6; // r0
  
    *(_DWORD *)a1 = 12570884;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 12570900;
    v6 = sub_60475900(a1 + 12, a1 + 3540, 1);
    *v6 = 12570900;
    v6[882] = 0;
    v6[883] = 12321336;
    v6[884] = 11778612;
    v6[885] = 0;
    *((_BYTE *)v6 + 3544) = 0;
    *((_BYTE *)v6 + 3548) = 0;
    if ( a2 && a3 >= 1 )
    {
      *(_DWORD *)(a1 + 4) = a3;
      *(_DWORD *)(a1 + 8) = a2;
    }
    *(_BYTE *)(a1 + 3561) = 0;
    return a1;
  }

/* ============================================================================
 * sub_604794C0
 * RVA 0x004794c0   size 0x5c   xrefs 11
 * ============================================================================ */
  _DWORD *__fastcall sub_604794C0(_DWORD *a1)
  {
    int v2; // r6
    _DWORD *v3; // r5
  
    *a1 = 12570884;
    v2 = a1[1];
    if ( v2 )
    {
      v3 = (_DWORD *)(a1[2] + 272);
      do
      {
        if ( *v3 )
          sub_60913ABC(v3);
        v3 += 208;
        --v2;
      }
      while ( v2 );
    }
    sub_60475AE8((sead::IDisposer *)(a1 + 3));
    return a1;
  }

/* ============================================================================
 * sub_60479588
 * RVA 0x00479588   size 0x74   xrefs 3
 * ============================================================================ */
  int __fastcall sub_60479588(int a1, int a2, _DWORD *a3, int a4)
  {
    _DWORD *v6; // r7
  
    v6 = (_DWORD *)(a1 + 12);
    sub_604734E4((_DWORD *)(a1 + 12), a4);
    sub_60475C8C((int)v6);
    sub_60475CDC(v6, a3, 0, 0, 0);
    return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 3532) + 12))(
             *(_DWORD *)(a1 + 3532),
             10029528,
             0);
  }

/* ============================================================================
 * sub_60479600
 * RVA 0x00479600   size 0x1fc   xrefs 3
 * ============================================================================ */
  int __fastcall sub_60479600(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6)
  {
    int v6; // s0
    signed int v9; // r7
    _DWORD *v10; // r6
    int v11; // r4
    _DWORD *v12; // r5
    int v13; // r1
    int v14; // r2
    int v15; // r1
    int v16; // r2
    void *v17; // r5
    const void *v18; // r10
    char v19; // r11
    int v20; // r0
    bool v21; // cc
    signed int v22; // r0
    int v24; // [sp+18h] [bp-10h] BYREF
    int v25; // [sp+1Ch] [bp-Ch]
    int v26; // [sp+20h] [bp-8h]
  
    v9 = 0;
    v10 = *(_DWORD **)(a1 + 8);
    if ( *(_DWORD *)(a1 + 4) > a2 )
      v10 += 208 * a2;
    sub_6091FDB0(v10, 1, 29, *a3, a3[1], 1, 1, 0, 0, 1);
    v11 = v10[10];
    v12 = (_DWORD *)operator new(28, a6, 4);
    sub_60913BB4(v12);
    *v12 = 12557340;
    sub_60913D88(v12, v11, a6, 0x2000, 0);
    sub_60913A6C(&v24, v12, 0);
    v13 = v25;
    v14 = v26;
    v10[68] = v24;
    v10[69] = v13;
    v10[70] = v14;
    sub_60913B04(v10 + 68, v10[10]);
    v15 = v10[69];
    v16 = v10[70];
    v24 = v10[68];
    v25 = v15;
    v26 = v16;
    sub_609208DC(v10, &v24, 0);
    sub_60473624(a1 + 12, a5);
    v17 = (void *)v10[189];
    (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
    v18 = (const void *)a5[1];
    if ( v17 != v18 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
      v19 = MEMORY[0xB3BA34];
      v20 = a5[1];
      while ( *(unsigned __int8 *)(v20 + v9) != MEMORY[0xB3BA34] )
      {
        if ( *(unsigned __int8 *)(v20 + v9 + 1) == MEMORY[0xB3BA34] )
        {
          ++v9;
          break;
        }
        if ( *(unsigned __int8 *)(v20 + v9 + 2) == MEMORY[0xB3BA34] )
        {
          v9 += 2;
          break;
        }
        v21 = v9 + 2 < 0x80000;
        v9 += 3;
        if ( !v21 )
        {
          v9 = 0;
          break;
        }
      }
      v22 = v10[190];
      if ( v9 >= v22 )
        v9 = v22 - 1;
      qmemcpy(v17, v18, v9);
      *((_BYTE *)v17 + v9) = v19;
    }
    v10[207] = v6;
    v10[186] = *a4;
    v10[187] = a4[1];
    *(_BYTE *)(a1 + 3561) = 1;
    return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 3532) + 12))(
             *(_DWORD *)(a1 + 3532),
             10029528,
             0);
  }

/* ============================================================================
 * sub_60479808
 * RVA 0x00479808   size 0x104   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60479808(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, int a5)
  {
    _DWORD *v7; // r6
    int v8; // r7
    _DWORD *v9; // r4
    int v10; // r1
    int v11; // r2
    int v12; // r1
    int v13; // r2
    int result; // r0
    int v15; // [sp+18h] [bp-10h] BYREF
    int v16; // [sp+1Ch] [bp-Ch]
    int v17; // [sp+20h] [bp-8h]
  
    v7 = *(_DWORD **)(a1 + 8);
    if ( *(_DWORD *)(a1 + 4) > a2 )
      v7 += 208 * a2;
    sub_6091FDB0(v7, 1, 29, *a3, a3[1], 1, 1, 0, 0, 1);
    v8 = v7[10];
    v9 = (_DWORD *)operator new(28, a5, 4);
    sub_60913BB4(v9);
    *v9 = 12557340;
    sub_60913D88(v9, v8, a5, 0x2000, 0);
    sub_60913A6C(&v15, v9, 0);
    v10 = v16;
    v11 = v17;
    v7[68] = v15;
    v7[69] = v10;
    v7[70] = v11;
    sub_60913B04(v7 + 68, v7[10]);
    v12 = v7[69];
    v13 = v7[70];
    v15 = v7[68];
    v16 = v12;
    v17 = v13;
    sub_609208DC(v7, &v15, 0);
    v7[186] = *a4;
    result = a4[1];
    v7[187] = result;
    *(_BYTE *)(a1 + 3561) = 0;
    return result;
  }

/* ============================================================================
 * sub_60479910
 * RVA 0x00479910   size 0x318   xrefs 3
 * ============================================================================ */
  int __fastcall sub_60479910(int a1, int a2)
  {
    int v2; // r2
    _DWORD *v3; // r6
    int v4; // r8
    int v5; // r0
    int v6; // r9
    int v7; // r6
    int v8; // r3
    int v9; // r4
    int v10; // r5
    int v11; // r7
    int v12; // r3
    int v13; // r4
    int v14; // r5
    int v15; // r7
    int v16; // r3
    int v17; // r4
    int v18; // r5
    int v19; // r7
    __int16 v20; // r2
    unsigned int v21; // r0
    unsigned int v22; // r0
    unsigned int v23; // r0
    int v24; // r1
    int v25; // r0
    int v26; // r0
    __int64 *v27; // r0
    int v29; // [sp+14h] [bp-2F4h]
    int v30; // [sp+18h] [bp-2F0h]
    int v33; // [sp+24h] [bp-2E4h]
    _DWORD v34[5]; // [sp+30h] [bp-2D8h] BYREF
    _BYTE v35[104]; // [sp+44h] [bp-2C4h] BYREF
    _DWORD v36[43]; // [sp+ACh] [bp-25Ch] BYREF
    _BYTE v37[24]; // [sp+158h] [bp-1B0h] BYREF
    _BYTE v38[28]; // [sp+170h] [bp-198h] BYREF
    _DWORD *v39; // [sp+18Ch] [bp-17Ch]
    _DWORD v40[15]; // [sp+1B0h] [bp-158h] BYREF
    __int16 v41; // [sp+1ECh] [bp-11Ch]
    char v42; // [sp+1EEh] [bp-11Ah]
    _DWORD v43[52]; // [sp+1F0h] [bp-118h] BYREF
    unsigned int v44; // [sp+2C0h] [bp-48h] BYREF
    unsigned __int16 v45; // [sp+2C4h] [bp-44h]
    unsigned __int8 v46; // [sp+2C6h] [bp-42h]
  
    v30 = *(_DWORD *)(a1 + 4);
    if ( v30 )
    {
      v2 = 0;
      v3 = (_DWORD *)(a1 + 12);
      v29 = *(_DWORD *)(a1 + 8);
      do
      {
        v33 = v2;
        v4 = v29 + 832 * v2;
        if ( *(_BYTE *)(a1 + 3561) )
        {
          sub_60473DE4(v3, 0, (_DWORD *)(v4 + 752), 0);
          v5 = sub_6047482C(v3, 0);
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 96))(v5);
        }
        sub_604739E8(v3, (__int64 *)0xB3B8CC, nullptr);
        sub_6091ABEC(v40);
        v6 = v46;
        v7 = v45;
        v8 = *(_DWORD *)(v4 + 4);
        v9 = *(_DWORD *)(v4 + 8);
        v10 = *(_DWORD *)(v4 + 12);
        v11 = *(_DWORD *)(v4 + 16);
        v40[0] = *(_DWORD *)v4;
        v40[1] = v8;
        v40[2] = v9;
        v40[3] = v10;
        v40[4] = v11;
        v12 = *(_DWORD *)(v4 + 24);
        v13 = *(_DWORD *)(v4 + 28);
        v14 = *(_DWORD *)(v4 + 32);
        v15 = *(_DWORD *)(v4 + 36);
        v40[5] = *(_DWORD *)(v4 + 20);
        v40[6] = v12;
        v40[7] = v13;
        v40[8] = v14;
        v40[9] = v15;
        v16 = *(_DWORD *)(v4 + 44);
        v17 = *(_DWORD *)(v4 + 48);
        v18 = *(_DWORD *)(v4 + 52);
        v19 = *(_DWORD *)(v4 + 56);
        v40[10] = *(_DWORD *)(v4 + 40);
        v40[11] = v16;
        v40[12] = v17;
        v40[13] = v18;
        v40[14] = v19;
        v20 = *(_WORD *)(v4 + 60);
        v42 = *(_BYTE *)(v4 + 62);
        v41 = v20;
        sub_60917754(v43, v4 + 64);
        v43[50] = *(_DWORD *)(v4 + 264);
        do
          v21 = __ldrex(&v44);
        while ( __strex(v21 | 4, &v44) );
        if ( v45 != v7 )
        {
          do
            v22 = __ldrex(&v44);
          while ( __strex(v22 | 2, &v44) );
          v45 = v7;
        }
        if ( v46 != v6 )
        {
          do
            v23 = __ldrex(&v44);
          while ( __strex(v23 | 1, &v44) );
          v46 = v6;
        }
        sub_6091AC94(v40);
        sub_609200A0(v4);
        sub_60919ED8(v38, v4 + 744);
        v39 = v40;
        sub_6090B260(v38, *(_DWORD *)(a2 + 40));
        v24 = *(_DWORD *)(a2 + 40);
        v36[0] = 1065353216;
        v36[1] = 1065353216;
        v36[2] = 1065353216;
        v36[3] = 0;
        sub_6091A624(v38, v24, 1, v36, 0);
        v25 = sub_6090E438(v37, v38);
        sub_6090E560(v25, *(_DWORD *)(a2 + 40), v38);
        sub_6090C7F8(v36, v37);
        v26 = sub_6090B350(v35);
        sub_6090B4B0(v26, *(_DWORD *)(a2 + 40));
        v34[1] = v35;
        v34[3] = 0;
        v34[4] = *(_DWORD *)(a2 + 40);
        v34[0] = v38;
        v34[2] = v37;
        v27 = (__int64 *)sub_6090BE54(v36);
        v3 = (_DWORD *)(a1 + 12);
        sub_60473CC0((_DWORD *)(a1 + 12), (int)v34, v27);
        sub_6091ADF4(v40, *(_DWORD *)(a2 + 40));
        sub_60959C28(v4 + 288, v4, 0);
        nullsub_113(v36);
        j_nullsub_280(v38);
        sub_609175E4(v43);
        v2 = v33 + 1;
      }
      while ( v33 + 1 != v30 );
    }
    *(_BYTE *)(a1 + 3560) = 1;
    return 1;
  }

/* ============================================================================
 * sub_60479C64
 * RVA 0x00479c64   size 0x154   xrefs 2
 * ============================================================================ */
  int __fastcall sub_60479C64(int a1, _DWORD *a2)
  {
    int v2; // r5
    int (__fastcall *v4)(int, _DWORD, int); // r6
    int v5; // r4
    _DWORD *v6; // r0
  
    v2 = *(_DWORD *)(a1 + 12);
    v4 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v2 + 48);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v5 = v4(v2, a2[1], 1);
    if ( _cxa_guard_acquire_0(13228508) )
    {
      if ( _cxa_guard_acquire_0(13228516) )
      {
        if ( _cxa_guard_acquire_0(13228500) )
        {
          MEMORY[0xC9D9D0] = 0;
          _cxa_guard_release_0(13228500);
        }
        MEMORY[0xC9D9E0] = 13228496;
        _cxa_guard_release_0(13228516);
      }
      MEMORY[0xC9D9D8] = 13228512;
      _cxa_guard_release_0(13228508);
    }
    if ( !v5 )
      return 0;
    v6 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( !v6 )
      return 0;
    while ( v6 != (_DWORD *)13228504 )
    {
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        return 0;
    }
    return v5;
  }

/* ============================================================================
 * sub_60479DF4
 * RVA 0x00479df4   size 0x10c   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60479DF4(int a1, _DWORD *a2)
  {
    int v2; // r5
    int (__fastcall *v4)(int, _DWORD, int); // r6
    int v5; // r4
    _DWORD *v6; // r0
  
    v2 = *(_DWORD *)(a1 + 12);
    v4 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v2 + 48);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v5 = v4(v2, a2[1], 1);
    if ( _cxa_guard_acquire_0(13228524) )
    {
      if ( _cxa_guard_acquire_0(13228500) )
      {
        MEMORY[0xC9D9D0] = 0;
        _cxa_guard_release_0(13228500);
      }
      MEMORY[0xC9D9E8] = 13228496;
      _cxa_guard_release_0(13228524);
    }
    if ( !v5 )
      return 0;
    v6 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( !v6 )
      return 0;
    while ( v6 != (_DWORD *)13228520 )
    {
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        return 0;
    }
    return v5;
  }

/* ============================================================================
 * sub_60479F28
 * RVA 0x00479f28   size 0x10c   xrefs 1
 * ============================================================================ */
  int __fastcall sub_60479F28(int a1, _DWORD *a2)
  {
    int v2; // r5
    int (__fastcall *v4)(int, _DWORD, int); // r6
    int v5; // r4
    _DWORD *v6; // r0
  
    v2 = *(_DWORD *)(a1 + 12);
    v4 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v2 + 48);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v5 = v4(v2, a2[1], 1);
    if ( _cxa_guard_acquire_0(13228492) )
    {
      if ( _cxa_guard_acquire_0(13228500) )
      {
        MEMORY[0xC9D9D0] = 0;
        _cxa_guard_release_0(13228500);
      }
      MEMORY[0xC9D9C8] = 13228496;
      _cxa_guard_release_0(13228492);
    }
    if ( !v5 )
      return 0;
    v6 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( !v6 )
      return 0;
    while ( v6 != (_DWORD *)13228488 )
    {
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        return 0;
    }
    return v5;
  }

/* ============================================================================
 * sub_6047A05C
 * RVA 0x0047a05c   size 0x120   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6047A05C(int result)
  {
    int v1; // r4
    int v2; // r5
    _DWORD *v3; // r0
  
    v1 = result;
    v2 = *(_DWORD *)(result + 36);
    if ( v2 )
    {
      (*(void (__fastcall **)(_DWORD, int, _DWORD))(*(_DWORD *)v2 + 16))(*(_DWORD *)(result + 36), 10029656, 0);
      if ( _cxa_guard_acquire_0(13228644) )
      {
        if ( _cxa_guard_acquire_0(13228564) )
        {
          MEMORY[0xC9DA10] = 0;
          _cxa_guard_release_0(13228564);
        }
        MEMORY[0xC9DA60] = 13228560;
        _cxa_guard_release_0(13228644);
      }
      v3 = (_DWORD *)(**(int (__fastcall ***)(int))v2)(v2);
      if ( v3 )
      {
        while ( v3 != (_DWORD *)13228640 )
        {
          v3 = (_DWORD *)*v3;
          if ( !v3 )
            goto LABEL_11;
        }
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 20))(v2, *(_DWORD *)(MEMORY[0xCCF464] + 36));
      }
  LABEL_11:
      *(_DWORD *)(v1 + 36) = 0;
      return 0;
    }
    return result;
  }

/* ============================================================================
 * sub_6047AC98
 * RVA 0x0047ac98   size 0x40   xrefs 1
 * ============================================================================ */
  int sub_6047AC98()
  {
    return sub_6047ACD8();
  }

/* ============================================================================
 * sub_6047ACD8
 * RVA 0x0047acd8   size 0x1160   xrefs 3
 * ============================================================================ */
  int __fastcall sub_6047ACD8(
          int a1,
          int a2,
          unsigned __int16 *a3,
          int a4,
          int a5,
          int a6,
          _DWORD *a7,
          int a8,
          int a9,
          int *a10)
  {
    int v11; // r7
    unsigned __int16 *v12; // r5
    int v13; // r4
    unsigned __int16 *v14; // r8
    int v15; // r4
    int v16; // r7
    unsigned int v17; // r11
    unsigned __int16 *v18; // r1
    int v19; // r7
    int v20; // r6
    unsigned __int16 *v21; // r0
    int v22; // r4
    unsigned __int16 *v23; // r1
    unsigned int v24; // r2
    unsigned int v25; // r2
    int v26; // r7
    unsigned int v27; // r2
    unsigned __int8 *v28; // r6
    unsigned int v29; // t1
    _WORD *v30; // r7
    int v31; // r1
    unsigned int v32; // r2
    unsigned int v34; // r1
    unsigned int v35; // r6
    int v36; // r5
    int v37; // t1
    int v38; // t1
    int v39; // t1
    int v40; // r6
    int v41; // r0
    _WORD *v42; // r0
    int v43; // r1
    _WORD *v44; // r7
    unsigned __int16 *v45; // r1
    int v46; // r0
    int v47; // r2
    int v48; // r5
    size_t v49; // r4
    int v50; // r0
    _WORD *v51; // r1
    int v52; // r10
    int v53; // r1
    _WORD *v54; // r0
    int v55; // r1
    int v56; // r1
    _WORD *v57; // r0
    int v58; // r1
    int v59; // r1
    _WORD *v60; // r0
    int v61; // r1
    int v62; // r1
    _WORD *v63; // r0
    int v64; // r1
    int v65; // r0
    int v66; // r0
    unsigned int v67; // r0
    _WORD *v68; // r0
    int v69; // r1
    unsigned int v70; // r0
    unsigned int v71; // r1
    __int16 *v72; // r5
    int v73; // r10
    int v74; // r4
    unsigned int v75; // r10
    int v76; // r0
    int v77; // r0
    _WORD *v78; // r1
    __int16 v79; // t1
    unsigned int v80; // r0
    _WORD *v81; // r2
    _WORD *v82; // r1
    unsigned int v83; // r0
    int v84; // r12
    int v85; // r1
    int v86; // r4
    int v87; // r2
    _WORD *v88; // r1
    unsigned int v89; // r3
    unsigned int v90; // r0
    int v91; // r1
    int v92; // r4
    int v93; // r2
    _WORD *v94; // r1
    unsigned int v95; // r3
    unsigned int v96; // r0
    int v97; // r2
    int v98; // r1
    unsigned __int8 *v99; // r1
    int v100; // r5
    unsigned int v101; // r0
    __int16 v102; // r1
    int v103; // r0
    int v104; // r0
    int v105; // r5
    int v106; // r4
    int v107; // r0
    unsigned int v108; // r0
    int v109; // r0
    _WORD *v110; // r1
    int v111; // r0
    _WORD *v112; // r1
    _WORD *v113; // r0
    int v114; // r1
    int v115; // r0
    _WORD *v116; // r1
    int v117; // r0
    _WORD *v118; // r1
    int v119; // r0
    _WORD *v120; // r1
    unsigned int v121; // r0
    _WORD *v122; // r0
    int v123; // r2
    unsigned __int16 *v124; // r0
    _WORD *v125; // r1
    unsigned int v126; // r0
    unsigned int v127; // r2
    unsigned int v128; // r0
    _WORD *v129; // r0
    int v130; // r2
    unsigned __int16 *v131; // r0
    _WORD *v132; // r1
    bool v133; // cf
    int v134; // r2
    char v136; // [sp+40h] [bp-2CCh]
    int v137; // [sp+44h] [bp-2C8h] BYREF
    _WORD v138[288]; // [sp+48h] [bp-2C4h] BYREF
    _DWORD v139[16]; // [sp+288h] [bp-84h] BYREF
    unsigned __int8 v140[64]; // [sp+2C8h] [bp-44h] BYREF
    int v141; // [sp+308h] [bp-4h] BYREF
  
    if ( a7 )
    {
      v11 = 0;
      if ( a4 >= 2 )
      {
        v12 = a3;
        v11 = 0;
        do
        {
          v13 = *v12;
          if ( v13 == 15 )
          {
            v12 += 3;
          }
          else if ( v13 == 14 )
          {
            v12 = (unsigned __int16 *)((char *)v12 + v12[3] + 8);
          }
          else
          {
            ++v12;
            if ( v13 == 10 )
              ++v11;
          }
        }
        while ( v12 - a3 < a4 / 2 );
      }
      *a7 = v11 / 4 + 1;
    }
    v14 = a3;
    if ( a6 < 1 )
    {
  LABEL_24:
      if ( a6 >= 0 )
        goto LABEL_25;
      goto LABEL_26;
    }
    v14 = a3;
    if ( a4 < 2 )
      goto LABEL_25;
    v15 = 0;
    v14 = a3;
    while ( 1 )
    {
      v16 = *v14;
      if ( v16 == 14 )
      {
        v14 = (unsigned __int16 *)((char *)v14 + v14[3] + 8);
        goto LABEL_23;
      }
      if ( v16 == 15 )
      {
        v14 += 3;
        goto LABEL_23;
      }
      if ( v16 == 10 && ++v15 >= 4 * a6 )
        break;
      ++v14;
  LABEL_23:
      if ( v14 - a3 >= a4 / 2 )
        goto LABEL_24;
    }
    ++v14;
  LABEL_25:
    if ( *a7 - 1 == a6 )
    {
  LABEL_26:
      v17 = (unsigned int)a3 + ((a4 + ((unsigned int)a4 >> 31)) & 0xFFFFFFFE);
    }
    else
    {
      v18 = a3;
      if ( a4 >= 2 )
      {
        v19 = 0;
        a4 /= 2;
        v18 = a3;
        do
        {
          v20 = *v18;
          if ( v20 == 14 )
          {
            v18 = (unsigned __int16 *)((char *)v18 + v18[3] + 8);
          }
          else if ( v20 == 15 )
          {
            v18 += 3;
          }
          else
          {
            if ( v20 == 10 && ++v19 >= 4 * a6 + 4 )
            {
              ++v18;
              break;
            }
            ++v18;
          }
        }
        while ( v18 - a3 < a4 );
      }
      v21 = v18 - 1;
      do
      {
        if ( *v21 != 10 )
          break;
        --v21;
      }
      while ( v21 > a3 );
      v17 = (unsigned int)(v21 + 1);
    }
    v22 = a8;
    if ( a9 >= 1 && (a8 ^ 1) == 1 )
    {
      memset(v138, 255, 0x40u);
      if ( (unsigned int)v14 < v17 )
      {
        v23 = v14;
        do
        {
          while ( 2 )
          {
            v30 = v23;
            v31 = *v23;
            if ( v31 == 15 )
            {
              v23 = v30 + 3;
              if ( v30 )
                goto LABEL_68;
            }
            else
            {
              if ( v31 == 14 )
              {
                v23 = (_WORD *)((char *)v30 + (unsigned __int16)v30[3] + 8);
  LABEL_68:
                v28 = (unsigned __int8 *)(v30 + 4);
                switch ( v30[1] )
                {
                  case 0xB:
                    v24 = *v28;
                    if ( v24 >= 0x10 )
                      v24 = 0;
                    *(_DWORD *)&v138[2 * v24] = 1;
                    if ( (unsigned int)v23 < v17 )
                      continue;
                    goto LABEL_76;
                  case 0xC:
                    v25 = *v28;
                    if ( v25 >= 0x10 )
                      v25 = 0;
                    *(_DWORD *)&v138[2 * v25] = 2;
                    if ( (unsigned int)v23 < v17 )
                      continue;
                    goto LABEL_76;
                  case 0xD:
                  case 0xE:
                  case 0xF:
                    goto LABEL_69;
                  case 0x12:
                    if ( (v30[2] & 0xFFFE) != 2 )
                      goto LABEL_75;
                    goto LABEL_69;
                  case 0x13:
                    v26 = (unsigned __int16)v30[2];
                    if ( v26 == 2 )
                      goto LABEL_69;
                    if ( v26 != 3 )
                      goto LABEL_75;
                    v29 = *v28++;
                    v27 = v29;
                    if ( v29 >= 0x10 )
                      v27 = 0;
                    *(_DWORD *)&v138[2 * v27] = 0;
  LABEL_69:
                    v32 = *v28;
                    if ( v32 >= 0x10 )
                      v32 = 0;
                    *(_DWORD *)&v138[2 * v32] = 0;
                    if ( (unsigned int)v23 >= v17 )
                      goto LABEL_76;
                    continue;
                  case 0x16:
                    if ( (unsigned __int16)v30[2] >= 5u )
                      goto LABEL_75;
                    goto LABEL_69;
                  case 0x17:
                    if ( v30[2] )
                      goto LABEL_75;
                    goto LABEL_69;
                  default:
                    goto LABEL_75;
                }
              }
              v23 = v30;
            }
            break;
          }
          ++v23;
  LABEL_75:
          ;
        }
        while ( (unsigned int)v23 < v17 );
      }
  LABEL_76:
      v34 = 0;
      a4 = (int)v139;
      do
      {
        v35 = 0;
        if ( v34 < 0x10 )
          v35 = v34;
        v36 = *(_DWORD *)&v138[2 * v35];
        switch ( v36 )
        {
          case 2:
            v38 = *a10++;
            *(_DWORD *)&v138[2 * v35 + 256] = v38;
            break;
          case 1:
            v39 = *a10++;
            v139[v35] = v39;
            break;
          case 0:
            v37 = *a10++;
            *(_DWORD *)&v140[4 * v35] = v37;
            break;
        }
        ++v34;
      }
      while ( a9 != v34 );
      v22 = a8;
    }
    v40 = 0;
    if ( (unsigned int)v14 < v17 )
    {
      v40 = 0;
      v137 = a1;
      v136 = 0;
  LABEL_100:
      v44 = (_WORD *)(a1 + 2 * v40);
      v45 = v14;
      do
      {
        v46 = *v45;
        if ( v46 == 15 )
        {
          v14 = v45 + 3;
          if ( v45 )
            goto LABEL_109;
          LOWORD(v46) = *v14;
        }
        else
        {
          if ( v46 == 14 )
          {
            v14 = (unsigned __int16 *)((char *)v45 + v45[3] + 8);
  LABEL_109:
            v47 = v45[1];

/* ============================================================================
 * sub_6047BE64
 * RVA 0x0047be64   size 0x5c   xrefs 3
 * ============================================================================ */
  int __fastcall sub_6047BE64(_WORD *a1, int a2, int a3)
  {
    int v6; // r0
    _WORD *v7; // r1
  
    if ( a3 > 9 )
    {
      v6 = sub_6047BE64(a1, a2, a3 / 0xAu);
      v7 = &a1[v6];
      *v7 = (a3 % 0xAu) | 0x30;
      return v6 + 1;
    }
    else
    {
      *a1 = a3 + 48;
      return 1;
    }
  }

/* ============================================================================
 * WorldNameTable_init
 * RVA 0x0047bec0   size 0x228   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6047BEC0(_WORD *a1, unsigned int a2)
  {
    int v4; // r5
    char v5; // r12
    char *v6; // r6
    int v7; // t1
    unsigned int v8; // r7
    _WORD *v9; // r6
    int result; // r0
    int v11; // r2
    int v12; // r1
    int v13; // r3
    _WORD *v14; // r2
    __int16 *v15; // r3
    __int16 v16; // r7
  
    v4 = StaffCreditTable_init(6);
    if ( ((unsigned int)&unk_60C9EAD0 & ~(1615314664 << v5) & 1) == 0 && _cxa_guard_acquire_0(&unk_60C9EAD0) )
    {
      dword_60C9EAD4 = 12321336;
      dword_60C9EAD8 = (int)"WorldName_1";
      dword_60C9EADC = 12321336;
      dword_60C9EAE0 = (int)"WorldName_2";
      dword_60C9EAE4 = 12321336;
      dword_60C9EAE8 = (int)"WorldName_3";
      dword_60C9EAEC = 12321336;
      dword_60C9EAF0 = (int)"WorldName_4";
      dword_60C9EAF4 = 12321336;
      dword_60C9EAF8 = (int)"WorldName_5";
      dword_60C9EAFC = 12321336;
      dword_60C9EB00 = (int)"WorldName_6";
      dword_60C9EB04 = 12321336;
      dword_60C9EB08 = (int)"WorldName_7";
      dword_60C9EB0C = 12321336;
      dword_60C9EB10 = (int)"WorldName_8";
      dword_60C9EB14 = 12321336;
      dword_60C9EB18 = (int)"WorldName_9";
      dword_60C9EB1C = 12321336;
      dword_60C9EB20 = (int)"WorldName_SECRET";
      dword_60C9EB24 = 12321336;
      dword_60C9EB28 = (int)"WorldName_Coin_Battle";
      dword_60C9EB2C = 12321336;
      dword_60C9EB30 = (int)"WorldName_ShadowIsl";
      sub_60000288();
      _cxa_guard_release_0(&unk_60C9EAD0);
    }
    switch ( a2 )
    {
      case 0x96u:
        a2 = 11;
        break;
      case 0x64u:
        a2 = 9;
        break;
      case 0xAu:
        a2 = 10;
        break;
      default:
        if ( a2 >= 9 )
          a2 = 0;
        break;
    }
    v6 = (char *)&unk_60C9EAD0 + 8 * a2;
    v7 = *((_DWORD *)v6 + 1);
    v6 += 4;
    (*(void (__fastcall **)(char *))(v7 + 12))(v6);
    v8 = sub_60911638(*(_DWORD *)(v4 + 4), *((_DWORD *)v6 + 1));
    v9 = nullptr;
    if ( *(_DWORD *)(v4 + 8) > v8 )
      v9 = (_WORD *)sub_6091171C(*(_DWORD *)(v4 + 4), v8);
    result = sub_609119F8(v4, v8) >> 1;
    if ( result >= 1 )
    {
      v11 = 0;
      if ( (result & 1) != 0 )
      {
        v11 = 1;
        *a1 = *v9;
      }
      if ( result != 1 )
      {
        v12 = result - v11;
        v13 = 2 * v11 + 2;
        v14 = (_WORD *)((char *)a1 + v13);
        v15 = (_WORD *)((char *)v9 + v13);
        do
        {
          v12 -= 2;
          *(v14 - 1) = *(v15 - 1);
          v16 = *v15;
          v15 += 2;
          *v14 = v16;
          v14 += 2;
        }
        while ( v12 );
      }
    }
    return result;
  }

/* ============================================================================
 * CourseNameTable_init
 * RVA 0x0047c13c   size 0x1518   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6047C13C(unsigned int a1, unsigned int a2, int *a3)
  {
    int v5; // r0
    int v6; // r8
    char v7; // r12
    int v8; // r4
    unsigned __int8 **v9; // r5
    int *v10; // r7
    unsigned int v11; // r6
  
    v5 = 1;
    if ( *(_BYTE *)(MEMORY[0xCC6D8C] + 17) )
      v5 = 2;
    v6 = StaffCreditTable_init(v5);
    if ( ((unsigned int)&unk_60C9EAB8 & ~(1615315332 << v7) & 1) == 0 && _cxa_guard_acquire_0(&unk_60C9EAB8) )
    {
      dword_60C9DA68[0] = 12321336;
      dword_60C9DA6C = (int)"CourseName_1-1";
      dword_60C9DA70 = 12321336;
      dword_60C9DA74 = (int)"CourseName_1-2";
      dword_60C9DA78 = 12321336;
      dword_60C9DA7C = (int)"CourseName_1-3";
      dword_60C9DA80 = 12321336;
      dword_60C9DA84 = (int)"CourseName_1-4";
      dword_60C9DA88 = 12321336;
      dword_60C9DA8C = (int)"CourseName_1-5";
      dword_60C9DA90 = 12321336;
      dword_60C9DA94 = (int)&unk_60ABC94D;
      dword_60C9DA98 = 12321336;
      dword_60C9DA9C = (int)&unk_60ABC94D;
      dword_60C9DAA0 = 12321336;
      dword_60C9DAA4 = (int)&unk_60ABC94D;
      dword_60C9DAA8 = 12321336;
      dword_60C9DAAC = (int)&unk_60ABC94D;
      dword_60C9DAB0 = 12321336;
      dword_60C9DAB4 = (int)&unk_60ABC94D;
      dword_60C9DAB8 = 12321336;
      dword_60C9DABC = (int)&unk_60ABC94D;
      dword_60C9DAC0 = 12321336;
      dword_60C9DAC4 = (int)&unk_60ABC94D;
      dword_60C9DAC8 = 12321336;
      dword_60C9DACC = (int)"CourseName_SECRET-SECRET1";
      dword_60C9DAD0 = 12321336;
      dword_60C9DAD4 = (int)"CourseName_SECRET-SECRET2";
      dword_60C9DAD8 = 12321336;
      dword_60C9DADC = (int)"CourseName_SECRET-SECRET3";
      dword_60C9DAE0 = 12321336;
      dword_60C9DAE4 = (int)"CourseName_SECRET-SECRET4";
      dword_60C9DAE8 = 12321336;
      dword_60C9DAEC = (int)"CourseName_SECRET-SECRET5";
      dword_60C9DAF0 = 12321336;
      dword_60C9DAF4 = (int)&unk_60ABC94D;
      dword_60C9DAF8 = 12321336;
      dword_60C9DAFC = (int)&unk_60ABC94D;
      dword_60C9DB00 = 12321336;
      dword_60C9DB04 = (int)&unk_60ABC94D;
      dword_60C9DB08 = 12321336;
      dword_60C9DB0C = (int)"CourseName_1-TOWER1";
      dword_60C9DB10 = 12321336;
      dword_60C9DB14 = (int)&unk_60ABC94D;
      dword_60C9DB18 = 12321336;
      dword_60C9DB1C = (int)"CourseName_1-CASTLE";
      dword_60C9DB20 = 12321336;
      dword_60C9DB24 = (int)&unk_60ABC94D;
      dword_60C9DB28 = 12321336;
      dword_60C9DB2C = (int)&unk_60ABC94D;
      dword_60C9DB30 = 12321336;
      dword_60C9DB34 = (int)&unk_60ABC94D;
      dword_60C9DB38 = 12321336;
      dword_60C9DB3C = (int)&unk_60ABC94D;
      dword_60C9DB40 = 12321336;
      dword_60C9DB44 = (int)&unk_60ABC94D;
      dword_60C9DB48 = 12321336;
      dword_60C9DB4C = (int)&unk_60ABC94D;
      dword_60C9DB50 = 12321336;
      dword_60C9DB54 = (int)&unk_60ABC94D;
      dword_60C9DB58 = 12321336;
      dword_60C9DB5C = (int)&unk_60ABC94D;
      dword_60C9DB60 = 12321336;
      dword_60C9DB64 = (int)&unk_60ABC94D;
      dword_60C9DB68 = 12321336;
      dword_60C9DB6C = (int)&unk_60ABC94D;
      dword_60C9DB70 = 12321336;
      dword_60C9DB74 = (int)&unk_60ABC94D;
      dword_60C9DB78 = 12321336;
      dword_60C9DB7C = (int)&unk_60ABC94D;
      dword_60C9DB80 = 12321336;
      dword_60C9DB84 = (int)&unk_60ABC94D;
      dword_60C9DB88 = 12321336;
      dword_60C9DB8C = (int)&unk_60ABC94D;
      dword_60C9DB90 = 12321336;
      dword_60C9DB94 = (int)&unk_60ABC94D;
      dword_60C9DB98 = 12321336;
      dword_60C9DB9C = (int)&unk_60ABC94D;
      dword_60C9DBA0 = 12321336;
      dword_60C9DBA4 = (int)&unk_60ABC94D;
      dword_60C9DBA8 = 12321336;
      dword_60C9DBAC = (int)&unk_60ABC94D;
      dword_60C9DBB0 = 12321336;
      dword_60C9DBB4 = (int)&unk_60ABC94D;
      dword_60C9DBB8 = 12321336;
      dword_60C9DBBC = (int)&unk_60ABC94D;
      dword_60C9DBC0 = 12321336;
      dword_60C9DBC4 = (int)&unk_60ABC94D;
      dword_60C9DBC8 = 12321336;
      dword_60C9DBCC = (int)&unk_60ABC94D;
      dword_60C9DBD0 = 12321336;
      dword_60C9DBD4 = (int)&unk_60ABC94D;
      dword_60C9DBD8 = 12321336;
      dword_60C9DBDC = 11778612;
      dword_60C9DBE0 = 12321336;
      dword_60C9DBE4 = 11778612;
      dword_60C9DBE8 = 12321336;
      dword_60C9DBEC = 11778612;
      dword_60C9DBF0 = 12321336;
      dword_60C9DBF4 = 11778612;
      dword_60C9DBF8 = 12321336;
      dword_60C9DBFC = 11778612;
      dword_60C9DC00 = 12321336;
      dword_60C9DC04 = 11778612;
      dword_60C9DC08 = 12321336;
      dword_60C9DC0C = 11778612;
      dword_60C9DC10 = 12321336;
      dword_60C9DC14 = 11778612;
      dword_60C9DC18 = 12321336;
      dword_60C9DC1C = 11778612;
      dword_60C9DC20 = 12321336;
      dword_60C9DC24 = 11778612;
      dword_60C9DC28 = 12321336;
      dword_60C9DC2C = 11778612;
      dword_60C9DC30 = 12321336;
      dword_60C9DC34 = 11778612;
      dword_60C9DC38 = 12321336;
      dword_60C9DC3C = (int)"CourseName_2-1";
      dword_60C9DC40 = 12321336;
      dword_60C9DC44 = (int)"CourseName_2-2";
      dword_60C9DC48 = 12321336;
      dword_60C9DC4C = (int)"CourseName_2-3";
      dword_60C9DC50 = 12321336;
      dword_60C9DC54 = (int)"CourseName_2-4";
      dword_60C9DC58 = 12321336;
      dword_60C9DC5C = (int)"CourseName_2-5";
      dword_60C9DC60 = 12321336;
      dword_60C9DC64 = (int)"CourseName_2-6";
      dword_60C9DC68 = 12321336;
      dword_60C9DC6C = (int)&unk_60ABC94D;
      dword_60C9DC70 = 12321336;
      dword_60C9DC74 = (int)&unk_60ABC94D;
      dword_60C9DC78 = 12321336;
      dword_60C9DC7C = (int)&unk_60ABC94D;
      dword_60C9DC80 = 12321336;
      dword_60C9DC84 = (int)&unk_60ABC94D;
      dword_60C9DC88 = 12321336;
      dword_60C9DC8C = (int)&unk_60ABC94D;
      dword_60C9DC90 = 12321336;
      dword_60C9DC94 = (int)&unk_60ABC94D;
      dword_60C9DC98 = 12321336;
      dword_60C9DC9C = (int)"CourseName_SECRET-SECRET1";
      dword_60C9DCA0 = 12321336;
      dword_60C9DCA4 = (int)"CourseName_SECRET-SECRET2";
      dword_60C9DCA8 = 12321336;
      dword_60C9DCAC = (int)"CourseName_SECRET-SECRET3";
      dword_60C9DCB0 = 12321336;
      dword_60C9DCB4 = (int)"CourseName_SECRET-SECRET4";
      dword_60C9DCB8 = 12321336;
      dword_60C9DCBC = (int)"CourseName_SECRET-SECRET5";
      dword_60C9DCC0 = 12321336;
      dword_60C9DCC4 = (int)&unk_60ABC94D;
      dword_60C9DCC8 = 12321336;
      dword_60C9DCCC = (int)&unk_60ABC94D;
      dword_60C9DCD0 = 12321336;
      dword_60C9DCD4 = (int)&unk_60ABC94D;
      dword_60C9DCD8 = 12321336;
      dword_60C9DCDC = (int)"CourseName_2-TOWER1";
      dword_60C9DCE0 = 12321336;
      dword_60C9DCE4 = (int)&unk_60ABC94D;
      dword_60C9DCE8 = 12321336;
      dword_60C9DCEC = (int)"CourseName_2-CASTLE";
      dword_60C9DCF0 = 12321336;
      dword_60C9DCF4 = (int)&unk_60ABC94D;
      dword_60C9DCF8 = 12321336;
      dword_60C9DCFC = (int)&unk_60ABC94D;
      dword_60C9DD00 = 12321336;
      dword_60C9DD04 = (int)&unk_60ABC94D;
      dword_60C9DD08 = 12321336;
      dword_60C9DD0C = (int)&unk_60ABC94D;
      dword_60C9DD10 = 12321336;
      dword_60C9DD14 = (int)&unk_60ABC94D;
      dword_60C9DD18 = 12321336;
      dword_60C9DD1C = (int)&unk_60ABC94D;
      dword_60C9DD20 = 12321336;
      dword_60C9DD24 = (int)&unk_60ABC94D;
      dword_60C9DD28 = 12321336;
      dword_60C9DD2C = (int)&unk_60ABC94D;
      dword_60C9DD30 = 12321336;
      dword_60C9DD34 = (int)&unk_60ABC94D;
      dword_60C9DD38 = 12321336;
      dword_60C9DD3C = (int)&unk_60ABC94D;
      dword_60C9DD40 = 12321336;
      dword_60C9DD44 = (int)&unk_60ABC94D;
      dword_60C9DD48 = 12321336;
      dword_60C9DD4C = (int)&unk_60ABC94D;
      dword_60C9DD50 = 12321336;
      dword_60C9DD54 = (int)&unk_60ABC94D;
      dword_60C9DD58 = 12321336;
      dword_60C9DD5C = (int)&unk_60ABC94D;
      dword_60C9DD60 = 12321336;
      dword_60C9DD64 = (int)&unk_60ABC94D;
      dword_60C9DD68 = 12321336;
      dword_60C9DD6C = (int)&unk_60ABC94D;
      dword_60C9DD70 = 12321336;
      dword_60C9DD74 = (int)&unk_60ABC94D;
      dword_60C9DD78 = 12321336;
      dword_60C9DD7C = (int)&unk_60ABC94D;
      dword_60C9DD80 = 12321336;
      dword_60C9DD84 = (int)&unk_60ABC94D;
      dword_60C9DD88 = 12321336;
      dword_60C9DD8C = (int)&unk_60ABC94D;
      dword_60C9DD90 = 12321336;
      dword_60C9DD94 = (int)&unk_60ABC94D;
      dword_60C9DD98 = 12321336;
      dword_60C9DD9C = (int)&unk_60ABC94D;
      dword_60C9DDA0 = 12321336;
      dword_60C9DDA4 = (int)&unk_60ABC94D;
      dword_60C9DDA8 = 12321336;
      dword_60C9DDAC = 11778612;
      dword_60C9DDB0 = 12321336;
      dword_60C9DDB4 = 11778612;
      dword_60C9DDB8 = 12321336;
      dword_60C9DDBC = 11778612;
      dword_60C9DDC0 = 12321336;
      dword_60C9DDC4 = 11778612;
      dword_60C9DDC8 = 12321336;
      dword_60C9DDCC = 11778612;
      dword_60C9DDD0 = 12321336;
      dword_60C9DDD4 = 11778612;
      dword_60C9DDD8 = 12321336;
      dword_60C9DDDC = 11778612;
      dword_60C9DDE0 = 12321336;
      dword_60C9DDE4 = 11778612;
      dword_60C9DDE8 = 12321336;
      dword_60C9DDEC = 11778612;
      dword_60C9DDF0 = 12321336;
      dword_60C9DDF4 = 11778612;
      dword_60C9DDF8 = 12321336;
      dword_60C9DDFC = 11778612;
      dword_60C9DE00 = 12321336;
      dword_60C9DE04 = 11778612;
      dword_60C9DE08 = 12321336;
      dword_60C9DE0C = (int)"CourseName_3-1";
      dword_60C9DE10 = 12321336;
      dword_60C9DE14 = (int)"CourseName_3-2";
      dword_60C9DE18 = 12321336;
      dword_60C9DE1C = (int)"CourseName_3-3";
      dword_60C9DE20 = 12321336;
      dword_60C9DE24 = (int)"CourseName_3-4";
      dword_60C9DE28 = 12321336;
      dword_60C9DE2C = (int)"CourseName_3-5";
      dword_60C9DE30 = 12321336;
      dword_60C9DE34 = (int)&unk_60ABC94D;
      dword_60C9DE38 = 12321336;
      dword_60C9DE3C = (int)&unk_60ABC94D;
      dword_60C9DE40 = 12321336;
      dword_60C9DE44 = (int)&unk_60ABC94D;
      dword_60C9DE48 = 12321336;
      dword_60C9DE4C = (int)&unk_60ABC94D;
      dword_60C9DE50 = 12321336;
      dword_60C9DE54 = (int)&unk_60ABC94D;
      dword_60C9DE58 = 12321336;
      dword_60C9DE5C = (int)&unk_60ABC94D;
      dword_60C9DE60 = 12321336;
      dword_60C9DE64 = (int)&unk_60ABC94D;
      dword_60C9DE68 = 12321336;
      dword_60C9DE6C = (int)"CourseName_SECRET-SECRET1";
      dword_60C9DE70 = 12321336;
      dword_60C9DE74 = (int)"CourseName_SECRET-SECRET2";
      dword_60C9DE78 = 12321336;
      dword_60C9DE7C = (int)"CourseName_SECRET-SECRET3";
      dword_60C9DE80 = 12321336;
      dword_60C9DE84 = (int)"CourseName_SECRET-SECRET4";
      dword_60C9DE88 = 12321336;
      dword_60C9DE8C = (int)"CourseName_SECRET-SECRET5";
      dword_60C9DE90 = 12321336;
      dword_60C9DE94 = (int)&unk_60ABC94D;
      dword_60C9DE98 = 12321336;
      dword_60C9DE9C = (int)&unk_60ABC94D;
      dword_60C9DEA0 = 12321336;
      dword_60C9DEA4 = (int)"CourseName_3-GHOST";
      dword_60C9DEA8 = 12321336;
      dword_60C9DEAC = (int)"CourseName_3-TOWER1";
      dword_60C9DEB0 = 12321336;
      dword_60C9DEB4 = (int)&unk_60ABC94D;
      dword_60C9DEB8 = 12321336;
      dword_60C9DEBC = (int)"CourseName_3-CASTLE";
      dword_60C9DEC0 = 12321336;
      dword_60C9DEC4 = (int)&unk_60ABC94D;
      dword_60C9DEC8 = 12321336;
      dword_60C9DECC = (int)&unk_60ABC94D;
      dword_60C9DED0 = 12321336;
      dword_60C9DED4 = (int)&unk_60ABC94D;
      dword_60C9DED8 = 12321336;
      dword_60C9DEDC = (int)&unk_60ABC94D;
      dword_60C9DEE0 = 12321336;
      dword_60C9DEE4 = (int)&unk_60ABC94D;
      dword_60C9DEE8 = 12321336;
      dword_60C9DEEC = (int)&unk_60ABC94D;
      dword_60C9DEF0 = 12321336;
      dword_60C9DEF4 = (int)&unk_60ABC94D;
      dword_60C9DEF8 = 12321336;
      dword_60C9DEFC = (int)&unk_60ABC94D;
      dword_60C9DF00 = 12321336;
      dword_60C9DF04 = (int)&unk_60ABC94D;
      dword_60C9DF08 = 12321336;
      dword_60C9DF0C = (int)&unk_60ABC94D;
      dword_60C9DF10 = 12321336;
      dword_60C9DF14 = (int)&unk_60ABC94D;
      dword_60C9DF18 = 12321336;
      dword_60C9DF1C = (int)&unk_60ABC94D;
      dword_60C9DF20 = 12321336;
      dword_60C9DF24 = (int)&unk_60ABC94D;
      dword_60C9DF28 = 12321336;
      dword_60C9DF2C = (int)&unk_60ABC94D;
      dword_60C9DF30 = 12321336;
      dword_60C9DF34 = (int)&unk_60ABC94D;
      dword_60C9DF38 = 12321336;
      dword_60C9DF3C = (int)&unk_60ABC94D;
      dword_60C9DF40 = 12321336;
      dword_60C9DF44 = (int)&unk_60ABC94D;
      dword_60C9DF48 = 12321336;
      dword_60C9DF4C = (int)&unk_60ABC94D;
      dword_60C9DF50 = 12321336;
      dword_60C9DF54 = (int)&unk_60ABC94D;
      dword_60C9DF58 = 12321336;
      dword_60C9DF5C = (int)&unk_60ABC94D;
      dword_60C9DF60 = 12321336;
      dword_60C9DF64 = (int)&unk_60ABC94D;
      dword_60C9DF68 = 12321336;
      dword_60C9DF6C = (int)&unk_60ABC94D;
      dword_60C9DF70 = 12321336;
      dword_60C9DF74 = (int)&unk_60ABC94D;
      dword_60C9DF78 = 12321336;
      dword_60C9DF7C = 11778612;
      dword_60C9DF80 = 12321336;
      dword_60C9DF84 = 11778612;
      dword_60C9DF88 = 12321336;
      dword_60C9DF8C = 11778612;
      dword_60C9DF90 = 12321336;
      dword_60C9DF94 = 11778612;
      dword_60C9DF98 = 12321336;
      dword_60C9DF9C = 11778612;
      dword_60C9DFA0 = 12321336;
      dword_60C9DFA4 = 11778612;
      dword_60C9DFA8 = 12321336;
      dword_60C9DFAC = 11778612;
      dword_60C9DFB0 = 12321336;
      dword_60C9DFB4 = 11778612;
      dword_60C9DFB8 = 12321336;
      dword_60C9DFBC = 11778612;
      dword_60C9DFC0 = 12321336;
      dword_60C9DFC4 = 11778612;
      dword_60C9DFC8 = 12321336;
      dword_60C9DFCC = 11778612;
      dword_60C9DFD0 = 12321336;
      dword_60C9DFD4 = 11778612;
      dword_60C9DFD8 = 12321336;
      dword_60C9DFDC = (int)"CourseName_4-1";
      dword_60C9DFE0 = 12321336;
      dword_60C9DFE4 = (int)"CourseName_4-2";
      dword_60C9DFE8 = 12321336;
      dword_60C9DFEC = (int)"CourseName_4-3";
      dword_60C9DFF0 = 12321336;
      dword_60C9DFF4 = (int)"CourseName_4-4";
      dword_60C9DFF8 = 12321336;
      dword_60C9DFFC = (int)"CourseName_4-5";
      dword_60C9E000 = 12321336;
      dword_60C9E004 = (int)&unk_60ABC94D;
      dword_60C9E008 = 12321336;
      dword_60C9E00C = (int)&unk_60ABC94D;
      dword_60C9E010 = 12321336;
      dword_60C9E014 = (int)&unk_60ABC94D;
      dword_60C9E018 = 12321336;
      dword_60C9E01C = (int)&unk_60ABC94D;
      dword_60C9E020 = 12321336;
      dword_60C9E024 = (int)&unk_60ABC94D;
      dword_60C9E028 = 12321336;
      dword_60C9E02C = (int)&unk_60ABC94D;
      dword_60C9E030 = 12321336;
      dword_60C9E034 = (int)&unk_60ABC94D;
      dword_60C9E038 = 12321336;
      dword_60C9E03C = (int)"CourseName_SECRET-SECRET1";
      dword_60C9E040 = 12321336;
      dword_60C9E044 = (int)"CourseName_SECRET-SECRET2";
      dword_60C9E048 = 12321336;
      dword_60C9E04C = (int)"CourseName_SECRET-SECRET3";
      dword_60C9E050 = 12321336;
      dword_60C9E054 = (int)"CourseName_SECRET-SECRET4";
      dword_60C9E058 = 12321336;
      dword_60C9E05C = (int)"CourseName_SECRET-SECRET5";
      dword_60C9E060 = 12321336;
      dword_60C9E064 = (int)&unk_60ABC94D;

/* ============================================================================
 * sub_6047D75C
 * RVA 0x0047d75c   size 0x1b8   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6047D75C(int a1, int a2, int a3)
  {
    _WORD *v5; // r5
    int v6; // r6
    unsigned int v7; // r4
    int v8; // r0
    int v9; // r2
    int v10; // r1
    int v11; // r3
    _WORD *v12; // r2
    __int16 *v13; // r3
    __int16 v14; // r7
    _WORD v16[256]; // [sp+Ch] [bp-24Ch] BYREF
    int v17; // [sp+20Ch] [bp-4Ch] BYREF
    int *v18; // [sp+210h] [bp-48h]
    int v19; // [sp+214h] [bp-44h]
    int v20; // [sp+218h] [bp-40h] BYREF
  
    v5 = nullptr;
    v6 = StaffCreditTable_init(0);
    v18 = &v20;
    v17 = 12322272;
    v19 = 64;
    sead::BufferedSafeStringBase<char>::assureTerminationImpl_(&v17);
    *(_BYTE *)v18 = MEMORY[0xB3BA34];
    v17 = 12405744;
    switch ( a3 )
    {
      case 0:
        sub_608FDDF4(&v17, "Challenge_Title_%03d", a2);
        break;
      case 1:
        sub_608FDDF4(&v17, "Challenge_Content_%03d", a2);
        break;
      case 2:
        sub_608FDDF4(&v17, "Challenge_Message1_%03d", a2);
        break;
      case 3:
        sub_608FDDF4(&v17, "Challenge_Message2_%03d", a2);
        break;
      case 4:
        sub_608FDDF4(&v17, "Challenge_Message3_%03d", a2);
        break;
      default:
        break;
    }
    (*(void (__fastcall **)(int *))(v17 + 12))(&v17);
    v7 = sub_60911638(*(_DWORD *)(v6 + 4), v18);
    if ( *(_DWORD *)(v6 + 8) > v7 )
      v5 = (_WORD *)sub_6091171C(*(_DWORD *)(v6 + 4), v7);
    v8 = sub_609119F8(v6, v7) >> 1;
    if ( v8 >= 1 )
    {
      v9 = 0;
      if ( (v8 & 1) != 0 )
      {
        v9 = 1;
        v16[0] = *v5;
      }
      if ( v8 != 1 )
      {
        v10 = v8 - v9;
        v11 = 2 * v9 + 2;
        v12 = (_WORD *)((char *)v16 + v11);
        v13 = (_WORD *)((char *)v5 + v11);
        do
        {
          v10 -= 2;
          *(v12 - 1) = *(v13 - 1);
          v14 = *v13;
          v13 += 2;
          *v12 = v14;
          v12 += 2;
        }
        while ( v10 );
      }
    }
    return sub_6047AC98();
  }

/* ============================================================================
 * sub_6047D934
 * RVA 0x0047d934   size 0xd0   xrefs 2
 * ============================================================================ */
  _DWORD *__fastcall sub_6047D934(_DWORD *result, int *a2, _WORD *a3, int a4)
  {
    int v4; // lr
    int v5; // r12
    _WORD *v6; // r4
    int v7; // r3
  
    if ( a4 < 2 )
    {
      v5 = 1;
      v4 = 0;
    }
    else
    {
      v4 = 0;
      v5 = 1;
      v6 = a3;
      v7 = a4 / 2;
      do
      {
        switch ( *v6 )
        {
          case 4:
            goto LABEL_5;
          case 0xA:
            ++v5;
            ++v6;
            break;
          case 0xE:
            v6 = (_WORD *)((char *)v6 + (unsigned __int16)v6[3] + 8);
            break;
          case 0xF:
            v6 += 3;
            break;
          default:
            ++v4;
  LABEL_5:
            ++v6;
            break;
        }
      }
      while ( v6 - a3 < v7 );
    }
    if ( result )
      *result = v4;
    if ( a2 )
      *a2 = v5;
    return result;
  }

/* ============================================================================
 * sub_6047DA04
 * RVA 0x0047da04   size 0x1ac   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6047DA04(_DWORD *a1, unsigned __int16 *a2, int a3)
  {
    unsigned __int16 *v3; // r5
    char *v4; // r7
    int v5; // r8
    char *v6; // r9
    unsigned __int16 *v7; // r6
    int v8; // r4
    int v9; // r0
    int v10; // t1
    unsigned int v11; // r0
    int v12; // t1
    int v13; // r0
  
    v3 = a2;
    v4 = (char *)a1[2];
    v5 = 0;
    v6 = &v4[4 * *a1];
    if ( *a1 && a3 >= 2 )
    {
      v5 = 0;
      v7 = a2;
      v8 = a3 / 2;
      do
      {
        v9 = *a2;
        if ( v9 == 15 )
        {
          v7 += 3;
          if ( !a2 )
          {
            v9 = *v7;
            if ( v9 == 10 )
            {
  LABEL_13:
              ++v7;
              goto LABEL_14;
            }
            goto LABEL_16;
          }
        }
        else
        {
          if ( v9 != 14 )
          {
            v7 = a2;
            if ( v9 == 10 )
              goto LABEL_13;
  LABEL_16:
            if ( v9 == 4 )
            {
              (*(void (__fastcall **)(_DWORD, unsigned __int16 *, _DWORD, int))(**(_DWORD **)v4 + 132))(
                *(_DWORD *)v4,
                v7,
                0,
                2);
              v7 += 2;
            }
            else
            {
              (*(void (__fastcall **)(_DWORD, unsigned __int16 *, _DWORD, int))(**(_DWORD **)v4 + 132))(
                *(_DWORD *)v4,
                v7++,
                0,
                1);
            }
            goto LABEL_19;
          }
          v7 = (unsigned __int16 *)((char *)v7 + a2[3] + 8);
        }
        if ( (unsigned int)a2[1] - 12 < 8 )
          goto LABEL_14;
        (*(void (__fastcall **)(_DWORD, unsigned __int16 *, _DWORD, unsigned int))(**(_DWORD **)v4 + 132))(
          *(_DWORD *)v4,
          a2,
          0,
          ((unsigned int)a2[3] + 8) >> 1);
  LABEL_19:
        v10 = *(_DWORD *)v4;
        v4 += 4;
        ++v5;
        *(_BYTE *)(v10 + 64) |= 1u;
        if ( v4 == v6 )
          break;
  LABEL_14:
        a2 = v7;
      }
      while ( v7 - v3 < v8 );
    }
    if ( v4 != v6 )
    {
      v11 = (unsigned int)(v6 - 4 - v4) >> 2;
      if ( ((v6 - 4 - v4) & 4) == 0 )
      {
        v12 = *(_DWORD *)v4;
        v4 += 4;
        *(_BYTE *)(v12 + 64) &= ~1u;
      }
      if ( v11 )
      {
        do
        {
          *(_BYTE *)(*(_DWORD *)v4 + 64) &= ~1u;
          v13 = *((_DWORD *)v4 + 1);
          v4 += 8;
          *(_BYTE *)(v13 + 64) &= ~1u;
        }
        while ( v4 != v6 );
      }
    }
    return v5;
  }

/* ============================================================================
 * StaffCreditTable_init
 * RVA 0x0047dccc   size 0x14c   xrefs 9
 * ============================================================================ */
  int __fastcall sub_6047DCCC(int a1)
  {
    char v1; // r12
  
    if ( ((unsigned int)&unk_60C9EB40 & ~(1615322340 << v1) & 1) == 0 && _cxa_guard_acquire_0(&unk_60C9EB40) )
    {
      dword_60C9EB44 = 12321336;
      dword_60C9EB48 = (int)"challenge_mode";
      dword_60C9EB4C = 12321336;
      dword_60C9EB50 = (int)"course_name";
      dword_60C9EB54 = 12321336;
      dword_60C9EB58 = (int)"course_name_R-Dash";
      dword_60C9EB5C = 12321336;
      dword_60C9EB60 = (int)"message";
      dword_60C9EB64 = 12321336;
      dword_60C9EB68 = (int)"staff_credit";
      dword_60C9EB6C = 12321336;
      dword_60C9EB70 = (int)"staff_credit_R-Dash";
      dword_60C9EB74 = 12321336;
      dword_60C9EB78 = (int)"world_name";
      dword_60C9EB7C = 12321336;
      dword_60C9EB80 = (int)"Help";
      dword_60C9EB84 = 12321336;
      dword_60C9EB88 = (int)"OverlayDialog";
      dword_60C9EB8C = 12321336;
      dword_60C9EB90 = (int)"VSModeSelect";
      dword_60C9EB94 = 12321336;
      dword_60C9EB98 = (int)"staff_credit_NX";
      dword_60C9EB9C = 12321336;
      dword_60C9EBA0 = (int)"NXStaffCredit";
      sub_60000288();
      _cxa_guard_release_0(&unk_60C9EB40);
    }
    return sub_60986F04(*(_DWORD *)(MEMORY[0xCD0C84] + 852), (char *)&unk_60C9EB40 + 8 * a1 + 4);
  }

/* ============================================================================
 * sub_6047DE6C
 * RVA 0x0047de6c   size 0x5c   xrefs 1
 * ============================================================================ */
  int sub_6047DE6C(int a1, int a2, _DWORD *a3, int a4, int a5, ...)
  {
    int v6; // r5
    va_list va; // [sp+24h] [bp+14h] BYREF
  
    va_start(va, a5);
    v6 = sub_6047DF58(a1, a2, a4, -1, 0, a5, (char *)va, (char *)va);
    if ( sub_60474F28(a3) == 1 )
      sub_60474EEC(a3);
    return v6;
  }

/* ============================================================================
 * sub_6047DEC8
 * RVA 0x0047dec8   size 0x8c   xrefs 48
 * ============================================================================ */
  int __fastcall sub_6047DEC8(_DWORD *a1, int a2, int a3)
  {
    int v4; // r0
    int v5; // r5
    _DWORD varC[7]; // [sp+10h] [bp-Ch] BYREF
    int varg_r3; // [sp+2Ch] [bp+10h] BYREF
  
    varC[2] = &varg_r3;
    v4 = *(_DWORD *)(a2 + 176);
    varC[0] = 12321336;
    varC[1] = v4;
    v5 = sub_6047DF58(3, varC, a2, -1, 0, a3, &varg_r3);
    if ( sub_60474F28(a1) == 1 )
      sub_60474EEC(a1);
    return v5;
  }

/* ============================================================================
 * sub_6047DF58
 * RVA 0x0047df58   size 0x148   xrefs 5
 * ============================================================================ */
  int __fastcall sub_6047DF58(int a1, _DWORD *a2, int a3, int a4, _DWORD *a5, int a6, int *a7)
  {
    int v10; // r6
    unsigned int v11; // r4
    unsigned __int16 *v12; // r7
    int v13; // r5
    int v14; // r5
    _BYTE v16[8]; // [sp+20h] [bp-214h] BYREF
    int v17; // [sp+28h] [bp-20Ch] BYREF
    int *v18; // [sp+2Ch] [bp-208h]
    int v19; // [sp+30h] [bp-204h]
    int v20; // [sp+34h] [bp-200h] BYREF
  
    v10 = StaffCreditTable_init(a1);
    if ( !v10 )
      return 0;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v11 = sub_60911638(*(_DWORD *)(v10 + 4), a2[1]);
    v12 = nullptr;
    if ( *(_DWORD *)(v10 + 8) > v11 )
      v12 = (unsigned __int16 *)sub_6091171C(*(_DWORD *)(v10 + 4), v11);
    v13 = sub_609119F8(v10, v11);
    v18 = &v20;
    v17 = 12569116;
    v19 = 256;
    sub_608FDDB4(&v17);
    *(_WORD *)v18 = MEMORY[0xB3BA36];
    v17 = 12569092;
    sub_608FDDB4(&v17);
    v14 = sub_6047ACD8((int)v18, v19, v12, v13, v10, a4, a5, 0, a6, a7);
    (*(void (__fastcall **)(int *))(v17 + 12))(&v17);
    sub_60987718(v16, v14, v18);
    return sub_60985434(a3, v16, 0);
  }

/* ============================================================================
 * sub_6047E0AC
 * RVA 0x0047e0ac   size 0x40   xrefs 4
 * ============================================================================ */
  int sub_6047E0AC(_DWORD *a1, int a2, int a3, _DWORD *a4, int a5, ...)
  {
    va_list va; // [sp+1Ch] [bp+Ch] BYREF
  
    va_start(va, a5);
    return sub_6047DF58(3, a1, a2, a3, a4, a5, (int *)va);
  }

/* ============================================================================
 * sub_6047E0EC
 * RVA 0x0047e0ec   size 0x50   xrefs 183
 * ============================================================================ */
  int __fastcall sub_6047E0EC(_DWORD *a1, int a2, int a3)
  {
    int varg_r3; // [sp+1Ch] [bp+8h] BYREF
  
    return sub_6047DF58(3, a1, a2, -1, nullptr, a3, &varg_r3);
  }

/* ============================================================================
 * sub_6047E4BC
 * RVA 0x0047e4bc   size 0x58   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6047E4BC(int result)
  {
    *(_DWORD *)result = 9;
    *(_DWORD *)(result + 4) = "SE_SYS_BACK";
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 16) = result + 12;
    *(_DWORD *)(result + 12) = result + 12;
    *(_BYTE *)(result + 52) = 0;
    *(_DWORD *)(result + 32) = 0;
    *(_DWORD *)(result + 36) = 0;
    *(_DWORD *)(result + 40) = 0;
    *(_DWORD *)(result + 44) = 0;
    *(_DWORD *)(result + 48) = 0;
    *(_DWORD *)(result + 28) = 0;
    *(_DWORD *)(result + 24) = 212;
    *(_BYTE *)(result + 53) = 0;
    return result;
  }

/* ============================================================================
 * sub_6047E518
 * RVA 0x0047e518   size 0x2b0   xrefs 13
 * ============================================================================ */
  int __fastcall sub_6047E518(int a1, int a2, int a3, int a4)
  {
    int v8; // r9
    int v9; // r0
    int v10; // r5
    int v11; // r6
    int v12; // r0
    int v13; // r0
    int v14; // r0
    int v15; // r1
    bool v16; // zf
    char v17; // r0
    int v18; // r0
    int v19; // r1
    int v20; // r6
    int v21; // r5
    int v22; // r7
    int result; // r0
    int v24; // r5
    int v25; // r6
    bool v26; // zf
    int v27; // r1
    int v28; // r2
    int v29; // r5
    int v30; // r4
  
    v8 = a1 + 12;
    *(_DWORD *)(a1 + 44) &= 0xFFFFFFFC;
    v9 = *(_DWORD *)(a1 + 28);
    if ( v9 )
      *(_DWORD *)(a1 + 36) = v9;
    v10 = *(_DWORD *)(a1 + 16);
    if ( v10 != v8 )
    {
      v11 = *(_DWORD *)(a1 + 24);
      v12 = v10 - v11;
      do
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 120))(v12);
        v10 = *(_DWORD *)(v10 + 4);
        v12 = v10 - v11;
      }
      while ( v10 - v11 != v8 - v11 );
    }
    v13 = *(_DWORD *)(a1 + 8);
    switch ( v13 )
    {
      case 0:
        if ( a2 || a3 == 1 )
        {
          v20 = *(_DWORD *)(a1 + 16);
          if ( v20 != v8 )
          {
            v21 = *(_DWORD *)(a1 + 24);
            v22 = v20 - v21;
            while ( sub_604785EC(v22) != 1 || (*(int (__fastcall **)(int, int))(*(_DWORD *)v22 + 124))(v22, a4) != 1 )
            {
              v20 = *(_DWORD *)(v20 + 4);
              v22 = v20 - v21;
              if ( v20 - v21 == v8 - v21 )
                goto LABEL_28;
            }
            if ( !*(_BYTE *)(a1 + 53) )
            {
              v19 = 1;
              *(_DWORD *)(a1 + 8) = 1;
              v18 = a1;
              goto LABEL_20;
            }
          }
  LABEL_28:
          v17 = 1;
        }
        else
        {
          v17 = 0;
        }
        *(_BYTE *)(a1 + 53) = v17;
        break;
      case 1:
        v18 = a1;
        v19 = a2;
  LABEL_20:
        sub_6047E7C8(v18, v19, a3, a4);
        break;
      case 2:
        v14 = *(_DWORD *)(a1 + 28);
        v15 = *(_DWORD *)(v14 + 4);
        if ( v15 == 5 )
        {
          *(_DWORD *)(a1 + 8) = 3;
          v15 = *(_DWORD *)(v14 + 4);
        }
        v16 = v15 == 3;
        if ( v15 == 3 )
          v16 = *(_DWORD *)(v14 + 164) == 1;
        if ( v16 )
        {
          *(_DWORD *)(a1 + 8) = 3;
          sub_60478080(v14);
          *(_DWORD *)(a1 + 44) = 0;
        }
        break;
    }
    result = *(_DWORD *)(a1 + 28);
    if ( *(_DWORD *)(a1 + 32) == result )
      goto LABEL_46;
    if ( !result )
    {
      v24 = 1;
      v25 = 0;
      goto LABEL_39;
    }
    v24 = *(unsigned __int8 *)(result + 208);
    if ( *(_BYTE *)(result + 208) )
      v24 = 1;
    if ( *(_DWORD *)(result + 164) != 4 )
      goto LABEL_37;
    v25 = 1;
    if ( !sub_604785CC() )
    {
      result = *(_DWORD *)(a1 + 28);
  LABEL_37:
      (*(void (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
      v25 = 1;
      *(_DWORD *)(a1 + 44) |= 2u;
    }
  LABEL_39:
    result = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 28) = result;
    if ( result )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)result + 8))(result);
      result = *(_DWORD *)(a1 + 44) | 1;
      *(_DWORD *)(a1 + 44) = result;
      if ( v25 == 1 )
      {
        result = *(unsigned __int8 *)(a1 + 52);
        v26 = result == 0;
        if ( !*(_BYTE *)(a1 + 52) )
        {
          result = v24 ^ 1;
          v26 = v24 == 1;
        }
        if ( v26 )
          result = sub_60478750(*(_DWORD *)(a1 + 32));
      }
    }
  LABEL_46:
    v27 = *(_DWORD *)(a1 + 44);
    if ( (v27 & 4) != 0 )
    {
      result = *(_DWORD *)(a1 + 28);
      if ( result )
      {
        v28 = 0;
        if ( !*(_BYTE *)(result + 168) )
        {
          result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 16))(result);
          v27 = *(_DWORD *)(a1 + 44);
          v28 = 2;
        }
        *(_DWORD *)(a1 + 8) = v28;
      }
      *(_DWORD *)(a1 + 44) = v27 & 0xFFFFFFFB;
    }
    v29 = *(_DWORD *)(a1 + 16);
    if ( v29 != v8 )
    {
      v30 = *(_DWORD *)(a1 + 24);
      result = v29 - v30;
      do
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)result + 36))(result);
        v29 = *(_DWORD *)(v29 + 4);
        result = v29 - v30;
      }
      while ( v29 - v30 != v8 - v30 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047E7C8
 * RVA 0x0047e7c8   size 0x2f4   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6047E7C8(_DWORD *a1, int a2, int a3, int a4)
  {
    bool v6; // zf
    int v8; // r2
    int v9; // r0
    int result; // r0
    _DWORD *v11; // r7
    _DWORD *v12; // r8
    int v13; // r4
    int v14; // r6
    int v15; // r1
    _DWORD *v16; // r0
    int v17; // r1
    int v18; // r7
    int v19; // r1
    int v20; // r1
    void (*v21)(void); // r1
  
    v6 = a2 == 0;
    v8 = a1[11];
    if ( !a2 )
      v6 = a3 == 0;
    a1[11] = v8 & 0xFFFFFFFB;
    if ( v6 )
    {
      v9 = a1[12];
      if ( v9 )
      {
        a1[2] = 0;
        a1[8] = 0;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
        a1[12] = 0;
        return result;
      }
      result = a1[7];
      if ( result )
      {
        if ( result == a1[10] )
        {
          if ( *(_DWORD *)(result + 164) != 4 )
          {
            a1[11] = v8 | 4;
            goto LABEL_23;
          }
          a1[2] = 0;
          if ( (*(_BYTE *)(result + 8) & 0x10) != 0 )
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
            result = a1[7];
          }
          *(_BYTE *)(result + 160) = 0;
          a1[7] = 0;
          a1[8] = 0;
        }
        else
        {
          a1[2] = 0;
          a1[8] = 0;
          return (*(int (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
        }
      }
      else
      {
        a1[2] = 0;
        a1[8] = 0;
        result = a1[9];
        if ( result )
        {
          if ( *(_DWORD *)(result + 164) == 4 )
          {
            v19 = 0;
            a1[7] = 0;
          }
          else
          {
            v20 = *(_DWORD *)result;
            if ( *(_BYTE *)(result + 208) )
              v21 = *(void (**)(void))(v20 + 8);
            else
              v21 = *(void (**)(void))(v20 + 12);
            v21();
            result = a1[9];
            a1[7] = result;
            v19 = result;
          }
          a1[8] = v19;
          *(_BYTE *)(result + 160) = 0;
        }
      }
    }
    else
    {
      v11 = (_DWORD *)a1[4];
      v12 = a1 + 3;
      if ( v11 == a1 + 3 )
      {
  LABEL_12:
        v14 = 0;
      }
      else
      {
        v13 = a1[6];
        v14 = (int)v11 - v13;
        while ( sub_604785EC(v14) != 1 || !(*(int (__fastcall **)(int, int))(*(_DWORD *)v14 + 124))(v14, a4) )
        {
          v11 = (_DWORD *)v11[1];
          v14 = (int)v11 - v13;
          if ( (char *)v11 - v13 == (char *)v12 - v13 )
            goto LABEL_12;
        }
      }
      if ( a3 == 1 )
      {
        a1[10] = v14;
        if ( v14 )
        {
          if ( (unsigned int)((unsigned __int8)*(_DWORD *)(v14 + 8) >> 6) - 1 <= 1 && !a1[12] )
          {
            a1[12] = v14;
            (*(void (__fastcall **)(int, int))(*(_DWORD *)v14 + 128))(v14, a4);
          }
        }
      }
      result = a1[12];
      v15 = result;
      if ( !result )
        v15 = v14;
      if ( a1[10] == v15 )
      {
        a1[8] = v15;
        if ( v15 )
        {
          if ( result )
          {
            (*(void (__fastcall **)(int, int))(*(_DWORD *)result + 132))(result, a4);
            v14 = a1[8];
          }
          if ( v14 == a1[7] && !*(_BYTE *)(v14 + 160) )
          {
            *(_BYTE *)(v14 + 160) = 1;
            result = *(_DWORD *)(a1[7] + 164);
            if ( result != 4 )
            {
              sub_60477EF8(a1[8]);
              return sub_60478220(a1[8]);
            }
          }
          else
          {
            v16 = (_DWORD *)a1[4];
            if ( v16 != v12 )
            {
              v17 = a1[6];
              v18 = (int)v16 - v17;
              do
              {
                *(_BYTE *)(v18 + 160) = 0;
                v16 = (_DWORD *)v16[1];
                v18 = (int)v16 - v17;
              }
              while ( (char *)v16 - v17 != (char *)v12 - v17 );
              v14 = a1[8];
            }
            *(_BYTE *)(v14 + 160) = 1;
            return 1;
          }
        }
      }
      else
      {
        result = a1[8];
        if ( result )
        {
          result = 0;
  LABEL_23:
          a1[8] = result;
        }
      }
    }
    return result;
  }

/* ============================================================================
 * sub_6047EABC
 * RVA 0x0047eabc   size 0x5c   xrefs 150
 * ============================================================================ */
  _DWORD *__fastcall sub_6047EABC(_DWORD *result)
  {
    _DWORD *v1; // r4
    int v2; // r5
    char *v3; // r6
  
    result[2] = 0;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
    result[11] = 0;
    v1 = (_DWORD *)result[4];
    if ( v1 != result + 3 )
    {
      v2 = result[6];
      v3 = (char *)result - v2 + 12;
      result = (_DWORD *)((char *)v1 - v2);
      do
      {
        (*(void (__fastcall **)(_DWORD *))(*result + 24))(result);
        v1 = (_DWORD *)v1[1];
        result = (_DWORD *)((char *)v1 - v2);
      }
      while ( (char *)v1 - v2 != v3 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047EB18
 * RVA 0x0047eb18   size 0x44   xrefs 3
 * ============================================================================ */
  _DWORD *__fastcall sub_6047EB18(_DWORD *result)
  {
    _DWORD *v1; // r4
    int v2; // r5
    char *v3; // r6
  
    result[2] = 0;
    result[11] = 0;
    v1 = (_DWORD *)result[4];
    if ( v1 != result + 3 )
    {
      v2 = result[6];
      v3 = (char *)result - v2 + 12;
      result = (_DWORD *)((char *)v1 - v2);
      do
      {
        sub_60478080((int)result);
        v1 = (_DWORD *)v1[1];
        result = (_DWORD *)((char *)v1 - v2);
      }
      while ( (char *)v1 - v2 != v3 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047EB5C
 * RVA 0x0047eb5c   size 0x58   xrefs 1
 * ============================================================================ */
  _DWORD *__fastcall sub_6047EB5C(_DWORD *result)
  {
    _DWORD *v1; // r4
    int v2; // r5
    char *v3; // r6
  
    result[2] = 0;
    result[11] = 0;
    v1 = (_DWORD *)result[4];
    if ( v1 != result + 3 )
    {
      v2 = result[6];
      v3 = (char *)result - v2 + 12;
      result = (_DWORD *)((char *)v1 - v2);
      do
      {
        if ( result[1] == 5 )
          (*(void (__fastcall **)(_DWORD *))(*result + 28))(result);
        v1 = (_DWORD *)v1[1];
        result = (_DWORD *)((char *)v1 - v2);
      }
      while ( (char *)v1 - v2 != v3 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047EBE0
 * RVA 0x0047ebe0   size 0x128   xrefs 5
 * ============================================================================ */
  int __fastcall sub_6047EBE0(int a1, _DWORD *a2)
  {
    int v2; // r11
    int v4; // r2
    int *v5; // r5
    int v6; // r9
    int v7; // r6
    int v8; // r1
    int v9; // r0
    int v10; // r10
    int v11; // r8
    int v12; // r1
    int *v13; // r7
    int i; // r2
    int v15; // r3
    int v16; // r3
    int v18; // [sp+4h] [bp-10h]
    int v19; // [sp+8h] [bp-Ch]
    int v20; // [sp+Ch] [bp-8h] BYREF
    int v21; // [sp+10h] [bp-4h]
  
    v2 = *(_DWORD *)(a1 + 16);
    if ( v2 == a1 + 12 )
      return 0;
    v4 = *(_DWORD *)(a1 + 24);
    v5 = &v20;
    v6 = v2 - v4;
    v18 = v4;
    v19 = a1 + 12 - v4;
    v7 = MEMORY[0xB3BA34];
    v8 = 12321336;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v6 + 88);
      v20 = v8;
      v10 = v8;
      v21 = v9;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v11 = a2[1];
      (*(void (__fastcall **)(int *))(v20 + 12))(v5);
      if ( v11 == v21 )
        break;
      v12 = a2[1];
      v13 = v5;
      for ( i = 1; ; i += 2 )
      {
        v15 = *(unsigned __int8 *)(v12 + i - 1);
        v5 = v13;
        if ( v15 != *(unsigned __int8 *)(v21 + i - 1) )
          break;
        if ( v15 == v7 )
          return v6;
        if ( i > 0x80000 )
          break;
        v16 = *(unsigned __int8 *)(v12 + i);
        v5 = v13;
        if ( v16 != *(unsigned __int8 *)(v21 + i) )
          break;
        if ( v16 == v7 )
          return v6;
      }
      v2 = *(_DWORD *)(v2 + 4);
      v8 = v10;
      v6 = v2 - v18;
      if ( v2 - v18 == v19 )
        return 0;
    }
    return v6;
  }

/* ============================================================================
 * sub_6047ED10
 * RVA 0x0047ed10   size 0x15c   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6047ED10(int result, int a2, int a3, int a4)
  {
    int v4; // r1
    int v5; // r2
    int v6; // r8
    int v7; // r4
    int v8; // r10
    int v9; // r11
    int v10; // r9
    int *v11; // r5
    int *v12; // r7
    int v13; // r0
    int v14; // r6
    int v15; // r1
    int i; // r2
    int v17; // r3
    int v18; // r3
    int v19; // [sp+0h] [bp-24h]
    int v20; // [sp+4h] [bp-20h]
    int v24; // [sp+14h] [bp-10h]
    int v25; // [sp+1Ch] [bp-8h] BYREF
    int v26; // [sp+20h] [bp-4h]
  
    v4 = result;
    if ( a4 >= 1 )
    {
      v5 = result + 12;
      v6 = 0;
      v20 = result;
      v19 = result + 12;
      v7 = MEMORY[0xB3BA34];
      do
      {
        v8 = *(_DWORD *)(v4 + 16);
        v9 = 0;
        if ( v8 != v5 )
        {
          v10 = *(_DWORD *)(v4 + 24);
          v11 = (int *)(a3 + 8 * v6);
          v9 = v8 - v10;
          v24 = v5 - v10;
          v12 = v11 + 1;
          while ( 1 )
          {
            v13 = *(_DWORD *)(v9 + 88);
            v25 = 12321336;
            v26 = v13;
            (*(void (__fastcall **)(int *))(*v11 + 12))(v11);
            (*(void (__fastcall **)(int *))(*v11 + 12))(v11);
            v14 = *v12;
            (*(void (__fastcall **)(int *))(v25 + 12))(&v25);
            if ( v14 == v26 )
              break;
            v15 = *v12;
            for ( i = 1; ; i += 2 )
            {
              v17 = *(unsigned __int8 *)(v15 + i - 1);
              if ( v17 != *(unsigned __int8 *)(v26 + i - 1) )
                break;
              if ( v17 == v7 )
                goto LABEL_16;
              if ( i > 0x80000 )
                break;
              v18 = *(unsigned __int8 *)(v15 + i);
              if ( v18 != *(unsigned __int8 *)(v26 + i) )
                break;
              if ( v18 == v7 )
                goto LABEL_16;
            }
            v8 = *(_DWORD *)(v8 + 4);
            v9 = v8 - v10;
            if ( v8 - v10 == v24 )
            {
              v9 = 0;
              break;
            }
          }
  LABEL_16:
          v4 = v20;
          v5 = v19;
        }
        *(_DWORD *)(a2 + 4 * v6++) = v9;
        result = a4;
      }
      while ( v6 != a4 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047EE74
 * RVA 0x0047ee74   size 0x50   xrefs 6
 * ============================================================================ */
  int __fastcall sub_6047EE74(int result, int a2)
  {
    int v2; // r2
    int v3; // r3
    int v4; // r1
    int v5; // r12
  
    v2 = *(_DWORD *)(result + 16);
    if ( v2 != result + 12 )
    {
      v3 = *(_DWORD *)(result + 24);
      v4 = a2 + 1;
      v5 = result + 12 - v3;
      result = v2 - v3;
      while ( --v4 >= 1 )
      {
        v2 = *(_DWORD *)(v2 + 4);
        result = v2 - v3;
        if ( v2 - v3 == v5 )
          return result;
      }
      if ( result )
        return sub_60478344(result);
    }
    return result;
  }

/* ============================================================================
 * sub_6047EEC4
 * RVA 0x0047eec4   size 0x60   xrefs 41
 * ============================================================================ */
  int __fastcall sub_6047EEC4(int result, int a2)
  {
    int v2; // r2
    int v3; // r3
    int v4; // r1
    int v5; // r12
  
    v2 = *(_DWORD *)(result + 16);
    if ( v2 != result + 12 )
    {
      v3 = *(_DWORD *)(result + 24);
      v4 = a2 + 1;
      v5 = result + 12 - v3;
      result = v2 - v3;
      while ( --v4 >= 1 )
      {
        v2 = *(_DWORD *)(v2 + 4);
        result = v2 - v3;
        if ( v2 - v3 == v5 )
          return result;
      }
      if ( result )
      {
        if ( *(_DWORD *)(result + 164) == 4 )
          *(_BYTE *)(result + 168) = 1;
        return sub_6047823C((_DWORD *)result);
      }
    }
    return result;
  }

/* ============================================================================
 * sub_6047EF24
 * RVA 0x0047ef24   size 0x54   xrefs 9
 * ============================================================================ */
  int __fastcall sub_6047EF24(int a1, int a2)
  {
    int v2; // r0
    int v3; // r2
    int v4; // r3
    int v5; // r1
    int v6; // r12
    int v7; // r0
  
    v3 = *(_DWORD *)(a1 + 16);
    if ( v3 == a1 + 12 )
      return 1;
    v4 = *(_DWORD *)(a1 + 24);
    v5 = a2 + 1;
    v6 = a1 + 12 - v4;
    v7 = v3 - v4;
    while ( --v5 >= 1 )
    {
      v3 = *(_DWORD *)(v3 + 4);
      v7 = v3 - v4;
      if ( v3 - v4 == v6 )
        return 1;
    }
    if ( !v7 )
      return 1;
    v2 = *(_DWORD *)(v7 + 120);
    if ( v2 )
      return *(_BYTE *)(v2 + 51) & 1;
    else
      return 1;
  }

/* ============================================================================
 * sub_6047EF78
 * RVA 0x0047ef78   size 0x54   xrefs 6
 * ============================================================================ */
  bool __fastcall sub_6047EF78(int a1, int a2)
  {
    int v2; // r0
    int v3; // r2
    int v4; // r3
    int v5; // r1
    int v6; // r12
    int v7; // r0
  
    v3 = *(_DWORD *)(a1 + 16);
    if ( v3 == a1 + 12 )
      return 1;
    v4 = *(_DWORD *)(a1 + 24);
    v5 = a2 + 1;
    v6 = a1 + 12 - v4;
    v7 = v3 - v4;
    while ( --v5 >= 1 )
    {
      v3 = *(_DWORD *)(v3 + 4);
      v7 = v3 - v4;
      if ( v3 - v4 == v6 )
        return 1;
    }
    if ( !v7 )
      return 1;
    v2 = *(_DWORD *)(v7 + 120);
    return !v2 || *(float *)(v2 + 44) != 0.0;
  }

/* ============================================================================
 * sub_6047EFCC
 * RVA 0x0047efcc   size 0x50   xrefs 89
 * ============================================================================ */
  int __fastcall sub_6047EFCC(int result, int a2)
  {
    int v2; // r2
    int v3; // r3
    int v4; // r1
    int v5; // r12
  
    v2 = *(_DWORD *)(result + 16);
    if ( v2 != result + 12 )
    {
      v3 = *(_DWORD *)(result + 24);
      v4 = a2 + 1;
      v5 = result + 12 - v3;
      result = v2 - v3;
      while ( --v4 >= 1 )
      {
        v2 = *(_DWORD *)(v2 + 4);
        result = v2 - v3;
        if ( v2 - v3 == v5 )
          return result;
      }
      if ( result )
        return sub_604784EC(result);
    }
    return result;
  }

/* ============================================================================
 * sub_6047F01C
 * RVA 0x0047f01c   size 0x94   xrefs 13
 * ============================================================================ */
  int __fastcall sub_6047F01C(_DWORD *a1, int a2)
  {
    int result; // r0
    int v4; // r2
    int v5; // r1
    int v6; // r5
    int v7; // r0
  
    result = a1[4];
    if ( (_DWORD *)result != a1 + 3 )
    {
      v4 = a1[6];
      v5 = a2 + 1;
      v6 = result - v4;
      while ( --v5 >= 1 )
      {
        result = *(_DWORD *)(result + 4);
        v6 = result - v4;
        if ( (_DWORD *)(result - v4) == (_DWORD *)((char *)a1 - v4 + 12) )
          return result;
      }
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 164) == 4 )
        {
          a1[2] = 0;
          v7 = a1[7];
          if ( v7 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
          *(_BYTE *)(v6 + 168) = 0;
          a1[7] = 0;
          a1[8] = 0;
        }
        return sub_60478440((_DWORD *)v6);
      }
    }
    return result;
  }

/* ============================================================================
 * sub_6047F0B0
 * RVA 0x0047f0b0   size 0x74   xrefs 2
 * ============================================================================ */
  _DWORD *__fastcall sub_6047F0B0(_DWORD *result, int a2)
  {
    _DWORD *v2; // r3
    int v3; // r12
    int v4; // r1
    char *v5; // r2
  
    v2 = (_DWORD *)result[4];
    if ( v2 != result + 3 )
    {
      v3 = result[6];
      v4 = a2 + 1;
      v5 = (char *)v2 - v3;
      while ( --v4 >= 1 )
      {
        v2 = (_DWORD *)v2[1];
        v5 = (char *)v2 - v3;
        if ( (char *)v2 - v3 == (char *)result - v3 + 12 )
          return result;
      }
      if ( v5 )
      {
        if ( *((_DWORD *)v5 + 41) == 4 )
        {
          result[2] = 0;
          v5[168] = 0;
          result[8] = 0;
        }
        return (_DWORD *)sub_60478440(v5);
      }
    }
    return result;
  }

/* ============================================================================
 * sub_6047F124
 * RVA 0x0047f124   size 0x54   xrefs 2
 * ============================================================================ */
  int __fastcall sub_6047F124(int a1, int a2)
  {
    int v2; // r0
    int v3; // r2
    int v4; // r3
    int v5; // r1
    int v6; // r12
    int v7; // r0
  
    v3 = *(_DWORD *)(a1 + 16);
    if ( v3 == a1 + 12 )
      return 1;
    v4 = *(_DWORD *)(a1 + 24);
    v5 = a2 + 1;
    v6 = a1 + 12 - v4;
    v7 = v3 - v4;
    while ( --v5 >= 1 )
    {
      v3 = *(_DWORD *)(v3 + 4);
      v7 = v3 - v4;
      if ( v3 - v4 == v6 )
        return 1;
    }
    if ( !v7 )
      return 1;
    v2 = *(_DWORD *)(v7 + 124);
    if ( v2 )
      return *(_BYTE *)(v2 + 51) & 1;
    else
      return 1;
  }

/* ============================================================================
 * sub_6047F178
 * RVA 0x0047f178   size 0x54   xrefs 6
 * ============================================================================ */
  bool __fastcall sub_6047F178(int a1, int a2)
  {
    int v2; // r0
    int v3; // r2
    int v4; // r3
    int v5; // r1
    int v6; // r12
    int v7; // r0
  
    v3 = *(_DWORD *)(a1 + 16);
    if ( v3 == a1 + 12 )
      return 1;
    v4 = *(_DWORD *)(a1 + 24);
    v5 = a2 + 1;
    v6 = a1 + 12 - v4;
    v7 = v3 - v4;
    while ( --v5 >= 1 )
    {
      v3 = *(_DWORD *)(v3 + 4);
      v7 = v3 - v4;
      if ( v3 - v4 == v6 )
        return 1;
    }
    if ( !v7 )
      return 1;
    v2 = *(_DWORD *)(v7 + 124);
    return !v2 || *(float *)(v2 + 44) != 0.0;
  }

/* ============================================================================
 * sub_6047F1EC
 * RVA 0x0047f1ec   size 0x44   xrefs 4
 * ============================================================================ */
  _DWORD *__fastcall sub_6047F1EC(_DWORD *result)
  {
    _DWORD *v1; // r4
    int v2; // r5
    char *v3; // r6
  
    v1 = (_DWORD *)result[4];
    if ( v1 != result + 3 )
    {
      v2 = result[6];
      v3 = (char *)result - v2 + 12;
      result = (_DWORD *)((char *)v1 - v2);
      do
      {
        (*(void (__fastcall **)(_DWORD *, int))(*result + 40))(result, 1);
        v1 = (_DWORD *)v1[1];
        result = (_DWORD *)((char *)v1 - v2);
      }
      while ( (char *)v1 - v2 != v3 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047F254
 * RVA 0x0047f254   size 0x38   xrefs 1
 * ============================================================================ */
  _DWORD *__fastcall sub_6047F254(_DWORD *result)
  {
    _DWORD *v1; // r4
    int v2; // r5
    char *v3; // r6
  
    v1 = (_DWORD *)result[4];
    if ( v1 != result + 3 )
    {
      v2 = result[6];
      v3 = (char *)result - v2 + 12;
      result = (_DWORD *)((char *)v1 - v2);
      do
      {
        sub_60478650(result);
        v1 = (_DWORD *)v1[1];
        result = (_DWORD *)((char *)v1 - v2);
      }
      while ( (char *)v1 - v2 != v3 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047F28C
 * RVA 0x0047f28c   size 0x3c   xrefs 8
 * ============================================================================ */
  _DWORD *__fastcall sub_6047F28C(_DWORD *result, int a2, int a3)
  {
    _DWORD *v3; // r3
    int v4; // lr
    char *v5; // r12
  
    v3 = (_DWORD *)result[4];
    if ( v3 != result + 3 )
    {
      v4 = result[6];
      v5 = (char *)result - v4 + 12;
      result = (_DWORD *)((char *)v3 - v4);
      do
      {
        result[43] = a2;
        result[48] = a3;
        v3 = (_DWORD *)v3[1];
        result = (_DWORD *)((char *)v3 - v4);
      }
      while ( (char *)v3 - v4 != v5 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047F2C8
 * RVA 0x0047f2c8   size 0x3c   xrefs 3
 * ============================================================================ */
  _DWORD *__fastcall sub_6047F2C8(_DWORD *result, int a2, int a3)
  {
    _DWORD *v3; // r3
    int v4; // lr
    char *v5; // r12
  
    v3 = (_DWORD *)result[4];
    if ( v3 != result + 3 )
    {
      v4 = result[6];
      v5 = (char *)result - v4 + 12;
      result = (_DWORD *)((char *)v3 - v4);
      do
      {
        result[44] = a2;
        result[49] = a3;
        v3 = (_DWORD *)v3[1];
        result = (_DWORD *)((char *)v3 - v4);
      }
      while ( (char *)v3 - v4 != v5 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047F304
 * RVA 0x0047f304   size 0x3c   xrefs 3
 * ============================================================================ */
  _DWORD *__fastcall sub_6047F304(_DWORD *result, int a2, int a3)
  {
    _DWORD *v3; // r3
    int v4; // lr
    char *v5; // r12
  
    v3 = (_DWORD *)result[4];
    if ( v3 != result + 3 )
    {
      v4 = result[6];
      v5 = (char *)result - v4 + 12;
      result = (_DWORD *)((char *)v3 - v4);
      do
      {
        result[45] = a2;
        result[50] = a3;
        v3 = (_DWORD *)v3[1];
        result = (_DWORD *)((char *)v3 - v4);
      }
      while ( (char *)v3 - v4 != v5 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047F340
 * RVA 0x0047f340   size 0x3c   xrefs 6
 * ============================================================================ */
  _DWORD *__fastcall sub_6047F340(_DWORD *result, int a2, int a3)
  {
    _DWORD *v3; // r3
    int v4; // lr
    char *v5; // r12
  
    v3 = (_DWORD *)result[4];
    if ( v3 != result + 3 )
    {
      v4 = result[6];
      v5 = (char *)result - v4 + 12;
      result = (_DWORD *)((char *)v3 - v4);
      do
      {
        result[46] = a2;
        result[51] = a3;
        v3 = (_DWORD *)v3[1];
        result = (_DWORD *)((char *)v3 - v4);
      }
      while ( (char *)v3 - v4 != v5 );
    }
    return result;
  }

/* ============================================================================
 * sub_6047F3B4
 * RVA 0x0047f3b4   size 0xe4   xrefs 4
 * ============================================================================ */
  int __fastcall sub_6047F3B4(_DWORD *a1)
  {
    _DWORD *v2; // r4
    int v3; // r7
    int v4; // r5
    int v5; // r6
  
    v2 = a1 + 1;
    *a1 = 0;
    v3 = (int)(a1 + 102);
    sub_6045BF58((int)(a1 + 1), 0);
    v4 = MEMORY[0xB023FC];
    v5 = MEMORY[0xB023FD];
    sub_609094C4(v2, 192, MEMORY[0xB023FC], MEMORY[0xB023FD]);
    sub_6045BF58(v3, 1);
    sub_609094C4(v3, 192, v4, v5);
    sub_6045BF58((int)(a1 + 203), 2);
    sub_609094C4(a1 + 203, 192, v4, v5);
    sub_6045BF58((int)(a1 + 304), 3);
    sub_609094C4(a1 + 304, 192, v4, v5);
    sub_6045BF58((int)(a1 + 405), 4);
    return sub_609094C4(a1 + 405, 192, v4, v5);
  }

/* ============================================================================
 * sub_6047F4A0
 * RVA 0x0047f4a0   size 0x40   xrefs 4
 * ============================================================================ */
  int *__fastcall sub_6047F4A0(int *result)
  {
    int v1; // r1
    int v2; // r2
  
    v1 = 0;
    result[506] = 0;
    if ( (unsigned int)*result < 5 )
      v1 = *result;
    v2 = result[101 * v1 + 2] & 0x60F0;
    result[507] = v2;
    if ( !v2 )
      result[507] = result[406] & 0x60F0;
    return result;
  }

/* ============================================================================
 * sub_6047F660
 * RVA 0x0047f660   size 0xd4   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6047F660(int a1)
  {
    int v2; // r4
  
    v2 = MEMORY[0xC9EBB4];
    if ( !MEMORY[0xC9EBB4] )
    {
      v2 = operator new[](108, a1, 4);
      sead::IDisposer::IDisposer(v2, a1, 3);
      *(_DWORD *)v2 = 12571436;
      MEMORY[0xC9EBB0] = v2;
      *(_DWORD *)(v2 + 16) = 12571488;
      *(_DWORD *)(v2 + 20) = 12571504;
      *(_DWORD *)(v2 + 24) = 12571540;
      *(_DWORD *)(v2 + 28) = v2;
      *(_DWORD *)(v2 + 32) = 0;
      StateMgr_ctor((_DWORD *)(v2 + 36), v2 + 20, 13233080);
      *(_DWORD *)(v2 + 16) = 12571472;
      *(_DWORD *)(v2 + 88) = 0;
      *(_BYTE *)(v2 + 100) = 0;
      *(_DWORD *)(v2 + 96) = 0;
      MEMORY[0xC9EBB4] = v2;
    }
    return v2;
  }

/* ============================================================================
 * SE_SYS_CTRL_ref
 * RVA 0x0047fa7c   size 0x258   xrefs 0
 * ============================================================================ */
  int __fastcall sub_6047FA7C(int a1)
  {
    int result; // r0
    const char *v3; // r1
    int v4; // r5
    int *v5; // r7
    int v6; // r11
    int v7; // r6
    int v8; // r0
  
    if ( !*(_BYTE *)(a1 + 90) )
    {
      *(_BYTE *)(a1 + 89) = 1;
      *(_BYTE *)(a1 + 90) = 1;
    }
    if ( *(_BYTE *)(a1 + 99) )
    {
      *(_BYTE *)(a1 + 98) = 1;
      *(_BYTE *)(a1 + 97) = 0;
      return StateMgr::changeState((_DWORD *)(a1 + 36), 13233272);
    }
    if ( *(_BYTE *)(a1 + 97) )
    {
      *(_BYTE *)(a1 + 97) = 0;
      return StateMgr::changeState((_DWORD *)(a1 + 36), 13233272);
    }
    if ( *(_BYTE *)(a1 + 96) )
    {
      result = *(_DWORD *)(a1 + 92);
      if ( result == 180 )
      {
        switch ( *(_DWORD *)(a1 + 52) )
        {
          case 0:
            v3 = "SE_SYS_CTRL_0_CONNECTED_TV";
            goto LABEL_28;
          case 1:
            v3 = "SE_SYS_CTRL_1_CONNECTED_TV";
            goto LABEL_28;
          case 2:
            v3 = "SE_SYS_CTRL_2_CONNECTED_TV";
            goto LABEL_28;
          case 3:
            v3 = "SE_SYS_CTRL_3_CONNECTED_TV";
  LABEL_28:
            sub_60807EF0(MEMORY[0xCC6AF8], (int)v3, 0);
            break;
          default:
            break;
        }
        result = *(_DWORD *)(a1 + 92);
      }
      *(_DWORD *)(a1 + 92) = result - 1;
      if ( result > 0 )
        return result;
      result = *(unsigned __int8 *)(MEMORY[0xC9CF0C] + 1392);
      if ( *(_BYTE *)(MEMORY[0xC9CF0C] + 1392) )
        return result;
      return StateMgr::changeState((_DWORD *)(a1 + 36), 13233272);
    }
    v4 = MEMORY[0xCCF448];
    result = *(_DWORD *)(MEMORY[0xCCF448] + 212);
    if ( !result )
      return result;
    v5 = *(int **)(MEMORY[0xCCF448] + 220);
    v6 = *(_DWORD *)(a1 + 52);
    while ( 1 )
    {
      v7 = *v5;
      if ( _cxa_guard_acquire_0(13225748) )
      {
        MEMORY[0xC9CF10] = 12420264;
        _cxa_guard_release_0(13225748);
      }
      v8 = (**(int (__fastcall ***)(int, int))v7)(v7, 13225744);
      if ( !v7 || v8 != 1 )
        goto LABEL_20;
      if ( !v6 )
        break;
      --v6;
  LABEL_20:
      ++v5;
      result = *(_DWORD *)(v4 + 220) + 4 * *(_DWORD *)(v4 + 212);
      if ( v5 == (int *)result )
        return result;
    }
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7);
    if ( result == 1 )
    {
      result = 1;
      *(_BYTE *)(a1 + 96) = 1;
    }
    return result;
  }

/* ============================================================================
 * sub_6047FD68
 * RVA 0x0047fd68   size 0x60   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6047FD68(int result)
  {
    _BYTE *v1; // r1
    int v2; // r2
    int v3; // r3
  
    *(_DWORD *)(result + 104) = 0;
    v1 = (_BYTE *)MEMORY[0xC99DD4];
    v2 = *(unsigned __int8 *)(MEMORY[0xC99DD4] + 292);
    *(_DWORD *)(result + 104) = v2;
    if ( v1[364] )
    {
      v3 = 2;
      if ( !v2 )
        v3 = 1;
      v2 = v3;
      *(_DWORD *)(result + 104) = v3;
    }
    if ( v1[436] )
      *(_DWORD *)(result + 104) = ++v2;
    if ( v1[508] )
      *(_DWORD *)(result + 104) = v2 + 1;
    return result;
  }

/* ============================================================================
 * sub_6047FDEC
 * RVA 0x0047fdec   size 0x1d0   xrefs 1
 * ============================================================================ */
  int __fastcall sub_6047FDEC(int a1)
  {
    int v2; // r6
    int v3; // r5
    int v4; // r5
    int v5; // r0
    int v6; // r5
    int v7; // r0
    int result; // r0
  
    v2 = 0;
    v3 = *(_DWORD *)(MEMORY[0xC995D0] + 32);
    if ( v3 )
    {
      if ( _cxa_guard_acquire_0(13168748) )
      {
        MEMORY[0xC8F068] = 12424368;
        _cxa_guard_release_0(13168748);
      }
      if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 13168744) == 1 )
      {
        v2 = 1;
        *(_BYTE *)(a1 + 100) = 1;
      }
    }
    v4 = *(_DWORD *)(MEMORY[0xC995D0] + 32);
    if ( v4 )
    {
      if ( _cxa_guard_acquire_0(13211096) )
      {
        MEMORY[0xC995D4] = 12424368;
        _cxa_guard_release_0(13211096);
      }
      if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 8))(v4, 13211092) == 1 )
      {
        v2 = 1;
        *(_BYTE *)(a1 + 100) = 1;
      }
    }
    v5 = *(unsigned __int8 *)(MEMORY[0xCBD8A4] + 48);
    if ( *(_BYTE *)(MEMORY[0xCBD8A4] + 48) )
      v5 = 1;
    v6 = v2 | v5;
    if ( *(_BYTE *)(MEMORY[0xCC6D8C] + 17) )
    {
      if ( *(_BYTE *)(MEMORY[0xCC6D78] + 109032) || *(_BYTE *)(MEMORY[0xCC6D78] + 2094) )
      {
        v6 = 1;
      }
      else if ( sub_6040E4C8(MEMORY[0xC9A684]) )
      {
        v6 = 1;
      }
    }
    if ( MEMORY[0xC96478] )
      v6 |= sub_60377F40(MEMORY[0xC96478]);
    v7 = *(unsigned __int8 *)(a1 + 100);
    if ( *(_BYTE *)(a1 + 100) )
      v7 = 1;
    result = v6 | v7;
    *(_BYTE *)(a1 + 99) = result;
    return result;
  }

