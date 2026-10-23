/* sub_60413FD0
 * address: 0x60413FD0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60413FD0(int result)
{
  int v1; // r4
  int v2; // r5

  v1 = FIELD_U32(result, 172244);
  if ( v1 != result + 172240 )
  {
    v2 = result + 172024;
    result = v1 - 216;
    do
    {
      sub_60424628(result);
      v1 = FIELD_U32(v1, 4);
      result = v1 - 216;
    }
    while ( v1 - 216 != v2 );
  }
  return result;
}
