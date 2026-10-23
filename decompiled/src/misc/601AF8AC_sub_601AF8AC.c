/* sub_601AF8AC
 * address: 0x601AF8AC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AF8AC(_DWORD *a1)
{
  _BOOL4 v2; // r0
  int v3; // r1
  int result; // r0

  a1[149] = 1;
  v2 = sub_60185EA8((int)a1);
  v3 = 4;
  if ( v2 )
    v3 = 0;
  a1[148] = v3;
  result = a1[62];
  a1[77] = result;
  return result;
}
