/* sub_607868D4
 * address: 0x607868D4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607868D4(int a1, _DWORD *a2)
{
  int v2; // r2
  int result; // r0

  v2 = FIELD_U32(a1, 8);
  if ( (v2 & 0x80) != 0 )
  {
    result = 1;
    if ( a2 )
      *a2 = 0;
  }
  else
  {
    result = 0;
    if ( (v2 & 0x40) != 0 && !FIELD_U8(dword_60C9A1F0, 6521) )
    {
      result = 1;
      if ( a2 )
        *a2 = 1;
    }
  }
  return result;
}
