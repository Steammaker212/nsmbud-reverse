/* sub_608D9B94
 * address: 0x608D9B94   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D9B94(int a1, _DWORD *a2)
{
  int v4; // r1
  int v5; // r3
  int v6; // r4
  int v7; // r6
  int v8; // r7
  int result; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r4
  int v13; // r6
  int v14; // r7

  nn__os__WaitEvent(a1 + 12);
  nn__os__WaitEvent(a1 + 104);
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U8(a1, 88) = 0;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v7 = a2[4];
  v8 = a2[5];
  FIELD_U32(a1, 48) = *a2;
  FIELD_U32(a1, 52) = v4;
  FIELD_U32(a1, 56) = v5;
  FIELD_U32(a1, 60) = v6;
  FIELD_U32(a1, 64) = v7;
  FIELD_U32(a1, 68) = v8;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = a1 + 172;
  FIELD_U32(a1, 132) = 0;
  result = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = a2[3];
  v13 = a2[4];
  v14 = a2[5];
  FIELD_U32(a1, 140) = *a2;
  FIELD_U32(a1, 144) = v10;
  FIELD_U32(a1, 148) = v11;
  FIELD_U32(a1, 152) = v12;
  FIELD_U32(a1, 156) = v13;
  FIELD_U32(a1, 160) = v14;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 168) = a1 + 172;
  return result;
}
