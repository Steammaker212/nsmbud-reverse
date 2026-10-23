/* sub_604984AC
 * address: 0x604984AC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604984AC(int result)
{
  unsigned int v1; // r2
  unsigned int v2; // r3

  FIELD_U8(result, 146857) = 1;
  if ( FIELD_S32(result, 146864) >= 1 )
  {
    v1 = 0;
    do
    {
      v2 = 0;
      if ( v1 < 4 )
        v2 = v1;
      ++v1;
      *(_DWORD *)(result + 20556 * v2 + 5728) |= 1u;
    }
    while ( (signed int)v1 < FIELD_U32(result, 146864) );
  }
  return result;
}
