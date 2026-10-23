/* sub_6040B2B4
 * address: 0x6040B2B4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040B2B4(int a1, unsigned int a2)
{
  if ( FIELD_U8(a1, 6559) == 1 )
  {
    if ( FIELD_U8(a1, 6519) )
      return sub_6040ACD4(a1, a2);
  }
  return a1;
}
