/* sub_607D1570
 * address: 0x607D1570   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D1570(int a1)
{
  int v1; // r1

  v1 = 1;
  if ( FIELD_S32(a1, 11464) < 5 )
  {
    v1 = FIELD_U8(a1, 11468);
    if ( FIELD_U8(a1, 11468) )
      return 1;
  }
  return v1;
}
