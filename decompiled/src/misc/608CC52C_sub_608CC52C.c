/* sub_608CC52C
 * address: 0x608CC52C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CC52C(int a1, int a2)
{
  int result; // r0
  bool v3; // zf
  int v4; // r2

  FIELD_U8(a1, 38) = a2;
  result = FIELD_U32(a1, 268);
  v3 = result == 0;
  if ( result )
    v3 = FIELD_U8(result, 177) == 0;
  if ( !v3 )
  {
    v4 = FIELD_U8(result, 176);
    if ( FIELD_U8(result, 176) )
      v4 = 1;
    if ( v4 != a2 )
    {
      FIELD_U8(result, 176) = a2;
      return sub_608C9520(FIELD_U32(result, 364), a2);
    }
  }
  return result;
}
