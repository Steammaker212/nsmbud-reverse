/* sub_608B4458
 * address: 0x608B4458   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608B4458(_DWORD *result)
{
  int *v1; // r2
  int v2; // r4
  int *v3; // r3

  result[4] = 0;
  result[5] = 0;
  while ( 1 )
  {
    v3 = (int *)result[3];
    if ( v3 == result + 2 )
      break;
    v1 = (int *)v3[1];
    v2 = *v1;
    *(_DWORD *)(*v3 + 4) = v1;
    *v1 = *v3;
    FIELD_U32(v2, 4) = v3;
    *v3 = v2;
  }
  result[1] = 0;
  *result = 0;
  result[6] = 0;
  return result;
}
