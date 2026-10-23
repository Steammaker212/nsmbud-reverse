/* sub_60502694
 * address: 0x60502694   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60502694(int result)
{
  int i; // r2
  int v2; // r3
  int j; // r2
  int v4; // r3

  FIELD_U8(result, 1043) = 1;
  if ( FIELD_U8(result, 1044) )
  {
    for ( i = 0; i != 1024; i += 8 )
    {
      v2 = result + i;
      if ( FIELD_U32(v2, 1056) <= 1u )
        FIELD_U32(v2, 1056) = 1;
      if ( FIELD_U32(v2, 1060) < 2u )
        FIELD_U32(v2, 1060) = 1;
    }
  }
  else
  {
    for ( j = 0; j != 1024; j += 8 )
    {
      v4 = result + j;
      if ( FIELD_U32(v4, 1056) <= 1u )
        FIELD_U32(v4, 1056) = 0;
      if ( FIELD_U32(v4, 1060) < 2u )
        FIELD_U32(v4, 1060) = 0;
    }
  }
  return result;
}
