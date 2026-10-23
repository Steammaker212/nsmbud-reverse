/* sub_607B2E04
 * address: 0x607B2E04   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B2E04(_DWORD *a1)
{
  a1[2849] = 0;
  sub_607957D4((int)a1, 0);
  a1[303] &= ~0x4000u;
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 1092))(a1);
}
