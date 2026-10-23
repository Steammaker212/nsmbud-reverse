/* sub_60529E64
 * address: 0x60529E64   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60529E64(_DWORD *a1)
{
  int result; // r0

  result = a1[758];
  if ( result == 1 )
  {
    (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(a1[15] + 4) + 84))(
      *(_DWORD *)(a1[15] + 4),
      188,
      1.0,
      0.0,
      0.0);
    a1[765] = 2;
    return 2;
  }
  else if ( !result )
  {
    (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(a1[15] + 4) + 84))(
      *(_DWORD *)(a1[15] + 4),
      190,
      1.0,
      0.0,
      0.0);
    result = 1;
    a1[765] = 1;
  }
  return result;
}
