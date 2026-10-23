/* sub_602378EC
 * address: 0x602378EC   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602378EC(_DWORD *a1, int a2)
{
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  _DWORD *v19; // r4
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v24; // [sp+0h] [bp-80h] BYREF
  int v25; // [sp+4h] [bp-7Ch]
  int v26; // [sp+8h] [bp-78h]
  int v27; // [sp+Ch] [bp-74h]
  int v28; // [sp+10h] [bp-70h] BYREF
  int v29; // [sp+14h] [bp-6Ch]
  int v30; // [sp+18h] [bp-68h]
  int v31; // [sp+1Ch] [bp-64h]
  int v32; // [sp+20h] [bp-60h] BYREF
  int v33; // [sp+24h] [bp-5Ch]
  int v34; // [sp+28h] [bp-58h]
  int v35; // [sp+2Ch] [bp-54h]
  int v36; // [sp+30h] [bp-50h] BYREF
  int v37; // [sp+34h] [bp-4Ch]
  int v38; // [sp+38h] [bp-48h]
  int v39; // [sp+3Ch] [bp-44h]
  int v40; // [sp+40h] [bp-40h] BYREF
  int v41; // [sp+44h] [bp-3Ch]
  int v42; // [sp+48h] [bp-38h]
  int v43; // [sp+4Ch] [bp-34h]
  int v44; // [sp+50h] [bp-30h] BYREF
  int v45; // [sp+54h] [bp-2Ch]
  int v46; // [sp+58h] [bp-28h]
  int v47; // [sp+5Ch] [bp-24h]

  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 1065353216;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 1065353216;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 1065353216;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 1065353216;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 1065353216;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 1065353216;
  sub_60426858(dword_60C9BBD4, &v24, 0);
  if ( !sub_6090B200(a1 + 4, &v24) )
  {
    v4 = v25;
    v5 = v26;
    v6 = v27;
    a2 = 1;
    a1[4] = v24;
    a1[5] = v4;
    a1[6] = v5;
    a1[7] = v6;
  }
  sub_60426858(dword_60C9BBD4, &v28, 1);
  if ( !sub_6090B200(a1 + 8, &v28) )
  {
    v7 = v29;
    v8 = v30;
    v9 = v31;
    a2 = 1;
    a1[8] = v28;
    a1[9] = v7;
    a1[10] = v8;
    a1[11] = v9;
  }
  sub_60426858(dword_60C9BBD4, &v32, 2);
  if ( !sub_6090B200(a1 + 12, &v32) )
  {
    v10 = v33;
    v11 = v34;
    v12 = v35;
    a2 = 1;
    a1[12] = v32;
    a1[13] = v10;
    a1[14] = v11;
    a1[15] = v12;
  }
  sub_60426858(dword_60C9BBD4, &v36, 3);
  if ( !sub_6090B200(a1 + 16, &v36) )
  {
    v13 = v37;
    v14 = v38;
    v15 = v39;
    a2 = 1;
    a1[16] = v36;
    a1[17] = v13;
    a1[18] = v14;
    a1[19] = v15;
  }
  sub_60426858(dword_60C9BBD4, &v40, 4);
  if ( !sub_6090B200(a1 + 20, &v40) )
  {
    v16 = v41;
    v17 = v42;
    v18 = v43;
    a2 = 1;
    a1[20] = v40;
    a1[21] = v16;
    a1[22] = v17;
    a1[23] = v18;
  }
  sub_60426858(dword_60C9BBD4, &v44, 5);
  v19 = a1 + 24;
  if ( !sub_6090B200(v19, &v44) )
  {
    v20 = v45;
    v21 = v46;
    v22 = v47;
    a2 = 1;
    *v19 = v44;
    v19[1] = v20;
    v19[2] = v21;
    v19[3] = v22;
  }
  return a2;
}
