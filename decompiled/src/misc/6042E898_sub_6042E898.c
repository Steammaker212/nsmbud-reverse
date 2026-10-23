/* sub_6042E898
 * address: 0x6042E898   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042E898(float *a1, float *a2)
{
  float v2; // s3
  float v3; // s0
  float v4; // s20
  float v5; // s8
  float v6; // s22
  float v7; // s12
  float v8; // s15
  float v9; // s16
  float v10; // s6
  float v11; // s14
  float v12; // s5
  float v13; // s1
  float v14; // s2
  float v15; // s4
  float v16; // s10
  float v17; // s7
  int v18; // r1
  float v19; // s23
  float v20; // s27
  float v21; // s31
  float v22; // s17
  float v23; // s29
  float v24; // s25
  float v25; // s9
  float v26; // s19
  float v27; // s17
  float v28; // s28
  float v29; // s24
  float v30; // s22
  float v31; // s5
  float v32; // s1
  float v33; // s13
  float v34; // s11
  float v35; // s20
  float v36; // s15
  float v38; // [sp+8h] [bp-58h]
  float v39; // [sp+Ch] [bp-54h]
  float v40; // [sp+14h] [bp-4Ch]
  float v41; // [sp+1Ch] [bp-44h]

  v2 = a2[8];
  v3 = a2[6];
  v4 = a2[11];
  v5 = a2[4];
  v6 = a2[10];
  v7 = a2[7];
  v8 = a2[14];
  v9 = a2[15];
  v10 = a2[5];
  v11 = a2[12];
  v12 = a2[9];
  v13 = a2[13];
  v14 = a2[1];
  v15 = *a2;
  v16 = a2[2];
  v17 = a2[3];
  v18 = 0;
  v19 = v7 * v6;
  v20 = v7 * v12;
  v21 = v10 * v4;
  v22 = (float)((float)((float)((float)((float)((float)((float)(v14
                                                              * (float)((float)((float)((float)(v3 * v2) * v9)
                                                                              + (float)((float)(v5 * v4) * v8))
                                                                      + (float)((float)(v7 * v6) * v11)))
                                                      + (float)(v15
                                                              * (float)((float)((float)((float)(v10 * v6) * v9)
                                                                              + (float)((float)(v3 * v4) * v13))
                                                                      + (float)((float)(v7 * v12) * v8))))
                                              + (float)(v16
                                                      * (float)((float)((float)((float)(v5 * v12) * v9)
                                                                      + (float)((float)(v10 * v4) * v11))
                                                              + (float)((float)(v7 * v2) * v13))))
                                      + (float)(v17
                                              * (float)((float)((float)((float)(v10 * v2) * v8)
                                                              + (float)((float)(v5 * v6) * v13))
                                                      + (float)((float)(v3 * v12) * v11))))
                              - (float)(v15
                                      * (float)((float)((float)((float)(v3 * v12) * v9) + (float)((float)(v10 * v4) * v8))
                                              + (float)((float)(v7 * v6) * v13))))
                      - (float)(v14
                              * (float)((float)((float)((float)(v5 * v6) * v9) + (float)((float)(v3 * v4) * v11))
                                      + (float)((float)(v7 * v2) * v8))))
              - (float)(v16
                      * (float)((float)((float)((float)(v10 * v2) * v9) + (float)((float)(v5 * v4) * v13))
                              + (float)((float)(v7 * v12) * v11))))
      - (float)(v17
              * (float)((float)((float)((float)(v5 * v12) * v8) + (float)((float)(v10 * v6) * v11))
                      + (float)((float)(v3 * v2) * v13)));
  if ( v22 != 0.0 )
  {
    v23 = (float)(v6 * v9) - (float)(v4 * v8);
    v24 = (float)(v12 * v9) - (float)(v4 * v13);
    v39 = v5 * v6;
    v38 = v5 * v4;
    v40 = v5 * v12;
    v25 = (float)(v3 * v9) - (float)(v7 * v8);
    v18 = 1;
    v26 = (float)(v3 * v12) - (float)(v10 * v6);
    v27 = 1.0 / v22;
    v28 = (float)(v7 * v13) - (float)(v10 * v9);
    v29 = (float)(v6 * v13) - (float)(v12 * v8);
    v41 = (float)(v10 * v8) - (float)(v3 * v13);
    v30 = (float)(v6 * v11) - (float)(v2 * v8);
    v31 = (float)(v12 * v11) - (float)(v2 * v13);
    v32 = (float)(v5 * v13) - (float)(v10 * v11);
    *a1 = (float)((float)((float)(v10 * v23) - (float)(v3 * v24)) - (float)(v7 * v29)) * v27;
    a1[1] = (float)((float)((float)(v16 * v24) + (float)(v17 * v29)) - (float)(v14 * v23)) * v27;
    v33 = v19 - (float)(v3 * v4);
    a1[2] = (float)((float)((float)(v16 * v28) + (float)(v14 * v25)) + (float)(v17 * v41)) * v27;
    a1[3] = (float)((float)((float)(v16 * (float)(v21 - v20)) + (float)(v14 * v33)) + (float)(v17 * v26)) * v27;
    v34 = (float)(v2 * v9) - (float)(v4 * v11);
    a1[4] = (float)((float)((float)(v3 * v34) + (float)(v7 * v30)) - (float)(v5 * v23)) * v27;
    a1[5] = (float)((float)((float)(v15 * v23) - (float)(v16 * v34)) - (float)(v17 * v30)) * v27;
    v35 = (float)(v3 * v11) - (float)(v5 * v8);
    v36 = (float)(v5 * v9) - (float)(v7 * v11);
    a1[6] = (float)((float)((float)(v16 * v36) + (float)(v17 * v35)) - (float)(v15 * v25)) * v27;
    a1[7] = (float)((float)((float)(v16 * (float)((float)(v7 * v2) - v38))
                          + (float)(v17 * (float)(v39 - (float)(v3 * v2))))
                  - (float)(v15 * v33))
          * v27;
    a1[8] = (float)((float)((float)(v5 * v24) - (float)(v10 * v34)) - (float)(v7 * v31)) * v27;
    a1[9] = (float)((float)((float)(v14 * v34) + (float)(v17 * v31)) - (float)(v15 * v24)) * v27;
    a1[10] = (float)((float)((float)(v17 * v32) - (float)(v15 * v28)) - (float)(v14 * v36)) * v27;
    a1[11] = (float)((float)((float)(v17 * (float)((float)(v10 * v2) - v40)) - (float)(v15 * (float)(v21 - v20)))
                   - (float)(v14 * (float)((float)(v7 * v2) - v38)))
           * v27;
    a1[12] = (float)((float)((float)(v5 * v29) - (float)(v10 * v30)) + (float)(v3 * v31)) * v27;
    a1[13] = (float)((float)((float)(v14 * v30) - (float)(v16 * v31)) - (float)(v15 * v29)) * v27;
    a1[14] = (float)((float)((float)-(float)(v16 * v32) - (float)(v15 * v41)) - (float)(v14 * v35)) * v27;
    a1[15] = (float)((float)((float)-(float)(v16 * (float)((float)(v10 * v2) - v40)) - (float)(v15 * v26))
                   - (float)(v14 * (float)(v39 - (float)(v3 * v2))))
           * v27;
  }
  return v18;
}
