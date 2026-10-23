/* sub_60478750
 * address: 0x60478750   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60478750(int result)
{
  if ( !FIELD_U8(result, 188) && !FIELD_U8(result, 160) )
    return sub_60478680(FIELD_U32(result, 184), FIELD_U32(result, 204));
  return result;
}
