/* sub_6041D74C
 * address: 0x6041D74C   size: 1460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041D74C(int a1, int a2, int *a3, int a4)
{
  int v8; // r10
  int v9; // r0
  int *v10; // r6
  int v11; // t1
  int v12; // r2
  int *v13; // r8
  int v14; // r0
  int v15; // r1
  int v16; // r1
  int v17; // r2
  int v18; // r0
  int v19; // r0
  int v20; // r1
  int *v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int *v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r0
  int *v34; // r0
  int v35; // r1
  int v36; // r2
  int v37; // r0
  int *v38; // r0
  int v39; // r1
  int v40; // r2
  int v41; // r0
  int *v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r0
  int v46; // r1
  int v47; // r2
  int v48; // r1
  int v49; // r2
  int v50; // r1
  int v51; // r2
  int v52; // r0
  int v53; // r2
  int v54; // r3
  int v55; // r1
  int v56; // r2
  int v57; // r2
  int v58; // r7
  int v59; // r3
  int v60; // r0
  int v62; // [sp+10h] [bp-40h] BYREF
  int v63; // [sp+14h] [bp-3Ch]
  int v64; // [sp+18h] [bp-38h]
  int v65; // [sp+1Ch] [bp-34h]
  _DWORD v66[12]; // [sp+20h] [bp-30h] BYREF

  v8 = a1 + 4520;
  sub_60921A90(a1 + 4520, a4);
  v9 = sub_6083DD14(a2);
  v11 = FIELD_U32(a1, 4528);
  v10 = (int *)(a1 + 4528);
  v13 = (int *)(a1 + 4536);
  v12 = FIELD_U32(a1, 4536);
  v62 = v9;
  sub_60921988(v8, v11 + v12 * a4, 0, &v62, 0, 1);
  v14 = FIELD_U32(a1, 4536);
  v15 = FIELD_U32(a1, 4528);
  v62 = 0;
  sub_60921988(v8, v15 + v14 * a4, 1, &v62, 0, 1);
  v16 = FIELD_U32(a1, 4536);
  v17 = FIELD_U32(a1, 4528);
  v18 = 0;
  if ( a4 == 3 )
    v18 = 2;
  if ( a4 == 1 )
    v18 = 1;
  v62 = v18;
  sub_60921988(v8, v17 + v16 * a4, 2, &v62, 0, 1);
  v19 = *v13;
  v20 = *v10;
  v62 = 0;
  sub_60921988(v8, v20 + v19 * a4, 3, &v62, 0, 1);
  v21 = (int *)sub_6083DD38(a2, 0);
  if ( a4 == 9 )
  {
    if ( v21 )
    {
      v22 = *v21;
      v23 = v21[1];
      v24 = v21[2];
      v62 = v22;
      v63 = v23;
      v64 = v24;
      v65 = 1065353216;
    }
    else
    {
      v65 = 0;
      v64 = 0;
      v63 = 0;
      v62 = 0;
    }
    v28 = FIELD_U32(a1, 84);
    v29 = FIELD_U32(a1, 88);
    v62 = FIELD_U32(a1, 80);
    v63 = v28;
    v64 = v29;
    v65 = 1065353216;
    sub_60921988(v8, *v10 + 9 * *v13, 4, &v62, 0, 1);
    v30 = (int *)sub_6083DD38(a2, 1);
    if ( v30 )
    {
      v31 = *v30;
      v32 = v30[1];
      v33 = v30[2];
      v62 = v31;
      v63 = v32;
      v64 = v33;
      v65 = 1065353216;
    }
    else
    {
      v65 = 0;
      v64 = 0;
      v63 = 0;
      v62 = 0;
    }
    sub_60921988(v8, *v10 + 9 * *v13, 4, &v62, 1, 1);
    v38 = (int *)sub_6083DD38(a2, 2);
    if ( v38 )
    {
      v39 = *v38;
      v40 = v38[1];
      v41 = v38[2];
      v62 = v39;
      v63 = v40;
      v64 = v41;
      v65 = 1065353216;
    }
    else
    {
      v65 = 0;
      v64 = 0;
      v63 = 0;
      v62 = 0;
    }
    sub_60921988(v8, *v10 + 9 * *v13, 4, &v62, 2, 1);
  }
  else
  {
    if ( v21 )
    {
      v25 = *v21;
      v26 = v21[1];
      v27 = v21[2];
      v62 = v25;
      v63 = v26;
      v64 = v27;
      v65 = 1065353216;
    }
    else
    {
      v65 = 0;
      v64 = 0;
      v63 = 0;
      v62 = 0;
    }
    sub_60921988(v8, *v10 + *v13 * a4, 4, &v62, 0, 1);
    v34 = (int *)sub_6083DD38(a2, 1);
    if ( v34 )
    {
      v35 = *v34;
      v36 = v34[1];
      v37 = v34[2];
      v62 = v35;
      v63 = v36;
      v64 = v37;
      v65 = 1065353216;
    }
    else
    {
      v65 = 0;
      v64 = 0;
      v63 = 0;
      v62 = 0;
    }
    sub_60921988(v8, *v10 + *v13 * a4, 4, &v62, 1, 1);
    v42 = (int *)sub_6083DD38(a2, 2);
    if ( v42 )
    {
      v43 = *v42;
      v44 = v42[1];
      v45 = v42[2];
      v62 = v43;
      v63 = v44;
      v64 = v45;
      v65 = 1065353216;
    }
    else
    {
      v65 = 0;
      v64 = 0;
      v63 = 0;
      v62 = 0;
    }
    sub_60921988(v8, *v10 + *v13 * a4, 4, &v62, 2, 1);
  }
  v62 = -1089221318;
  v63 = 1058262330;
  v64 = 1058262330;
  v65 = 0;
  sub_60921988(v8, *v10 + *v13 * a4, 5, &v62, 0, 1);
  v62 = 1065353216;
  v63 = 1065353216;
  v64 = 1065353216;
  v65 = 1065353216;
  sub_60921988(v8, *v10 + *v13 * a4, 6, &v62, 0, 1);
  v46 = a3[3];
  v47 = a3[4];
  v62 = a3[2];
  v63 = v46;
  v64 = v47;
  v65 = 1065353216;
  sub_60921988(v8, *v10 + *v13 * a4, 7, &v62, 0, 1);
  v48 = a3[6];
  v49 = a3[7];
  v62 = a3[5];
  v63 = v48;
  v64 = v49;
  v65 = 1065353216;
  sub_60921988(v8, *v10 + *v13 * a4, 8, &v62, 0, 1);
  v50 = a3[12];
  v51 = a3[13];
  v62 = a3[11];
  v63 = v50;
  v64 = v51;
  v65 = 1065353216;
  sub_60921988(v8, *v10 + *v13 * a4, 9, &v62, 0, 1);
  v52 = a3[1];
  v53 = a3[8];
  v54 = a3[9];
  v62 = *a3;
  v63 = v52;
  v64 = v53;
  v65 = v54;
  sub_60921988(v8, *v10 + *v13 * a4, 10, &v62, 0, 1);
  v55 = a3[14];
  v56 = a3[15];
  v62 = a3[10];
  v63 = v55;
  v64 = v56;
  v65 = 0;
  sub_60921988(v8, *v10 + *v13 * a4, 11, &v62, 0, 1);
  v57 = *v13;
  v58 = FIELD_U32(a1, 4548);
  v59 = FIELD_U32(a1, 4552);
  v60 = a4 + FIELD_U16(a1, 4560) * FIELD_U8(a1, 4557);
  v66[0] = FIELD_U32(a1, 4544);
  v66[1] = v58 + v60 * v57;
  v66[2] = v59;
  return sub_60913B04(v66, FIELD_U32(a1, 4532));
}
