/* sub_6095CA0C
 * address: 0x6095CA0C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095CA0C(int result)
{
  int v1; // r1
  int *v2; // r4
  int v3; // r5
  int v4; // t1

  v1 = FIELD_U32(result, 408);
  if ( v1 )
  {
    v2 = *(int **)(result + 416);
    v3 = 4 * v1;
    do
    {
      v4 = *v2++;
      result = sub_6097A98C(v4);
      v3 -= 4;
    }
    while ( v3 );
  }
  return result;
}
