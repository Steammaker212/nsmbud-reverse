/* sub_60912EA4
 * address: 0x60912EA4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912EA4(int a1, int a2, int a3)
{
  if ( a3 )
    return nn__os__TrySendMessageQueue(a1, a2);
  nn__os__SendMessageQueue(a1, a2);
  return 1;
}
