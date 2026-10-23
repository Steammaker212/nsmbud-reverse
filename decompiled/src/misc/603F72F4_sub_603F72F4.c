/* sub_603F72F4
 * address: 0x603F72F4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F72F4(_BYTE *a1, int a2, int a3)
{
  int result; // r0

  result = sub_6040E5B0(a2, a3, 0);
  if ( result >= 0 )
  {
    if ( (unsigned int)result < 0x7B )
      a1 += result;
    if ( a1 )
    {
      result = (unsigned __int8)*a1;
      if ( (result & 0x40) == 0 )
      {
        result |= 0x44u;
        *a1 = result;
      }
    }
  }
  return result;
}
