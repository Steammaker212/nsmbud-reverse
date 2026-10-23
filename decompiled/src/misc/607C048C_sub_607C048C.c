/* sub_607C048C
 * address: 0x607C048C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C048C(_DWORD *a1)
{
  a1[307] &= ~0x400u;
  a1[308] &= ~0x40000000u;
  a1[303] &= ~0x10000u;
  sub_60154420((int)(a1 + 332), 30);
  a1[2848] = 0;
  a1[2849] = 0;
  a1[39] = 0;
  a1[41] = 0;
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 1092))(a1);
}
