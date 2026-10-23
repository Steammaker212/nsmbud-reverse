/* sub_60910B0C
 * address: 0x60910B0C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60910B0C(int a1, int a2)
{
  unsigned int result; // r0
  int v5; // r6
  unsigned int i; // r7

  result = FIELD_U32(a1, 20);
  if ( result )
  {
    v5 = 0;
    for ( i = 0; i < result; ++i )
    {
      sub_60913258(FIELD_U32(a1, 16) + v5, a2);
      result = FIELD_U32(a1, 20);
      v5 += 4;
    }
  }
  return result;
}
