/* sub_608729D4
 * address: 0x608729D4   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608729D4(int result, char a2)
{
  if ( (a2 & 1) == 0 )
    FIELD_U32(result, 48) = 0;
  return result;
}
