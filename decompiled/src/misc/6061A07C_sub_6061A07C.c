/* sub_6061A07C
 * address: 0x6061A07C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061A07C(int result)
{
  int v1; // r1
  int v2; // r2
  _DWORD *i; // r1
  int v4; // t1

  v1 = FIELD_U32(result, 6144);
  if ( (FIELD_U8(result, 6128) & 0xFE) == 2 )
    v1 -= FIELD_U32(result, 6120);
  FIELD_U32(result, 164) = v1;
  if ( (FIELD_U8(result, 20) & 1) != 0 )
  {
    v2 = 119;
    for ( i = (_DWORD *)(result + 6624); ; i[1] = v4 )
    {
      *i = *(i - 1);
      if ( v2 <= 1 )
        break;
      v4 = *(i - 2);
      i -= 2;
      v2 -= 2;
    }
    FIELD_U32(result, 6148) = FIELD_U32(result, 164);
  }
  return result;
}
