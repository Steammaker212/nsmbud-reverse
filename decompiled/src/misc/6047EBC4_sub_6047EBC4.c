/* sub_6047EBC4
 * address: 0x6047EBC4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047EBC4(int result)
{
  if ( !FIELD_U32(result, 8) )
    FIELD_U32(result, 44) |= 4u;
  return result;
}
