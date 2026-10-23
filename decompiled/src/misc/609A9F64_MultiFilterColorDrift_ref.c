/* MultiFilterColorDrift_ref
 * address: 0x609A9F64   size: 768   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MultiFilterColorDrift_ref(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r10
  int v7; // r0
  int v8; // r8
  int v9; // r9
  _WORD *v10; // r4
  int v11; // r3
  int v12; // r5
  int v13; // r6
  int v14; // r7
  int v15; // r3
  int v16; // r5
  int v17; // r6
  int v18; // r7
  int v19; // r3
  int v20; // r5
  int v21; // r6
  int v22; // r7
  __int16 v23; // r2
  unsigned int *v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r1
  unsigned int v27; // r1
  int v28; // r4
  int TlsValue; // r0
  float v30; // r0
  int v31; // r0
  int result; // r0
  int v33; // r0
  unsigned int *v34; // r0
  unsigned int v35; // r1
  int v37; // [sp+20h] [bp-58h]
  int v38; // [sp+28h] [bp-50h]
  int v39; // [sp+2Ch] [bp-4Ch]
  int *v40; // [sp+30h] [bp-48h]
  int v41; // [sp+34h] [bp-44h]
  int v42; // [sp+38h] [bp-40h]
  float v43[15]; // [sp+3Ch] [bp-3Ch] BYREF

  v5 = FIELD_U32(a3, 4);
  v42 = v5;
  if ( !v5 )
    v5 = *(_DWORD *)a3;
  v6 = FIELD_U16(v5, 24);
  v7 = sub_609200A0(v5);
  v40 = (int *)v5;
  v8 = FIELD_U16(v5, 26);
  if ( v7 > v8 )
    v8 = v7;
  LODWORD(v43[0]) = &sead__SafeStringBase__vtable;
  LODWORD(v43[1]) = "MultiFilterColorDrift";
  if ( (unsigned int)v6 <= 1 )
    v6 = 1;
  v37 = a2;
  v9 = sub_609ACEBC(a3 + 776, a2, v43, FIELD_U32(a3, 8), v6, v8);
  FIELD_U32(a3, 4) = v9;
  v10 = (_WORD *)(a3 + 700);
  v38 = FIELD_U16(a3, 700);
  v39 = FIELD_U8(a3, 702);
  v41 = a3 + 424;
  v11 = FIELD_U32(v9, 4);
  v12 = FIELD_U32(v9, 8);
  v13 = FIELD_U32(v9, 12);
  v14 = FIELD_U32(v9, 16);
  FIELD_U32(a3, 424) = *(_DWORD *)v9;
  FIELD_U32(a3, 428) = v11;
  FIELD_U32(a3, 432) = v12;
  FIELD_U32(a3, 436) = v13;
  FIELD_U32(a3, 440) = v14;
  v15 = FIELD_U32(v9, 24);
  v16 = FIELD_U32(v9, 28);
  v17 = FIELD_U32(v9, 32);
  v18 = FIELD_U32(v9, 36);
  FIELD_U32(a3, 444) = FIELD_U32(v9, 20);
  FIELD_U32(a3, 448) = v15;
  FIELD_U32(a3, 452) = v16;
  FIELD_U32(a3, 456) = v17;
  FIELD_U32(a3, 460) = v18;
  v19 = FIELD_U32(v9, 44);
  v20 = FIELD_U32(v9, 48);
  v21 = FIELD_U32(v9, 52);
  v22 = FIELD_U32(v9, 56);
  FIELD_U32(a3, 464) = FIELD_U32(v9, 40);
  FIELD_U32(a3, 468) = v19;
  FIELD_U32(a3, 472) = v20;
  FIELD_U32(a3, 476) = v21;
  FIELD_U32(a3, 480) = v22;
  v23 = FIELD_U16(v9, 60);
  FIELD_U8(a3, 486) = FIELD_U8(v9, 62);
  FIELD_U16(a3, 484) = v23;
  sub_60917754(a3 + 488, v9 + 64);
  FIELD_U32(a3, 688) = FIELD_U32(v9, 264);
  v24 = (unsigned int *)(a3 + 696);
  do
    v25 = __ldrex(v24);
  while ( __strex(v25 | 4, v24) );
  if ( (unsigned __int16)*v10 != v38 )
  {
    do
      v26 = __ldrex(v24);
    while ( __strex(v26 | 2, v24) );
    *v10 = v38;
  }
  if ( FIELD_U8(a3, 702) != v39 )
  {
    do
      v27 = __ldrex(v24);
    while ( __strex(v27 | 1, v24) );
    FIELD_U8(a3, 702) = v39;
  }
  sub_6091AC94(v41);
  FIELD_U32(a3, 372) = 0;
  FIELD_U32(a3, 376) = 0;
  FIELD_F32(a3, 380) = (float)v6;
  FIELD_F32(a3, 384) = (float)v8;
  FIELD_F32(a3, 364) = (float)v6;
  FIELD_F32(a3, 368) = (float)v8;
  sub_60920EC8(a3 + 16, v40);
  v28 = dword_60CD09F8;
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    LODWORD(v30) = TlsValue - 1;
  else
    v30 = COERCE_FLOAT(nn__os__GetCurrentCoreNumber(0));
  v43[0] = v30;
  if ( (*(_DWORD *)(v28 + 608 * LODWORD(v30) + 624) & 1) == 0 )
  {
    sub_6090B260(a3 + 360);
    v31 = ((int (__fastcall *)(float *, int))loc_6090E438)(v43, a3 + 360);
    sub_6090E560(v31, v37, (float *)(a3 + 360));
    sub_6093FD38(v37, a3 + 16, v43, a1 + 160, a1 + 180, a1 + 200, (float *)&dword_60B3B954, (float *)&dword_60B3B944);
    sub_6091ADF4(v41, v37);
  }
  if ( v42 )
    sub_609ACF6C(a3 + 776);
  result = FIELD_U8(a3, 772);
  if ( FIELD_U8(a3, 772) )
  {
    v33 = FIELD_U32(a3, 768);
    FIELD_U8(a3, 340) = 2;
    FIELD_U8(a3, 341) = 3;
    FIELD_U8(a3, 342) = 4;
    FIELD_U8(a3, 343) = v33;
    FIELD_U8(a3, 348) |= 2u;
    v34 = (unsigned int *)(a3 + 344);
    do
      v35 = __ldrex(v34);
    while ( __strex(v35 | 1, v34) );
    FIELD_U8(a3, 772) = 0;
    return 0;
  }
  return result;
}
