/* sub_60853C40
 * address: 0x60853C40   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60853C40(_DWORD *a1)
{
  int v2; // r0

  v2 = a1[1];
  if ( v2 == 5 )
  {
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 108))(a1, 6);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 88))(a1);
  }
  else if ( v2 == 4 )
  {
    return 0;
  }
  return 1;
}
