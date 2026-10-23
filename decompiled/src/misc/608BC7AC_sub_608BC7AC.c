/* sub_608BC7AC
 * address: 0x608BC7AC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BC7AC(_BYTE *a1)
{
  int result; // r0

  if ( !a1[188] )
    return 0;
  result = 1;
  if ( !a1[817] )
  {
    result = (unsigned __int8)a1[819];
    if ( a1[819] )
      return 1;
  }
  return result;
}
