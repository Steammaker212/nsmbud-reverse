/* sub_608A99B0
 * address: 0x608A99B0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608A99B0(int a1)
{
  int v2; // r0

  v2 = FIELD_U32(a1, 4);
  if ( v2 )
  {
    sub_608B2188(v2);
    FIELD_U32(a1, 4) = 0;
  }
  FIELD_U16(a1, 12) = 47;
  return 47;
}
