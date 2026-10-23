/* sub_60003D84
 * address: 0x60003D84   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60003D84(_DWORD *result)
{
  int v1; // r2
  int v2; // r1
  int v3; // r2

  v1 = FIELD_U32(dword_60C99DD4, 196);
  if ( v1 )
  {
    v2 = result[2];
    result = (_DWORD *)(v1 + 588);
    v3 = 0;
    while ( *(result - 1) )
    {
      if ( !*result )
        goto LABEL_8;
      v3 += 2;
      result += 2;
      if ( v3 >= 64 )
        return result;
    }
    --result;
LABEL_8:
    *result = v2;
  }
  return result;
}
