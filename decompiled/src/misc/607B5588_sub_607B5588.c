/* sub_607B5588
 * address: 0x607B5588   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B5588(_DWORD *a1)
{
  a1[303] &= ~0x8000u;
  a1[307] &= ~0x400u;
  a1[306] &= ~0x400u;
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 1092))(a1);
}
