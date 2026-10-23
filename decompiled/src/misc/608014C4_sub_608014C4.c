/* sub_608014C4
 * address: 0x608014C4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608014C4(int result)
{
  if ( !FIELD_U32(result, 28) && !FIELD_U8(result, 40) )
    return sub_60801774(FIELD_U32(result, 32));
  return result;
}
