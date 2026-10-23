/* sub_607B1CF8
 * address: 0x607B1CF8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B1CF8(int *a1)
{
  a1[306] &= ~0x40u;
  a1[303] &= 0xFFF9FFFF;
  a1[302] &= ~0x2000u;
  a1[307] &= ~0x4000u;
  a1[40] = sub_60773F3C((int)a1, a1[20]);
  return (*(int (__fastcall **)(int *))(*a1 + 1092))(a1);
}
