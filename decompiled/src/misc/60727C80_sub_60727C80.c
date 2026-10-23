/* sub_60727C80
 * address: 0x60727C80   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60727C80(int a1, int a2)
{
  int v2; // r12
  int result; // r0
  int v4; // r3

  v2 = FIELD_U32(a1, 132);
  if ( v2 < 1 )
    return 0;
  result = FIELD_U32(a1, 12);
  v4 = 0;
  while ( FIELD_U16(result, 16) != a2 )
  {
    ++v4;
    result += 28;
    if ( v4 >= v2 )
      return 0;
  }
  return result;
}
