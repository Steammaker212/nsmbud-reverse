/* sub_60401F74
 * address: 0x60401F74   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60401F74(int a1, int a2)
{
  int v2; // r5
  int result; // r0
  int v5; // r7
  int v6; // r6

  v2 = a1;
  result = FIELD_U8(a1, 179520);
  if ( result )
  {
    result = v2 + 728;
    v5 = 0;
    v6 = v2 + 89816;
    do
    {
      if ( v5 <= 22 )
      {
        if ( !FIELD_U8(v2, 3605) )
          sub_60543094(v2 + 16, a2);
        result = sub_60543620(v6, a2);
      }
      ++v5;
      v6 += 3588;
      v2 += 3592;
    }
    while ( v5 != 25 );
  }
  return result;
}
