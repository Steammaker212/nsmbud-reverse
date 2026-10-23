/* sub_6052E78C
 * address: 0x6052E78C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052E78C(_DWORD *a1)
{
  int result; // r0
  __int16 v3; // r2
  int v4; // r2
  bool v5; // zf
  int v6; // r2

  sub_60473DE4(a1 + 10, 0, &dword_60CAA7E8, 0);
  result = *(_DWORD *)(a1[915] + 172);
  v3 = *(_WORD *)result;
  a1[2848] = 0;
  if ( result )
  {
    v4 = v3 & 0xFFFE;
    v5 = v4 == 14;
    if ( v4 == 14 )
      v5 = FIELD_U16(result, 2) == 21;
    if ( v5 )
    {
      if ( FIELD_U16(result, 4) == 1 )
      {
        v6 = 2;
      }
      else
      {
        if ( FIELD_U16(result, 4) )
          return result;
        v6 = 1;
      }
      a1[2848] = v6;
      result = FIELD_U8(result, 8)
             | (FIELD_U8(result, 9) << 8)
             | (FIELD_U8(result, 10) << 16)
             | (FIELD_U8(result, 11) << 24);
      a1[2849] = result;
      a1[2850] = result;
    }
  }
  return result;
}
