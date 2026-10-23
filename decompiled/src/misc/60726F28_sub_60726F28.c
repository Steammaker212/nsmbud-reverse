/* sub_60726F28
 * address: 0x60726F28   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60726F28(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r0
  float v13; // [sp+8h] [bp-108h] BYREF
  float v14; // [sp+Ch] [bp-104h]
  int v15; // [sp+10h] [bp-100h]
  int v16; // [sp+14h] [bp-FCh]
  int v17; // [sp+18h] [bp-F8h] BYREF
  int v18; // [sp+1Ch] [bp-F4h]
  int v19; // [sp+20h] [bp-F0h]
  int v20; // [sp+24h] [bp-ECh]
  int v21; // [sp+28h] [bp-E8h]
  int v22; // [sp+2Ch] [bp-E4h]
  int v23; // [sp+30h] [bp-E0h]
  int v24; // [sp+34h] [bp-DCh]
  int v25; // [sp+38h] [bp-D8h]
  int v26; // [sp+3Ch] [bp-D4h]
  int v27; // [sp+40h] [bp-D0h]
  int v28; // [sp+44h] [bp-CCh]
  int v29; // [sp+48h] [bp-C8h]
  char v30; // [sp+4Ch] [bp-C4h]
  _BYTE v31[20]; // [sp+54h] [bp-BCh] BYREF
  __int16 v32; // [sp+68h] [bp-A8h] BYREF
  int v33; // [sp+6Ch] [bp-A4h]
  __int16 v34; // [sp+C0h] [bp-50h]
  float v35; // [sp+D0h] [bp-40h] BYREF
  float v36; // [sp+D4h] [bp-3Ch]

  v4 = sub_6090B350(&v32);
  v32 = 257;
  v34 = 8;
  v33 &= ~1u;
  sub_6090B4B0(v4, FIELD_U32(a2, 40));
  v5 = sub_608F4C38(v31, FIELD_U32(a2, 40));
  sub_608F4CBC(v5, a1 + 44);
  sub_608F4CA8(v31, a1 + 216);
  sub_608F4CDC(v31, &qword_60B3B8CC);
  sub_608F4CE4(v31);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 1065353216;
  v21 = 1065353216;
  v22 = 1065353216;
  v23 = 1065353216;
  v24 = 1065353216;
  v25 = 1065353216;
  v29 = 1065353216;
  v26 = 1065353216;
  v27 = 1065353216;
  v28 = 1065353216;
  v30 = 0;
  v35 = 64.0;
  v36 = 64.0;
  v13 = (float)30 * 64.0;
  v14 = 512.0 - (float)((float)1 * 64.0);
  v15 = -998653952;
  v6 = sub_608F4D40(&v17, &v13, &v35);
  v13 = 1.0;
  v14 = 0.0;
  v15 = 0;
  v16 = 0;
  v8 = sub_608F4D80(v6, &v13, &v13, v7);
  sub_608F4E18(v31, v8);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 1065353216;
  v21 = 1065353216;
  v22 = 1065353216;
  v23 = 1065353216;
  v24 = 1065353216;
  v25 = 1065353216;
  v26 = 1065353216;
  v27 = 1065353216;
  v28 = 1065353216;
  v29 = 1065353216;
  v30 = 0;
  v35 = 64.0;
  v36 = 64.0;
  v13 = (float)15 * 64.0;
  v14 = 512.0 - (float)((float)2 * 64.0);
  v15 = -998653952;
  v9 = sub_608F4D40(&v17, &v13, &v35);
  v13 = 1.0;
  v14 = 0.0;
  v15 = 0;
  v16 = 0;
  v11 = sub_608F4D80(v9, &v13, &v13, v10);
  sub_608F4E18(v31, v11);
  sub_608F4D1C(v31);
  return nullsub_108(v31);
}
