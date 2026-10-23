/* sub_6098A344
 * address: 0x6098A344   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6098A344(int *result, int a2)
{
  int v2; // r2
  int v3; // r1
  int v4; // r1

  v2 = result[1];
  if ( v2 )
  {
    result = (int *)result[2];
    if ( a2 )
    {
      do
      {
        v3 = *result++;
        if ( v3 )
          FIELD_U8(v3, 51) |= 0x10u;
        --v2;
      }
      while ( v2 );
    }
    else
    {
      do
      {
        v4 = *result++;
        if ( v4 )
          FIELD_U8(v4, 51) &= ~0x10u;
        --v2;
      }
      while ( v2 );
    }
  }
  return result;
}
