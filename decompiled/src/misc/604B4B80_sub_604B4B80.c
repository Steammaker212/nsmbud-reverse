/* sub_604B4B80
 * address: 0x604B4B80   size: 864   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_604B4B80(int a1)
{
  _BYTE *result; // r0
  int v3; // t1
  float *v4; // r1
  float v5; // s4
  float v6; // s6
  float v7; // s2
  float v8; // s0
  float *v9; // r1
  float v10; // s4
  float v11; // s6
  float v12; // s2
  float v13; // s0
  int v14; // r1
  int v15; // r2
  int v16; // r0
  int v17; // r3
  float v18; // s4
  float v19; // s6
  float v20; // s0
  float v21; // s2
  int v22; // r2
  int v23; // r3
  float v24; // s4
  float v25; // s6
  float v26; // s0
  float v27; // s2
  int v28; // r0
  int v29; // r1
  int v30; // r2
  float v31; // s0
  float v32; // s4
  float v33; // s2
  float v34; // s6
  int v35; // r0
  int v36; // r1
  float v37; // s2
  int v38; // r0
  float v39; // s6
  float v40; // s6
  float v41; // s0
  float v42; // s10
  float v43; // s0
  float v44; // s2
  float v45; // [sp+0h] [bp-20h] BYREF
  float v46; // [sp+4h] [bp-1Ch]
  float v47; // [sp+8h] [bp-18h] BYREF
  float v48; // [sp+Ch] [bp-14h]

  v3 = FIELD_U8(a1, 14939);
  result = (_BYTE *)(a1 + 14939);
  if ( !v3 )
  {
    v4 = *(float **)(a1 + 556);
    v5 = v4[23];
    v6 = v4[27];
    v7 = v4[14] * 0.5;
    v8 = v4[15] * 0.5;
    FIELD_F32(a1, 14804) = v5 - v7;
    FIELD_F32(a1, 14808) = v6 - v8;
    FIELD_F32(a1, 14812) = v5 + v7;
    FIELD_F32(a1, 14816) = v6 + v8;
    v9 = *(float **)(a1 + 560);
    v10 = v9[23];
    v11 = v9[27];
    v12 = v9[14] * 0.5;
    v13 = v9[15] * 0.5;
    FIELD_F32(a1, 14820) = v10 - v12;
    FIELD_F32(a1, 14824) = v11 - v13;
    FIELD_F32(a1, 14828) = v10 + v12;
    FIELD_F32(a1, 14832) = v11 + v13;
    *result = 1;
    v14 = FIELD_U32(a1, 532);
    v15 = FIELD_U32(a1, 600);
    v16 = FIELD_U32(a1, 580);
    v17 = FIELD_U32(a1, 616);
    v18 = FIELD_F32(v17, 56) * 0.5;
    v19 = FIELD_F32(v17, 60) * 0.5;
    v20 = FIELD_F32(v16, 24) + (float)(FIELD_F32(v15, 24) + FIELD_F32(v14, 24));
    v21 = FIELD_F32(v16, 28) + (float)(FIELD_F32(v15, 28) + FIELD_F32(v14, 28));
    FIELD_F32(a1, 14836) = v20 - v18;
    FIELD_F32(a1, 14840) = v21 - v19;
    FIELD_F32(a1, 14844) = v20 + v18;
    FIELD_F32(a1, 14848) = v21 + v19;
    v22 = FIELD_U32(a1, 604);
    v23 = FIELD_U32(a1, 620);
    v24 = FIELD_F32(v23, 56) * 0.5;
    v25 = FIELD_F32(v23, 60) * 0.5;
    v26 = FIELD_F32(v16, 24) + (float)(FIELD_F32(v22, 24) + FIELD_F32(v14, 24));
    v27 = FIELD_F32(v16, 28) + (float)(FIELD_F32(v22, 28) + FIELD_F32(v14, 28));
    FIELD_F32(a1, 14852) = v26 - v24;
    FIELD_F32(a1, 14856) = v27 - v25;
    FIELD_F32(a1, 14860) = v26 + v24;
    FIELD_F32(a1, 14864) = v27 + v25;
    v28 = FIELD_U32(a1, 572);
    v29 = FIELD_U32(a1, 608);
    v30 = FIELD_U32(a1, 624);
    v31 = FIELD_F32(v30, 56) * 0.5;
    v32 = FIELD_F32(v29, 24) + FIELD_F32(v28, 24);
    v33 = FIELD_F32(v30, 60) * 0.5;
    v34 = FIELD_F32(v29, 28) + FIELD_F32(v28, 28);
    FIELD_F32(a1, 14868) = v32 - v31;
    FIELD_F32(a1, 14872) = v34 - v33;
    FIELD_F32(a1, 14876) = v31 + v32;
    FIELD_F32(a1, 14880) = v33 + v34;
    v35 = FIELD_U32(a1, 576);
    v36 = FIELD_U32(a1, 612);
    v37 = FIELD_F32(v36, 28) + FIELD_F32(v35, 28);
    v47 = FIELD_F32(v36, 24) + FIELD_F32(v35, 24);
    v48 = v37;
    v38 = FIELD_U32(a1, 628);
    v39 = FIELD_F32(v38, 60);
    v45 = FIELD_F32(v38, 56);
    v46 = v39;
    v40 = v39 * 0.5;
    v41 = (float)(v45 * 0.5) + v47;
    FIELD_F32(a1, 14884) = v47 - (float)(v45 * 0.5);
    FIELD_F32(a1, 14888) = v37 - v40;
    FIELD_F32(a1, 14892) = v41;
    FIELD_F32(a1, 14896) = v40 + v37;
    sub_604B1F88((_DWORD *)dword_60CA1910, &v47, &v45);
    v42 = v48 - (float)(v46 * 0.5);
    v43 = v47 + (float)(v45 * 0.5);
    v44 = v48 + (float)(v46 * 0.5);
    FIELD_F32(a1, 14900) = v47 - (float)(v45 * 0.5);
    FIELD_F32(a1, 14904) = v42;
    FIELD_F32(a1, 14908) = v43;
    FIELD_F32(a1, 14912) = v44;
    return (_BYTE *)(a1 + 14908);
  }
  return result;
}
