/* sub_604FEAD0
 * address: 0x604FEAD0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FEAD0(int result)
{
  FIELD_U8(result, 1110) = 1;
  FIELD_U8(result, 1099) = 0;
  FIELD_U8(result, 1096) = 1;
  FIELD_U8(result, 16012) = 1;
  FIELD_U8(result, 16013) = 0;
  FIELD_U32(result, 16004) = FIELD_U32(result, 16000);
  return result;
}
