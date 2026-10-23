/* sub_6072E2AC
 * address: 0x6072E2AC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6072E2AC(int a1)
{
  int *result; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r2

  FIELD_U32(a1, 6112) = 0;
  result = (int *)(a1 + 6112);
  v2 = result[61];
  v3 = v2;
  if ( v2 )
    v3 = 1;
  *result = v3;
  if ( result[62] )
  {
    v4 = 2;
    if ( !v2 )
      v4 = 1;
    *result = v4;
  }
  return result;
}
