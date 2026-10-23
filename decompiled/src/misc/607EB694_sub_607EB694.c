/* sub_607EB694
 * address: 0x607EB694   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EB694(int a1, _DWORD *a2)
{
  int v4; // r0
  int result; // r0
  int v6; // r0
  float *v7; // r0
  float v8; // s2
  float v9; // s6
  int v10; // r0
  _DWORD v11[3]; // [sp+0h] [bp-D8h] BYREF
  float v12; // [sp+Ch] [bp-CCh]
  float v13; // [sp+10h] [bp-C8h]
  int v14; // [sp+14h] [bp-C4h]
  int v15; // [sp+18h] [bp-C0h]
  int v16; // [sp+1Ch] [bp-BCh]
  int v17; // [sp+20h] [bp-B8h]
  int v18; // [sp+24h] [bp-B4h]
  int v19; // [sp+28h] [bp-B0h]
  int v20; // [sp+2Ch] [bp-ACh]
  int v21; // [sp+30h] [bp-A8h]
  char v22; // [sp+34h] [bp-A4h]
  _BYTE v23[12]; // [sp+38h] [bp-A0h] BYREF
  int v24; // [sp+44h] [bp-94h]
  _BYTE v25[20]; // [sp+4Ch] [bp-8Ch] BYREF
  char v26; // [sp+60h] [bp-78h] BYREF

  v4 = sub_6090B350(&v26);
  sub_6090B4B0(v4, a2[10]);
  result = FIELD_U8(a1, 64540);
  if ( FIELD_U8(a1, 64540) )
  {
    v6 = sub_608F4C38(v25, a2[10]);
    sub_608F4CA8(v6, a2[6]);
    sub_608F4CBC(v25, a2[7]);
    sub_608F4CDC(v25, &qword_60B3B8CC);
    sub_608F4CE4(v25);
    v24 = 1065353216;
    memset(v23, 0, sizeof(v23));
    memset(v11, 0, sizeof(v11));
    v12 = 1.0;
    v13 = 1.0;
    v14 = 1065353216;
    v15 = 1065353216;
    v16 = 1065353216;
    v17 = 1065353216;
    v21 = 1065353216;
    v18 = 1065353216;
    v19 = 1065353216;
    v20 = 1065353216;
    v22 = 0;
    v7 = (float *)a2[8];
    v8 = v7[2];
    v9 = v7[4];
    v12 = v7[3] - v7[1];
    v13 = v9 - v8;
    v10 = sub_608F4D80(v11, v23, v23, 1065353216);
    sub_608F4E18(v25, v10);
    sub_608F4D1C(v25);
    return nullsub_108(v25);
  }
  return result;
}
