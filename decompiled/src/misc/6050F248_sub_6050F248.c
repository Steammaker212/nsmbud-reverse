/* sub_6050F248
 * address: 0x6050F248   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050F248(int result, unsigned int a2, unsigned int a3)
{
  bool v3; // cf
  bool v4; // cc
  int v5; // r2
  unsigned int *v6; // r2
  int v7; // t1

  v3 = a2 >= 7;
  v4 = a2 > 7;
  if ( a2 <= 7 )
  {
    v3 = a3 >= 4;
    v4 = a3 > 4;
  }
  if ( !v4 )
  {
    if ( v3 )
      a3 = 0;
    v5 = result + 4 * a3;
    v7 = FIELD_U32(v5, 3760);
    v6 = (unsigned int *)(v5 + 3760);
    if ( v7 != a2 )
    {
      *v6 = a2;
      FIELD_U32(result, 4) |= 1u;
    }
  }
  return result;
}
