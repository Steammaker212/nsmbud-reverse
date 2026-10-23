/* sub_607DE4E8
 * address: 0x607DE4E8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DE4E8(int a1, float *a2)
{
  int result; // r0
  float v5; // s0

  result = nn__hid__VibrationMixer__OnNextSampleRequired();
  if ( a2 )
  {
    v5 = FIELD_F32(a1, 44);
    if ( a2[2] > v5 )
    {
      a2[2] = v5;
      v5 = FIELD_F32(a1, 44);
    }
    if ( *a2 > v5 )
      *a2 = v5;
  }
  return result;
}
