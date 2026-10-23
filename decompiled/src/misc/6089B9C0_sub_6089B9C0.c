/* sub_6089B9C0
 * address: 0x6089B9C0   size: 1764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089B9C0(int *a1, int a2, int a3, _DWORD *a4, int a5, _DWORD *a6)
{
  int v10; // r0
  int v11; // r1
  int result; // r0
  int v13; // r0
  _DWORD *v14; // r3
  int v15; // r11
  unsigned int v16; // r7
  unsigned int v17; // r6
  int v18; // r5
  int v19; // r1
  int v20; // r2
  _DWORD *v21; // r2
  unsigned int v22; // r3
  unsigned int v23; // r7
  int v24; // r6
  int v25; // r1
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r1
  _DWORD *v30; // r2
  unsigned int v31; // r3
  unsigned int v32; // r7
  int v33; // r6
  int v34; // r0
  _DWORD *v35; // r2
  int v36; // r1
  unsigned int v37; // r3
  unsigned int v38; // r7
  int v39; // r6
  int v40; // r0
  _DWORD *v41; // r2
  unsigned int v42; // r3
  unsigned int v43; // r7
  int v44; // r6
  int v45; // r1
  int v46; // r0
  int v47; // r0
  _DWORD *v48; // r0
  int v49; // r1
  _DWORD *v50; // r2
  unsigned int v51; // r3
  unsigned int v52; // r7
  int v53; // r6
  int v54; // r0
  int v55; // r1
  _DWORD *v56; // r2
  unsigned int v57; // r3
  unsigned int v58; // r7
  int v59; // r6
  int v60; // r0
  int v61; // r1
  _DWORD *v62; // r2
  unsigned int v63; // r3
  unsigned int v64; // r7
  int v65; // r6
  int v66; // r0
  int v67; // r1
  _DWORD *v68; // r2
  unsigned int v69; // r3
  unsigned int v70; // r7
  int v71; // r6
  int v72; // r0
  int v73; // r1
  _DWORD *v74; // r2
  unsigned int v75; // r3
  unsigned int v76; // r7
  int v77; // r6
  int v78; // r0
  int v79; // r1
  _DWORD *v80; // r2
  unsigned int v81; // r3
  unsigned int v82; // r7
  int v83; // r6
  int v84; // r0
  int v85; // r7
  int v86; // r6
  int v87; // r5
  int v88; // r0
  int v89; // r3
  unsigned __int64 v90; // [sp+8h] [bp-38h] BYREF
  int v91; // [sp+10h] [bp-30h]
  int v92; // [sp+14h] [bp-2Ch]

  sub_60835A38(a2, (int *)(FIELD_U32(a3, 348) + 168));
  sub_60835AD4(a2, FIELD_U32(a3, 348) + 208);
  sub_60835934(a2, FIELD_U32(a3, 348) + 236);
  v10 = sub_6089AEBC((int)a1, a2, a3, a4, (int)a6);
  sub_6089B110(v10, a2, (_DWORD *)a3, a4, (int)a6);
  v11 = sub_60890DC8(*a1, a2, a3, a6[3], a5, a6);
  result = 0;
  if ( v11 == 1 )
  {
    v13 = FIELD_U32(a3, 40);
    v92 = 0;
    v91 = 0;
    v90 = 0;
    v14 = *(_DWORD **)(a3 + 1280);
    v15 = 16 * v13;
    v16 = v14[106];
    v17 = v14[107];
    v18 = v14[108];
    v19 = *(_DWORD *)(FIELD_U32(a3, 348) + 660);
    v20 = **(_DWORD **)(a3 + 156);
    v92 = v14[109];
    v91 = v18;
    v90 = __PAIR64__(v17, v16);
    v90 = v20 - v14[92] + __PAIR64__(v17, v16);
    sub_60835D28(a2, v19, &v90, 16, 16 * v13);
    v21 = *(_DWORD **)(a3 + 1280);
    v22 = v21[106];
    v23 = v21[107];
    v24 = v21[108];
    v25 = *(_DWORD *)(FIELD_U32(a3, 348) + 664);
    v26 = *(_DWORD *)(FIELD_U32(a3, 156) + 4);
    v92 = v21[109];
    v91 = v24;
    v90 = __PAIR64__(v23, v22);
    v27 = v26 - v21[92];
    LODWORD(v90) = v27 + v22;
    HIDWORD(v90) = v23 + __CFADD__(v27, v22) + (v27 >> 31);
    sub_60835D28(a2, v25, &v90, 16, v15);
    v28 = FIELD_U32(a3, 348);
    v29 = FIELD_U32(v28, 668);
    if ( v29 != -1 )
    {
      v30 = *(_DWORD **)(a3 + 1280);
      v31 = v30[106];
      v32 = v30[107];
      v33 = v30[108];
      v34 = *(_DWORD *)(FIELD_U32(a3, 156) + 8);
      v92 = v30[109];
      v91 = v33;
      v90 = __PAIR64__(v32, v31);
      v90 = v34 - v30[92] + __PAIR64__(v32, v31);
      sub_60835D28(a2, v29, &v90, 16, v15);
      v28 = FIELD_U32(a3, 348);
    }
    v35 = *(_DWORD **)(a3 + 1280);
    v36 = FIELD_U32(v28, 676);
    v37 = v35[106];
    v38 = v35[107];
    v39 = v35[108];
    v40 = *(_DWORD *)(FIELD_U32(a3, 156) + 16);
    v92 = v35[109];
    v91 = v39;
    v90 = __PAIR64__(v38, v37);
    v90 = v40 - v35[92] + __PAIR64__(v38, v37);
    sub_60835D28(a2, v36, &v90, 16, v15);
    v41 = *(_DWORD **)(a3 + 1280);
    v42 = v41[106];
    v43 = v41[107];
    v44 = v41[108];
    v45 = *(_DWORD *)(FIELD_U32(a3, 348) + 672);
    v46 = *(_DWORD *)(FIELD_U32(a3, 156) + 12);
    v92 = v41[109];
    v91 = v44;
    v90 = __PAIR64__(v43, v42);
    v47 = v46 - v41[92];
    LODWORD(v90) = v47 + v42;
    HIDWORD(v90) = v43 + __CFADD__(v47, v42) + (v47 >> 31);
    sub_60835D28(a2, v45, &v90, 16, v15);
    v48 = *(_DWORD **)(a3 + 348);
    v49 = v48[170];
    if ( v49 != -1 )
    {
      v50 = *(_DWORD **)(a3 + 1280);
      v51 = v50[106];
      v52 = v50[107];
      v53 = v50[108];
      v54 = *(_DWORD *)(FIELD_U32(a3, 156) + 20);
      v92 = v50[109];
      v91 = v53;
      v90 = __PAIR64__(v52, v51);
      v90 = v54 - v50[92] + __PAIR64__(v52, v51);
      sub_60835D28(a2, v49, &v90, 16, v15);
      v48 = *(_DWORD **)(a3 + 348);
    }
    v55 = v48[171];
    if ( v55 != -1 )
    {
      v56 = *(_DWORD **)(a3 + 1280);
      v57 = v56[106];
      v58 = v56[107];
      v59 = v56[108];
      v60 = *(_DWORD *)(FIELD_U32(a3, 156) + 24);
      v92 = v56[109];
      v91 = v59;
      v90 = __PAIR64__(v58, v57);
      v90 = v60 - v56[92] + __PAIR64__(v58, v57);
      sub_60835D28(a2, v55, &v90, 16, v15);
      v48 = *(_DWORD **)(a3 + 348);
    }
    v61 = v48[172];
    if ( v61 != -1 )
    {
      v62 = *(_DWORD **)(a3 + 1280);
      v63 = v62[106];
      v64 = v62[107];
      v65 = v62[108];
      v66 = *(_DWORD *)(FIELD_U32(a3, 156) + 28);
      v92 = v62[109];
      v91 = v65;
      v90 = __PAIR64__(v64, v63);
      v90 = v66 - v62[92] + __PAIR64__(v64, v63);
      sub_60835D28(a2, v61, &v90, 16, v15);
      v48 = *(_DWORD **)(a3 + 348);
    }
    v67 = v48[173];
    if ( v67 != -1 )
    {
      v68 = *(_DWORD **)(a3 + 1280);
      v69 = v68[106];
      v70 = v68[107];
      v71 = v68[108];
      v72 = *(_DWORD *)(FIELD_U32(a3, 156) + 32);
      v92 = v68[109];
      v91 = v71;
      v90 = __PAIR64__(v70, v69);
      v90 = v72 - v68[92] + __PAIR64__(v70, v69);
      sub_60835D28(a2, v67, &v90, 16, v15);
      v48 = *(_DWORD **)(a3 + 348);
    }
    v73 = v48[174];
    if ( v73 != -1 )
    {
      v74 = *(_DWORD **)(a3 + 1280);
      v75 = v74[106];
      v76 = v74[107];
      v77 = v74[108];
      v78 = *(_DWORD *)(FIELD_U32(a3, 156) + 36);
      v92 = v74[109];
      v91 = v77;
      v90 = __PAIR64__(v76, v75);
      v90 = v78 - v74[92] + __PAIR64__(v76, v75);
      sub_60835D28(a2, v73, &v90, 16, v15);
      v48 = *(_DWORD **)(a3 + 348);
    }
    v79 = v48[175];
    if ( v79 != -1 )
    {
      v80 = *(_DWORD **)(a3 + 1280);
      v81 = v80[106];
      v82 = v80[107];
      v83 = v80[108];
      v84 = *(_DWORD *)(FIELD_U32(a3, 156) + 40);
      v92 = v80[109];
      v91 = v83;
      v90 = __PAIR64__(v82, v81);
      v90 = v84 - v80[92] + __PAIR64__(v82, v81);
      sub_60835D28(a2, v79, &v90, 16, v15);
      v48 = *(_DWORD **)(a3 + 348);
    }
    v85 = v48[19];
    if ( v85 && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v85 + 24))(v48[19]) >= 1 )
    {
      v86 = 0;
      do
      {
        (*(void (__fastcall **)(int, unsigned __int64 *, int))(*(_DWORD *)v85 + 16))(v85, &v90, v86);
        v87 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v85 + 8))(v85, v86);
        v88 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v85 + 12))(v85, v86);
        sub_60835D28(a2, v86++, &v90, v87, v88);
      }
      while ( v86 < (*(int (__fastcall **)(int))(*(_DWORD *)v85 + 24))(v85) );
    }
    sub_60835BA8(a2, (_DWORD *)(FIELD_U32(a3, 348) + 608));
    if ( *(_BYTE *)(FIELD_U32(a3, 136) + 1873) )
    {
      sub_6089C0A4(a1, a2, a3, v89, v85, a6);
    }
    else if ( v85 )
    {
      (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v85 + 44))(
        v85,
        a2,
        FIELD_U32(a3, 40),
        FIELD_U8(a3, 8));
    }
    else
    {
      sub_608355CC(a2, 4, 4, 0, FIELD_U32(a3, 40), 0);
    }
    return 1;
  }
  return result;
}
