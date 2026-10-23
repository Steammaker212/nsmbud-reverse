/* sub_609A6D4C
 * address: 0x609A6D4C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A6D4C(int a1)
{
  if ( FIELD_U32(a1, 868) )
  {
    sub_609ACF6C(a1 + 1640);
    FIELD_U32(a1, 868) = 0;
  }
  return sub_609ACD4C(a1 + 1640);
}
