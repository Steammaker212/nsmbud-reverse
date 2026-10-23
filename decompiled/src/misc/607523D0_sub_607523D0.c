/* sub_607523D0
 * address: 0x607523D0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607523D0(int a1, int a2)
{
  if ( FIELD_U32(a1, 300) != a2 )
    FIELD_U8(a1, 900) = 1;
  return sub_6078E8E8();
}
