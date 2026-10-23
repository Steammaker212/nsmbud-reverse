/* sub_608CB324
 * address: 0x608CB324   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB324(int a1, float a2)
{
  int result; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r4

  result = FIELD_U32(a1, 8);
  v4 = a1 + 4;
  if ( result != a1 + 4 )
  {
    do
    {
      v5 = FIELD_U32(result, 4);
      sub_608C9544(result - 560, a2);
      result = v5;
    }
    while ( v5 != v4 );
    result = FIELD_U32(a1, 8);
  }
  if ( result != v4 )
  {
    do
    {
      v6 = FIELD_U32(result, 4);
      sub_608C9840(result - 560, a2);
      result = v6;
    }
    while ( v6 != v4 );
  }
  return result;
}
