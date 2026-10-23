/* sub_604781C8
 * address: 0x604781C8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604781C8(int a1, int a2)
{
  int result; // r0

  result = sub_60853354(a1, a2);
  if ( a2 == 1 )
  {
    result = FIELD_U8(a1, 160);
    if ( FIELD_U8(a1, 160) )
    {
      result = FIELD_U8(a1, 188);
      if ( !FIELD_U8(a1, 188) )
        return sub_60478680(FIELD_U32(a1, 176), FIELD_U32(a1, 196));
    }
  }
  else if ( !a2 )
  {
    FIELD_U8(a1, 160) = 0;
    return 0;
  }
  return result;
}
