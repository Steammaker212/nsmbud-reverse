/* sub_6098BE98
 * address: 0x6098BE98   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098BE98(int result, int a2)
{
  int v2; // r5
  int v4; // r6
  int v5; // r7

  v2 = FIELD_U32(result, 72);
  if ( v2 != result + 68 )
  {
    v4 = FIELD_U32(result, 80);
    v5 = result + 68 - v4;
    result = v2 - v4;
    do
    {
      sub_60997788(result, a2);
      v2 = FIELD_U32(v2, 4);
      result = v2 - v4;
    }
    while ( v2 - v4 != v5 );
  }
  return result;
}
