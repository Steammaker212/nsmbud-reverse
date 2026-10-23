/* sub_6042E1A4
 * address: 0x6042E1A4   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042E1A4(_DWORD *a1, int a2, int a3)
{
  int v6; // r7
  unsigned int v7; // r1
  _DWORD *v8; // r0
  int *v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r0
  int *v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r0
  int *v17; // r7
  int *v18; // r8
  int *v19; // r0
  int v20; // r2
  int v21; // r3
  int v22; // r3
  int v23; // r7
  int v24; // r2
  int v25; // r3
  int v26; // r0
  int *v27; // r7
  int *v28; // r0
  int v29; // r2
  int v30; // r3
  int v31; // r2
  int v32; // r3
  int v33; // r0
  unsigned int v34; // r2
  _DWORD *v35; // r0
  _DWORD *v36; // r1
  _DWORD *v37; // r1
  int v38; // r5
  int v39; // r0
  int v40; // r7
  int v41; // r8
  int v42; // r1
  int v43; // r0
  int v44; // r5
  int v45; // r0
  int v47; // [sp+8h] [bp-60h] BYREF
  int v48; // [sp+Ch] [bp-5Ch]
  int v49; // [sp+10h] [bp-58h]
  int v50; // [sp+14h] [bp-54h]
  int v51; // [sp+18h] [bp-50h] BYREF
  int v52; // [sp+1Ch] [bp-4Ch]
  int v53; // [sp+20h] [bp-48h]
  int v54; // [sp+24h] [bp-44h]
  int v55; // [sp+28h] [bp-40h] BYREF
  int v56; // [sp+2Ch] [bp-3Ch]
  int v57; // [sp+30h] [bp-38h]
  int v58; // [sp+34h] [bp-34h]
  int v59; // [sp+38h] [bp-30h] BYREF
  int v60; // [sp+3Ch] [bp-2Ch]
  int v61; // [sp+40h] [bp-28h]
  int v62; // [sp+44h] [bp-24h]

  v6 = sub_6083DD14(a3);
  v7 = *(_DWORD *)(*a1 + 608);
  v8 = *(_DWORD **)(*a1 + 612);
  v59 = v6;
  if ( v7 > 3 )
    v8 += 9;
  if ( *v8 != -1 )
    sub_6091B890(v8, a2, 1, &v59);
  switch ( v6 )
  {
    case 0:
      v13 = (int *)sub_6083DD38(a3, 0);
      v14 = *v13;
      v15 = v13[1];
      v16 = v13[2];
      v59 = v14;
      v60 = v15;
      v61 = v16;
      v62 = 0;
      goto LABEL_8;
    case 2:
      v17 = (int *)sub_6083DD38(a3, 0);
      v18 = (int *)sub_6083DD38(a3, 1);
      v19 = (int *)sub_6083DD38(a3, 2);
      v20 = v17[1];
      v21 = v17[2];
      v59 = *v17;
      v60 = v20;
      v61 = v21;
      v62 = 1065353216;
      v22 = v18[1];
      v23 = v18[2];
      v55 = *v18;
      v56 = v22;
      v57 = v23;
      v58 = 1065353216;
      v24 = *v19;
      v25 = v19[1];
      v26 = v19[2];
      v51 = v24;
      v52 = v25;
      v53 = v26;
      v54 = 1065353216;
      break;
    case 3:
    case 4:
      v9 = (int *)sub_6083DD38(a3, 0);
      v10 = *v9;
      v11 = v9[1];
      v12 = v9[2];
      v59 = v10;
      v60 = v11;
      v61 = v12;
      v62 = 1065353216;
LABEL_8:
      v58 = 0;
      v57 = 0;
      v56 = 0;
      v55 = 0;
      goto LABEL_11;
    case 5:
      v27 = (int *)sub_6083DD38(a3, 0);
      v28 = (int *)sub_6083DD38(a3, 1);
      v29 = v27[1];
      v30 = v27[2];
      v59 = *v27;
      v60 = v29;
      v61 = v30;
      v62 = 1065353216;
      v31 = *v28;
      v32 = v28[1];
      v33 = v28[2];
      v55 = v31;
      v56 = v32;
      v57 = v33;
      v58 = 1065353216;
LABEL_11:
      v54 = 0;
      v53 = 0;
      v52 = 0;
      v51 = 0;
      break;
    default:
      break;
  }
  v34 = *(_DWORD *)(*a1 + 608);
  v35 = *(_DWORD **)(*a1 + 612);
  v36 = v35;
  if ( v34 > 4 )
    v36 = v35 + 12;
  if ( *v36 != -1 )
  {
    sub_6091B890(v36, a2, 4, &v59);
    v34 = *(_DWORD *)(*a1 + 608);
    v35 = *(_DWORD **)(*a1 + 612);
  }
  v37 = v35;
  if ( v34 > 5 )
    v37 = v35 + 15;
  if ( *v37 != -1 )
  {
    sub_6091B890(v37, a2, 4, &v55);
    v34 = *(_DWORD *)(*a1 + 608);
    v35 = *(_DWORD **)(*a1 + 612);
  }
  if ( v34 > 6 )
    v35 += 18;
  if ( *v35 != -1 )
    sub_6091B890(v35, a2, 4, &v51);
  v38 = dword_60C9BAF4;
  if ( sub_6083DCFC(a3) == 1 )
  {
    v39 = sub_6083DD0C(a3);
    v40 = *a1;
    v41 = v39;
    sub_6091D95C(*a1);
    if ( FIELD_S32(v40, 632) >= 1 )
    {
      v42 = *(char *)(FIELD_U32(v40, 636) + 1);
      if ( v42 != -1 )
        sub_608362C8(a2 + 8, v42, 4, v41, v38 + 184);
    }
  }
  sub_6042E6BC(a1, a2, a3);
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v43 = sub_6083DD28(a3);
  sub_60835528(v43, &v47);
  v44 = FIELD_U32(a2, 192);
  v45 = sub_6083DD30(a3);
  return dword_60CC7874(v44, 4, 1, v45, v47, v48);
}
