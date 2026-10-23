/* sub_60796828
 * address: 0x60796828   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60796828(int a1)
{
  int v2; // r5
  int v3; // r0
  float v4; // s16
  float v5; // r8
  float v6; // r9
  unsigned int v7; // r7
  unsigned int v8; // r6
  unsigned int v9; // r5
  float v10; // r10
  int v11; // r0
  int v12; // r1
  float v13; // s0
  float v14; // s27
  float v15; // s29
  float v16; // s31
  float *v17; // r0
  float *v18; // r1
  float *v19; // r3
  float v20; // s16
  float v21; // s26
  float v22; // s18
  float v23; // s28
  float v24; // s22
  float v25; // s30
  float v26; // s20
  float v27; // s17
  float v28; // s19
  float v29; // s21
  float v30; // s24
  float v31; // s23
  float v32; // s25
  float v33; // s0
  float v34; // s4
  float v35; // s2
  float v36; // s24
  float v37; // s20
  float v38; // s22
  float v39; // s19
  float v40; // s16
  float v41; // s18
  float v42; // s0
  float v43; // s2
  float v44; // s0
  float v46[12]; // [sp+4h] [bp-9Ch] BYREF
  float v47[27]; // [sp+34h] [bp-6Ch] BYREF

  sub_607B73BC();
  v2 = FIELD_U32(a1, 160);
  v3 = sub_607BA5CC(a1);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 116);
  v6 = FIELD_F32(a1, 108);
  v7 = FIELD_U32(a1, 164);
  v8 = FIELD_U32(a1, 156);
  v9 = v3 + v2;
  v10 = v4;
  v11 = sub_607B7028(a1);
  if ( v11 )
  {
    v12 = FIELD_U32(a1, 1320);
    if ( !v12 )
    {
      v13 = sub_60782500(FIELD_U32(v11, 1316), FIELD_U32(v11, 1320));
      goto LABEL_6;
    }
    if ( v12 == 3 )
    {
      v13 = sub_607824B8(FIELD_U32(v11, 1316), FIELD_U32(v11, 1320));
LABEL_6:
      v10 = v4 + v13;
    }
  }
  v46[3] = v6;
  v46[7] = v10;
  v46[11] = v5;
  v14 = FIELD_F32(a1, 144);
  v15 = FIELD_F32(a1, 148);
  v16 = FIELD_F32(a1, 152);
  v17 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
  v18 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v19 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
  v20 = *v17;
  v21 = v17[1];
  v22 = v17[2];
  v23 = v17[3];
  v24 = *v19;
  v25 = v19[1];
  v26 = v19[2];
  v27 = v19[3];
  v28 = *v18;
  v29 = v18[1];
  v30 = v18[2];
  v31 = v18[3];
  v32 = FIELD_F32(a1, 12028);
  sub_6076628C(a1, v47);
  v33 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v34 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
  v35 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
  v36 = v30 + (float)(v33 * v31);
  v37 = v26 + (float)(v34 * v27);
  v38 = v24 + (float)(v34 * v25);
  v39 = v28 + (float)(v33 * v29);
  v40 = v20 + (float)(v35 * v21);
  v41 = v22 + (float)(v35 * v23);
  v42 = (float)(v32 * v14) * v47[0];
  v46[0] = v42 * (float)((float)(v37 * v36) + (float)(v40 * (float)(v38 * v39)));
  v43 = (float)(v32 * v15) * v47[1];
  v46[4] = v42 * (float)(v41 * v39);
  v46[8] = v42 * (float)((float)(v40 * (float)(v37 * v39)) - (float)(v38 * v36));
  v44 = (float)(v32 * v16) * v47[2];
  v46[1] = v43 * (float)((float)(v40 * (float)(v38 * v36)) - (float)(v37 * v39));
  v46[5] = v43 * (float)(v41 * v36);
  v46[9] = v43 * (float)((float)(v38 * v39) + (float)(v40 * (float)(v37 * v36)));
  v46[2] = v44 * (float)(v41 * v38);
  v46[6] = -(float)(v40 * v44);
  v46[10] = v44 * (float)(v41 * v37);
  return ((int (__fastcall *)(_DWORD, float *))loc_60793FF0)(FIELD_U32(a1, 11360), v46);
}
