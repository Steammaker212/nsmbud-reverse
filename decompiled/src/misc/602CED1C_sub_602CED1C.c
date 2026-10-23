/* sub_602CED1C
 * address: 0x602CED1C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602CED1C(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r6
  float v7; // s16
  float v8; // s18
  float v9; // s24
  int v10; // s22
  _DWORD *v11; // r5
  float v12; // s22
  _DWORD *v13; // r6
  _DWORD *v14; // r5
  int v15; // r0
  _DWORD *result; // r0
  int v17; // [sp+4h] [bp-4Ch] BYREF
  int v18; // [sp+8h] [bp-48h]
  int v19; // [sp+Ch] [bp-44h]

  v2 = FIELD_U32(a1, 80);
  v17 = 0;
  v18 = (unsigned __int8)byte_60AFE3F4[v2] << 29;
  v19 = 0;
  sub_602D17E0(a1 + 6316, (float *)(a1 + 108), &v17);
  v3 = FIELD_U32(a1, 80);
  v4 = (unsigned __int8)byte_60AFE3F4[v3];
  v5 = byte_60AFE3F4[v3 ^ 1];
  v6 = v4 << 30;
  v18 = v4 << 30;
  v7 = FIELD_F32(a1, 6332);
  v8 = FIELD_F32(a1, 6328);
  v9 = FIELD_F32(a1, 6324);
  v10 = v5;
  v11 = (_DWORD *)operator_new(0x80u);
  v12 = (float)v10 * 10.5;
  sub_602D1614((int)v11, v17, v6, v19, v12 + v9, v8, v7, a1);
  *v11 = &off_60BE631C;
  v11[31] = 0;
  FIELD_U32(a1, 6436) = v11;
  v13 = (_DWORD *)operator_new(0x80u);
  sub_602D1614((int)v13, v17, v18, v19, v12 + (float)(v12 + v9), v8, v7, a1);
  *v13 = &off_60BE631C;
  v11[30] = v13;
  v13[31] = 1;
  v14 = (_DWORD *)operator_new(0x80u);
  sub_602D1614((int)v14, v17, v18, v19, v12 + (float)(v12 + (float)(v12 + v9)), v8, v7, a1);
  *v14 = &off_60BE631C;
  v13[30] = v14;
  v14[31] = 2;
  v15 = operator_new(0x80u);
  result = (_DWORD *)sub_602D1614(v15, v17, v18, v19, v12 + (float)(v12 + (float)(v12 + (float)(v12 + v9))), v8, v7, a1);
  *result = &off_60BE631C;
  v14[30] = result;
  result[31] = 3;
  return result;
}
