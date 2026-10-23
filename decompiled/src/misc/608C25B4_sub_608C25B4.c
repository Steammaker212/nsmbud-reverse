/* sub_608C25B4
 * address: 0x608C25B4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C25B4(_BYTE *a1)
{
  if ( a1[188] )
  {
    nn__os__FinalizeMessageQueue(a1 + 12);
    a1[188] = 0;
  }
  if ( a1[372] )
  {
    nn__os__FinalizeMessageQueue(a1 + 192);
    a1[372] = 0;
  }
  *a1 = 0;
  return 0;
}
