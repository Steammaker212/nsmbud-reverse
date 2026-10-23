/* sub_607BB774
 * address: 0x607BB774   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607BB774(_DWORD *result, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3

  if ( a2 )
  {
    v2 = a2[2850];
    v3 = result[2850];
    if ( v3 != v2 )
    {
      if ( v3 <= v2 )
        return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int))(*result + 1200))(result, 1);
      else
        return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int, _DWORD))(*a2 + 1200))(a2, 1, result[2850]);
    }
  }
  return result;
}
