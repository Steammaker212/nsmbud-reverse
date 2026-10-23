/* sub_603F76F4
 * address: 0x603F76F4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F76F4(int a1, int a2, int a3, unsigned int a4)
{
  int result; // r0
  char v7; // r1

  result = sub_6040E5B0(a2, a3, 0);
  if ( result >= 0 )
  {
    v7 = 15;
    if ( a4 >= 0xF )
      a4 = 15;
    if ( (result & 1) != 0 )
      a4 *= 16;
    else
      v7 = -16;
    if ( (unsigned int)result < 0x7C )
      a1 += (unsigned int)result >> 1;
    result = (unsigned __int8)(FIELD_U8(a1, 123) & v7) | a4;
    FIELD_U8(a1, 123) = result;
  }
  return result;
}
