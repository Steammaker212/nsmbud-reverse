/* sub_60773F88
 * address: 0x60773F88   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60773F88(int a1, int *a2)
{
  signed int v5; // [sp+0h] [bp-18h] BYREF
  signed int v6; // [sp+4h] [bp-14h] BYREF

  v6 = 0x20000000;
  v5 = 0x4000000;
  sub_608322C0((int *)(a1 + 160), a2, &v6, &v5);
  return FIELD_U32(a1, 160) - *a2;
}
