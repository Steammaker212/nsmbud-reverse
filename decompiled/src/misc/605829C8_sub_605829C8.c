/* sub_605829C8
 * address: 0x605829C8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605829C8(int a1, int a2)
{
  int v2; // lr
  unsigned __int8 *i; // r2
  int result; // r0

  v2 = 0;
  for ( i = (unsigned __int8 *)(a1 + 6184); ; i += 28 )
  {
    result = *((_DWORD *)i - 3);
    if ( result )
    {
      if ( *((float *)i - 6) == *(float *)a2
        && *((float *)i - 5) == FIELD_F32(a2, 4)
        && *((float *)i - 4) == FIELD_F32(a2, 8)
        && *i == FIELD_U8(a2, 24)
        && *((_DWORD *)i - 2) == FIELD_U32(a2, 16)
        && *((_DWORD *)i - 1) == FIELD_U32(a2, 20) )
      {
        break;
      }
    }
    if ( ++v2 >= 512 )
      return 3;
  }
  return result;
}
