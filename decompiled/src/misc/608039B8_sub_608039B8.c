/* sub_608039B8
 * address: 0x608039B8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608039B8(int a1)
{
  int v1; // r0
  float result; // s0
  int v3; // r0
  float v4; // s2

  v1 = FIELD_U32(a1, 44);
  result = 0.0;
  if ( v1 >= 2 )
  {
    v3 = v1 - 1;
    v4 = (float)v3 / 52.0;
    if ( v4 >= 0.0 )
    {
      result = (float)v3 / 52.0;
      if ( v4 > 1.0 )
        return 1.0;
    }
  }
  return result;
}
