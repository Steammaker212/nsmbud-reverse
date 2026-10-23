/* sub_6042EF64
 * address: 0x6042EF64   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042EF64(int a1, unsigned int a2, unsigned int a3)
{
  int v3; // r0
  unsigned int v4; // r1
  int result; // r0

  if ( a2 >= 3 )
    a2 = 0;
  v3 = a1 + 12 * a2;
  v4 = FIELD_U32(v3, 16);
  result = FIELD_U32(v3, 20);
  if ( v4 > a3 )
    result += 92 * a3;
  return result;
}
