/* sub_609273A4
 * address: 0x609273A4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609273A4(int result)
{
  int v1; // r5
  int v2; // r4

  v1 = FIELD_U32(result, 196);
  if ( v1 )
  {
    v2 = FIELD_U32(result, 200) + 28;
    do
    {
      result = sub_60940904(v2);
      v2 += 164;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
