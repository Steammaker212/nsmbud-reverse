/* sub_6016A300
 * address: 0x6016A300   size: 1912   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016A300(_DWORD *a1)
{
  _DWORD *v2; // r1
  _DWORD *v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r1
  _DWORD *v11; // r0
  int v12; // r0
  int v13; // r1
  _DWORD *v14; // r0
  int v15; // r0
  int v16; // r1
  _DWORD *v17; // r1
  _DWORD *v18; // r0
  int v19; // r0
  int v20; // r1
  _DWORD *v21; // r0
  int v22; // r0
  int v23; // r1
  _DWORD *v24; // r0
  int v25; // r0
  int v26; // r1
  _DWORD *v27; // r0
  int v28; // r0
  int v29; // r1
  _DWORD *v30; // r0
  int v31; // r0
  int v32; // r1
  _DWORD *v33; // r0
  int v34; // r0
  int v35; // r1
  _DWORD *v36; // r0
  int v37; // r0
  int v38; // r1
  int result; // r0
  _DWORD *v40; // r0
  int v41; // r1
  _DWORD v42[2]; // [sp+0h] [bp-3C8h] BYREF
  int v43; // [sp+8h] [bp-3C0h] BYREF
  const char *v44; // [sp+Ch] [bp-3BCh]
  int *v45; // [sp+10h] [bp-3B8h]
  int v46; // [sp+14h] [bp-3B4h] BYREF
  int *v47; // [sp+18h] [bp-3B0h]
  int *v48; // [sp+1Ch] [bp-3ACh]
  int v49; // [sp+60h] [bp-368h] BYREF
  int *v50; // [sp+64h] [bp-364h]
  int *v51; // [sp+68h] [bp-360h]
  int v52; // [sp+ACh] [bp-31Ch] BYREF
  int *v53; // [sp+B0h] [bp-318h]
  int *v54; // [sp+B4h] [bp-314h]
  int v55; // [sp+F8h] [bp-2D0h] BYREF
  int *v56; // [sp+FCh] [bp-2CCh]
  int *v57; // [sp+100h] [bp-2C8h]
  int v58; // [sp+144h] [bp-284h] BYREF
  int *v59; // [sp+148h] [bp-280h]
  int (***v60)(); // [sp+14Ch] [bp-27Ch]
  int (**v61)(); // [sp+190h] [bp-238h] BYREF
  int *v62; // [sp+194h] [bp-234h]
  int (***v63)(); // [sp+198h] [bp-230h]
  int (**v64)(); // [sp+1DCh] [bp-1ECh] BYREF
  int (***v65)(); // [sp+1E0h] [bp-1E8h]
  int (***v66)(); // [sp+1E4h] [bp-1E4h]
  int (**v67)(); // [sp+228h] [bp-1A0h] BYREF
  int (***v68)(); // [sp+22Ch] [bp-19Ch]
  int (***v69)(); // [sp+230h] [bp-198h]
  int (**v70)(); // [sp+274h] [bp-154h] BYREF
  int (***v71)(); // [sp+278h] [bp-150h]
  int (***v72)(); // [sp+27Ch] [bp-14Ch]
  int (**v73)(); // [sp+2C0h] [bp-108h] BYREF
  int (***v74)(); // [sp+2C4h] [bp-104h]
  int v75; // [sp+2C8h] [bp-100h]
  _DWORD v76[19]; // [sp+30Ch] [bp-BCh] BYREF
  _BYTE v77[112]; // [sp+358h] [bp-70h] BYREF

  nn__os__GetSystemTick((nn__os *)v77);
  sub_6016ACE0((int)v77, "Model/CS_W1%s.szs", ".Nin_NX_NVN");
  v76[0] = 0;
  v76[1] = &v73;
  v76[2] = v77;
  v73 = &sead__SafeStringBase__vtable;
  v74 = (int (***)())"CS_W1";
  if ( a1[4] < a1[5] )
  {
    v2 = (_DWORD *)a1[7];
    v3 = 0;
    if ( v2 )
    {
      a1[7] = *v2;
      v3 = v2;
    }
    v4 = sub_6016B268(v3, v76);
    v5 = a1[4];
    if ( v5 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v5) = v4;
      ++a1[4];
    }
  }
  v6 = sub_6016ACE0((int)v76, "Model/CS_W2a%s.szs", ".Nin_NX_NVN");
  v73 = 0;
  v74 = &v70;
  v75 = v6;
  v70 = &sead__SafeStringBase__vtable;
  v71 = (int (***)())"CS_W2a";
  if ( a1[4] < a1[5] )
  {
    v7 = (_DWORD *)a1[7];
    if ( v7 )
      a1[7] = *v7;
    else
      v7 = 0;
    v8 = sub_6016B268(v7, &v73);
    v9 = a1[4];
    if ( v9 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v9) = v8;
      ++a1[4];
    }
  }
  sub_6016ACE0((int)&v73, "Model/CS_W3%s.szs", ".Nin_NX_NVN");
  v70 = 0;
  v71 = &v67;
  v72 = &v73;
  v67 = &sead__SafeStringBase__vtable;
  v68 = (int (***)())"CS_W3";
  if ( a1[4] < a1[5] )
  {
    v10 = (_DWORD *)a1[7];
    v11 = 0;
    if ( v10 )
    {
      a1[7] = *v10;
      v11 = v10;
    }
    v12 = sub_6016B268(v11, &v70);
    v13 = a1[4];
    if ( v13 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v13) = v12;
      ++a1[4];
    }
  }
  sub_6016ACE0((int)&v70, "Model/CS_W4%s.szs", ".Nin_NX_NVN");
  v67 = 0;
  v68 = &v64;
  v69 = &v70;
  v64 = &sead__SafeStringBase__vtable;
  v65 = (int (***)())"CS_W4";
  if ( a1[4] < a1[5] )
  {
    v14 = (_DWORD *)a1[7];
    if ( v14 )
      a1[7] = *v14;
    else
      v14 = 0;
    v15 = sub_6016B268(v14, &v67);
    v16 = a1[4];
    if ( v16 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v16) = v15;
      ++a1[4];
    }
  }
  sub_6016ACE0((int)&v67, "Model/CS_W5a%s.szs", ".Nin_NX_NVN");
  v64 = 0;
  v65 = &v61;
  v66 = &v67;
  v61 = &sead__SafeStringBase__vtable;
  v62 = (int *)"CS_W5a";
  if ( a1[4] < a1[5] )
  {
    v17 = (_DWORD *)a1[7];
    v18 = 0;
    if ( v17 )
    {
      a1[7] = *v17;
      v18 = v17;
    }
    v19 = sub_6016B268(v18, &v64);
    v20 = a1[4];
    if ( v20 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v20) = v19;
      ++a1[4];
    }
  }
  sub_6016ACE0((int)&v64, "Model/CS_W5b%s.szs", ".Nin_NX_NVN");
  v61 = 0;
  v62 = &v58;
  v63 = &v64;
  v58 = (int)&sead__SafeStringBase__vtable;
  v59 = (int *)"CS_W5b";
  if ( a1[4] < a1[5] )
  {
    v21 = (_DWORD *)a1[7];
    if ( v21 )
      a1[7] = *v21;
    else
      v21 = 0;
    v22 = sub_6016B268(v21, &v61);
    v23 = a1[4];
    if ( v23 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v23) = v22;
      ++a1[4];
    }
  }
  sub_6016ACE0((int)&v61, "Model/CS_W6a%s.szs", ".Nin_NX_NVN");
  v58 = 1;
  v59 = &v55;
  v60 = &v61;
  v55 = (int)&sead__SafeStringBase__vtable;
  v56 = (int *)"CS_W6a";
  if ( a1[4] < a1[5] )
  {
    v24 = (_DWORD *)a1[7];
    if ( v24 )
      a1[7] = *v24;
    else
      v24 = 0;
    v25 = sub_6016B268(v24, &v58);
    v26 = a1[4];
    if ( v26 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v26) = v25;
      ++a1[4];
    }
  }
  sub_6016ACE0((int)&v58, "Model/CS_W7%s.szs", ".Nin_NX_NVN");
  v55 = 1;
  v56 = &v52;
  v57 = &v58;
  v52 = (int)&sead__SafeStringBase__vtable;
  v53 = (int *)"CS_W7";
  if ( a1[4] < a1[5] )
  {
    v27 = (_DWORD *)a1[7];
    if ( v27 )
      a1[7] = *v27;
    else
      v27 = 0;
    v28 = sub_6016B268(v27, &v55);
    v29 = a1[4];
    if ( v29 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v29) = v28;
      ++a1[4];
    }
  }
  sub_6016ACE0((int)&v55, "Model/CS_W8a%s.szs", ".Nin_NX_NVN");
  v52 = 1;
  v53 = &v49;
  v54 = &v55;
  v49 = (int)&sead__SafeStringBase__vtable;
  v50 = (int *)"CS_W8a";
  if ( a1[4] < a1[5] )
  {
    v30 = (_DWORD *)a1[7];
    if ( v30 )
      a1[7] = *v30;
    else
      v30 = 0;
    v31 = sub_6016B268(v30, &v52);
    v32 = a1[4];
    if ( v32 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v32) = v31;
      ++a1[4];
    }
  }
  sub_6016ACE0((int)&v52, "Model/CS_W8b%s.szs", ".Nin_NX_NVN");
  v49 = 1;
  v50 = &v46;
  v51 = &v52;
  v46 = (int)&sead__SafeStringBase__vtable;
  v47 = (int *)"CS_W8b";
  if ( a1[4] < a1[5] )
  {
    v33 = (_DWORD *)a1[7];
    if ( v33 )
      a1[7] = *v33;
    else
      v33 = 0;
    v34 = sub_6016B268(v33, &v49);
    v35 = a1[4];
    if ( v35 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v35) = v34;
      ++a1[4];
    }
  }
  sub_6016ACE0((int)&v49, "Model/CS_W9a%s.szs", ".Nin_NX_NVN");
  v46 = 1;
  v43 = (int)&sead__SafeStringBase__vtable;
  v44 = "CS_W9a";
  v47 = &v43;
  v48 = &v49;
  if ( a1[4] < a1[5] )
  {
    v36 = (_DWORD *)a1[7];
    if ( v36 )
      a1[7] = *v36;
    else
      v36 = 0;
    v37 = sub_6016B268(v36, &v46);
    v38 = a1[4];
    if ( v38 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v38) = v37;
      ++a1[4];
    }
  }
  sub_6016ACE0((int)&v46, "Model/CS_W9b%s.szs", ".Nin_NX_NVN");
  v42[0] = &sead__SafeStringBase__vtable;
  v42[1] = "CS_W9b";
  v43 = 1;
  v44 = (const char *)v42;
  v45 = &v46;
  result = a1[4];
  if ( result < a1[5] )
  {
    v40 = (_DWORD *)a1[7];
    if ( v40 )
      a1[7] = *v40;
    else
      v40 = 0;
    result = sub_6016B268(v40, &v43);
    v41 = a1[4];
    if ( v41 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v41) = result;
      result = a1[4] + 1;
      a1[4] = result;
    }
  }
  return result;
}
