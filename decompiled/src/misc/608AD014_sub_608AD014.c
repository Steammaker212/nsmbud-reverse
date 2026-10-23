/* sub_608AD014
 * address: 0x608AD014   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AD014(int a1, _DWORD *a2, int a3, int a4)
{
  int result; // r0

  result = (*(int (__fastcall **)(int, _DWORD *, int, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 8))(a1, a2, a3, 0, 0, a4);
  if ( !result )
  {
    if ( *a2 )
      sub_608AF1FC();
    return 0;
  }
  return result;
}
