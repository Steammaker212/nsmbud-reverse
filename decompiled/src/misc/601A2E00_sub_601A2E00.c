/* sub_601A2E00
 * address: 0x601A2E00   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A2E00(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r0
  float *v7; // r0
  float v8; // s2
  float v9; // s6
  int v10; // r0
  _DWORD v11[3]; // [sp+0h] [bp-E0h] BYREF
  float v12; // [sp+Ch] [bp-D4h]
  float v13; // [sp+10h] [bp-D0h]
  int v14; // [sp+14h] [bp-CCh]
  int v15; // [sp+18h] [bp-C8h]
  int v16; // [sp+1Ch] [bp-C4h]
  int v17; // [sp+20h] [bp-C0h]
  int v18; // [sp+24h] [bp-BCh]
  int v19; // [sp+28h] [bp-B8h]
  int v20; // [sp+2Ch] [bp-B4h]
  int v21; // [sp+30h] [bp-B0h]
  char v22; // [sp+34h] [bp-ACh]
  _DWORD v23[4]; // [sp+3Ch] [bp-A4h] BYREF
  _BYTE v24[20]; // [sp+4Ch] [bp-94h] BYREF
  _BYTE v25[4]; // [sp+60h] [bp-80h] BYREF
  int v26; // [sp+64h] [bp-7Ch]

  sub_604FAC64(a1 + 149128);
  sub_603F808C(dword_60C99DD0, a2);
  sub_60401F74(dword_60C99E68, a2);
  result = FIELD_U8(a1, 64990);
  if ( FIELD_U8(a1, 64990) )
  {
    v5 = sub_6090B350(v25);
    v26 |= 1u;
    sub_6090B4B0(v5, a2[10]);
    v6 = sub_608F4C38(v24, a2[10]);
    sub_608F4CA8(v6, a2[6]);
    sub_608F4CBC(v24, a2[7]);
    sub_608F4CDC(v24, &qword_60B3B8CC);
    sub_608F4CE4(v24);
    memset(v23, 0, 12);
    v23[3] = 1132396544;
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
    v10 = ((int (__fastcall *)(_DWORD *, _DWORD *, _DWORD *))sub_608F4D80)(v11, v23, v23);
    sub_608F4E18(v24, v10);
    sub_608F4D1C(v24);
    return nullsub_108(v24);
  }
  return result;
}
