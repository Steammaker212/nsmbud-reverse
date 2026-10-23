/* BgRenderer_ref
 * address: 0x6071C67C   size: 3284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BgRenderer_ref(_DWORD *a1, int a2)
{
  int v4; // r1
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r2
  int v9; // r5
  int v10; // r1
  int v11; // r4
  int v12; // r7
  int v13; // r7
  int v14; // r7
  int v15; // r7
  int v16; // r7
  int v17; // r7
  int v18; // r0
  int v19; // r7
  int v20; // r7
  int v21; // r7
  int v22; // r7
  int v23; // r7
  int v24; // r7
  int v25; // r7
  int v26; // r7
  int v27; // r7
  int v28; // r7
  int v29; // r7
  int v30; // r7
  unsigned int v31; // r1
  unsigned int v32; // r1
  unsigned int v33; // r1
  int v34; // r5
  int CurrentHeap_const; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r6
  int v40; // r0
  int v41; // r6
  int v42; // r6
  _DWORD *v43; // r0
  int v44; // r6
  _DWORD *v45; // r0
  int v46; // r6
  _DWORD *v47; // r0
  int v48; // r6
  int v49; // r0
  int v50; // r6
  int v51; // r0
  int v52; // r6
  int v53; // r0
  int v54; // r6
  int v55; // r0
  int v56; // r6
  int v57; // r0
  int v58; // r6
  int v59; // r6
  _DWORD *v60; // r0
  int v61; // r6
  _DWORD *v62; // r0
  int v63; // r6
  _DWORD *v64; // r0
  int v65; // r6
  int v66; // r0
  int v67; // r6
  int v68; // r0
  int v69; // r6
  int v70; // r0
  int v71; // r6
  int v72; // r0
  _DWORD *v73; // r4
  _DWORD *v74; // r11
  int v75; // t1
  _DWORD *v77; // [sp+Ch] [bp-ECh]
  _DWORD *v78; // [sp+10h] [bp-E8h]
  int v79; // [sp+14h] [bp-E4h]
  _DWORD *v80; // [sp+18h] [bp-E0h]
  _DWORD *v81; // [sp+1Ch] [bp-DCh]
  _DWORD v82[3]; // [sp+20h] [bp-D8h] BYREF
  _DWORD v83[3]; // [sp+2Ch] [bp-CCh] BYREF
  _BYTE v84[12]; // [sp+38h] [bp-C0h] BYREF
  _BYTE v85[12]; // [sp+44h] [bp-B4h] BYREF
  _BYTE v86[12]; // [sp+50h] [bp-A8h] BYREF
  _BYTE v87[12]; // [sp+5Ch] [bp-9Ch] BYREF
  _DWORD v88[3]; // [sp+68h] [bp-90h] BYREF
  _DWORD v89[3]; // [sp+74h] [bp-84h] BYREF
  _DWORD v90[3]; // [sp+80h] [bp-78h] BYREF
  _BYTE v91[12]; // [sp+8Ch] [bp-6Ch] BYREF
  _BYTE v92[12]; // [sp+98h] [bp-60h] BYREF
  _BYTE v93[12]; // [sp+A4h] [bp-54h] BYREF
  _BYTE v94[12]; // [sp+B0h] [bp-48h] BYREF
  _BYTE v95[12]; // [sp+BCh] [bp-3Ch] BYREF
  int (**v96)(); // [sp+C8h] [bp-30h] BYREF
  const char *v97; // [sp+CCh] [bp-2Ch]
  int v98; // [sp+D0h] [bp-28h]

  v4 = 0;
  v5 = dword_60C9CD58;
  v6 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) >= 0xDu )
    v6 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 48);
  a1[394] = v6;
  if ( FIELD_U32(v5, 16) >= 0xEu )
    v4 = *(_DWORD *)(FIELD_U32(v5, 24) + 52);
  a1[395] = v4;
  v7 = 0;
  v8 = 0;
  if ( FIELD_U32(v5, 16) >= 0xFu )
    v8 = *(_DWORD *)(FIELD_U32(v5, 24) + 56);
  a1[396] = v8;
  if ( FIELD_U32(v5, 16) >= 0x10u )
    v7 = *(_DWORD *)(FIELD_U32(v5, 24) + 60);
  a1[656] = v7;
  v9 = 0;
  v10 = 0;
  if ( FIELD_U32(v5, 16) >= 0x11u )
    v10 = *(_DWORD *)(FIELD_U32(v5, 24) + 64);
  a1[657] = v10;
  sub_60913D88((int)(a1 + 229), 24576, a2, 4, 0);
  sub_60913A6C(v95, a1 + 229, 0);
  sub_60913D88((int)(a1 + 665), 12, a2, 4, 0);
  v80 = a1 + 665;
  sub_60913A6C(v94, a1 + 665, 0);
  v79 = a2;
  sub_60913D88((int)(a1 + 2377), 12, a2, 4, 0);
  v77 = a1 + 2377;
  sub_60913A6C(v93, a1 + 2377, 0);
  sub_60913D88((int)(a1 + 658), 80, 0, 4, 0);
  v78 = a1 + 658;
  sub_60913A6C(v92, a1 + 658, 0);
  sub_60913D88((int)(a1 + 2370), 80, 0, 4, 0);
  v81 = a1 + 2370;
  sub_60913A6C(v91, a1 + 2370, 0);
  v11 = 3;
  do
  {
    v12 = dword_60CC73E8(a1[232]);
    *(_WORD *)(v12 + sub_60913FB4(a1 + 229) + v9) = v11 - 3;
    v13 = dword_60CC73E8(a1[232]);
    *(_WORD *)(v13 + sub_60913FB4(a1 + 229) + v9 + 2) = v11 - 1;
    v14 = dword_60CC73E8(a1[232]);
    *(_WORD *)(v14 + sub_60913FB4(a1 + 229) + v9 + 4) = v11 - 2;
    v15 = dword_60CC73E8(a1[232]);
    *(_WORD *)(v15 + sub_60913FB4(a1 + 229) + v9 + 6) = v11 - 2;
    v16 = dword_60CC73E8(a1[232]);
    *(_WORD *)(v16 + sub_60913FB4(a1 + 229) + v9 + 8) = v11 - 1;
    v17 = dword_60CC73E8(a1[232]);
    v18 = v17 + sub_60913FB4(a1 + 229) + v9;
    v9 += 12;
    FIELD_U16(v18, 10) = v11;
    v11 += 4;
  }
  while ( v9 != 24576 );
  v19 = dword_60CC73E8(a1[668]);
  *(_WORD *)(v19 + sub_60913FB4(v80)) = 0;
  v20 = dword_60CC73E8(a1[668]);
  *(_WORD *)(v20 + sub_60913FB4(v80) + 2) = 2;
  v21 = dword_60CC73E8(a1[668]);
  *(_WORD *)(v21 + sub_60913FB4(v80) + 4) = 1;
  v22 = dword_60CC73E8(a1[668]);
  *(_WORD *)(v22 + sub_60913FB4(v80) + 6) = 1;
  v23 = dword_60CC73E8(a1[668]);
  *(_WORD *)(v23 + sub_60913FB4(v80) + 8) = 2;
  v24 = dword_60CC73E8(a1[668]);
  *(_WORD *)(v24 + sub_60913FB4(v80) + 10) = 3;
  v25 = dword_60CC73E8(a1[2380]);
  *(_WORD *)(v25 + sub_60913FB4(v77)) = 0;
  v26 = dword_60CC73E8(a1[2380]);
  *(_WORD *)(v26 + sub_60913FB4(v77) + 2) = 2;
  v27 = dword_60CC73E8(a1[2380]);
  *(_WORD *)(v27 + sub_60913FB4(v77) + 4) = 1;
  v28 = dword_60CC73E8(a1[2380]);
  *(_WORD *)(v28 + sub_60913FB4(v77) + 6) = 1;
  v29 = dword_60CC73E8(a1[2380]);
  *(_WORD *)(v29 + sub_60913FB4(v77) + 8) = 2;
  v30 = dword_60CC73E8(a1[2380]);
  *(_WORD *)(v30 + sub_60913FB4(v77) + 10) = 3;
  sub_60913A6C(v90, a1 + 229, 0);
  v31 = a1[231];
  v96 = (int (**)())v90[0];
  v97 = (const char *)v90[1];
  v98 = v90[2];
  sub_60919D48(a1 + 550, &v96, 1, v31 >> 1);
  a1[552] = 4;
  sub_60913A6C(v89, v80, 0);
  v32 = a1[667];
  v96 = (int (**)())v89[0];
  v97 = (const char *)v89[1];
  v98 = v89[2];
  sub_60919D48(a1 + 824, &v96, 1, v32 >> 1);
  a1[826] = 4;
  sub_60913A6C(v88, v77, 0);
  v33 = a1[2379];
  v96 = (int (**)())v88[0];
  v97 = (const char *)v88[1];
  v98 = v88[2];
  sub_60919D48(a1 + 2536, &v96, 1, v33 >> 1);
  a1[2538] = 4;
  v34 = -224;
  if ( v79 )
  {
    do
    {
      sub_60913D88((int)&a1[v34 + 229], 163840, v79, 4, 0);
      sub_60913A6C(v87, &a1[v34 + 229], 0);
      sub_60913D88((int)&a1[v34 + 236], 163840, v79, 4, 0);
      sub_60913A6C(v87, &a1[v34 + 236], 0);
      sub_60913D88((int)&a1[v34 + 243], 163840, v79, 4, 0);
      sub_60913A6C(v87, &a1[v34 + 243], 0);
      sub_60913D88((int)&a1[v34 + 250], 163840, v79, 4, 0);
      sub_60913A6C(v87, &a1[v34 + 250], 0);
      v34 += 28;
    }
    while ( v34 * 4 );
  }
  else
  {
    do
    {
      CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
      sub_60913D88((int)&a1[v34 + 229], 163840, CurrentHeap_const, 4, 0);
      sub_60913A6C(v87, &a1[v34 + 229], 0);
      v36 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
      sub_60913D88((int)&a1[v34 + 236], 163840, v36, 4, 0);
      sub_60913A6C(v87, &a1[v34 + 236], 0);
      v37 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
      sub_60913D88((int)&a1[v34 + 243], 163840, v37, 4, 0);
      sub_60913A6C(v87, &a1[v34 + 243], 0);
      v38 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
      sub_60913D88((int)&a1[v34 + 250], 163840, v38, 4, 0);
      sub_60913A6C(v87, &a1[v34 + 250], 0);
      v34 += 28;
    }
    while ( v34 * 4 );
  }
  sub_60913A6C(v86, a1 + 5, 0);
  sub_609225B8(a1 + 398, v86, 20, 163840);
  sub_60922768(a1 + 398, 0, 34, 0, 0);
  sub_60922768(a1 + 398, 1, 22, 12, 0);
  sub_60913A6C(v85, v78, 0);
  sub_609225B8(a1 + 672, v85, 20, 80);
  sub_60922768(a1 + 672, 0, 34, 0, 0);
  sub_60922768(a1 + 672, 1, 22, 12, 0);
  sub_60913A6C(v84, v81, 0);
  sub_609225B8(a1 + 2384, v84, 20, 80);
  sub_60922768(a1 + 2384, 0, 34, 0, 0);
  sub_60922768(a1 + 2384, 1, 22, 12, 0);
  sub_60921D30(a1 + 466, 1, 0);
  sub_60921DF0(a1 + 466, 0, a1 + 398, 0);
  sub_60921DF0(a1 + 466, 3, a1 + 398, 1);
  sub_60921F90(a1 + 466);
  sub_60921D30(a1 + 740, 1, 0);
  sub_60921DF0(a1 + 740, 0, a1 + 672, 0);
  sub_60921DF0(a1 + 740, 3, a1 + 672, 1);
  sub_60921F90(a1 + 740);
  sub_60921D30(a1 + 2452, 1, 0);
  sub_60921DF0(a1 + 2452, 0, a1 + 2384, 0);
  sub_60921DF0(a1 + 2452, 3, a1 + 2384, 1);
  sub_60921F90(a1 + 2452);
  v39 = dword_60CC73E8(a1[661]);
  v40 = sub_60913FB4(v78);
  *(_DWORD *)(v39 + v40) = -1082130432;
  v41 = v39 + v40;
  FIELD_U32(v41, 4) = 1065353216;
  FIELD_U32(v41, 8) = -976748544;
  v42 = dword_60CC73E8(a1[661]);
  v43 = (_DWORD *)(v42 + sub_60913FB4(v78));
  v43[5] = 1065353216;
  v43[6] = 1065353216;
  v43[7] = -976748544;
  v44 = dword_60CC73E8(a1[661]);
  v45 = (_DWORD *)(v44 + sub_60913FB4(v78));
  v45[10] = -1082130432;
  v45[11] = -1082130432;
  v45[12] = -976748544;
  v46 = dword_60CC73E8(a1[661]);
  v47 = (_DWORD *)(v46 + sub_60913FB4(v78) + 60);
  *v47 = 1065353216;
  v47[1] = -1082130432;
  v47[2] = -976748544;
  v48 = dword_60CC73E8(a1[661]);
  v49 = v48 + sub_60913FB4(v78);
  FIELD_U32(v49, 12) = 0;
  FIELD_U32(v49, 16) = 1065353216;
  v50 = dword_60CC73E8(a1[661]);
  v51 = v50 + sub_60913FB4(v78);
  FIELD_U32(v51, 32) = 1065353216;
  FIELD_U32(v51, 36) = 1065353216;
  v52 = dword_60CC73E8(a1[661]);
  v53 = v52 + sub_60913FB4(v78);
  FIELD_U32(v53, 52) = 0;
  FIELD_U32(v53, 56) = 0;
  v54 = dword_60CC73E8(a1[661]);
  v55 = v54 + sub_60913FB4(v78);
  FIELD_U32(v55, 72) = 1065353216;
  FIELD_U32(v55, 76) = 0;
  sub_60913A6C(v83, v78, 0);
  v96 = (int (**)())v83[0];
  v97 = (const char *)v83[1];
  v98 = v83[2];
  sub_60922794(a1 + 672, &v96, a1[739]);
  sub_60922730(a1 + 672, 0, a1[739]);
  v56 = dword_60CC73E8(a1[2373]);
  v57 = sub_60913FB4(v81);
  *(_DWORD *)(v56 + v57) = -1090519040;
  v58 = v56 + v57;
  FIELD_U32(v58, 4) = 1056964608;
  FIELD_U32(v58, 8) = 0;
  v59 = dword_60CC73E8(a1[2373]);
  v60 = (_DWORD *)(v59 + sub_60913FB4(v81));
  v60[5] = 1056964608;
  v60[6] = 1056964608;
  v60[7] = 0;
  v61 = dword_60CC73E8(a1[2373]);
  v62 = (_DWORD *)(v61 + sub_60913FB4(v81));
  v62[10] = -1090519040;
  v62[11] = -1090519040;
  v62[12] = 0;
  v63 = dword_60CC73E8(a1[2373]);
  v64 = (_DWORD *)(v63 + sub_60913FB4(v81));
  v64[15] = 1056964608;
  v64[16] = -1090519040;
  v64[17] = 0;
  v65 = dword_60CC73E8(a1[2373]);
  v66 = v65 + sub_60913FB4(v81);
  FIELD_U32(v66, 12) = 0;
  FIELD_U32(v66, 16) = 1065353216;
  v67 = dword_60CC73E8(a1[2373]);
  v68 = v67 + sub_60913FB4(v81);
  FIELD_U32(v68, 32) = 1065353216;
  FIELD_U32(v68, 36) = 1065353216;
  v69 = dword_60CC73E8(a1[2373]);
  v70 = v69 + sub_60913FB4(v81);
  FIELD_U32(v70, 52) = 0;
  FIELD_U32(v70, 56) = 0;
  v71 = dword_60CC73E8(a1[2373]);
  v72 = v71 + sub_60913FB4(v81);
  FIELD_U32(v72, 72) = 1065353216;
  FIELD_U32(v72, 76) = 0;
  sub_60913A6C(v82, v81, 0);
  v73 = a1 + 2384;
  v96 = (int (**)())v82[0];
  v97 = (const char *)v82[1];
  v98 = v82[2];
  v75 = a1[2451];
  v74 = a1 + 2451;
  sub_60922794(v73, &v96, v75);
  sub_60922730(v73, 0, *v74);
  sub_60414DA0(v74 + 105, v79);
  sub_6072815C(v74 + 755, v79);
  sub_6072815C(v74 + 1843, v79);
  v96 = &sead__SafeStringBase__vtable;
  v97 = "BgRenderer";
  return nullsub_123(v74 - 2196, 1, &v96, 0);
}
