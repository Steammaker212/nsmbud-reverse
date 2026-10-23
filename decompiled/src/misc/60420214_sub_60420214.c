/* sub_60420214
 * address: 0x60420214   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60420214(int *result)
{
  int v1; // r1
  int v2; // r1
  int v3; // r1
  bool v4; // cc
  int v5; // r2

  v1 = *result;
  if ( *result == 2 )
  {
    v3 = result[48];
    v4 = v3 <= 0;
    v5 = v3 - 1;
    if ( v3 <= 0 )
      v3 = 3;
    result[48] = v5;
    if ( v4 )
      *result = v3;
  }
  else
  {
    if ( v1 != 1 )
    {
      if ( v1 )
        return result;
      v2 = result[1];
      if ( *((_BYTE *)result + 188) )
      {
        if ( !v2 )
          return result;
      }
      else if ( !v2 )
      {
        *((_BYTE *)result + 188) = 1;
        return result;
      }
      if ( !FIELD_U8(v2, 28) )
        return result;
      *result = 1;
    }
    if ( *((_BYTE *)result + 189) )
    {
      *result = 2;
      result[48] = 1;
    }
  }
  return result;
}
