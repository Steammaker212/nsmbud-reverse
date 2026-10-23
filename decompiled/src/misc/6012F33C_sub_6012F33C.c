/* sub_6012F33C
 * address: 0x6012F33C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012F33C(_DWORD *a1)
{
  _DWORD *v1; // r1
  int v2; // r2

  v1 = a1 + 1554;
  v2 = a1[1554];
  if ( v2 <= 0 )
    return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C874B0);
  *v1 = v2 - 1;
  return v2 - 1;
}
