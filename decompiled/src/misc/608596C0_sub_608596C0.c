/* sub_608596C0
 * address: 0x608596C0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608596C0(_DWORD *a1, int a2)
{
  int v2; // r3
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // lr
  int v7; // r3
  int v8; // r4
  int v9; // r5
  int v10; // r6
  int v11; // lr

  v2 = a1[21];
  v3 = a1[22];
  v4 = a1[23];
  v5 = a1[24];
  v6 = a1[25];
  FIELD_U32(a2, 128) = a1[20];
  FIELD_U32(a2, 132) = v2;
  FIELD_U32(a2, 136) = v3;
  FIELD_U32(a2, 140) = v4;
  FIELD_U32(a2, 144) = v5;
  FIELD_U32(a2, 148) = v6;
  v7 = a1[27];
  v8 = a1[28];
  v9 = a1[29];
  v10 = a1[30];
  v11 = a1[31];
  FIELD_U32(a2, 152) = a1[26];
  FIELD_U32(a2, 156) = v7;
  FIELD_U32(a2, 160) = v8;
  FIELD_U32(a2, 164) = v9;
  FIELD_U32(a2, 168) = v10;
  FIELD_U32(a2, 172) = v11;
  FIELD_U8(a2, 211) = 0;
  return 0;
}
