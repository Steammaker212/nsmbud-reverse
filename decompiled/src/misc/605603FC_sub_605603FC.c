/* sub_605603FC
 * address: 0x605603FC   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605603FC(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // r5
  unsigned int v5; // r12
  bool v6; // nf
  unsigned int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // t1
  int v11; // lr
  unsigned int v12; // r3
  int v13; // r1
  int v14; // t1
  int v15; // r1
  unsigned int v16; // r5
  unsigned int v17; // r3
  unsigned int v18; // r1
  int v19; // r1
  int v20; // t1
  int v21; // r1
  unsigned int v22; // r5
  int v23; // r1
  int v24; // t1
  int v25; // r1
  unsigned int v26; // r5
  unsigned int v27; // r3
  unsigned int v28; // r1
  int v29; // r1
  int v30; // t1
  int v31; // r1
  unsigned int v32; // r5
  int v33; // r1
  int v34; // t1
  int v35; // r1
  unsigned int v36; // r5
  unsigned int v37; // r3
  unsigned int v38; // r1
  int v39; // r1
  int v40; // t1
  int v41; // r1
  unsigned int v42; // r5
  int v43; // r1
  int v44; // t1
  unsigned int v45; // r4
  unsigned int v46; // r1
  int v47; // r1
  int v48; // t1
  int result; // r0
  unsigned int v50; // r6
  int v51; // r0
  int v52; // t1

  v4 = 0;
  v5 = 0;
  if ( a2 < 10 )
    v4 = a2;
  v6 = a2 < 0;
  v7 = 0;
  if ( v6 )
    v4 = 9;
  if ( v4 < 0xA )
    v7 = v4;
  v8 = a1 + 12 * v7;
  v10 = FIELD_U32(v8, 13592);
  v9 = v8 + 13592;
  if ( v10 == a3 )
    return v9;
  v11 = (a4 >> 31) | 1;
  v12 = 0;
  if ( (int)(v4 + v11) < 10 )
    v12 = v4 + v11;
  if ( (int)(v4 + v11) < 0 )
    v12 = 9;
  if ( v12 < 0xA )
    v5 = v12;
  v13 = a1 + 12 * v5;
  v14 = FIELD_U32(v13, 13592);
  v9 = v13 + 13592;
  if ( v14 == a3 )
    return v9;
  v15 = v12 + v11;
  v16 = 0;
  v17 = 0;
  if ( v15 < 10 )
    v16 = v15;
  v6 = v15 < 0;
  v18 = 0;
  if ( v6 )
    v16 = 9;
  if ( v16 < 0xA )
    v18 = v16;
  v19 = a1 + 12 * v18;
  v20 = FIELD_U32(v19, 13592);
  v9 = v19 + 13592;
  if ( v20 == a3 )
    return v9;
  v21 = v16 + v11;
  v22 = 0;
  if ( v21 < 10 )
    v22 = v21;
  if ( v21 < 0 )
    v22 = 9;
  if ( v22 < 0xA )
    v17 = v22;
  v23 = a1 + 12 * v17;
  v24 = FIELD_U32(v23, 13592);
  v9 = v23 + 13592;
  if ( v24 == a3 )
    return v9;
  v25 = v22 + v11;
  v26 = 0;
  v27 = 0;
  if ( v25 < 10 )
    v26 = v25;
  v6 = v25 < 0;
  v28 = 0;
  if ( v6 )
    v26 = 9;
  if ( v26 < 0xA )
    v28 = v26;
  v29 = a1 + 12 * v28;
  v30 = FIELD_U32(v29, 13592);
  v9 = v29 + 13592;
  if ( v30 == a3 )
    return v9;
  v31 = v26 + v11;
  v32 = 0;
  if ( v31 < 10 )
    v32 = v31;
  if ( v31 < 0 )
    v32 = 9;
  if ( v32 < 0xA )
    v27 = v32;
  v33 = a1 + 12 * v27;
  v34 = FIELD_U32(v33, 13592);
  v9 = v33 + 13592;
  if ( v34 == a3 )
    return v9;
  v35 = v32 + v11;
  v36 = 0;
  v37 = 0;
  if ( v35 < 10 )
    v36 = v35;
  v6 = v35 < 0;
  v38 = 0;
  if ( v6 )
    v36 = 9;
  if ( v36 < 0xA )
    v38 = v36;
  v39 = a1 + 12 * v38;
  v40 = FIELD_U32(v39, 13592);
  v9 = v39 + 13592;
  if ( v40 == a3 )
    return v9;
  v41 = v36 + v11;
  v42 = 0;
  if ( v41 < 10 )
    v42 = v41;
  if ( v41 < 0 )
    v42 = 9;
  if ( v42 < 0xA )
    v37 = v42;
  v43 = a1 + 12 * v37;
  v44 = FIELD_U32(v43, 13592);
  v9 = v43 + 13592;
  if ( v44 == a3 )
    return v9;
  v45 = 0;
  if ( (int)(v42 + v11) < 10 )
    v45 = v42 + v11;
  v46 = 0;
  if ( (int)(v42 + v11) < 0 )
    v45 = 9;
  if ( v45 < 0xA )
    v46 = v45;
  v47 = a1 + 12 * v46;
  v48 = FIELD_U32(v47, 13592);
  v9 = v47 + 13592;
  if ( v48 == a3 )
    return v9;
  v50 = 0;
  if ( (int)(v45 + v11) < 10 )
    v50 = v45 + v11;
  if ( (int)(v45 + v11) < 0 )
    v50 = 9;
  if ( v50 >= 0xA )
    v50 = 0;
  v51 = a1 + 12 * v50;
  v52 = FIELD_U32(v51, 13592);
  result = v51 + 13592;
  if ( v52 != a3 )
    return 0;
  return result;
}
