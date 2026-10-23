/* sub_607CBD7C
 * address: 0x607CBD7C   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607CBD7C(int a1)
{
  unsigned int v2; // r5
  unsigned int v3; // r6
  unsigned int v4; // r7
  float *v5; // r1
  float *v6; // r0
  float *v7; // r2
  float v8; // s16
  float v9; // s17
  float v10; // s18
  float v11; // s19
  float v12; // s22
  float v13; // s21
  float v14; // s20
  float v15; // s23
  float v16; // s26
  float v17; // s25
  float v18; // s24
  float v19; // s27
  float v20; // s29
  float v21; // s30
  float v22; // s28
  float v23; // s2
  float v24; // s4
  float v25; // s0
  float v26; // s24
  float v27; // s20
  float v28; // s26
  float v29; // s22
  float v30; // s18
  float v31; // s16
  int v32; // r0
  _DWORD *result; // r0
  bool v34; // zf
  float v35; // [sp+4h] [bp-94h] BYREF
  float v36; // [sp+8h] [bp-90h]
  float v37; // [sp+Ch] [bp-8Ch]
  float v38[34]; // [sp+10h] [bp-88h] BYREF

  if ( (FIELD_U8(a1, 1209) & 2) != 0 )
    sub_6077059C(a1);
  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v6 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v7 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v8 = *v5;
  v9 = v5[1];
  v10 = v5[2];
  v11 = v5[3];
  v38[3] = FIELD_F32(a1, 108);
  v12 = *v6;
  v13 = v6[1];
  v14 = v6[2];
  v15 = v6[3];
  v16 = *v7;
  v17 = v7[1];
  v18 = v7[2];
  v19 = v7[3];
  v38[7] = FIELD_F32(a1, 112);
  v38[11] = FIELD_F32(a1, 116);
  v20 = FIELD_F32(a1, 144);
  v21 = FIELD_F32(a1, 148);
  v22 = FIELD_F32(a1, 152);
  v35 = 1.0;
  v36 = 1.0;
  v37 = 1.0;
  sub_6076628C(a1, &v35);
  v23 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v24 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v25 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v26 = v18 + (float)(v23 * v19);
  v27 = v14 + (float)(v24 * v15);
  v28 = v16 + (float)(v23 * v17);
  v29 = v12 + (float)(v24 * v13);
  v30 = v10 + (float)(v25 * v11);
  v31 = v8 + (float)(v25 * v9);
  v38[0] = (float)((float)(v27 * v26) * v20) * v35;
  v38[4] = v35 * (float)(v20 * (float)(v27 * v28));
  v38[8] = -(float)((float)(v29 * v20) * v35);
  v38[1] = (float)((float)((float)((float)(v31 * v29) * v26) - (float)(v30 * v28)) * v21) * v36;
  v38[5] = v36 * (float)(v21 * (float)((float)(v30 * v26) + (float)((float)(v31 * v29) * v28)));
  v38[9] = (float)((float)(v31 * v27) * v21) * v36;
  v38[2] = (float)((float)((float)(v29 * (float)(v30 * v26)) + (float)(v31 * v28)) * v22) * v37;
  v38[6] = v37 * (float)(v22 * (float)((float)(v29 * (float)(v30 * v28)) - (float)(v31 * v26)));
  v38[10] = (float)((float)(v30 * v27) * v22) * v37;
  ((void (__fastcall *)(_DWORD, float *))loc_60793FF0)(FIELD_U32(a1, 11368), v38);
  v32 = FIELD_U32(a1, 1236);
  if ( (v32 & 0x40000) != 0 )
  {
    tongue_tip_ref(a1);
    sub_607D19F8(a1);
    v32 = FIELD_U32(a1, 1236);
  }
  if ( (v32 & 0x80000) != 0 )
  {
    FIELD_U32(a1, 1236) = v32 & 0xFFF7FFFF;
    tongue_1_ref(a1);
  }
  result = (_DWORD *)sub_607CFB50(a1);
  v34 = result == 0;
  if ( result )
  {
    result = (_DWORD *)result[155];
    v34 = result == 0;
  }
  if ( !v34 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int))(*result + 12))(result, a1);
  return result;
}
