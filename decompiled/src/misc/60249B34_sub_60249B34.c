/* sub_60249B34
 * address: 0x60249B34   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60249B34(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1
  int v7; // r4
  _BOOL4 v8; // r0
  int v10[7]; // [sp+4h] [bp-1Ch] BYREF

  v4 = FIELD_U32(a2, 84);
  v5 = FIELD_U32(a2, 88);
  v10[0] = v4;
  v10[1] = v5;
  v10[2] = 0;
  sub_602A38A4(a1, v10);
  v7 = FIELD_U32(a3, 64);
  v8 = sub_6000ADDC(a1, v7);
  sub_602A6024(a1, v8, FIELD_S8(v7, 84), -1);
  return 1;
}
