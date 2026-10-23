/* sub_608CFDF8
 * address: 0x608CFDF8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CFDF8(int result, int a2, int a3, int a4)
{
  FIELD_U32(result, 4) = a2;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 12) = a3;
  FIELD_U32(result, 16) = a4;
  FIELD_U32(result, 20) = -1;
  FIELD_U32(result, 24) = 0;
  FIELD_U8(result, 28) = 0;
  return result;
}
