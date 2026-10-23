/* sub_607A1C9C
 * address: 0x607A1C9C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A1C9C(_DWORD *a1)
{
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 628))(a1, 1);
  a1[163] = 0;
  a1[308] &= ~0x20000000u;
  a1[309] &= ~0x10000u;
  a1[301] &= 0xFFF9FFE7;
  a1[2393] = 127;
  return 9572;
}
