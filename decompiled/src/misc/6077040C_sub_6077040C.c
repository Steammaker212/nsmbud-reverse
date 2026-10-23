/* sub_6077040C
 * address: 0x6077040C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077040C(_DWORD *a1)
{
  int result; // r0

  if ( (*((_BYTE *)a1 + 1222) & 4) == 0 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 1108))(a1);
  sub_60773F4C(a1);
  result = a1[2485];
  if ( !result )
  {
    result = sub_60793CA8(*(_DWORD *)(a1[162] + 4));
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(_DWORD *, int))(*a1 + 976))(a1, 1);
      a1[2485] = 1;
    }
  }
  return result;
}
