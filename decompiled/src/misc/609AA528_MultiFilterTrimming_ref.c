/* MultiFilterTrimming_ref
 * address: 0x609AA528   size: 868   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MultiFilterTrimming_ref(int a1, int a2, int a3)
{
  int v6; // r7
  float v7; // s16
  unsigned int v8; // r4
  int v9; // r0
  float v10; // s0
  signed int v11; // r1
  int v12; // r10
  int v13; // r8
  int v14; // r9
  _WORD *v15; // r4
  int v16; // r3
  int v17; // r5
  int v18; // r6
  int v19; // r7
  int v20; // r3
  int v21; // r5
  int v22; // r6
  int v23; // r7
  int v24; // r3
  int v25; // r5
  int v26; // r6
  int v27; // r7
  __int16 v28; // r2
  unsigned int *v29; // r0
  unsigned int v30; // r1
  unsigned int v31; // r1
  unsigned int v32; // r1
  int v33; // r4
  int TlsValue; // r0
  float v35; // r0
  int v36; // r0
  float v37; // s2
  int result; // r0
  int v39; // r0
  unsigned int *v40; // r0
  unsigned int v41; // r1
  int v42; // [sp+18h] [bp-70h]
  int v43; // [sp+1Ch] [bp-6Ch]
  int v44; // [sp+24h] [bp-64h]
  int v45; // [sp+28h] [bp-60h]
  int *v46; // [sp+2Ch] [bp-5Ch]
  int v47; // [sp+30h] [bp-58h]
  int v48; // [sp+34h] [bp-54h]
  float v49[2]; // [sp+38h] [bp-50h] BYREF
  float v50[18]; // [sp+40h] [bp-48h] BYREF

  v6 = FIELD_U32(a3, 4);
  v48 = v6;
  if ( !v6 )
    v6 = *(_DWORD *)a3;
  v7 = FIELD_F32(a1, 180);
  v8 = FIELD_U16(v6, 24);
  v9 = sub_609200A0(v6);
  v42 = a1;
  v10 = FIELD_F32(a1, 184);
  v46 = (int *)v6;
  v11 = FIELD_U16(v6, 26);
  LODWORD(v50[0]) = &sead__SafeStringBase__vtable;
  LODWORD(v50[1]) = "MultiFilterTrimming";
  if ( v8 <= 1 )
    v8 = 1;
  if ( v9 > v11 )
    v11 = v9;
  v12 = (int)(float)(v10 * (float)(unsigned int)v11);
  v13 = (int)(float)(v7 * (float)v8);
  if ( v12 <= 1 )
    v12 = 1;
  if ( v13 <= 1 )
    v13 = 1;
  v43 = a2;
  v14 = sub_609ACEBC(a3 + 776, a2, v50, FIELD_U32(a3, 8), v13, v12);
  FIELD_U32(a3, 4) = v14;
  v15 = (_WORD *)(a3 + 700);
  v44 = FIELD_U16(a3, 700);
  v47 = a3 + 424;
  v45 = FIELD_U8(a3, 702);
  v16 = FIELD_U32(v14, 4);
  v17 = FIELD_U32(v14, 8);
  v18 = FIELD_U32(v14, 12);
  v19 = FIELD_U32(v14, 16);
  FIELD_U32(a3, 424) = *(_DWORD *)v14;
  FIELD_U32(a3, 428) = v16;
  FIELD_U32(a3, 432) = v17;
  FIELD_U32(a3, 436) = v18;
  FIELD_U32(a3, 440) = v19;
  v20 = FIELD_U32(v14, 24);
  v21 = FIELD_U32(v14, 28);
  v22 = FIELD_U32(v14, 32);
  v23 = FIELD_U32(v14, 36);
  FIELD_U32(a3, 444) = FIELD_U32(v14, 20);
  FIELD_U32(a3, 448) = v20;
  FIELD_U32(a3, 452) = v21;
  FIELD_U32(a3, 456) = v22;
  FIELD_U32(a3, 460) = v23;
  v24 = FIELD_U32(v14, 44);
  v25 = FIELD_U32(v14, 48);
  v26 = FIELD_U32(v14, 52);
  v27 = FIELD_U32(v14, 56);
  FIELD_U32(a3, 464) = FIELD_U32(v14, 40);
  FIELD_U32(a3, 468) = v24;
  FIELD_U32(a3, 472) = v25;
  FIELD_U32(a3, 476) = v26;
  FIELD_U32(a3, 480) = v27;
  v28 = FIELD_U16(v14, 60);
  FIELD_U8(a3, 486) = FIELD_U8(v14, 62);
  FIELD_U16(a3, 484) = v28;
  sub_60917754(a3 + 488, v14 + 64);
  FIELD_U32(a3, 688) = FIELD_U32(v14, 264);
  v29 = (unsigned int *)(a3 + 696);
  do
    v30 = __ldrex(v29);
  while ( __strex(v30 | 4, v29) );
  if ( (unsigned __int16)*v15 != v44 )
  {
    do
      v31 = __ldrex(v29);
    while ( __strex(v31 | 2, v29) );
    *v15 = v44;
  }
  if ( FIELD_U8(a3, 702) != v45 )
  {
    do
      v32 = __ldrex(v29);
    while ( __strex(v32 | 1, v29) );
    FIELD_U8(a3, 702) = v45;
  }
  sub_6091AC94(v47);
  FIELD_U32(a3, 372) = 0;
  FIELD_U32(a3, 376) = 0;
  FIELD_F32(a3, 380) = (float)v13;
  FIELD_F32(a3, 384) = (float)v12;
  FIELD_F32(a3, 364) = (float)v13;
  FIELD_F32(a3, 368) = (float)v12;
  sub_60920EC8(a3 + 16, v46);
  v33 = dword_60CD09F8;
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    LODWORD(v35) = TlsValue - 1;
  else
    v35 = COERCE_FLOAT(nn__os__GetCurrentCoreNumber(0));
  v50[0] = v35;
  if ( (*(_DWORD *)(v33 + 608 * LODWORD(v35) + 624) & 1) == 0 )
  {
    sub_6090B260(a3 + 360);
    v36 = ((int (__fastcall *)(float *, int))loc_6090E438)(v50, a3 + 360);
    sub_6090E560(v36, v43, (float *)(a3 + 360));
    v37 = -FIELD_F32(v42, 164);
    v49[0] = -FIELD_F32(v42, 160);
    v49[1] = v37;
    sub_6093F8F4(
      v43,
      a3 + 16,
      v50,
      (int)&dword_60B3B954,
      0.0,
      (int)v49,
      (float *)&dword_60B3B954,
      (float *)&dword_60B3B944);
    sub_6091ADF4(v47, v43);
  }
  if ( v48 )
    sub_609ACF6C(a3 + 776);
  result = FIELD_U8(a3, 772);
  if ( FIELD_U8(a3, 772) )
  {
    v39 = FIELD_U32(a3, 768);
    FIELD_U8(a3, 340) = 2;
    FIELD_U8(a3, 341) = 3;
    FIELD_U8(a3, 342) = 4;
    FIELD_U8(a3, 343) = v39;
    FIELD_U8(a3, 348) |= 2u;
    v40 = (unsigned int *)(a3 + 344);
    do
      v41 = __ldrex(v40);
    while ( __strex(v41 | 1, v40) );
    FIELD_U8(a3, 772) = 0;
    return 0;
  }
  return result;
}
