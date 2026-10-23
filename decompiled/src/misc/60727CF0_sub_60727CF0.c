/* sub_60727CF0
 * address: 0x60727CF0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall sub_60727CF0(int a1, int a2, int a3)
{
  unsigned __int16 *result; // r0
  int v5; // r12
  unsigned __int16 *v6; // lr
  unsigned __int16 *v7; // r12

  result = 0;
  v5 = FIELD_U32(a1, 152);
  if ( v5 )
  {
    v6 = *(unsigned __int16 **)(a1 + 32);
    v7 = &v6[12 * v5];
    if ( a3 )
      v6 = (unsigned __int16 *)(a3 + 24);
    if ( v6 < v7 )
    {
      while ( *v6 != a2 )
      {
        v6 += 12;
        if ( v6 >= v7 )
          return result;
      }
      return v6;
    }
  }
  return result;
}
