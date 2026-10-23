/* sub_607D19E4
 * address: 0x607D19E4   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D19E4(int result, int a2)
{
  if ( a2 )
    FIELD_U32(result, 11356) = FIELD_U32(a2, 8);
  return result;
}
