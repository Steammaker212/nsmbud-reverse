/* sub_601FEC8C
 * address: 0x601FEC8C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FEC8C(int a1, int *a2)
{
  int result; // r0
  int v5; // r1

  result = *a2;
  if ( *a2 == 3 )
    return sub_60239158(dword_60C8D9DC, a2, 14, 0);
  if ( result == 1 )
    return sub_601A2CD8(dword_60C89E18, (int)a2);
  if ( !result )
  {
    v5 = FIELD_U32(dword_60C9BAAC, 172);
    if ( FIELD_U8(a1, 3225) )
    {
      if ( v5 )
        sub_60418110(3, a2);
      else
        sub_60417FF4(dword_60C9BAAC, 3, a2);
    }
    else if ( v5 )
    {
      sub_60418110(3, a2);
      sub_60417FFC(dword_60C9BAAC, 3u);
    }
    result = FIELD_U8(a1, 3229);
    if ( FIELD_U8(a1, 3229) )
    {
      gaussian_ref(dword_60C9BAAC, 0, a2);
      sub_6090B260(a2[3], a2[10]);
      return sub_6090E560(a2[8], a2[10], a2[3]);
    }
  }
  return result;
}
