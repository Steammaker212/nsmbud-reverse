/* sub_607982F4
 * address: 0x607982F4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607982F4(int result)
{
  int v1; // r1
  bool v2; // zf
  _DWORD *v3; // r4

  if ( (FIELD_U8(result, 1219) & 8) != 0 )
  {
    v1 = FIELD_U32(result, 9940);
    v2 = v1 == 2;
    if ( v1 == 2 )
      v2 = (FIELD_U8(result, 1204) & 0x80) == 0;
    if ( v2 )
    {
      v3 = (_DWORD *)(result + 12204);
      if ( !FIELD_U32(result, 12204) )
      {
        sub_60773630(result, 37, 0);
        *v3 = 120;
        return 120;
      }
    }
  }
  return result;
}
