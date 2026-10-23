/* sub_60409340
 * address: 0x60409340   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60409340(int result)
{
  _BYTE *v1; // r1
  unsigned int v2; // t1
  unsigned int v3; // r1

  v1 = (_BYTE *)(result + 6559);
  if ( FIELD_U8(result, 6559) == 1 && FIELD_U8(result, 6476) == 6 )
  {
    v2 = FIELD_U8(result, 6478);
    result += 6478;
    if ( FIELD_U8(result, 1) < v2 )
    {
      v3 = FIELD_U8(result, 1) + 1;
      if ( v3 >= 0xC8 )
        LOBYTE(v3) = -56;
      FIELD_U8(result, 1) = v3;
    }
    else
    {
      result = 3;
      *v1 = 3;
    }
  }
  return result;
}
