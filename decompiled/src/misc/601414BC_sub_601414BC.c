/* sub_601414BC
 * address: 0x601414BC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601414BC(int result)
{
  FIELD_U32(result, 100) = -1092616192;
  FIELD_U32(result, 96) = -1065353216;
  FIELD_U64(result, 120) = 0xC040000040666666LL;
  if ( FIELD_U32(result, 80) == 1 )
    FIELD_U32(result, 120) = -1067030938;
  return result;
}
