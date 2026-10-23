/* sub_608D8114
 * address: 0x608D8114   size: 2056   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D8114(int a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v9; // r6
  int v10; // r5
  int v11; // r7
  int v12; // r4
  int v13; // r1
  int v14; // r0
  int v15; // r5
  char v16; // r3
  unsigned int v17; // r6
  int v18; // r4
  bool v19; // r2
  _DWORD *v20; // r1
  int v21; // r4
  _DWORD *v22; // r0
  unsigned int *v23; // r1
  unsigned int v24; // r5
  unsigned int v25; // r7
  unsigned int v26; // r8
  int v27; // r1
  int v28; // r9
  int v29; // r11
  int *v30; // r5
  bool v31; // r1
  int v32; // r7
  int v33; // r0
  _WORD *v34; // r3
  __int16 *v35; // r1
  int *v36; // r2
  __int16 v37; // t1
  __int16 v38; // t1
  int v39; // r0
  bool v40; // zf
  int v41; // r4
  int v42; // r1
  int v43; // r0
  int v44; // r7
  int v45; // r9
  int v46; // r8
  int v47; // r7
  int v48; // r4
  int v49; // r1
  int v50; // r0
  _WORD *v51; // r1
  int v52; // r2
  _WORD *v53; // r0
  __int16 v54; // r3
  _WORD *v55; // r0
  int v56; // r2
  _WORD *v57; // r1
  __int16 v58; // r3
  _WORD *v59; // r1
  int v60; // r2
  _WORD *v61; // r0
  __int16 v62; // r3
  int v63; // r0
  bool v64; // zf
  int v65; // r6
  int v66; // r0
  int v67; // r6
  int v69; // [sp+10h] [bp-100h]
  int v70; // [sp+14h] [bp-FCh]
  int v71; // [sp+1Ch] [bp-F4h]
  int v72; // [sp+20h] [bp-F0h]
  _WORD *v73; // [sp+24h] [bp-ECh]
  _DWORD *v74; // [sp+28h] [bp-E8h]
  unsigned int v75; // [sp+2Ch] [bp-E4h]
  char v76; // [sp+30h] [bp-E0h]
  _DWORD *v77; // [sp+34h] [bp-DCh]
  int *v78; // [sp+38h] [bp-D8h]
  int *v80; // [sp+40h] [bp-D0h]
  int v81; // [sp+44h] [bp-CCh]
  _BOOL4 v82; // [sp+48h] [bp-C8h]
  int v83; // [sp+4Ch] [bp-C4h]
  int v84; // [sp+50h] [bp-C0h]
  bool v85; // [sp+54h] [bp-BCh]
  int *v86; // [sp+58h] [bp-B8h]
  int *v87; // [sp+5Ch] [bp-B4h]
  _DWORD v88[2]; // [sp+60h] [bp-B0h] BYREF
  int v89; // [sp+68h] [bp-A8h] BYREF
  int v90; // [sp+A8h] [bp-68h] BYREF
  unsigned int v91; // [sp+ACh] [bp-64h]
  unsigned int v92; // [sp+B0h] [bp-60h]
  unsigned int v93; // [sp+B4h] [bp-5Ch]
  unsigned int v94; // [sp+B8h] [bp-58h]
  int v95; // [sp+BCh] [bp-54h]
  __int64 v96; // [sp+C0h] [bp-50h] BYREF
  int v97; // [sp+C8h] [bp-48h] BYREF
  int v98; // [sp+CCh] [bp-44h]
  int v99; // [sp+D0h] [bp-40h]
  int v100; // [sp+D4h] [bp-3Ch]

  nn__os__GetSystemTick((nn__os *)&v96);
  if ( a5 )
  {
    v9 = HIDWORD(a5) + a5;
    v10 = 0;
    v11 = FIELD_U32(a1, 796);
    v12 = FIELD_U32(a1, 788);
    v86 = (int *)(a1 + 796);
    v87 = (int *)(a1 + 788);
    v83 = a1 + 768;
    if ( v12 + HIDWORD(a5) + (int)a5 >= v11 )
    {
      do
      {
        if ( sub_608D4B40(v83, a1, FIELD_U32(a1, 28)) != 1 )
        {
          v44 = 1;
          FIELD_U8(a1, 745) = 1;
          FIELD_U32(a2, 24) = 0;
          return v44;
        }
        ++v10;
        v9 += v12 - v11;
        v11 = *v86;
        v12 = *v87;
      }
      while ( *v87 + v9 >= *v86 );
    }
    v70 = v10;
    v71 = a4;
    sub_608D4BC0(v83, v9);
    v13 = FIELD_U32(a1, 28);
    v14 = FIELD_U32(a1, 788) / FIELD_U32(v13, 36);
    FIELD_U32(a1, 720) = v14;
    v15 = a1 + 48;
    v74 = (_DWORD *)(a1 + 24);
    (*(void (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 24) + 24))(
      FIELD_U32(a1, 24),
      FIELD_U32(a1, 732) + FIELD_U32(v13, 40) * v14 * FIELD_U32(a1, 48),
      0);
    v80 = (int *)(a1 + 6396);
    v77 = (_DWORD *)(a1 + 720);
    v82 = FIELD_U32(a1, 6396) == 2;
  }
  else
  {
    v71 = a4;
    v15 = a1 + 48;
    v80 = (int *)(a1 + 6396);
    v74 = (_DWORD *)(a1 + 24);
    v86 = (int *)(a1 + 796);
    v77 = (_DWORD *)(a1 + 720);
    v87 = (int *)(a1 + 788);
    v83 = a1 + 768;
    v70 = 0;
    v82 = 0;
  }
  v72 = a2;
  v16 = 1;
  v17 = 0;
  v18 = 0;
  v19 = HIDWORD(a5) == 0;
  v69 = FIELD_U32(a1, 788);
  FIELD_U8(a2, 145) = 0;
  v81 = a1;
  v78 = (int *)v15;
  v73 = (_WORD *)(a1 + 836);
  v75 = 0;
  while ( 1 )
  {
    v85 = v19;
    v95 = 0;
    v94 = 0;
    v93 = 0;
    v92 = 0;
    v91 = 0;
    v90 = 0;
    v20 = *(_DWORD **)(a1 + 28);
    v84 = v18;
    v76 = v16;
    if ( FIELD_U32(a1, 720) == FIELD_U32(a1, 724) )
    {
      v21 = v20[11];
      v22 = v20 + 9;
      v23 = v20 + 12;
    }
    else
    {
      v21 = v20[10];
      v22 = v20 + 9;
      v23 = v20 + 9;
    }
    v90 = v21;
    v24 = *v23;
    v91 = *v23;
    v25 = (unsigned int)*v87 % *v22;
    v92 = v25;
    v93 = v25;
    v26 = v25;
    v27 = *v80;
    if ( *v80 == 2 )
    {
      v26 = 14 * (v25 / 0xE);
      v93 = v26;
    }
    v94 = sub_608C6F1C(v26, v27);
    v28 = v21 - v94;
    v29 = v24 - v25;
    v95 = v21 - v94;
    v91 = v24 - v25;
    if ( (int)(*v87 + v24 - v25) <= *v86 )
    {
      v30 = v78;
      v31 = v85;
      if ( !v85 )
        goto LABEL_28;
    }
    else
    {
      v30 = v78;
      v31 = v85;
      v91 = *v86 - *v87;
      v29 = v91;
      if ( v91 >> 7 <= 8 )
      {
        v28 = 2304;
        v95 = 2304;
      }
      if ( !v85 )
        goto LABEL_28;
    }
    v75 = v25 - v26;
    if ( v82 )
    {
      v32 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v81 + 24) + 28))(FIELD_U32(v81, 24));
      if ( sub_608BCC5C(v81, v88, &v97, FIELD_U32(v81, 720), FIELD_U32(v81, 48)) != 1 )
        return 0;
      (*(void (__fastcall **)(_DWORD, int, _DWORD))(*(_DWORD *)*v74 + 24))(*v74, v32, 0);
      v33 = *v30;
      if ( *v30 >= 1 )
      {
        v34 = v73;
        v35 = (__int16 *)v88;
        v36 = &v97;
        do
        {
          v37 = *v35++;
          --v33;
          *(v34 - 1) = v37;
          v38 = *(_WORD *)v36;
          v36 = (int *)((char *)v36 + 2);
          *v34 = v38;
          v34 += 32;
        }
        while ( v33 );
      }
      v31 = v85;
    }
LABEL_28:
    a1 = v81;
    v39 = FIELD_U32(v81, 712);
    v40 = v39 == 0;
    if ( v39 )
      v40 = FIELD_U32(v81, 716) == 0;
    if ( v40 )
    {
      v41 = v84;
      if ( sub_608D9158(v81, a3, &v90, v84, v31, v82) != 1 )
        return 0;
    }
    else
    {
      v41 = v84;
      if ( !sub_608D8F8C(v81, a3, &v90, v84, v31, v82) )
        return 0;
    }
    sub_608D4BC0(v83, v29);
    v18 = v28 + v41;
    v17 += v29;
    ++*v77;
    if ( *v87 == *v86 )
      break;
    v19 = 0;
    v16 = 0;
    if ( v17 >= 0x480 && (unsigned int)(*v86 - *v87) >> 7 > 8 )
    {
      v45 = v18;
      v46 = a6;
      v47 = v70;
      v48 = v69;
      goto LABEL_43;
    }
  }
  v45 = v18;
  if ( sub_608D4B40(v83, v81, FIELD_U32(v81, 28)) )
  {
    v42 = FIELD_U32(v81, 28);
    v43 = FIELD_U32(v81, 788) / FIELD_U32(v42, 36);
    FIELD_U32(v81, 720) = v43;
    (*(void (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(v81 + 24) + 24))(
      FIELD_U32(v81, 24),
      FIELD_U32(v81, 732) + FIELD_U32(v42, 40) * v43 * FIELD_U32(v81, 48),
      0);
    v46 = a6;
    v47 = v70 + 1;
  }
  else
  {
    v46 = a6;
    FIELD_U8(v81, 745) = 1;
    v47 = v70;
  }
  v48 = v69;
  if ( a5 && ((unsigned __int8)v76 & (v17 < 0x480)) == 1 )
    FIELD_U8(v72, 145) = 1;
LABEL_43:
  v49 = v72;
  FIELD_U8(v72, 40) = 0;
  if ( *v80 == 2 )
  {
    if ( v48 )
    {
      v50 = FIELD_U32(v81, 28);
      if ( FIELD_U8(v50, 8) && v48 == FIELD_U32(v50, 12) )
      {
        if ( *v30 >= 1 )
        {
          v51 = (_WORD *)(v81 + 6528);
          v52 = 0;
          v53 = (_WORD *)(v72 + 42);
          do
          {
            ++v52;
            v53[1] = v51[1];
            *v53 = *v51;
            v54 = v51[2];
            v51 += 96;
            v53[2] = v54;
            v53 += 3;
          }
          while ( v52 < *v30 );
        }
        goto LABEL_59;
      }
      v49 = v72;
      if ( v48 == FIELD_U32(v81, 804) )
      {
        if ( *v30 >= 1 )
        {
          v55 = (_WORD *)(v81 + 832);
          v56 = 0;
          v57 = (_WORD *)(v72 + 42);
          do
          {
            ++v56;
            v57[1] = v55[1];
            *v57 = *v55;
            v58 = v55[2];
            v55 += 32;
            v57[2] = v58;
            v57 += 3;
          }
          while ( v56 < *v30 );
        }
        goto LABEL_59;
      }
    }
    else
    {
      if ( *v30 >= 1 )
      {
        v59 = (_WORD *)(v81 + 6464);
        v60 = 0;
        v61 = (_WORD *)(v72 + 42);
        do
        {
          ++v60;
          v61[1] = v59[1];
          *v61 = *v59;
          v62 = v59[2];
          v59 += 96;
          v61[2] = v62;
          v61 += 3;
        }
        while ( v60 < *v30 );
      }
LABEL_59:
      v49 = v72;
      FIELD_U8(v72, 40) = 1;
    }
  }
  FIELD_U32(v49, 140) = v47;
  v44 = 1;
  FIELD_U32(v49, 20) = v71;
  FIELD_U32(v49, 24) = v17;
  FIELD_U32(v49, 28) = v48;
  FIELD_U32(v49, 32) = v75;
  FIELD_U32(v49, 36) = v45;
  FIELD_U8(v49, 144) = FIELD_U8(v81, 745);
  if ( FIELD_U8(v46, 28) )
  {
    nn__os__GetSystemTick((nn__os *)&v90);
    v100 = 0;
    v99 = 0;
    v98 = 0;
    v88[0] = 0;
    v97 = 0;
    v63 = FIELD_U32(v81, 712);
    v64 = v63 == 0;
    if ( v63 )
      v64 = FIELD_U32(v81, 716) == 0;
    if ( !v64 )
    {
      v65 = 0;
      v66 = 0;
      if ( *v74 )
      {
        v40 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v74 + 64))(*v74) == 1;
        v66 = 0;
        if ( v40 )
          v66 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v74 + 80))(*v74);
      }
      v97 = v66;
      if ( *v74 && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v74 + 64))(*v74) == 1 )
        v65 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v74 + 84))(*v74);
      v98 = v65;
      v67 = 0;
      if ( *v74 && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v74 + 64))(*v74) == 1 )
        v67 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v74 + 28))(*v74);
      v99 = v67;
      v100 = FIELD_U32(v81, 20);
    }
    sub_608D2B28((int)&v89, &v96, &v90, &v97);
    sub_608D2C08((_DWORD *)v46, v88);
  }
  return v44;
}
