/* sub_60478EF0
 * address: 0x60478EF0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60478EF0(_DWORD *a1)
{
  int v2; // r0

  v2 = a1[1];
  if ( v2 == 6 )
    return 0;
  if ( v2 != 5 )
    return v2 != 4;
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 108))(a1, 6);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 88))(a1);
  return 1;
}
