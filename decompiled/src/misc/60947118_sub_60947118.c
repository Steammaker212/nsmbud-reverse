/* sub_60947118
 * address: 0x60947118   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60947118(_DWORD *a1, _DWORD *a2)
{
  a1[97] = a2[3];
  if ( a1[28] != a2[4] )
    (*(void (__fastcall **)(_DWORD *, _DWORD *))(*a1 + 48))(a1, a2);
  return sub_60947394(a1, (char *)a2 + a2[5] + 48);
}
