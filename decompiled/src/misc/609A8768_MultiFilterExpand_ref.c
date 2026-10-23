/* MultiFilterExpand_ref
 * address: 0x609A8768   size: 1212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MultiFilterExpand_ref(int a1, int a2, int a3, int a4)
{
  int v6; // r6
  int v7; // r7
  int v8; // r11
  unsigned int v9; // r4
  int v10; // r0
  int v11; // r9
  int v12; // r5
  int v13; // r0
  int v14; // r1
  int v15; // r10
  _WORD *v16; // r4
  int v17; // r3
  int v18; // r5
  int v19; // r6
  int v20; // r7
  int v21; // r3
  int v22; // r5
  int v23; // r6
  int v24; // r7
  int v25; // r3
  int v26; // r5
  int v27; // r6
  int v28; // r7
  __int16 v29; // r2
  unsigned int *v30; // r0
  unsigned int v31; // r1
  unsigned int v32; // r1
  unsigned int v33; // r1
  int v34; // r4
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  int v37; // r0
  _DWORD *v38; // r0
  int v39; // r9
  unsigned int v40; // r4
  unsigned int v41; // r2
  _DWORD *v42; // r0
  _DWORD *v43; // r1
  _DWORD *v44; // r1
  int v45; // r4
  int v46; // r6
  int v47; // r9
  int v48; // r11
  __int64 v49; // r0
  int result; // r0
  int v51; // r0
  unsigned int *v52; // r0
  unsigned int v53; // r1
  int v54; // [sp+18h] [bp-70h]
  int v56; // [sp+24h] [bp-64h]
  int v57; // [sp+28h] [bp-60h]
  int v58; // [sp+2Ch] [bp-5Ch]
  int v59; // [sp+30h] [bp-58h]
  int v60; // [sp+34h] [bp-54h]
  float v62; // [sp+3Ch] [bp-4Ch] BYREF
  float v63; // [sp+40h] [bp-48h]
  int v64; // [sp+44h] [bp-44h]
  int v65; // [sp+48h] [bp-40h]
  _DWORD v66[15]; // [sp+4Ch] [bp-3Ch] BYREF

  v6 = *(_DWORD *)a3;
  v7 = *(_DWORD *)a3;
  v56 = FIELD_U32(a3, 4);
  if ( v56 )
    v7 = FIELD_U32(a3, 4);
  v8 = FIELD_U16(v6, 24);
  v9 = FIELD_U16(v7, 24);
  v10 = sub_609200A0(v6);
  v11 = FIELD_U16(v6, 26);
  v12 = v10;
  v13 = sub_609200A0(v7);
  v59 = v7;
  v14 = FIELD_U16(v7, 26);
  if ( v12 > v11 )
    v11 = v12;
  if ( v13 > v14 )
    v14 = v13;
  v66[0] = &sead__SafeStringBase__vtable;
  if ( v11 >= v14 << a4 )
    v11 = v14 << a4;
  if ( (unsigned int)v8 <= 1 )
    v8 = 1;
  if ( v9 <= 1 )
    v9 = 1;
  v66[1] = "MultiFilterExpand";
  if ( v8 >= (int)(v9 << a4) )
    v8 = v9 << a4;
  v54 = a4;
  v15 = sub_609ACEBC(a3 + 776, a2, v66, FIELD_U32(a3, 8), v8, v11);
  FIELD_U32(a3, 4) = v15;
  v16 = (_WORD *)(a3 + 700);
  v57 = FIELD_U16(a3, 700);
  v58 = FIELD_U8(a3, 702);
  v60 = a3 + 424;
  v17 = FIELD_U32(v15, 4);
  v18 = FIELD_U32(v15, 8);
  v19 = FIELD_U32(v15, 12);
  v20 = FIELD_U32(v15, 16);
  FIELD_U32(a3, 424) = *(_DWORD *)v15;
  FIELD_U32(a3, 428) = v17;
  FIELD_U32(a3, 432) = v18;
  FIELD_U32(a3, 436) = v19;
  FIELD_U32(a3, 440) = v20;
  v21 = FIELD_U32(v15, 24);
  v22 = FIELD_U32(v15, 28);
  v23 = FIELD_U32(v15, 32);
  v24 = FIELD_U32(v15, 36);
  FIELD_U32(a3, 444) = FIELD_U32(v15, 20);
  FIELD_U32(a3, 448) = v21;
  FIELD_U32(a3, 452) = v22;
  FIELD_U32(a3, 456) = v23;
  FIELD_U32(a3, 460) = v24;
  v25 = FIELD_U32(v15, 44);
  v26 = FIELD_U32(v15, 48);
  v27 = FIELD_U32(v15, 52);
  v28 = FIELD_U32(v15, 56);
  FIELD_U32(a3, 464) = FIELD_U32(v15, 40);
  FIELD_U32(a3, 468) = v25;
  FIELD_U32(a3, 472) = v26;
  FIELD_U32(a3, 476) = v27;
  FIELD_U32(a3, 480) = v28;
  v29 = FIELD_U16(v15, 60);
  FIELD_U8(a3, 486) = FIELD_U8(v15, 62);
  FIELD_U16(a3, 484) = v29;
  sub_60917754(a3 + 488, v15 + 64);
  FIELD_U32(a3, 688) = FIELD_U32(v15, 264);
  v30 = (unsigned int *)(a3 + 696);
  do
    v31 = __ldrex(v30);
  while ( __strex(v31 | 4, v30) );
  if ( (unsigned __int16)*v16 != v57 )
  {
    do
      v32 = __ldrex(v30);
    while ( __strex(v32 | 2, v30) );
    *v16 = v57;
  }
  if ( FIELD_U8(a3, 702) != v58 )
  {
    do
      v33 = __ldrex(v30);
    while ( __strex(v33 | 1, v30) );
    FIELD_U8(a3, 702) = v58;
  }
  sub_6091AC94(v60);
  FIELD_U32(a3, 372) = 0;
  FIELD_U32(a3, 376) = 0;
  FIELD_F32(a3, 380) = (float)v8;
  FIELD_F32(a3, 384) = (float)v11;
  FIELD_F32(a3, 364) = (float)v8;
  FIELD_F32(a3, 368) = (float)v11;
  sub_60920EC8(a3 + 16, (int *)v59);
  v34 = dword_60CD09F8;
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  v66[0] = CurrentCoreNumber;
  if ( (*(_DWORD *)(v34 + 608 * CurrentCoreNumber + 624) & 1) == 0 )
  {
    sub_6090B260(a3 + 360);
    v37 = ((int (__fastcall *)(_DWORD *, int))loc_6090E438)(v66, a3 + 360);
    sub_6090E560(v37, a2, (float *)(a3 + 360));
    v38 = *(_DWORD **)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 372) + 4);
    if ( v54 <= 0 )
    {
      v39 = v38[3];
    }
    else
    {
      v39 = v38[5];
      if ( v38[4] > (unsigned int)(v54 - 1) )
        v39 += 936 * (v54 - 1);
    }
    v40 = 1;
    sub_6091DD8C(v39, a2);
    v41 = FIELD_U32(v39, 608);
    v42 = *(_DWORD **)(v39 + 612);
    v62 = FIELD_F32(a1, 160);
    v43 = v42;
    if ( v41 > 2 )
      v43 = v42 + 6;
    if ( *v43 != -1 )
    {
      sub_6091B890(v43, a2, 1, (int)&v62);
      v41 = FIELD_U32(v39, 608);
      v42 = *(_DWORD **)(v39 + 612);
    }
    if ( FIELD_U16(v59, 24) > 1u )
      v40 = FIELD_U16(v59, 24);
    v44 = v42;
    if ( v41 > 1 )
      v44 = v42 + 3;
    v62 = 1.0 / (float)v40;
    v63 = v62;
    if ( *v44 != -1 )
    {
      sub_6091B890(v44, a2, 2, (int)&v62);
      v42 = *(_DWORD **)(v39 + 612);
    }
    v62 = 0.0;
    v63 = 0.0;
    v64 = 1065353216;
    v65 = 1065353216;
    if ( *v42 != -1 )
      sub_6091B890(v42, a2, 4, (int)&v62);
    sub_6091D95C(v39);
    sub_60920FDC((int *)(a3 + 16), a2, *(char **)(v39 + 636));
    sub_60922278(dword_60CD0A28 + 2376, a2);
    v45 = dword_60CD0A0C;
    v46 = FIELD_U32(dword_60CD0A0C, 400);
    if ( v46 )
    {
      v47 = FIELD_U32(a2, 192);
      v48 = FIELD_U32(dword_60CD0A0C, 384);
      v49 = dword_60CC746C(dword_60CD0A0C + 408);
      dword_60CC7874(v47, v48, FIELD_U32(v45, 380), v46, v49, HIDWORD(v49));
    }
    sub_6091ADF4(v60, a2);
  }
  if ( v56 )
    sub_609ACF6C(a3 + 776);
  result = FIELD_U8(a3, 772);
  if ( FIELD_U8(a3, 772) )
  {
    v51 = FIELD_U32(a3, 768);
    FIELD_U8(a3, 340) = 2;
    FIELD_U8(a3, 341) = 3;
    FIELD_U8(a3, 342) = 4;
    FIELD_U8(a3, 343) = v51;
    FIELD_U8(a3, 348) |= 2u;
    v52 = (unsigned int *)(a3 + 344);
    do
      v53 = __ldrex(v52);
    while ( __strex(v53 | 1, v52) );
    FIELD_U8(a3, 772) = 0;
    return 0;
  }
  return result;
}
