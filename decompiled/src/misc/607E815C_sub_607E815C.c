/* sub_607E815C
 * address: 0x607E815C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E815C(int a1, _DWORD *a2)
{
  int result; // r0

  gaussian_ref(dword_60C9BAAC, 0, (int)a2);
  sub_6090B260(a2[3], a2[10]);
  sub_6090E560(a2[8], a2[10], a2[3]);
  result = FIELD_U16(dword_60CC6D78, 109048) & 0x7F;
  if ( result == 10 )
  {
    result = FIELD_U32(a1, 3936);
    if ( result )
    {
      if ( *a2 == 1 )
        return sub_6054D180(result, a2);
    }
  }
  return result;
}
