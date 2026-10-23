/* sub_601E4FB4
 * address: 0x601E4FB4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E4FB4(int a1, int a2)
{
  int result; // r0

  if ( a2 < 0 )
    return 1;
  result = 0;
  if ( (unsigned int)a2 >= 0x1E )
    a2 = 0;
  if ( !*(_BYTE *)(a1 + 48 * a2 + 96) )
    return 1;
  return result;
}
