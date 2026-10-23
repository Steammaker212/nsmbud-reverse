/* sub_6086CCFC
 * address: 0x6086CCFC   size: 1628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086CCFC(int a1, _DWORD *a2, int a3, unsigned int a4)
{
  int result; // r0
  int v6; // r9
  int v7; // r12
  int v8; // r4
  int v9; // r6
  int v10; // lr
  int v11; // r0
  _DWORD *v12; // r10
  int v13; // r0
  int v14; // r0
  int v15; // r7
  _DWORD *v16; // r5
  int v17; // r7
  int *v18; // r3
  int v19; // r11
  int v20; // r0
  _DWORD *v21; // r5
  int v22; // r6
  int v23; // r4
  int v24; // r7
  int v25; // r3
  int v26; // r7
  int v27; // r8
  int v28; // r5
  int v29; // r0
  int v30; // r9
  int v31; // r11
  char v32; // r0
  int v33; // r4
  void *v34; // r6
  unsigned int v35; // r4
  int v36; // r6
  int v37; // r11
  int v38; // r7
  int v39; // r8
  int v40; // r0
  int v41; // r9
  int v42; // r4
  int v43; // r6
  int v44; // r4
  unsigned int v45; // r6
  int v46; // r4
  int v47; // r0
  int v48; // r8
  int v49; // r5
  int i; // r6
  int v51; // r3
  int v52; // r0
  void (__fastcall *v53)(int, int); // r2
  int v54; // r8
  int v55; // r6
  int v56; // r5
  int v57; // r1
  int v58; // r3
  int v59; // r0
  void (__fastcall *v60)(int, int); // r2
  _DWORD *v61; // r1
  int v62; // [sp+4h] [bp-CCh]
  int v63; // [sp+8h] [bp-C8h]
  int v64; // [sp+10h] [bp-C0h]
  int *v65; // [sp+14h] [bp-BCh]
  _DWORD *v66; // [sp+18h] [bp-B8h]
  int v67; // [sp+1Ch] [bp-B4h]
  int v68; // [sp+20h] [bp-B0h]
  int v69; // [sp+24h] [bp-ACh]
  int v70; // [sp+24h] [bp-ACh]
  int v71; // [sp+28h] [bp-A8h]
  _DWORD *v72; // [sp+2Ch] [bp-A4h]
  int v73; // [sp+30h] [bp-A0h] BYREF
  int v74; // [sp+34h] [bp-9Ch]
  int v75; // [sp+38h] [bp-98h]
  int v76; // [sp+3Ch] [bp-94h]
  int v77; // [sp+40h] [bp-90h]
  int v78; // [sp+44h] [bp-8Ch]
  int v79; // [sp+48h] [bp-88h]
  int v80; // [sp+4Ch] [bp-84h]
  int v81; // [sp+50h] [bp-80h]
  int v82; // [sp+54h] [bp-7Ch]
  int v83; // [sp+58h] [bp-78h]
  int v84; // [sp+5Ch] [bp-74h]
  int v85; // [sp+60h] [bp-70h]
  int v86; // [sp+64h] [bp-6Ch]
  int v87; // [sp+68h] [bp-68h]
  int v88; // [sp+6Ch] [bp-64h]
  int v89; // [sp+70h] [bp-60h]
  int v90; // [sp+74h] [bp-5Ch]
  int v91; // [sp+78h] [bp-58h]
  int v92; // [sp+7Ch] [bp-54h]
  int v93; // [sp+80h] [bp-50h]
  int v94; // [sp+84h] [bp-4Ch]
  int v95; // [sp+88h] [bp-48h]
  int v96; // [sp+8Ch] [bp-44h]
  int v97; // [sp+90h] [bp-40h]
  int v98; // [sp+94h] [bp-3Ch]
  int v99; // [sp+98h] [bp-38h]
  int v100; // [sp+9Ch] [bp-34h]
  int v101; // [sp+A0h] [bp-30h]
  int v102; // [sp+A4h] [bp-2Ch]
  int v103; // [sp+A8h] [bp-28h]

  result = 0;
  if ( a2[10] && a2[9] <= a4 )
  {
    v6 = *a2;
    v7 = a2[5];
    v8 = *(unsigned __int16 *)(*a2 + 108);
    v9 = *(unsigned __int16 *)(*a2 + 106);
    v10 = *(_DWORD *)(*a2 + 32);
    *(_DWORD *)a1 = *a2;
    if ( a3 )
    {
      v11 = a2[35];
      if ( v11 )
        v11 = a3 + a2[38];
      FIELD_U32(a1, 4) = v11;
      v12 = (_DWORD *)(a1 + 4);
      if ( a2[39] )
        v13 = a3 + a2[42];
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
      FIELD_U32(a1, 4) = 0;
      v12 = (_DWORD *)(a1 + 4);
    }
    FIELD_U32(a1, 8) = v13;
    v14 = 0;
    FIELD_U8(a1, 12) = v7;
    FIELD_U16(a1, 14) = 0;
    FIELD_U16(a1, 24) = v9;
    FIELD_U16(a1, 26) = v8;
    FIELD_U32(a1, 28) = 0;
    if ( a3 )
    {
      v15 = a2[27];
      if ( v15 )
        v15 = a3 + a2[30];
      FIELD_U32(a1, 32) = v15;
      v16 = (_DWORD *)(a1 + 32);
      v17 = a2[31];
      if ( v17 )
        v17 = a3 + a2[34];
      v18 = (int *)(a1 + 36);
      FIELD_U32(a1, 36) = v17;
      if ( a2[43] )
        v14 = a3 + a2[46];
    }
    else
    {
      v14 = 0;
      FIELD_U32(a1, 32) = 0;
      v16 = (_DWORD *)(a1 + 32);
      FIELD_U32(a1, 36) = 0;
      v18 = (int *)(a1 + 36);
    }
    v19 = 0;
    FIELD_U32(a1, 40) = v14;
    FIELD_U32(a1, 44) = 0;
    FIELD_U32(a1, 48) = a3;
    FIELD_U32(a1, 52) = 0;
    FIELD_U32(a1, 56) = 0;
    FIELD_U32(a1, 72) = a2[6];
    v20 = a2[1];
    v72 = a2;
    v71 = v6;
    v63 = v8;
    v68 = v7;
    v65 = v18;
    v66 = v16;
    v67 = v10;
    if ( v20 )
    {
      FIELD_U32(a1, 28) = v20;
    }
    else
    {
      v69 = v9;
      v73 = v10;
      v77 = 0;
      v21 = a2;
      v22 = a3;
      v78 = 8;
      v79 = 0;
      v80 = -1;
      v81 = 0;
      v82 = 8;
      v83 = 0;
      v84 = -1;
      v85 = 0;
      v86 = 8;
      v87 = 0;
      v88 = -1;
      v89 = 0;
      v90 = 8;
      v91 = 0;
      v92 = -1;
      v75 = 0;
      v76 = 0;
      v74 = a2[2];
      sub_6087CEF0(&v73);
      v23 = v75;
      if ( v22 )
      {
        v24 = v21[23];
        if ( v24 )
          v24 = v22 + v21[26];
        if ( v21[11] )
          v19 = v22 + v21[14];
      }
      else
      {
        v24 = 0;
      }
      *(_DWORD *)v24 = 0;
      FIELD_U16(v24, 4) = 0;
      FIELD_U8(v24, 6) = 0;
      memset((void *)(v24 + 8), 0, 56);
      FIELD_U32(a1, 28) = v24;
      sub_6087D014(v24, &v73, v19, v23);
      a3 = v22;
      a2 = v72;
      v8 = v63;
      v7 = v68;
      v9 = v69;
      v10 = v67;
    }
    LOBYTE(v25) = 0;
    v26 = 0;
    if ( a3 )
    {
      v26 = 0;
      if ( a2[15] )
        v26 = a3 + a2[18];
    }
    v64 = a1;
    if ( v9 )
    {
      v27 = 0;
      v28 = 0;
      v25 = 0;
      v62 = a3;
      do
      {
        v70 = v25;
        v29 = FIELD_U32(v6, 48);
        v30 = v9;
        v73 = v29 + v27;
        v80 = 0;
        v81 = 8;
        v82 = 0;
        v83 = -1;
        v84 = 0;
        v85 = 8;
        v86 = 0;
        v87 = -1;
        v88 = 0;
        v89 = 8;
        v90 = 0;
        v91 = -1;
        v92 = 0;
        v93 = 8;
        v94 = 0;
        v95 = -1;
        v96 = 0;
        v97 = 8;
        v98 = 0;
        v99 = -1;
        v100 = 0;
        v101 = 8;
        v102 = 0;
        v103 = -1;
        v78 = 0;
        v79 = 0;
        v74 = a2[3];
        v31 = *(_DWORD *)(FIELD_U32(v10, 24) + 96 * *(unsigned __int16 *)(v29 + v27 + 96) + 52) & 0x70000;
        v32 = v31;
        if ( v31 )
          v32 = 1;
        LOBYTE(v76) = v32;
        v75 = v7;
        BYTE1(v76) = *((_BYTE *)a2 + 32);
        v77 = a2[7];
        sub_60875064(&v73);
        v33 = v78;
        v34 = (void *)(*v66 + v28);
        memset(v34, 0, 56);
        v35 = (v33 + 15) & 0xFFFFFFF0;
        sub_60875230(v34, &v73, v26, v35);
        v25 = v70;
        v36 = v30;
        v10 = v67;
        v7 = v68;
        v6 = v71;
        a2 = v72;
        v26 += v35;
        v27 += 112;
        v28 += 56;
        if ( v31 )
          v25 = 1;
        v9 = v36 - 1;
      }
      while ( v9 );
      a1 = v64;
      a3 = v62;
      v8 = v63;
    }
    v37 = 0;
    FIELD_U8(a1, 13) = v25;
    if ( a3 && a2[19] )
      v37 = a3 + a2[22];
    if ( v8 )
    {
      v38 = 0;
      v39 = 0;
      do
      {
        v40 = FIELD_U32(v6, 64);
        v41 = v8;
        v73 = v40 + v38;
        v77 = 0;
        v78 = 8;
        v79 = 0;
        v80 = -1;
        v81 = 0;
        v82 = 8;
        v83 = 0;
        v84 = -1;
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
        v75 = 0;
        v76 = 0;
        v74 = a2[4];
        sub_6086BF0C(&v73);
        v42 = *v65;
        v43 = v75;
        *(_DWORD *)(v42 + v39) = 0;
        v44 = v42 + v39;
        FIELD_U16(v44, 4) = 0;
        FIELD_U8(v44, 6) = 0;
        FIELD_U16(v44, 28) = 0;
        FIELD_U32(v44, 8) = 0;
        FIELD_U32(v44, 12) = 0;
        FIELD_U32(v44, 16) = 0;
        FIELD_U32(v44, 20) = 0;
        FIELD_U32(v44, 24) = 0;
        memset((void *)(v44 + 32), 0, 40);
        v45 = (v43 + 7) & 0xFFFFFFF8;
        sub_6086C084((int *)v44, &v73, v37, v45);
        v46 = v41;
        v6 = v71;
        a2 = v72;
        v37 += v45;
        v38 += 184;
        v39 += 72;
        v8 = v46 - 1;
      }
      while ( v8 );
    }
    v47 = FIELD_U32(v64, 28);
    if ( FIELD_U16(v47, 40) )
    {
      v48 = FIELD_U16(v47, 40) - 1;
      v49 = 0;
      for ( i = 52; ; i += 96 )
      {
        v51 = *(_DWORD *)(*v12 + 4 * (v49 >> 5));
        v52 = *(_DWORD *)(FIELD_U32(v47, 8) + i) & 1;
        *(_DWORD *)(*v12 + 4 * (v49 >> 5)) = v51 & ~(1 << (v49 & 0x1F)) | (v52 << (v49 & 0x1F));
        v53 = *(void (__fastcall **)(int, int))(v64 + 60);
        if ( v53 && (v52 ^ ((v51 & (1 << (v49 & 0x1F))) != 0)) == 1 )
          v53(v64, v49);
        if ( v48 == v49 )
          break;
        v47 = FIELD_U32(v64, 28);
        ++v49;
      }
    }
    v54 = FIELD_U16(v64, 26);
    if ( FIELD_U16(v64, 26) )
    {
      v55 = 0;
      v56 = 0;
      do
      {
        v57 = FIELD_U32(v64, 8);
        v58 = *(_DWORD *)(v57 + 4 * (v56 >> 5));
        v59 = *(_DWORD *)(*(_DWORD *)(*v65 + v55) + 160) & 1;
        *(_DWORD *)(v57 + 4 * (v56 >> 5)) = v58 & ~(1 << (v56 & 0x1F)) | (v59 << (v56 & 0x1F));
        v60 = *(void (__fastcall **)(int, int))(v64 + 64);
        if ( v60 && (v59 ^ ((v58 & (1 << (v56 & 0x1F))) != 0)) == 1 )
          v60(v64, v56);
        ++v56;
        v55 += 72;
      }
      while ( v54 != v56 );
    }
    v61 = *(_DWORD **)(v64 + 40);
    result = 1;
    if ( v61 )
    {
      *v61 = 0;
      v61[1] = 0;
      v61[2] = 0;
      v61[3] = 0;
      v61[4] = 0;
      v61[5] = 0;
      v61[6] = 0;
      v61[7] = 0;
    }
  }
  return result;
}
