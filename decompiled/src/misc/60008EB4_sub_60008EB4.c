/* sub_60008EB4
 * address: 0x60008EB4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60008EB4(int result, int (*a2)(void))
{
  int v2; // r6
  int *v4; // r7
  int *i; // r1

  v2 = result;
  v4 = *(int **)(result + 4);
  for ( i = *(int **)(result + 12); v4 != i; ++v4 )
  {
    result = *v4;
    if ( *v4 )
    {
      if ( !FIELD_U8(result, 19) )
      {
        result = a2();
        i = *(int **)(v2 + 12);
      }
    }
  }
  return result;
}
