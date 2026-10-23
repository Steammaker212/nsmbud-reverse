/* sub_605EC644
 * address: 0x605EC644   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EC644(int a1)
{
  if ( FIELD_S8(a1, 6560) < 0 && FIELD_S8(a1, 6561) < 0 && FIELD_S8(a1, 6562) < 0 && FIELD_S8(a1, 6563) < 0 )
    return FIELD_U8(a1, 6603);
  else
    return 1;
}
