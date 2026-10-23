/* SE_MG_CMN_START_ref_2_helper
 * address: 0x6052FD30   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_MG_CMN_START_ref_2_helper(int result)
{
  FIELD_U8(result, 10979) = 1;
  FIELD_U32(result, 3796) = FIELD_U32(result, 3796) & 0xFFFFFFEB | 4;
  return result;
}
