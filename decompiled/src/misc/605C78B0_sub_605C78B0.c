/* sub_605C78B0
 * address: 0x605C78B0   size: 952   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_605C78B0(float *a1)
{
  float v1; // s6
  float v2; // s5
  float v3; // s8
  float v4; // s3
  float v5; // s9
  float v6; // s13
  float v7; // s1
  float v8; // s6
  float v9; // s8
  float v10; // s12
  float v11; // s10
  float v12; // s1
  float v13; // s3
  float v14; // s12
  float v15; // s6
  float v16; // s8
  float v17; // s6
  float v18; // s12
  float v19; // s9
  float v20; // s14
  float v21; // s7
  float v22; // s13
  float v23; // s16
  float v24; // s10
  float v25; // s12
  float v26; // s3
  float v27; // s10
  float v28; // s1
  float v29; // s14
  float v30; // s8
  float v31; // s5
  float v32; // s10
  float v33; // s3
  float v34; // s9
  float v35; // s13
  float v36; // s6
  float v37; // s10
  float v38; // s12
  float v39; // s14
  float v40; // s3
  float v41; // s12
  float v42; // s6
  float v43; // s8
  float v44; // s6
  float v45; // s12
  float v46; // s9
  float v47; // s14
  float v48; // s7
  float v49; // s13
  float v50; // s16
  float v51; // s10
  float v52; // s12
  float v53; // s4
  float v54; // s10
  float v55; // s0
  float v56; // s14
  float *v57; // r1
  float *result; // r0

  v1 = a1[167];
  v2 = a1[171];
  v3 = a1[168] * 0.0;
  v4 = a1[172] * 0.0;
  v5 = a1[166] * 0.0;
  v6 = a1[170] * 0.0;
  v7 = v5 - (float)(v1 * 32.0);
  v8 = (float)(v5 + (float)(v1 * 16.0)) + v3;
  v9 = v7 + v3;
  v10 = (float)(v6 - (float)(v2 * 32.0)) + v4;
  v11 = a1[169] + v8;
  v12 = a1[173] + (float)((float)(v6 + (float)(v2 * 16.0)) + v4);
  v13 = v11 + v9;
  v14 = v12 + v10;
  v15 = (float)(a1[177] + (float)((float)((float)(a1[174] * 0.0) + (float)(a1[175] * 16.0)) + (float)(a1[176] * 0.0)))
      + (float)((float)((float)(a1[174] * 0.0) - (float)(a1[175] * 32.0)) + (float)(a1[176] * 0.0));
  a1[169] = v11 + v9;
  a1[173] = v14;
  a1[177] = v15;
  v16 = a1[27];
  v17 = a1[28];
  a1[740] = v11 - v16;
  a1[741] = v12 - v17;
  a1[754] = v13 - v16;
  a1[755] = v14 - v17;
  v18 = a1[179];
  v19 = a1[183];
  v20 = a1[180] * 0.0;
  v21 = a1[184] * 0.0;
  v22 = a1[178] * 0.0;
  v23 = a1[182] * 0.0;
  v24 = v22 - (float)(v18 * 32.0);
  v25 = a1[181] + (float)((float)(v22 + (float)(v18 * 16.0)) + v20);
  v26 = a1[185] + (float)((float)(v23 + (float)(v19 * 16.0)) + v21);
  v27 = v25 + (float)(v24 + v20);
  v28 = v26 + (float)((float)(v23 - (float)(v19 * 32.0)) + v21);
  v29 = (float)(a1[189] + (float)((float)((float)(a1[186] * 0.0) + (float)(a1[187] * 16.0)) + (float)(a1[188] * 0.0)))
      + (float)((float)((float)(a1[186] * 0.0) - (float)(a1[187] * 32.0)) + (float)(a1[188] * 0.0));
  a1[181] = v27;
  a1[185] = v28;
  a1[189] = v29;
  a1[742] = v25 - v16;
  a1[743] = v26 - v17;
  a1[752] = v27 - v16;
  a1[753] = v28 - v17;
  v30 = a1[191];
  v31 = a1[195];
  v32 = a1[192] * 0.0;
  v33 = a1[196] * 0.0;
  v34 = a1[190] * 0.0;
  v35 = a1[194] * 0.0;
  v36 = (float)(v34 - (float)(v30 * 32.0)) + v32;
  v37 = a1[193] + (float)((float)(v34 + (float)(v30 * 16.0)) + v32);
  v38 = (float)(v35 - (float)(v31 * 32.0)) + v33;
  v39 = a1[197] + (float)((float)(v35 + (float)(v31 * 16.0)) + v33);
  v40 = v37 + v36;
  v41 = v39 + v38;
  v42 = (float)(a1[201] + (float)((float)((float)(a1[198] * 0.0) + (float)(a1[199] * 16.0)) + (float)(a1[200] * 0.0)))
      + (float)((float)((float)(a1[198] * 0.0) - (float)(a1[199] * 32.0)) + (float)(a1[200] * 0.0));
  a1[193] = v40;
  a1[197] = v41;
  a1[201] = v42;
  v43 = a1[27];
  v44 = a1[28];
  a1[744] = v37 - v43;
  a1[745] = v39 - v44;
  a1[750] = v40 - v43;
  a1[751] = v41 - v44;
  v45 = a1[203];
  v46 = a1[207];
  v47 = a1[204] * 0.0;
  v48 = a1[208] * 0.0;
  v49 = a1[202] * 0.0;
  v50 = a1[206] * 0.0;
  v51 = (float)(v49 - (float)(v45 * 32.0)) + v47;
  v52 = a1[205] + (float)((float)(v49 + (float)(v45 * 16.0)) + v47);
  v53 = a1[209] + (float)((float)(v50 + (float)(v46 * 16.0)) + v48);
  v54 = v52 + v51;
  v55 = (float)(a1[213] + (float)((float)((float)(a1[210] * 0.0) + (float)(a1[211] * 16.0)) + (float)(a1[212] * 0.0)))
      + (float)((float)((float)(a1[210] * 0.0) - (float)(a1[211] * 32.0)) + (float)(a1[212] * 0.0));
  v56 = v53 + (float)((float)(v50 - (float)(v46 * 32.0)) + v48);
  a1[205] = v54;
  a1[209] = v56;
  a1[213] = v55;
  a1[746] = v52 - v43;
  a1[747] = v53 - v44;
  v57 = a1 + 749;
  result = a1 + 748;
  *result = v54 - v43;
  *v57 = v56 - v44;
  return result;
}
