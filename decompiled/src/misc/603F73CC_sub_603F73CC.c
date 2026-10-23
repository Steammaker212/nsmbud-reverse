/* sub_603F73CC
 * address: 0x603F73CC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F73CC(char *a1, int a2, int a3)
{
  int result; // r0
  char v5; // r0

  result = sub_6040E5B0(a2, a3, 0);
  if ( result >= 0 )
  {
    if ( (unsigned int)result < 0x7B )
      a1 += result;
    if ( a1 )
    {
      v5 = *a1;
      if ( (*a1 & 0x88) != 0x80 )
      {
        v5 |= 0xA0u;
        *a1 = v5;
      }
      result = v5 & 0xF7;
      *a1 = result;
    }
  }
  return result;
}
