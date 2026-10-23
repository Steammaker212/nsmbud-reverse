/* sub_6037A494
 * address: 0x6037A494   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037A494(int a1)
{
  if ( FIELD_U32(a1, 6352) != 1 || FIELD_U8(a1, 6386) )
    return Enemy__isOnGround(a1);
  else
    return 1;
}
