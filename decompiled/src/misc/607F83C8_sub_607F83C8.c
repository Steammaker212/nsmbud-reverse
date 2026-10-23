/* sub_607F83C8
 * address: 0x607F83C8   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607F83C8(int a1, _DWORD *a2)
{
  int v4; // r0
  float *v5; // r0
  float v6; // s2
  float v7; // s6
  int v8; // r0
  _DWORD v9[3]; // [sp+0h] [bp-78h] BYREF
  float v10; // [sp+Ch] [bp-6Ch]
  float v11; // [sp+10h] [bp-68h]
  int v12; // [sp+14h] [bp-64h]
  int v13; // [sp+18h] [bp-60h]
  int v14; // [sp+1Ch] [bp-5Ch]
  int v15; // [sp+20h] [bp-58h]
  int v16; // [sp+24h] [bp-54h]
  int v17; // [sp+28h] [bp-50h]
  int v18; // [sp+2Ch] [bp-4Ch]
  int v19; // [sp+30h] [bp-48h]
  char v20; // [sp+34h] [bp-44h]
  _DWORD v21[4]; // [sp+3Ch] [bp-3Ch] BYREF
  _BYTE v22[44]; // [sp+4Ch] [bp-2Ch] BYREF

  v4 = sub_608F4C38(v22, a2[10]);
  sub_608F4CA8(v4, a2[6]);
  sub_608F4CBC(v22, a2[7]);
  sub_608F4CDC(v22, &qword_60B3B8CC);
  sub_608F4CE4(v22);
  memset(v21, 0, 12);
  v21[3] = 1132396544;
  memset(v9, 0, sizeof(v9));
  v10 = 1.0;
  v11 = 1.0;
  v12 = 1065353216;
  v13 = 1065353216;
  v14 = 1065353216;
  v15 = 1065353216;
  v19 = 1065353216;
  v16 = 1065353216;
  v17 = 1065353216;
  v18 = 1065353216;
  v20 = 0;
  v5 = (float *)a2[8];
  v6 = v5[2];
  v7 = v5[4];
  v10 = v5[3] - v5[1];
  v11 = v7 - v6;
  v8 = sub_608F4D80(v9, v21, v21, 1065353216);
  sub_608F4E18(v22, v8);
  sub_608F4D1C(v22);
  sub_60559478(a1 + 232, a2);
  JUMPOUT(0x604B7F78);
}
