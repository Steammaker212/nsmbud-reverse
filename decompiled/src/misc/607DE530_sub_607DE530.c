/* sub_607DE530
 * address: 0x607DE530   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DE530(int result, int a2, int a3)
{
  int v3; // r6
  float v6; // s0
  float v7; // s0
  float v8; // s0

  v3 = result;
  v6 = FIELD_F32(result, 172);
  if ( v6 > 0.0 )
  {
    v7 = v6 + FIELD_F32(result, 176);
    FIELD_F32(result, 176) = v7;
    if ( v7 >= 1.0 )
    {
      do
      {
        result = nn__hid__VibrationPlayer__OnNextSampleRequired(v3, a2, a3);
        v8 = FIELD_F32(v3, 176) + -1.0;
        FIELD_F32(v3, 176) = v8;
      }
      while ( v8 >= 1.0 );
    }
  }
  return result;
}
