/* sub_60450184
 * address: 0x60450184   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60450184(int a1, int a2, int a3)
{
  int v6; // r2
  int v7; // r3
  int *v8; // r1
  int result; // r0
  int v10; // r1
  int v11; // r1
  int v12; // r2
  unsigned int *v13; // r0
  unsigned int v14; // r1
  int v15; // r1
  char v16; // r2
  unsigned int v17; // r1
  int v18; // r4
  int *v19; // r1
  int v20; // r1
  int v21; // r1
  int v22; // r2
  unsigned int *v23; // r0
  unsigned int v24; // r1
  int v25; // r1
  char v26; // r2
  unsigned int v27; // r1
  int v28; // r4
  int v29; // r2
  int v30; // r6
  int v31; // r2
  int v32; // r0
  int v33; // r6
  int v34; // r4
  int v35; // r2
  int v36; // r0
  int v37; // r5
  int v38; // r4
  int v39; // r2

  v6 = *(unsigned __int8 *)(FIELD_U32(a1, 2288) + a3);
  v7 = dword_60C9BAAC;
  v8 = (int *)(a1 + 12 * v6 + 948);
  result = FIELD_U8(a1, 944);
  if ( result == 2 )
    v8 = (int *)(dword_60C9BAAC + 120);
  v10 = *v8;
  if ( v10 )
  {
    sub_60920EC8(a1 + 1256, v10);
    v11 = FIELD_U32(a1, 2296);
    v12 = FIELD_U32(a1, 2300);
    FIELD_U8(a1, 1575) = FIELD_U32(a1, 2292);
    v13 = (unsigned int *)(a1 + 1584);
    FIELD_U8(a1, 1576) = v11;
    FIELD_U8(a1, 1577) = v12;
    do
      v14 = __ldrex(v13);
    while ( __strex(v14 | 2, v13) );
    v15 = FIELD_U32(a1, 2308);
    v16 = FIELD_U8(a1, 2304);
    FIELD_U8(a1, 1572) = v16;
    FIELD_U8(a1, 1573) = v16;
    FIELD_U8(a1, 1574) = v15;
    do
      v17 = __ldrex(v13);
    while ( __strex(v17 | 4, v13) );
    v18 = FIELD_U32(a1, 32);
    sub_6091D95C(v18);
    sub_60920FDC(a1 + 1256, a2, FIELD_U32(v18, 636), -1, 0);
    v6 = *(unsigned __int8 *)(FIELD_U32(a1, 2288) + a3);
    v7 = dword_60C9BAAC;
    result = FIELD_U8(a1, 944);
  }
  v19 = (int *)(a1 + 12 * v6 + 952);
  if ( result == 2 )
    v19 = (int *)(v7 + 120);
  v20 = *v19;
  if ( v20 )
  {
    sub_60920EC8(a1 + 1600, v20);
    v21 = FIELD_U32(a1, 2296);
    v22 = FIELD_U32(a1, 2300);
    FIELD_U8(a1, 1919) = FIELD_U32(a1, 2292);
    FIELD_U8(a1, 1920) = v21;
    FIELD_U8(a1, 1921) = v22;
    v23 = (unsigned int *)(a1 + 1928);
    do
      v24 = __ldrex(v23);
    while ( __strex(v24 | 2, v23) );
    v25 = FIELD_U32(a1, 2308);
    v26 = FIELD_U8(a1, 2304);
    FIELD_U8(a1, 1916) = v26;
    FIELD_U8(a1, 1917) = v26;
    FIELD_U8(a1, 1918) = v25;
    do
      v27 = __ldrex(v23);
    while ( __strex(v27 | 4, v23) );
    v28 = FIELD_U32(a1, 32);
    sub_6091D95C(v28);
    v29 = FIELD_U32(v28, 636);
    if ( FIELD_U32(v28, 632) > 1u )
      v29 += 12;
    sub_60920FDC(a1 + 1600, a2, v29, -1, 0);
    result = FIELD_U8(a1, 944);
  }
  if ( result == 1 )
  {
    sub_60920EC8(a1 + 1944, *(_DWORD *)(a1 + 12 * *(unsigned __int8 *)(FIELD_U32(a1, 2288) + a3) + 952));
    v30 = FIELD_U32(a1, 32);
    sub_6091D95C(v30);
    v31 = FIELD_U32(v30, 636);
    if ( FIELD_U32(v30, 632) > 2u )
      v31 += 24;
    sub_60920FDC(a1 + 1944, a2, v31, -1, 0);
    v32 = sub_604267D0(dword_60C9BBD4, 2u);
    v33 = FIELD_U32(a1, 32);
    v34 = v32;
    sub_6091D95C(v33);
    v35 = FIELD_U32(v33, 636);
    if ( FIELD_U32(v33, 632) > 3u )
      v35 += 36;
    sub_60920FDC(v34, a2, v35, -1, 0);
    v36 = sub_60426814(dword_60C9BBD4, 2u);
    v37 = FIELD_U32(a1, 32);
    v38 = v36;
    sub_6091D95C(v37);
    v39 = FIELD_U32(v37, 636);
    if ( FIELD_U32(v37, 632) > 4u )
      v39 += 48;
    return sub_60920FDC(v38, a2, v39, -1, 0);
  }
  return result;
}
