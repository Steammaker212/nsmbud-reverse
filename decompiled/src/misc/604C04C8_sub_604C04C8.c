/* sub_604C04C8
 * address: 0x604C04C8   size: 996   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C04C8(float *a1, int a2)
{
  int v3; // r0
  int v4; // r6
  int v5; // r7
  int v6; // r9
  int v7; // r0
  int v8; // r0
  int v9; // r9
  int v10; // r7
  int v11; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r9
  int v15; // r7
  int v16; // r6
  int v17; // r0
  int v18; // r0
  int v19; // r9
  int v20; // r7
  int v21; // r6
  int v22; // r0
  int v23; // r0
  int v24; // r9
  int v25; // r6
  int v26; // r7
  int result; // r0
  float v28; // s18
  int v29; // r0
  int v30; // r0
  float v31; // s18
  int v32; // r6
  int v33; // r7
  int v34; // r0
  int v35; // r1
  float v36; // s18
  int v37; // r6
  int v38; // r7
  int v39; // r0
  int v40; // r1
  float v41; // s18
  int v42; // r6
  int v43; // r7
  int v44; // r0
  int v45; // r1
  float v46; // s18
  int v47; // r6

  v3 = *((_DWORD *)a1 + 662);
  v4 = FIELD_U32(v3, 24);
  v5 = FIELD_U32(v3, 32);
  if ( a2 == 1 )
  {
    v6 = *((_DWORD *)a1 + 667);
    *(_DWORD *)(sub_608DE61C(a1 + 154, 0) - *((_DWORD *)a1 + 157) + 196) = 9;
    *(_DWORD *)(sub_608DE61C(a1 + 154, 0) - *((_DWORD *)a1 + 157) + 200) = 9;
    v7 = *((_DWORD *)a1 + 662);
    FIELD_U32(v7, 24) = v4;
    FIELD_U32(v7, 28) = v6;
    FIELD_U32(v7, 32) = v5;
    FIELD_U8(v7, 64) |= 0x10u;
    v8 = *((_DWORD *)a1 + 663);
    v9 = *((_DWORD *)a1 + 668);
    v10 = FIELD_U32(v8, 24);
    v11 = FIELD_U32(v8, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 154, 1) - *((_DWORD *)a1 + 157) + 196) = 9;
    *(_DWORD *)(sub_608DE61C(a1 + 154, 1) - *((_DWORD *)a1 + 157) + 200) = 9;
    v12 = *((_DWORD *)a1 + 663);
    FIELD_U32(v12, 24) = v10;
    FIELD_U32(v12, 28) = v9;
    FIELD_U32(v12, 32) = v11;
    FIELD_U8(v12, 64) |= 0x10u;
    v13 = *((_DWORD *)a1 + 664);
    v14 = *((_DWORD *)a1 + 669);
    v15 = FIELD_U32(v13, 24);
    v16 = FIELD_U32(v13, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 154, 2) - *((_DWORD *)a1 + 157) + 196) = 9;
    *(_DWORD *)(sub_608DE61C(a1 + 154, 2) - *((_DWORD *)a1 + 157) + 200) = 9;
    v17 = *((_DWORD *)a1 + 664);
    FIELD_U32(v17, 24) = v15;
    FIELD_U32(v17, 28) = v14;
    FIELD_U32(v17, 32) = v16;
    FIELD_U8(v17, 64) |= 0x10u;
    v18 = *((_DWORD *)a1 + 665);
    v19 = *((_DWORD *)a1 + 670);
    v20 = FIELD_U32(v18, 24);
    v21 = FIELD_U32(v18, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 154, 3) - *((_DWORD *)a1 + 157) + 196) = 9;
    *(_DWORD *)(sub_608DE61C(a1 + 154, 3) - *((_DWORD *)a1 + 157) + 200) = 9;
    v22 = *((_DWORD *)a1 + 665);
    FIELD_U32(v22, 24) = v20;
    FIELD_U32(v22, 28) = v19;
    FIELD_U32(v22, 32) = v21;
    FIELD_U8(v22, 64) |= 0x10u;
    v23 = *((_DWORD *)a1 + 666);
    v24 = *((_DWORD *)a1 + 671);
    v25 = FIELD_U32(v23, 24);
    v26 = FIELD_U32(v23, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 154, 4) - *((_DWORD *)a1 + 157) + 196) = 9;
    *(_DWORD *)(sub_608DE61C(a1 + 154, 4) - *((_DWORD *)a1 + 157) + 200) = 9;
    result = *((_DWORD *)a1 + 666);
    FIELD_U32(result, 24) = v25;
    FIELD_U32(result, 28) = v24;
  }
  else
  {
    v28 = a1[667];
    *(_DWORD *)(sub_608DE61C(a1 + 154, 0) - *((_DWORD *)a1 + 157) + 196) = 0;
    *(_DWORD *)(sub_608DE61C(a1 + 154, 0) - *((_DWORD *)a1 + 157) + 200) = 0;
    v29 = *((_DWORD *)a1 + 662);
    FIELD_U32(v29, 24) = v4;
    FIELD_F32(v29, 28) = v28 + 10000.0;
    FIELD_U32(v29, 32) = v5;
    FIELD_U8(v29, 64) |= 0x10u;
    v30 = *((_DWORD *)a1 + 663);
    v31 = a1[668];
    v32 = FIELD_U32(v30, 24);
    v33 = FIELD_U32(v30, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 154, 1) - *((_DWORD *)a1 + 157) + 196) = 0;
    *(_DWORD *)(sub_608DE61C(a1 + 154, 1) - *((_DWORD *)a1 + 157) + 200) = 0;
    v34 = *((_DWORD *)a1 + 663);
    FIELD_U32(v34, 24) = v32;
    FIELD_F32(v34, 28) = v31 + 10000.0;
    FIELD_U32(v34, 32) = v33;
    FIELD_U8(v34, 64) |= 0x10u;
    v35 = *((_DWORD *)a1 + 664);
    v36 = a1[669];
    v37 = FIELD_U32(v35, 24);
    v38 = FIELD_U32(v35, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 154, 2) - *((_DWORD *)a1 + 157) + 196) = 0;
    *(_DWORD *)(sub_608DE61C(a1 + 154, 2) - *((_DWORD *)a1 + 157) + 200) = 0;
    v39 = *((_DWORD *)a1 + 664);
    FIELD_U32(v39, 24) = v37;
    FIELD_F32(v39, 28) = v36 + 10000.0;
    FIELD_U32(v39, 32) = v38;
    FIELD_U8(v39, 64) |= 0x10u;
    v40 = *((_DWORD *)a1 + 665);
    v41 = a1[670];
    v42 = FIELD_U32(v40, 24);
    v43 = FIELD_U32(v40, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 154, 3) - *((_DWORD *)a1 + 157) + 196) = 0;
    *(_DWORD *)(sub_608DE61C(a1 + 154, 3) - *((_DWORD *)a1 + 157) + 200) = 0;
    v44 = *((_DWORD *)a1 + 665);
    FIELD_U32(v44, 24) = v42;
    FIELD_F32(v44, 28) = v41 + 10000.0;
    FIELD_U32(v44, 32) = v43;
    FIELD_U8(v44, 64) |= 0x10u;
    v45 = *((_DWORD *)a1 + 666);
    v46 = a1[671];
    v47 = FIELD_U32(v45, 24);
    v26 = FIELD_U32(v45, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 154, 4) - *((_DWORD *)a1 + 157) + 196) = 0;
    *(_DWORD *)(sub_608DE61C(a1 + 154, 4) - *((_DWORD *)a1 + 157) + 200) = 0;
    result = *((_DWORD *)a1 + 666);
    FIELD_U32(result, 24) = v47;
    FIELD_F32(result, 28) = v46 + 10000.0;
  }
  FIELD_U32(result, 32) = v26;
  FIELD_U8(result, 64) |= 0x10u;
  return result;
}
