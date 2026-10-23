/* sub_608AC690
 * address: 0x608AC690   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC690(int a1, int a2)
{
  int result; // r0
  int v5; // r6

  result = FIELD_U32(a1, 4);
  if ( result != a1 )
  {
    do
    {
      v5 = FIELD_U32(result, 4);
      sub_608AF208(result - 404, a2);
      result = v5;
    }
    while ( v5 != a1 );
  }
  return result;
}
