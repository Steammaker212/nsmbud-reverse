/* sub_607EE67C
 * address: 0x607EE67C   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EE67C(int a1, _DWORD *a2)
{
  int v4; // r0
  float *v5; // r0
  float v6; // s2
  float v7; // s6
  int v8; // r0
  _DWORD v10[3]; // [sp+0h] [bp-78h] BYREF
  float v11; // [sp+Ch] [bp-6Ch]
  float v12; // [sp+10h] [bp-68h]
  int v13; // [sp+14h] [bp-64h]
  int v14; // [sp+18h] [bp-60h]
  int v15; // [sp+1Ch] [bp-5Ch]
  int v16; // [sp+20h] [bp-58h]
  int v17; // [sp+24h] [bp-54h]
  int v18; // [sp+28h] [bp-50h]
  int v19; // [sp+2Ch] [bp-4Ch]
  int v20; // [sp+30h] [bp-48h]
  char v21; // [sp+34h] [bp-44h]
  _DWORD v22[4]; // [sp+3Ch] [bp-3Ch] BYREF
  _BYTE v23[44]; // [sp+4Ch] [bp-2Ch] BYREF

  v4 = sub_608F4C38(v23, a2[10]);
  sub_608F4CA8(v4, a2[6]);
  sub_608F4CBC(v23, a2[7]);
  sub_608F4CDC(v23, &qword_60B3B8CC);
  sub_608F4CE4(v23);
  v22[0] = 1056964608;
  v22[1] = 1056964608;
  v22[2] = 1065353216;
  v22[3] = 1065353216;
  memset(v10, 0, sizeof(v10));
  v11 = 1.0;
  v12 = 1.0;
  v13 = 1065353216;
  v14 = 1065353216;
  v15 = 1065353216;
  v16 = 1065353216;
  v20 = 1065353216;
  v17 = 1065353216;
  v18 = 1065353216;
  v19 = 1065353216;
  v21 = 0;
  v5 = (float *)a2[8];
  v6 = v5[2];
  v7 = v5[4];
  v11 = v5[3] - v5[1];
  v12 = v7 - v6;
  v8 = sub_608F4D80(v10, v22, v22, 1065353216);
  sub_608F4E18(v23, v8);
  sub_608F4D1C(v23);
  sub_60542C10(a1 + 63184, a2);
  sub_60538E28(dword_60CAADA8, a2);
  sub_6053F07C(dword_60CAB438, a2);
  sub_6055BE74(a1 + 1060, a2);
  sub_60515A34((_BYTE *)(a1 + 14376), a2);
  sub_604ABE10(dword_60CA146C, a2);
  return nullsub_108(v23);
}
