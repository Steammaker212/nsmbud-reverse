/* sub_608597F0
 * address: 0x608597F0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608597F0(int a1)
{
  int result; // r0
  int v3; // r2

  result = 0;
  v3 = FIELD_U32(a1, 132);
  if ( v3 )
  {
    if ( (FIELD_U8(a1, 72) & 1) != 0 )
    {
      if ( FIELD_U16(v3, 8) != 1 )
        return v3 + 24;
    }
    else
    {
      return v3 + 12;
    }
  }
  return result;
}
