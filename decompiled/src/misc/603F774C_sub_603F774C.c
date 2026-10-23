/* sub_603F774C
 * address: 0x603F774C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F774C(int a1, int a2, int a3)
{
  unsigned int v6; // r7
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r1
  int result; // r0
  char v11; // r3
  int v12; // r1

  LOBYTE(v6) = 0;
  v7 = sub_6040E5B0(a2, a3, 0);
  if ( v7 >= 0 )
  {
    v8 = a1;
    if ( (unsigned int)v7 < 0x7C )
      v8 = a1 + ((unsigned int)v7 >> 1);
    v9 = FIELD_U8(v8, 123);
    v6 = v9 >> 4;
    if ( (v7 & 1) == 0 )
      LOBYTE(v6) = v9 & 0xF;
  }
  result = sub_6040E5B0(a2, a3, 0);
  if ( result >= 0 )
  {
    v11 = 15;
    v12 = (unsigned __int8)v6 + 1;
    if ( (unsigned __int8)v12 >= 0xFu )
      v12 = 15;
    if ( (result & 1) != 0 )
      v12 *= 16;
    else
      v11 = -16;
    if ( (unsigned int)result < 0x7C )
      a1 += (unsigned int)result >> 1;
    result = (unsigned __int8)(FIELD_U8(a1, 123) & v11) | v12;
    FIELD_U8(a1, 123) = result;
  }
  return result;
}
