/* sub_60237DA0
 * address: 0x60237DA0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60237DA0(__int16 a1)
{
  int result; // r0

  result = 1;
  if ( (a1 & 0x2000) == 0 )
  {
    result = 2;
    if ( (a1 & 0x4000) == 0 )
      return (a1 >> 15) & 3;
  }
  return result;
}
