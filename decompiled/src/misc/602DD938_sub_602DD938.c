/* sub_602DD938
 * address: 0x602DD938   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DD938(int result, int a2, int a3)
{
  int v3; // r1
  bool v4; // zf

  if ( a2 )
  {
    v3 = FIELD_U32(a2, 8);
    v4 = v3 == 0;
    if ( v3 )
    {
      a3 = FIELD_U32(result, 6312);
      v4 = a3 == 0;
    }
    if ( !v4 && v3 == a3 )
      FIELD_U8(result, 6820) = 1;
  }
  return result;
}
