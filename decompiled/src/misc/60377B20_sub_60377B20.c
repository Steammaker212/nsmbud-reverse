/* sub_60377B20
 * address: 0x60377B20   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60377B20(int a1, int a2, unsigned int a3)
{
  int result; // r0
  int v5; // r1

  result = 0;
  if ( a2 >= 0 )
  {
    if ( (unsigned int)a2 >= 0xA )
      a2 = 0;
    v5 = a1 + 8 * a2;
    if ( FIELD_U32(v5, 16) > a3 )
      return FIELD_U32(v5, 20) + 44 * a3;
  }
  return result;
}
