/* sub_608F2904
 * address: 0x608F2904   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F2904(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  result = FIELD_U32(a1, 40);
  FIELD_U8(result, 42) = 1;
  FIELD_U32(result, 44) = a2;
  FIELD_U32(result, 48) = a3;
  FIELD_U32(result, 52) = a4;
  FIELD_U32(result, 56) = a5;
  return result;
}
