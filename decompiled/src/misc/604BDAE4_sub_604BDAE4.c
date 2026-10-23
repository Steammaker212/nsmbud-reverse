/* sub_604BDAE4
 * address: 0x604BDAE4   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BDAE4(int a1)
{
  int v2; // r1
  int v3; // r5
  float v4; // s18
  int v5; // r7
  int v6; // r6
  int v7; // r0
  int v8; // r0
  float v9; // s18
  int v10; // r6
  int v11; // r7
  int v12; // r0
  int v13; // r1
  float v14; // s18
  int v15; // r6
  int v16; // r7
  int v17; // r0
  int v18; // r1
  float v19; // s18
  int v20; // r6
  int v21; // r7
  int v22; // r0
  int v23; // r1
  float v24; // s18
  int v25; // r6
  int v26; // r7
  int result; // r0

  v2 = FIELD_U32(a1, 2648);
  v3 = a1 + 616;
  v4 = FIELD_F32(a1, 2668);
  v5 = FIELD_U32(v2, 24);
  v6 = FIELD_U32(v2, 32);
  *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 196) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 0) - FIELD_U32(a1, 628) + 200) = 0;
  v7 = FIELD_U32(a1, 2648);
  FIELD_U32(v7, 24) = v5;
  FIELD_F32(v7, 28) = v4 + 10000.0;
  FIELD_U32(v7, 32) = v6;
  FIELD_U8(v7, 64) |= 0x10u;
  v8 = FIELD_U32(a1, 2652);
  v9 = FIELD_F32(a1, 2672);
  v10 = FIELD_U32(v8, 24);
  v11 = FIELD_U32(v8, 32);
  *(_DWORD *)(sub_608DE61C(v3, 1) - FIELD_U32(a1, 628) + 196) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 1) - FIELD_U32(a1, 628) + 200) = 0;
  v12 = FIELD_U32(a1, 2652);
  FIELD_U32(v12, 24) = v10;
  FIELD_F32(v12, 28) = v9 + 10000.0;
  FIELD_U32(v12, 32) = v11;
  FIELD_U8(v12, 64) |= 0x10u;
  v13 = FIELD_U32(a1, 2656);
  v14 = FIELD_F32(a1, 2676);
  v15 = FIELD_U32(v13, 24);
  v16 = FIELD_U32(v13, 32);
  *(_DWORD *)(sub_608DE61C(v3, 2) - FIELD_U32(a1, 628) + 196) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 2) - FIELD_U32(a1, 628) + 200) = 0;
  v17 = FIELD_U32(a1, 2656);
  FIELD_U32(v17, 24) = v15;
  FIELD_F32(v17, 28) = v14 + 10000.0;
  FIELD_U32(v17, 32) = v16;
  FIELD_U8(v17, 64) |= 0x10u;
  v18 = FIELD_U32(a1, 2660);
  v19 = FIELD_F32(a1, 2680);
  v20 = FIELD_U32(v18, 24);
  v21 = FIELD_U32(v18, 32);
  *(_DWORD *)(sub_608DE61C(v3, 3) - FIELD_U32(a1, 628) + 196) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 3) - FIELD_U32(a1, 628) + 200) = 0;
  v22 = FIELD_U32(a1, 2660);
  FIELD_U32(v22, 24) = v20;
  FIELD_F32(v22, 28) = v19 + 10000.0;
  FIELD_U32(v22, 32) = v21;
  FIELD_U8(v22, 64) |= 0x10u;
  v23 = FIELD_U32(a1, 2664);
  v24 = FIELD_F32(a1, 2684);
  v25 = FIELD_U32(v23, 24);
  v26 = FIELD_U32(v23, 32);
  *(_DWORD *)(sub_608DE61C(v3, 4) - FIELD_U32(a1, 628) + 196) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 4) - FIELD_U32(a1, 628) + 200) = 0;
  result = FIELD_U32(a1, 2664);
  FIELD_U32(result, 24) = v25;
  FIELD_F32(result, 28) = v24 + 10000.0;
  FIELD_U32(result, 32) = v26;
  FIELD_U8(result, 64) |= 0x10u;
  return result;
}
