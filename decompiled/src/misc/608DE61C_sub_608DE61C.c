/* sub_608DE61C
 * address: 0x608DE61C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DE61C(int a1, int a2)
{
  int result; // r0
  int i; // r2
  int v5; // r1

  result = 0;
  if ( FIELD_U32(a1, 8) > (unsigned int)a2 )
  {
    result = FIELD_U32(a1, 4);
    if ( a2 >= 1 )
    {
      for ( i = 0; (a2 & 3) != i; ++i )
        result = FIELD_U32(result, 4);
      if ( (unsigned int)(a2 - 1) >= 3 )
      {
        v5 = a2 - i;
        do
        {
          v5 -= 4;
          result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(result, 4) + 4) + 4) + 4);
        }
        while ( v5 );
      }
    }
  }
  return result;
}
