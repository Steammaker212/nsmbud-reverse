/* sub_608B4394
 * address: 0x608B4394   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608B4394(int *result, int a2, int a3)
{
  int *v3; // r3
  int *v4; // r2
  int v5; // r4

  *result = a2;
  result[1] = a3;
  v3 = (int *)result[3];
  if ( v3 != result + 2 )
  {
    do
    {
      v4 = (int *)v3[1];
      v5 = *v4;
      *(_DWORD *)(*v3 + 4) = v4;
      *v4 = *v3;
      FIELD_U32(v5, 4) = v3;
      *v3 = v5;
      v3 = (int *)result[3];
    }
    while ( v3 != result + 2 );
    a2 = *result;
    a3 = result[1];
  }
  result[4] = a2;
  result[5] = a3;
  return result;
}
