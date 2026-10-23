/* sub_604E06D0
 * address: 0x604E06D0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E06D0(int result, int a2, int a3, char a4, char a5, int a6)
{
  FIELD_U32(result, 4012) = a2;
  FIELD_U32(result, 4016) = a3;
  FIELD_U8(result, 4075) = a4;
  FIELD_U8(result, 4076) = a5;
  FIELD_U32(result, 4068) = a6;
  FIELD_U8(result, 4072) = 1;
  return result;
}
