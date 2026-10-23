/* sub_601C3E34
 * address: 0x601C3E34   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C3E34(_DWORD *a1)
{
  int result; // r0
  int v3; // r1

  if ( (a1[66] | 1) != 7 )
    return sub_6079437C(*(_DWORD *)(a1[a1[368] + 230] + 4));
  result = 0;
  if ( a1[266] == 25 )
  {
    v3 = (*(int (__fastcall **)(_DWORD *, float))(*a1 + 140))(a1, 4.0);
    result = 1;
    if ( !v3 )
      return (*(int (__fastcall **)(_DWORD *, float))(*a1 + 140))(a1, 17.0);
  }
  return result;
}
