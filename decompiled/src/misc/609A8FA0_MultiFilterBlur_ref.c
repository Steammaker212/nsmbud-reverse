/* MultiFilterBlur_ref
 * address: 0x609A8FA0   size: 936   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MultiFilterBlur_ref(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r5
  int v8; // r9
  int v9; // r0
  int v10; // r8
  int v11; // r10
  _WORD *v12; // r4
  int v13; // r3
  int v14; // r5
  int v15; // r6
  int v16; // r7
  int v17; // r3
  int v18; // r5
  int v19; // r6
  int v20; // r7
  int v21; // r3
  int v22; // r5
  int v23; // r6
  int v24; // r7
  __int16 v25; // r2
  unsigned int *v26; // r0
  unsigned int v27; // r1
  unsigned int v28; // r1
  unsigned int v29; // r1
  int v30; // r4
  int TlsValue; // r0
  float v32; // r0
  int v33; // r0
  int result; // r0
  int v35; // r0
  unsigned int *v36; // r0
  unsigned int v37; // r1
  int v39; // [sp+20h] [bp-58h]
  int v41; // [sp+28h] [bp-50h]
  int v42; // [sp+2Ch] [bp-4Ch]
  int *v43; // [sp+30h] [bp-48h]
  int v44; // [sp+34h] [bp-44h]
  int v45; // [sp+38h] [bp-40h]
  float v46[15]; // [sp+3Ch] [bp-3Ch] BYREF

  v7 = FIELD_U32(a3, 4);
  v39 = v7;
  if ( !v7 )
    v7 = *(_DWORD *)a3;
  v8 = FIELD_U16(v7, 24);
  v9 = sub_609200A0(v7);
  v43 = (int *)v7;
  v10 = FIELD_U16(v7, 26);
  if ( v9 > v10 )
    v10 = v9;
  LODWORD(v46[0]) = &sead__SafeStringBase__vtable;
  LODWORD(v46[1]) = "MultiFilterBlur";
  if ( (unsigned int)v8 <= 1 )
    v8 = 1;
  v45 = a2;
  v11 = sub_609ACEBC(a3 + 776, a2, v46, FIELD_U32(a3, 8), v8, v10);
  FIELD_U32(a3, 4) = v11;
  v12 = (_WORD *)(a3 + 700);
  v41 = FIELD_U16(a3, 700);
  v44 = a3 + 424;
  v42 = FIELD_U8(a3, 702);
  v13 = FIELD_U32(v11, 4);
  v14 = FIELD_U32(v11, 8);
  v15 = FIELD_U32(v11, 12);
  v16 = FIELD_U32(v11, 16);
  FIELD_U32(a3, 424) = *(_DWORD *)v11;
  FIELD_U32(a3, 428) = v13;
  FIELD_U32(a3, 432) = v14;
  FIELD_U32(a3, 436) = v15;
  FIELD_U32(a3, 440) = v16;
  v17 = FIELD_U32(v11, 24);
  v18 = FIELD_U32(v11, 28);
  v19 = FIELD_U32(v11, 32);
  v20 = FIELD_U32(v11, 36);
  FIELD_U32(a3, 444) = FIELD_U32(v11, 20);
  FIELD_U32(a3, 448) = v17;
  FIELD_U32(a3, 452) = v18;
  FIELD_U32(a3, 456) = v19;
  FIELD_U32(a3, 460) = v20;
  v21 = FIELD_U32(v11, 44);
  v22 = FIELD_U32(v11, 48);
  v23 = FIELD_U32(v11, 52);
  v24 = FIELD_U32(v11, 56);
  FIELD_U32(a3, 464) = FIELD_U32(v11, 40);
  FIELD_U32(a3, 468) = v21;
  FIELD_U32(a3, 472) = v22;
  FIELD_U32(a3, 476) = v23;
  FIELD_U32(a3, 480) = v24;
  v25 = FIELD_U16(v11, 60);
  FIELD_U8(a3, 486) = FIELD_U8(v11, 62);
  FIELD_U16(a3, 484) = v25;
  sub_60917754(a3 + 488, v11 + 64);
  FIELD_U32(a3, 688) = FIELD_U32(v11, 264);
  v26 = (unsigned int *)(a3 + 696);
  do
    v27 = __ldrex(v26);
  while ( __strex(v27 | 4, v26) );
  if ( (unsigned __int16)*v12 != v41 )
  {
    do
      v28 = __ldrex(v26);
    while ( __strex(v28 | 2, v26) );
    *v12 = v41;
  }
  if ( FIELD_U8(a3, 702) != v42 )
  {
    do
      v29 = __ldrex(v26);
    while ( __strex(v29 | 1, v26) );
    FIELD_U8(a3, 702) = v42;
  }
  sub_6091AC94(v44);
  FIELD_U32(a3, 372) = 0;
  FIELD_U32(a3, 376) = 0;
  FIELD_F32(a3, 380) = (float)v8;
  FIELD_F32(a3, 384) = (float)v10;
  FIELD_F32(a3, 364) = (float)v8;
  FIELD_F32(a3, 368) = (float)v10;
  sub_60920EC8(a3 + 16, v43);
  v30 = dword_60CD09F8;
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    LODWORD(v32) = TlsValue - 1;
  else
    v32 = COERCE_FLOAT(nn__os__GetCurrentCoreNumber(0));
  v46[0] = v32;
  if ( (*(_DWORD *)(v30 + 608 * LODWORD(v32) + 624) & 1) == 0 )
  {
    sub_6090B260(a3 + 360);
    v33 = ((int (__fastcall *)(float *, int))loc_6090E438)(v46, a3 + 360);
    sub_6090E560(v33, v45, (float *)(a3 + 360));
    switch ( a4 )
    {
      case 1:
        sub_6093FAA8(v45, a3 + 16, v46, 1, (int)&dword_60B3B944, (float *)&dword_60B3B954, (float *)&dword_60B3B944);
        break;
      case 2:
      case 4:
        sub_6093FB68(v45, a3 + 16, v46, a5, 1, 1, (float *)&dword_60B3B944);
        break;
      case 3:
        sub_6093FB68(v45, a3 + 16, v46, a5, 0, 1, (float *)&dword_60B3B944);
        break;
      default:
        break;
    }
    sub_6091ADF4(v44, v45);
  }
  if ( v39 )
    sub_609ACF6C(a3 + 776);
  result = FIELD_U8(a3, 772);
  if ( FIELD_U8(a3, 772) )
  {
    v35 = FIELD_U32(a3, 768);
    FIELD_U8(a3, 340) = 2;
    FIELD_U8(a3, 341) = 3;
    FIELD_U8(a3, 342) = 4;
    FIELD_U8(a3, 343) = v35;
    FIELD_U8(a3, 348) |= 2u;
    v36 = (unsigned int *)(a3 + 344);
    do
      v37 = __ldrex(v36);
    while ( __strex(v37 | 1, v36) );
    result = 0;
    FIELD_U8(a3, 772) = 0;
  }
  if ( a4 == 4 )
    return MultiFilterBlur_ref(a1, v45, a3, 3, a5);
  return result;
}
