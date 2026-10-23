/* sub_60008D1C
 * address: 0x60008D1C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60008D1C(int a1, int (__fastcall ***a2)(_DWORD), unsigned int a3)
{
  unsigned int v5; // r4
  unsigned int v6; // r1
  unsigned int result; // r0

  v5 = a3;
  v6 = FIELD_U32(a1, 4);
  result = FIELD_U32(a1, 12);
  if ( v6 <= a3 && result >= a3 )
  {
    if ( result == a3 )
    {
      return v5;
    }
    else
    {
      do
      {
        if ( *(_DWORD *)v5 && !*(_BYTE *)(*(_DWORD *)v5 + 19) )
        {
          if ( (**a2)(a2) )
            return v5;
          result = FIELD_U32(a1, 12);
        }
        v5 += 4;
      }
      while ( v5 != result );
    }
  }
  return result;
}
