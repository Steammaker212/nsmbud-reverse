/* sub_6097F554
 * address: 0x6097F554   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097F554(int result)
{
  int *v1; // r5
  int *v2; // r4
  int *v3; // r6
  int *v4; // r1
  int v5; // r2

  v1 = *(int **)(result + 236);
  v2 = (int *)(result + 232);
  if ( v1 != (int *)(result + 232) )
  {
    do
    {
      v3 = (int *)v1[1];
      result = sub_6097FDF0(v1 - 43);
      if ( v1 != v2 )
      {
        v4 = (int *)v1[1];
        v5 = *v4;
        *(_DWORD *)(*v1 + 4) = v4;
        result = *v1;
        *v4 = *v1;
        FIELD_U32(v5, 4) = v1;
        *v1 = v5;
      }
      v1 = v3;
    }
    while ( v3 != v2 );
  }
  return result;
}
