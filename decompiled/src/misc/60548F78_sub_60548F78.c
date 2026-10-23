/* sub_60548F78
 * address: 0x60548F78   size: 840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60548F78(_DWORD *a1, int a2)
{
  int v3; // r2
  int *v4; // r4
  _DWORD *v5; // r5
  float *v6; // r0
  int v7; // r6
  float v8; // r10
  int v9; // r0
  int v10; // r10
  int v11; // r4
  int v12; // r0
  int v13; // r10
  int v14; // r4
  int v15; // r0
  int v16; // r8
  int v17; // r6
  int result; // r0
  float v19; // s18
  int v20; // r0
  float v21; // s18
  int v22; // r6
  int v23; // r0
  float v24; // s18
  int v25; // r6
  int v26; // r0
  float v27; // s18
  int v28; // r6

  v4 = a1 + 1445;
  v3 = a1[1445];
  v5 = a1 + 938;
  v6 = (float *)(a1 + 1449);
  v7 = FIELD_U32(v3, 24);
  if ( a2 )
  {
    v8 = *v6;
    *(_DWORD *)(sub_608DE61C(v5, 0) - a1[941] + 196) = 9;
    *(_DWORD *)(sub_608DE61C(v5, 0) - a1[941] + 200) = 9;
    v9 = *v4;
    FIELD_U32(v9, 24) = v7;
    FIELD_F32(v9, 28) = v8;
    FIELD_U32(v9, 32) = 0;
    FIELD_U8(v9, 64) |= 0x10u;
    v10 = a1[1450];
    v11 = *(_DWORD *)(a1[1446] + 24);
    *(_DWORD *)(sub_608DE61C(v5, 2) - a1[941] + 196) = 9;
    *(_DWORD *)(sub_608DE61C(v5, 2) - a1[941] + 200) = 9;
    v12 = a1[1446];
    FIELD_U32(v12, 24) = v11;
    FIELD_U32(v12, 28) = v10;
    FIELD_U32(v12, 32) = 0;
    FIELD_U8(v12, 64) |= 0x10u;
    v13 = a1[1451];
    v14 = *(_DWORD *)(a1[1447] + 24);
    *(_DWORD *)(sub_608DE61C(v5, 1) - a1[941] + 196) = 9;
    *(_DWORD *)(sub_608DE61C(v5, 1) - a1[941] + 200) = 9;
    v15 = a1[1447];
    FIELD_U32(v15, 24) = v14;
    FIELD_U32(v15, 28) = v13;
    FIELD_U32(v15, 32) = 0;
    FIELD_U8(v15, 64) |= 0x10u;
    v16 = a1[1452];
    v17 = *(_DWORD *)(a1[1448] + 24);
    *(_DWORD *)(sub_608DE61C(v5, 3) - a1[941] + 196) = 9;
    *(_DWORD *)(sub_608DE61C(v5, 3) - a1[941] + 200) = 9;
    result = a1[1448];
    FIELD_U32(result, 24) = v17;
    FIELD_U32(result, 28) = v16;
  }
  else
  {
    v19 = *v6;
    *(_DWORD *)(sub_608DE61C(v5, 0) - a1[941] + 196) = 0;
    *(_DWORD *)(sub_608DE61C(v5, 0) - a1[941] + 200) = 0;
    v20 = *v4;
    FIELD_U32(v20, 24) = v7;
    FIELD_F32(v20, 28) = v19 + 10000.0;
    FIELD_U32(v20, 32) = 0;
    FIELD_U8(v20, 64) |= 0x10u;
    v21 = *((float *)a1 + 1450);
    v22 = *(_DWORD *)(a1[1446] + 24);
    *(_DWORD *)(sub_608DE61C(v5, 2) - a1[941] + 196) = 0;
    *(_DWORD *)(sub_608DE61C(v5, 2) - a1[941] + 200) = 0;
    v23 = a1[1446];
    FIELD_U32(v23, 24) = v22;
    FIELD_F32(v23, 28) = v21 + 10000.0;
    FIELD_U32(v23, 32) = 0;
    FIELD_U8(v23, 64) |= 0x10u;
    v24 = *((float *)a1 + 1451);
    v25 = *(_DWORD *)(a1[1447] + 24);
    *(_DWORD *)(sub_608DE61C(v5, 1) - a1[941] + 196) = 0;
    *(_DWORD *)(sub_608DE61C(v5, 1) - a1[941] + 200) = 0;
    v26 = a1[1447];
    FIELD_U32(v26, 24) = v25;
    FIELD_F32(v26, 28) = v24 + 10000.0;
    FIELD_U32(v26, 32) = 0;
    FIELD_U8(v26, 64) |= 0x10u;
    v27 = *((float *)a1 + 1452);
    v28 = *(_DWORD *)(a1[1448] + 24);
    *(_DWORD *)(sub_608DE61C(v5, 3) - a1[941] + 196) = 0;
    *(_DWORD *)(sub_608DE61C(v5, 3) - a1[941] + 200) = 0;
    result = a1[1448];
    FIELD_U32(result, 24) = v28;
    FIELD_F32(result, 28) = v27 + 10000.0;
  }
  FIELD_U32(result, 32) = 0;
  FIELD_U8(result, 64) |= 0x10u;
  return result;
}
