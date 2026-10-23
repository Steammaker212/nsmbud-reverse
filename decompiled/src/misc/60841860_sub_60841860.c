/* sub_60841860
 * address: 0x60841860   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60841860(int a1, int a2)
{
  if ( a2 < 0 || sub_6083DA40(a1 + 15988) <= a2 )
    return 0;
  else
    return nullsub_85(a1 + 296 * a2 + 8208);
}
