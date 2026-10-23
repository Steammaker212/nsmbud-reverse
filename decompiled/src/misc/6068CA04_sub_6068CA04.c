/* sub_6068CA04
 * address: 0x6068CA04   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6068CA04(int a1, int a2)
{
  int v2; // r1
  _BOOL4 result; // r0
  int v4; // r1

  v2 = FIELD_U32(a2, 32);
  result = 1;
  if ( v2 )
  {
    result = 0;
    if ( (FIELD_U8(v2, 137) & 8) == 0 )
    {
      v4 = FIELD_U16(v2, 304);
      if ( v4 != 24 )
        return v4 != 31;
    }
  }
  return result;
}
