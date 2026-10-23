/* MultiFilterReduce_ref
 * address: 0x609A80F8   size: 1180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MultiFilterReduce_ref(int a1, int a2, int a3, int a4)
{
  int v7; // r6
  unsigned int v8; // r4
  int v9; // r0
  int v10; // r10
  int v11; // r8
  unsigned int v12; // r1
  int v13; // r11
  _WORD *v14; // r4
  int v15; // r3
  int v16; // r5
  int v17; // r6
  int v18; // r7
  int v19; // r3
  int v20; // r5
  int v21; // r6
  int v22; // r7
  int v23; // r3
  int v24; // r5
  int v25; // r6
  int v26; // r7
  __int16 v27; // r2
  unsigned int *v28; // r0
  unsigned int v29; // r1
  unsigned int v30; // r1
  unsigned int v31; // r1
  int v32; // r4
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  int v35; // r0
  _DWORD *v36; // r0
  int v37; // r8
  unsigned int v38; // r4
  unsigned int v39; // r2
  _DWORD *v40; // r0
  _DWORD *v41; // r1
  _DWORD *v42; // r1
  int v43; // r4
  int v44; // r5
  int v45; // r8
  int v46; // r11
  __int64 v47; // r0
  int result; // r0
  int v49; // r0
  unsigned int *v50; // r0
  unsigned int v51; // r1
  int v52; // [sp+18h] [bp-70h]
  int v54; // [sp+24h] [bp-64h]
  int v55; // [sp+28h] [bp-60h]
  int v56; // [sp+2Ch] [bp-5Ch]
  int v57; // [sp+30h] [bp-58h]
  int v58; // [sp+34h] [bp-54h]
  int v59; // [sp+38h] [bp-50h]
  float v60; // [sp+3Ch] [bp-4Ch] BYREF
  float v61; // [sp+40h] [bp-48h]
  int v62; // [sp+44h] [bp-44h]
  int v63; // [sp+48h] [bp-40h]
  _DWORD v64[15]; // [sp+4Ch] [bp-3Ch] BYREF

  v7 = FIELD_U32(a3, 4);
  v54 = v7;
  if ( !v7 )
    v7 = *(_DWORD *)a3;
  v8 = FIELD_U16(v7, 24);
  v9 = sub_609200A0(v7);
  v57 = v7;
  v10 = 1;
  v11 = 1;
  v12 = FIELD_U16(v7, 26);
  if ( v9 > (int)v12 )
    v12 = v9;
  v64[0] = &sead__SafeStringBase__vtable;
  if ( (int)(v12 >> a4) > 1 )
    v10 = v12 >> a4;
  v64[1] = "MultiFilterReduce";
  if ( v8 <= 1 )
    v8 = 1;
  v52 = a4;
  if ( (int)(v8 >> a4) > 1 )
    v11 = v8 >> a4;
  v58 = a2;
  v13 = sub_609ACEBC(a3 + 776, a2, v64, FIELD_U32(a3, 8), v11, v10);
  FIELD_U32(a3, 4) = v13;
  v14 = (_WORD *)(a3 + 700);
  v55 = FIELD_U16(a3, 700);
  v59 = a3 + 424;
  v56 = FIELD_U8(a3, 702);
  v15 = FIELD_U32(v13, 4);
  v16 = FIELD_U32(v13, 8);
  v17 = FIELD_U32(v13, 12);
  v18 = FIELD_U32(v13, 16);
  FIELD_U32(a3, 424) = *(_DWORD *)v13;
  FIELD_U32(a3, 428) = v15;
  FIELD_U32(a3, 432) = v16;
  FIELD_U32(a3, 436) = v17;
  FIELD_U32(a3, 440) = v18;
  v19 = FIELD_U32(v13, 24);
  v20 = FIELD_U32(v13, 28);
  v21 = FIELD_U32(v13, 32);
  v22 = FIELD_U32(v13, 36);
  FIELD_U32(a3, 444) = FIELD_U32(v13, 20);
  FIELD_U32(a3, 448) = v19;
  FIELD_U32(a3, 452) = v20;
  FIELD_U32(a3, 456) = v21;
  FIELD_U32(a3, 460) = v22;
  v23 = FIELD_U32(v13, 44);
  v24 = FIELD_U32(v13, 48);
  v25 = FIELD_U32(v13, 52);
  v26 = FIELD_U32(v13, 56);
  FIELD_U32(a3, 464) = FIELD_U32(v13, 40);
  FIELD_U32(a3, 468) = v23;
  FIELD_U32(a3, 472) = v24;
  FIELD_U32(a3, 476) = v25;
  FIELD_U32(a3, 480) = v26;
  v27 = FIELD_U16(v13, 60);
  FIELD_U8(a3, 486) = FIELD_U8(v13, 62);
  FIELD_U16(a3, 484) = v27;
  sub_60917754(a3 + 488, v13 + 64);
  FIELD_U32(a3, 688) = FIELD_U32(v13, 264);
  v28 = (unsigned int *)(a3 + 696);
  do
    v29 = __ldrex(v28);
  while ( __strex(v29 | 4, v28) );
  if ( (unsigned __int16)*v14 != v55 )
  {
    do
      v30 = __ldrex(v28);
    while ( __strex(v30 | 2, v28) );
    *v14 = v55;
  }
  if ( FIELD_U8(a3, 702) != v56 )
  {
    do
      v31 = __ldrex(v28);
    while ( __strex(v31 | 1, v28) );
    FIELD_U8(a3, 702) = v56;
  }
  sub_6091AC94(v59);
  FIELD_U32(a3, 372) = 0;
  FIELD_U32(a3, 376) = 0;
  FIELD_F32(a3, 380) = (float)v11;
  FIELD_F32(a3, 384) = (float)v10;
  FIELD_F32(a3, 364) = (float)v11;
  FIELD_F32(a3, 368) = (float)v10;
  sub_60920EC8(a3 + 16, (int *)v57);
  v32 = dword_60CD09F8;
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  v64[0] = CurrentCoreNumber;
  if ( (*(_DWORD *)(v32 + 608 * CurrentCoreNumber + 624) & 1) == 0 )
  {
    sub_6090B260(a3 + 360);
    v35 = ((int (__fastcall *)(_DWORD *, int))loc_6090E438)(v64, a3 + 360);
    sub_6090E560(v35, v58, (float *)(a3 + 360));
    v36 = *(_DWORD **)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 368) + 4);
    if ( v52 <= 0 )
    {
      v37 = v36[3];
    }
    else
    {
      v37 = v36[5];
      if ( v36[4] > (unsigned int)(v52 - 1) )
        v37 += 936 * (v52 - 1);
    }
    v38 = 1;
    sub_6091DD8C(v37, v58);
    v39 = FIELD_U32(v37, 608);
    v40 = *(_DWORD **)(v37 + 612);
    v60 = FIELD_F32(a1, 160);
    v41 = v40;
    if ( v39 > 2 )
      v41 = v40 + 6;
    if ( *v41 != -1 )
    {
      sub_6091B890(v41, v58, 1, (int)&v60);
      v39 = FIELD_U32(v37, 608);
      v40 = *(_DWORD **)(v37 + 612);
    }
    if ( FIELD_U16(v57, 24) > 1u )
      v38 = FIELD_U16(v57, 24);
    v42 = v40;
    if ( v39 > 1 )
      v42 = v40 + 3;
    v60 = 1.0 / (float)v38;
    v61 = v60;
    if ( *v42 != -1 )
    {
      sub_6091B890(v42, v58, 2, (int)&v60);
      v40 = *(_DWORD **)(v37 + 612);
    }
    v60 = 0.0;
    v61 = 0.0;
    v62 = 1065353216;
    v63 = 1065353216;
    if ( *v40 != -1 )
      sub_6091B890(v40, v58, 4, (int)&v60);
    sub_6091D95C(v37);
    sub_60920FDC((int *)(a3 + 16), v58, *(char **)(v37 + 636));
    sub_60922278(dword_60CD0A28 + 2376, v58);
    v43 = dword_60CD0A0C;
    v44 = FIELD_U32(dword_60CD0A0C, 400);
    if ( v44 )
    {
      v45 = FIELD_U32(v58, 192);
      v46 = FIELD_U32(dword_60CD0A0C, 384);
      v47 = dword_60CC746C(dword_60CD0A0C + 408);
      dword_60CC7874(v45, v46, FIELD_U32(v43, 380), v44, v47, HIDWORD(v47));
    }
    sub_6091ADF4(v59, v58);
  }
  if ( v54 )
    sub_609ACF6C(a3 + 776);
  result = FIELD_U8(a3, 772);
  if ( FIELD_U8(a3, 772) )
  {
    v49 = FIELD_U32(a3, 768);
    FIELD_U8(a3, 340) = 2;
    FIELD_U8(a3, 341) = 3;
    FIELD_U8(a3, 342) = 4;
    FIELD_U8(a3, 343) = v49;
    FIELD_U8(a3, 348) |= 2u;
    v50 = (unsigned int *)(a3 + 344);
    do
      v51 = __ldrex(v50);
    while ( __strex(v51 | 1, v50) );
    FIELD_U8(a3, 772) = 0;
    return 0;
  }
  return result;
}
