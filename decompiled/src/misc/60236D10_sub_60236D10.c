/* sub_60236D10
 * address: 0x60236D10   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60236D10(int a1, char a2)
{
  int result; // r0
  int v5; // r2
  int v6; // t1

  v6 = FIELD_U32(a1, 52);
  result = a1 + 52;
  v5 = v6;
  if ( v6 )
  {
    if ( FIELD_U32(a1, 56) == FIELD_U32(v5, 32) )
    {
      result = sub_60881DE8(result);
      if ( FIELD_S32(result, 352) >= 1 )
      {
        if ( FIELD_U8(result, 8) )
          FIELD_U8(result, 6) = a2 ^ 1;
      }
    }
  }
  return result;
}
