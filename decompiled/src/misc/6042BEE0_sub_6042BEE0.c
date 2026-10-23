/* sub_6042BEE0
 * address: 0x6042BEE0   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042BEE0(int a1)
{
  int v2; // r5
  _BYTE v4[12]; // [sp+8h] [bp-30h] BYREF
  char v5; // [sp+14h] [bp-24h] BYREF

  v2 = a1 + 704;
  sub_60913D88(a1 + 704, 144, 0, 4, 0);
  sub_60913A6C(&v5, v2, 0);
  sub_60913A6C(v4, v2, 0);
  sub_609225B8(a1 + 16, v4, 36, 144);
  sub_60922768(a1 + 16, 0, 34, 0, 0);
  sub_60922768(a1 + 16, 1, 22, 12, 0);
  sub_60922768(a1 + 16, 2, 46, 20, 0);
  sub_60921D30(a1 + 288, 1, 0);
  sub_60921DF0(a1 + 288, 0, a1 + 16, 0);
  sub_60921DF0(a1 + 288, 2, a1 + 16, 1);
  sub_60921DF0(a1 + 288, 6, a1 + 16, 2);
  sub_60921F90(a1 + 288);
  return sub_60922730(a1 + 16, 0, FIELD_U32(a1, 284));
}
