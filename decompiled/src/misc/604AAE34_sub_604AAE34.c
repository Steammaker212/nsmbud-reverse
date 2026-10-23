/* sub_604AAE34
 * address: 0x604AAE34   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_604AAE34(int a1)
{
  int v1; // r1
  float *result; // r0
  int v3; // r2
  float v4; // s2

  v1 = a1 + 95652;
  result = (float *)(a1 + 279740);
  v3 = 61;
  do
  {
    if ( FIELD_U8(v1, 2293) )
    {
      v4 = *(float *)v1 - *result;
      if ( *result >= 0.0 )
      {
        if ( v4 <= -40.0 )
          v4 = -40.0;
      }
      else if ( v4 >= -40.0 )
      {
        v4 = -40.0;
      }
      *(float *)v1 = v4;
    }
    --v3;
    v1 += 2988;
  }
  while ( v3 );
  return result;
}
