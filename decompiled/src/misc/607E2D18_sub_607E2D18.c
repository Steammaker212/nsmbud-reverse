/* sub_607E2D18
 * address: 0x607E2D18   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E2D18(int a1, _DWORD *a2)
{
  int v3; // r0
  float *v4; // r0
  float v5; // s2
  float v6; // s6
  int v7; // r0
  _DWORD v9[3]; // [sp+0h] [bp-4Ch] BYREF
  float v10; // [sp+Ch] [bp-40h]
  float v11; // [sp+10h] [bp-3Ch]
  int v12; // [sp+14h] [bp-38h]
  int v13; // [sp+18h] [bp-34h]
  int v14; // [sp+1Ch] [bp-30h]
  int v15; // [sp+20h] [bp-2Ch]
  int v16; // [sp+24h] [bp-28h]
  int v17; // [sp+28h] [bp-24h]
  int v18; // [sp+2Ch] [bp-20h]
  int v19; // [sp+30h] [bp-1Ch]
  char v20; // [sp+34h] [bp-18h]
  _DWORD v21[4]; // [sp+3Ch] [bp-10h] BYREF
  _BYTE v22[20]; // [sp+4Ch] [bp+0h] BYREF

  v3 = sub_608F4C38(v22, a2[10]);
  sub_608F4CA8(v3, a2[6]);
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
  v4 = (float *)a2[8];
  v5 = v4[2];
  v6 = v4[4];
  v10 = v4[3] - v4[1];
  v11 = v6 - v5;
  v7 = sub_608F4D80(v9, v21, v21, 1065353216);
  sub_608F4E18(v22, v7);
  sub_608F4D1C(v22);
  nullsub_108(v22);
  sub_603F68B4(dword_60C99DB8, (int)a2);
  sub_603F808C(dword_60C99DD0);
  return sub_60401F74(dword_60C99E68, (int)a2);
}
