/* sub_607F074C
 * address: 0x607F074C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F074C(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2

  sub_60560E3C(a1 + 568);
  result = FIELD_U8(a1, 64540);
  if ( !FIELD_U8(a1, 64540) )
  {
    result = FIELD_U8(a1, 620);
    if ( !FIELD_U8(a1, 620) )
    {
      result = FIELD_U32(a1, 472);
      v3 = FIELD_U32(dword_60CC62E4, 128);
      v4 = v3 + 1000;
      if ( result >= 1000 )
      {
        if ( result < v4 )
          return result;
        result = v3 + 2000;
      }
      else
      {
        FIELD_U32(a1, 480) = v4;
        result = 1000;
      }
      FIELD_U32(a1, 472) = result;
    }
  }
  return result;
}
