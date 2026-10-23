/* sub_601D84A4
 * address: 0x601D84A4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D84A4(int a1, _DWORD *a2)
{
  int result; // r0

  if ( *a2 != 4 )
    return dword_60AFD068[*a2];
  result = 64;
  if ( a2[1] != 1 )
    return dword_60AFD068[*a2];
  return result;
}
