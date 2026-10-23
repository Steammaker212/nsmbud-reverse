/* sub_60456428
 * address: 0x60456428   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60456428(int a1, int a2, int a3, __int16 a4, __int16 a5)
{
  int result; // r0

  result = a1 + 8 * a2;
  if ( FIELD_U16(result, 152) != a3 )
  {
    FIELD_U16(result, 152) = a3;
    FIELD_U8(result, 159) = 1;
  }
  FIELD_U16(result, 154) = a4;
  FIELD_U16(result, 156) = a5;
  return result;
}
