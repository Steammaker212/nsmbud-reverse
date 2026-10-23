/* sub_605B7284
 * address: 0x605B7284   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B7284(int a1)
{
  if ( Actor__beforeDelete() == 1 )
    return sub_605B7974(a1 + 644);
  else
    return 0;
}
