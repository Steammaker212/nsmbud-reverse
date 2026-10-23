/* sub_6098D964
 * address: 0x6098D964   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098D964(int result, int a2)
{
  int v2; // r5
  int *v4; // r6

  v2 = FIELD_U32(result, 20);
  if ( v2 )
  {
    v4 = *(int **)(result + 24);
    do
    {
      result = *v4;
      if ( *v4 )
        result = sub_6098BE98(result, a2);
      --v2;
      ++v4;
    }
    while ( v2 );
  }
  return result;
}
