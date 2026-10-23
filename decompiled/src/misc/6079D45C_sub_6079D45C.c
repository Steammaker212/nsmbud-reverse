/* sub_6079D45C
 * address: 0x6079D45C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6079D45C(int a1)
{
  float result; // s0
  float v2; // s2
  float v3; // s2

  result = 0.0;
  v2 = FIELD_F32(a1, 11424);
  if ( v2 != 0.0 )
  {
    v3 = FIELD_F32(a1, 11420) / v2;
    if ( v3 >= 0.0 )
    {
      result = v3;
      if ( v3 > 1.0 )
        return 1.0;
    }
  }
  return result;
}
