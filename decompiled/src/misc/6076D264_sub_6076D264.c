/* sub_6076D264
 * address: 0x6076D264   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076D264(int result)
{
  FIELD_U32(result, 1228) &= 0x83FFFFFF;
  FIELD_U32(result, 1232) &= 0xDFFFFE18;
  return result;
}
