/* sub_6072BBD8
 * address: 0x6072BBD8   size: 1600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6072BBD8(_DWORD *a1, float a2, float a3, float a4, float a5)
{
  int v10; // r0
  int v11; // r5
  float v12; // s0
  _DWORD *v13; // r6
  int v14; // r2
  _DWORD *v15; // r5
  _DWORD *v16; // r3
  _DWORD *v17; // r5
  int v18; // r3
  _DWORD *v19; // r0
  _DWORD *v20; // r7
  _DWORD *v21; // r5
  int v22; // r2
  _DWORD *v23; // r4
  _DWORD *v24; // r3
  int v25; // r1
  _DWORD *v26; // r5
  _DWORD *v27; // r7
  _DWORD **v28; // r4
  _DWORD *v29; // r9
  float v30; // s20
  float v31; // s24
  int v32; // r11
  _DWORD *v33; // r0
  unsigned int U32; // r0
  _DWORD *v35; // r6
  _DWORD **v36; // r8
  _DWORD *v37; // r7
  int v38; // r1
  int v39; // r9
  _DWORD *v40; // r0
  unsigned int v41; // r0
  int v42; // r9
  _DWORD *v43; // r5
  _DWORD **v44; // r10
  _DWORD *v45; // r6
  _DWORD *v46; // r0
  unsigned int v47; // r0
  _DWORD *v48; // r1
  int v49; // r0
  int v50; // r5
  int v51; // r0
  int v52; // r6
  _DWORD *v53; // r0
  int v54; // r1
  signed int result; // r0
  _DWORD *v56; // r0
  int v57; // r1
  _DWORD *v58; // [sp+4h] [bp-5Ch]
  _DWORD *v59; // [sp+8h] [bp-58h]
  signed int v60; // [sp+Ch] [bp-54h]

  v10 = sub_6072B2F8((int)a1);
  v11 = sub_6072EC48(v10);
  v60 = v11 + (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31) - 1;
  v12 = (float)v60;
  v13 = a1 + 1591;
  if ( (int)a1[1591] >= 1 )
  {
    v14 = 0;
    v15 = (_DWORD *)a1[1594];
    do
    {
      v16 = *(_DWORD **)(a1[1593] + 4 * v14++);
      *v16 = v15;
      a1[1594] = v16;
      v15 = v16;
    }
    while ( v14 < *v13 );
  }
  *v13 = 0;
  v17 = a1 + 1596;
  if ( (int)a1[1596] >= 1 )
  {
    v18 = 0;
    v19 = (_DWORD *)a1[1599];
    do
    {
      v20 = *(_DWORD **)(a1[1598] + 4 * v18++);
      *v20 = v19;
      a1[1599] = v20;
      v19 = v20;
    }
    while ( v18 < *v17 );
  }
  *v17 = 0;
  v21 = a1 + 1601;
  if ( (int)a1[1601] >= 1 )
  {
    v22 = 0;
    v23 = (_DWORD *)a1[1604];
    do
    {
      v24 = *(_DWORD **)(a1[1603] + 4 * v22++);
      *v24 = v23;
      a1[1604] = v24;
      v23 = v24;
    }
    while ( v22 < *v21 );
  }
  v58 = a1 + 1601;
  *v21 = 0;
  v59 = a1;
  if ( v60 < 1 )
  {
    sub_608DEBEC(a1 + 1591, dword_60C9CF0C + 1340);
    v26 = a1 + 1596;
  }
  else
  {
    v25 = 0;
    v26 = a1 + 1596;
    v27 = a1 + 1593;
    v28 = (_DWORD **)(a1 + 1594);
    v29 = a1 + 1592;
    v30 = (float)(a5 - a4) / v12;
    v31 = (float)(a3 - a2) / v12;
    do
    {
      v32 = v25;
      if ( *v13 < *v29 )
      {
        v33 = *v28;
        if ( *v28 )
          *v28 = (_DWORD *)*v33;
        else
          v33 = 0;
        *v33 = 0;
        if ( *v13 < *v29 )
          *(_DWORD *)(*v27 + 4 * (*v13)++) = v33;
      }
      U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v25 = v32 + 1;
      **(float **)(*v27 + 4 * v32) = *(float *)&dword_60AF1F60[a1[20]]
                                   * (float)((float)(a2 + (float)(v31 * (float)v32))
                                           + (float)((float)((float)(a2 + (float)(v31 * (float)(v32 + 1)))
                                                           - (float)(a2 + (float)(v31 * (float)v32)))
                                                   * (float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0)));
    }
    while ( v60 != v32 + 1 );
    sub_608DEBEC(v13, dword_60C9CF0C + 1340);
    v35 = a1 + 1598;
    v36 = (_DWORD **)(a1 + 1599);
    v37 = v59 + 1597;
    v38 = 0;
    do
    {
      v39 = v38;
      if ( *v26 < *v37 )
      {
        v40 = *v36;
        if ( *v36 )
          *v36 = (_DWORD *)*v40;
        else
          v40 = 0;
        *v40 = 0;
        if ( *v26 < *v37 )
          *(_DWORD *)(*v35 + 4 * (*v26)++) = v40;
      }
      v41 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v38 = v39 + 1;
      **(float **)(*v35 + 4 * v39) = (float)(a4 + (float)(v30 * (float)v39))
                                   + (float)((float)((float)(a4 + (float)(v30 * (float)(v39 + 1)))
                                                   - (float)(a4 + (float)(v30 * (float)v39)))
                                           * (float)(COERCE_FLOAT((v41 >> 9) | 0x3F800000) + -1.0));
    }
    while ( v60 != v39 + 1 );
  }
  sub_608DEBEC(v26, dword_60C9CF0C + 1340);
  if ( v60 >= 1 )
  {
    v42 = 0;
    v43 = v59 + 1603;
    v44 = (_DWORD **)(v59 + 1604);
    v45 = v59 + 1602;
    do
    {
      if ( *v58 < *v45 )
      {
        v46 = *v44;
        if ( *v44 )
          *v44 = (_DWORD *)*v46;
        else
          v46 = 0;
        *v46 = 0;
        if ( *v58 < *v45 )
          *(_DWORD *)(*v43 + 4 * (*v58)++) = v46;
      }
      v47 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v48 = *(_DWORD **)(*v43 + 4 * v42++);
      *v48 = (15 * (unsigned __int64)v47) >> 32;
    }
    while ( v60 != v42 );
  }
  v49 = sub_6072B2F8((int)v59);
  v50 = v60;
  v51 = FIELD_U16(v49, 6104) - FIELD_U16(v49, 6106);
  if ( v51 >= -3 )
  {
    if ( v51 >= 0 )
    {
      v50 = 1;
      if ( v51 <= 1 )
      {
        v50 = v60 / 2;
        if ( v60 / 2 < 1 )
          goto LABEL_49;
      }
      goto LABEL_45;
    }
    v50 = 2 * v60 / 3;
  }
  if ( v50 < 1 )
    goto LABEL_49;
LABEL_45:
  v52 = 0;
  do
  {
    v53 = sub_6072B5B8((int)v59, 1, v52);
    if ( v53 )
    {
      v54 = **(_DWORD **)(v59[1598] + 4 * v52);
      v53[30] = **(_DWORD **)(v59[1593] + 4 * v52);
      v53[31] = v54;
      v53[32] = 0;
      v53[1529] = **(_DWORD **)(v59[1603] + 4 * v52);
    }
    ++v52;
  }
  while ( v50 != v52 );
LABEL_49:
  result = v60;
  if ( v50 < v60 )
  {
    do
    {
      v56 = sub_6072B5B8((int)v59, 0, v50);
      if ( v56 )
      {
        v57 = **(_DWORD **)(v59[1598] + 4 * v50);
        v56[30] = **(_DWORD **)(v59[1593] + 4 * v50);
        v56[31] = v57;
        v56[32] = 0;
        v56[1529] = **(_DWORD **)(v59[1603] + 4 * v50);
      }
      result = v60;
      ++v50;
    }
    while ( v60 != v50 );
  }
  return result;
}
