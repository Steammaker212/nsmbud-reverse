/* sub_6073CC08
 * address: 0x6073CC08   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073CC08(int result)
{
  if ( !FIELD_U16(result, 8038) )
  {
    FIELD_U16(result, 8038) = 20;
    FIELD_U32(result, 124) = 1065353216;
  }
  return result;
}
