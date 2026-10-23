/* sub_609A7360
 * address: 0x609A7360   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A7360(int a1)
{
  int v1; // r1
  int v2; // r0
  int v3; // r2

  v1 = a1 + 400;
  v2 = FIELD_U32(a1, 404);
  if ( v2 != v1 )
  {
    v3 = 0;
    do
    {
      *(_DWORD *)(FIELD_U32(v2, 8) + 144) = v3++;
      v2 = FIELD_U32(v2, 4);
    }
    while ( v2 != v1 );
  }
  return 1;
}
