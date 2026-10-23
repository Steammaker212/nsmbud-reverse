/* sub_6008B650
 * address: 0x6008B650   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008B650(int a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1);
  if ( result == 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81A48);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 916))(a1);
  }
  return result;
}
