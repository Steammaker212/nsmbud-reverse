/* sub_609085F8
 * address: 0x609085F8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_609085F8(_DWORD *a1)
{
  signed int result; // r0

  result = 0;
  if ( !a1[30] )
  {
    nn__os__StartThread(a1[32]);
    a1[29] = nn__os__GetThreadId(a1[32]);
    result = 1;
    if ( !a1[30] )
    {
      a1[30] = 1;
      return 1;
    }
  }
  return result;
}
