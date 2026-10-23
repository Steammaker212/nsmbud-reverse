/* sub_60727908
 * address: 0x60727908   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 *__fastcall sub_60727908(int a1, int a2)
{
  unsigned int v2; // r12
  unsigned __int8 *result; // r0
  unsigned __int8 *v5; // r3
  bool v6; // zf
  unsigned int v7; // r0

  result = 0;
  v5 = *(unsigned __int8 **)(a1 + 56);
  v6 = v5 == 0;
  if ( v5 )
  {
    v2 = FIELD_U32(a1, 176);
    v6 = v2 == 0;
  }
  if ( !v6 )
  {
    v7 = 0;
    do
    {
      if ( *v5 == a2 )
        return v5;
      ++v7;
      v5 += 12;
    }
    while ( v7 < v2 );
    return 0;
  }
  return result;
}
