/* sub_607A74E8
 * address: 0x607A74E8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A74E8(_DWORD *a1)
{
  a1[306] &= ~0x100000u;
  a1[309] &= ~4u;
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 228))(a1);
}
