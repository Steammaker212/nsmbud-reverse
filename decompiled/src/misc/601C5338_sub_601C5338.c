/* sub_601C5338
 * address: 0x601C5338   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601C5338(int a1, int a2)
{
  int v2; // r1
  signed int result; // r0

  v2 = a2 | 4;
  result = 0x80000000;
  if ( v2 == 31 )
    result = 1610612736;
  if ( v2 == 30 )
    return -1610612736;
  return result;
}
