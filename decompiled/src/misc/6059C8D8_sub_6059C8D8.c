/* sub_6059C8D8
 * address: 0x6059C8D8   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059C8D8(int a1)
{
  unsigned int v2; // r5
  unsigned int v3; // r6
  unsigned int v4; // r7
  float v5; // s20
  float v6; // s18
  float v7; // s16
  float *v8; // r3
  float *v9; // r1
  float *v10; // r0
  float v11; // s28
  float v12; // s19
  float v13; // s26
  float v14; // s21
  float v15; // s22
  float v16; // s30
  float v17; // s24
  float v18; // s17
  float v19; // s23
  float v20; // s25
  float v21; // s27
  float v22; // s29
  float v23; // s0
  float v24; // s4
  float v25; // s2
  float v26; // s28
  float v27; // s27
  float v28; // s26
  float v29; // s23
  float v30; // s22
  float v31; // s24
  float v32; // s2
  float v33; // s1
  float v34; // s8
  float v35; // s0
  float v37; // [sp+4h] [bp-94h] BYREF
  float v38; // [sp+8h] [bp-90h]
  float v39; // [sp+Ch] [bp-8Ch]
  float v40[2]; // [sp+10h] [bp-88h] BYREF
  float v41; // [sp+18h] [bp-80h]
  float v42; // [sp+1Ch] [bp-7Ch]
  float v43; // [sp+20h] [bp-78h]
  float v44; // [sp+24h] [bp-74h]
  float v45; // [sp+28h] [bp-70h]
  float v46; // [sp+2Ch] [bp-6Ch]
  float v47; // [sp+30h] [bp-68h]
  float v48; // [sp+34h] [bp-64h]
  float v49; // [sp+38h] [bp-60h]
  float v50; // [sp+3Ch] [bp-5Ch]

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 108);
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_F32(a1, 116);
  v8 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v11 = *v8;
  v12 = v8[1];
  v13 = v8[2];
  v14 = v8[3];
  v15 = *v10;
  v16 = v10[1];
  v17 = v10[2];
  v18 = v10[3];
  v19 = *v9;
  v20 = v9[1];
  v21 = v9[2];
  v22 = v9[3];
  sub_605C6BE4(a1, &v37);
  v23 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v24 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v25 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v26 = v11 + (float)(v24 * v12);
  v27 = v21 + (float)(v23 * v22);
  v28 = v13 + (float)(v24 * v14);
  v29 = v19 + (float)(v23 * v20);
  v30 = v15 + (float)(v25 * v16);
  v31 = v17 + (float)(v25 * v18);
  v32 = (float)(v28 * v27) + (float)(v30 * (float)(v26 * v29));
  v33 = (float)(v30 * (float)(v28 * v29)) - (float)(v26 * v27);
  v34 = (float)(v30 * (float)(v26 * v27)) - (float)(v28 * v29);
  v35 = (float)(v26 * v29) + (float)(v30 * (float)(v28 * v27));
  v40[0] = v32 * v37;
  v43 = v37 * (float)(v31 * v29);
  v47 = v33 * v37;
  v40[1] = v34 * v38;
  v44 = v38 * (float)(v31 * v27);
  v48 = v35 * v38;
  v41 = (float)(v31 * v26) * v39;
  v45 = -(float)(v30 * v39);
  v49 = (float)(v31 * v28) * v39;
  v42 = (float)(v5 + (float)((float)((float)(v34 * 0.0) - (float)(v32 * 7.85)) + (float)((float)(v31 * v26) * 0.0)))
      + (float)((float)((float)((float)(v34 * v38) * 0.0) + (float)((float)(v32 * v37) * 7.85)) + (float)(v41 * 0.0));
  v46 = (float)(v6
              + (float)((float)((float)((float)(v31 * v27) * 0.0) - (float)((float)(v31 * v29) * 7.85))
                      + (float)(v30 * -0.0)))
      + (float)((float)((float)(v44 * 0.0) + (float)(v43 * 7.85)) + (float)((float)(v30 * v39) * -0.0));
  v50 = (float)(v7 + (float)((float)((float)(v35 * 0.0) - (float)(v33 * 7.85)) + (float)((float)(v31 * v28) * 0.0)))
      + (float)((float)((float)((float)(v35 * v38) * 0.0) + (float)((float)(v33 * v37) * 7.85)) + (float)(v49 * 0.0));
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6120) + 60))(**(_DWORD **)(a1 + 6120), v40);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6120));
}
