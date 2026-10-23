/* sub_60854184
 * address: 0x60854184   size: 1876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60854184(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int Alignment_const; // r0
  char *v12; // r0
  int v13; // r8
  int v14; // r6
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  int v17; // r9
  unsigned int v18; // r0
  int v19; // r7
  int v20; // r2
  int v21; // r3
  int v22; // r0
  _DWORD *v23; // r1
  int v24; // r2
  int v25; // r6
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r10
  int v30; // r9
  int v31; // r3
  int v32; // r5
  char v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r8
  int v40; // r10
  int v41; // r7
  int v42; // r0
  int v43; // r6
  int v44; // r0
  int v45; // r6
  int v46; // r0
  int v47; // r6
  int v48; // r0
  int v49; // r6
  int v50; // r0
  int v51; // r6
  int v52; // r0
  int v54; // [sp+18h] [bp-B0h]
  int v55; // [sp+1Ch] [bp-ACh]
  int v56; // [sp+20h] [bp-A8h]
  int v57; // [sp+2Ch] [bp-9Ch]
  char v58; // [sp+30h] [bp-98h]
  void (__fastcall *v59)(int, _DWORD *, int, int, int, int, int); // [sp+34h] [bp-94h]
  int v60; // [sp+38h] [bp-90h] BYREF
  int v61; // [sp+3Ch] [bp-8Ch]
  int v62; // [sp+40h] [bp-88h]
  int v63; // [sp+44h] [bp-84h]
  int v64; // [sp+48h] [bp-80h]
  int v65; // [sp+4Ch] [bp-7Ch]
  int v66; // [sp+50h] [bp-78h]
  int v67; // [sp+54h] [bp-74h]
  float v68[12]; // [sp+58h] [bp-70h] BYREF
  int v69; // [sp+88h] [bp-40h] BYREF
  int v70; // [sp+8Ch] [bp-3Ch] BYREF
  int v71; // [sp+90h] [bp-38h] BYREF
  int v72; // [sp+94h] [bp-34h]
  int v73; // [sp+98h] [bp-30h]
  int v74; // [sp+9Ch] [bp-2Ch]

  Alignment_const = nn__util__BinaryFileHeader__GetAlignment_const((nn__util__BinaryFileHeader *)aBnsh_0);
  v12 = (char *)sub_60855BA4(152040, Alignment_const);
  FIELD_U32(a1, 32) = v12;
  qmemcpy(v12, aBnsh_0, 0x251E8u);
  sub_6085BA50(a1, a2, FIELD_U32(a1, 32));
  if ( a4 )
    v13 = sub_6084B2A0(a2);
  else
    v13 = 0;
  v14 = a5;
  if ( a7 )
  {
    FIELD_U32(a1, 64) = a7;
    FIELD_U8(a1, 785) = 0;
    if ( !a4 )
      goto LABEL_14;
  }
  else
  {
    v15 = (_DWORD *)sub_60855BC8(1040);
    if ( v15 )
      v16 = sub_6084B3C4(v15);
    else
      v16 = 0;
    FIELD_U32(a1, 64) = v16;
    FIELD_U8(a1, 785) = 1;
    v17 = sub_6084B180();
    v18 = aVertex_ref((int)a2);
    if ( !a4 )
    {
      v25 = FIELD_U32(a1, 64);
      v26 = sub_60855BA4(v18, v17);
      (*(void (__fastcall **)(int, _DWORD *, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v25 + 8))(
        v25,
        a2,
        v26,
        a3,
        0,
        0,
        0);
LABEL_14:
      v22 = a1;
      v23 = a2;
      v24 = 0;
      v21 = 0;
      goto LABEL_15;
    }
    v19 = FIELD_U32(a1, 64);
    v59 = *(void (__fastcall **)(int, _DWORD *, int, int, int, int, int))(*(_DWORD *)v19 + 8);
    v14 = a5;
    v20 = sub_60855BA4(v18 - v13, v17);
    v59(v19, a2, v20, a3, a4, a5, v13);
  }
  v21 = v13 + v14;
  v22 = a1;
  v23 = a2;
  v24 = a4;
LABEL_15:
  sub_608548E4(v22, v23, v24, v21);
  v27 = sub_60855BC8(4320);
  FIELD_U32(a1, 536) = v27;
  memset(v27, 0, 4320);
  v28 = sub_60855BC8(288);
  FIELD_U32(a1, 540) = v28;
  memset(v28, 0, 288);
  v29 = 360;
  v30 = 24;
  v31 = 0;
  do
  {
    v32 = 0;
    v54 = v31;
    v55 = v30;
    v56 = v29;
    v57 = dword_60B14E94[v31];
    do
    {
      memset(v68, 0, 32);
      sub_60998EA8(v68);
      v33 = dword_60B14E94[v32];
      LOBYTE(v68[0]) = v57;
      v58 = v33;
      BYTE1(v68[0]) = v33;
      HIWORD(v68[1]) = 21;
      sub_6083B2BC(FIELD_U32(a1, 536) + v29 - 360, (int)a2, v68);
      v34 = FIELD_U32(a1, 540) + v30;
      *(_DWORD *)(v34 - 24) = -1;
      *(_DWORD *)(v34 - 20) = -1;
      memset(v68, 0, 32);
      sub_60998EA8(v68);
      LOBYTE(v68[0]) = v57;
      BYTE1(v68[0]) = v58;
      HIWORD(v68[1]) = 37;
      sub_6083B2BC(FIELD_U32(a1, 536) + v29 - 240, (int)a2, v68);
      v35 = FIELD_U32(a1, 540) + v30;
      *(_DWORD *)(v35 - 16) = -1;
      *(_DWORD *)(v35 - 12) = -1;
      memset(v68, 0, 32);
      sub_60998EA8(v68);
      LOBYTE(v68[0]) = v57;
      BYTE1(v68[0]) = v58;
      HIWORD(v68[1]) = 25;
      sub_6083B2BC(FIELD_U32(a1, 536) + v29 - 120, (int)a2, v68);
      v36 = FIELD_U32(a1, 540) + v30;
      *(_DWORD *)(v36 - 8) = -1;
      *(_DWORD *)(v36 - 4) = -1;
      memset(v68, 0, 32);
      sub_60998EA8(v68);
      LOBYTE(v68[0]) = v57;
      BYTE1(v68[0]) = v58;
      HIWORD(v68[1]) = 41;
      sub_6083B2BC(FIELD_U32(a1, 536) + v29, (int)a2, v68);
      v37 = FIELD_U32(a1, 540);
      ++v32;
      v29 += 480;
      *(_DWORD *)(v37 + v30) = -1;
      v38 = v37 + v30;
      v30 += 32;
      FIELD_U32(v38, 4) = -1;
    }
    while ( v32 != 3 );
    v31 = v54 + 1;
    v30 = v55 + 96;
    v29 = v56 + 1440;
  }
  while ( v54 != 2 );
  v74 = 0;
  v73 = 0;
  v72 = 0;
  v71 = 0;
  sub_6083D5B0(&v71);
  v72 = 16;
  FIELD_U32(a1, 52) = sub_608352A0(a2, (int)&v71);
  memset(v68, 0, 16);
  sub_6083D5B0(v68);
  LODWORD(v68[1]) = 4;
  FIELD_U32(a1, 56) = sub_608352A0(a2, (int)v68);
  memset(v68, 0, 16);
  sub_6083D5B0(v68);
  LODWORD(v68[1]) = 8;
  FIELD_U32(a1, 60) = sub_608352A0(a2, (int)v68);
  sub_60854BB4(&v70, &v69);
  v39 = v69;
  v40 = v70;
  memset(v68, 0, sizeof(v68));
  v67 = 0;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v41 = sub_60854D60(v68, &v60, v70, v69);
  v42 = sub_60855BA4(v41, 8);
  sub_6083C52C((_DWORD *)(a1 + 544), v42, v41);
  sub_6083C540((int *)(a1 + 544), (int)a2, (unsigned __int8 *)v68);
  memset(v68, 0, sizeof(v68));
  v67 = 0;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v43 = sub_60854D60(v68, &v60, v40 + 4, v39 + 4);
  v44 = sub_60855BA4(v43, 8);
  sub_6083C52C((_DWORD *)(a1 + 584), v44, v43);
  sub_6083C540((int *)(a1 + 584), (int)a2, (unsigned __int8 *)v68);
  memset(v68, 0, sizeof(v68));
  v67 = 0;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v45 = sub_60854D60(v68, &v60, v40 + 8, v39 + 8);
  v46 = sub_60855BA4(v45, 8);
  sub_6083C52C((_DWORD *)(a1 + 624), v46, v45);
  sub_6083C540((int *)(a1 + 624), (int)a2, (unsigned __int8 *)v68);
  memset(v68, 0, sizeof(v68));
  v67 = 0;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v47 = sub_60854D60(v68, &v60, v40 + 12, v39 + 12);
  v48 = sub_60855BA4(v47, 8);
  sub_6083C52C((_DWORD *)(a1 + 664), v48, v47);
  sub_6083C540((int *)(a1 + 664), (int)a2, (unsigned __int8 *)v68);
  memset(v68, 0, sizeof(v68));
  v67 = 0;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v49 = sub_60854D60(v68, &v60, v40 + 16, v39 + 16);
  v50 = sub_60855BA4(v49, 8);
  sub_6083C52C((_DWORD *)(a1 + 704), v50, v49);
  sub_6083C540((int *)(a1 + 704), (int)a2, (unsigned __int8 *)v68);
  memset(v68, 0, sizeof(v68));
  v67 = 0;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v51 = sub_60854D60(v68, &v60, v40 + 20, v39 + 20);
  v52 = sub_60855BA4(v51, 8);
  sub_6083C52C((_DWORD *)(a1 + 744), v52, v51);
  sub_6083C540((int *)(a1 + 744), (int)a2, (unsigned __int8 *)v68);
  FIELD_U8(a1, 784) = 1;
  return 1;
}
