/* sub_60800A24
 * address: 0x60800A24   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60800A24(int result, float *a2)
{
  float v2; // s0
  float v3; // s2

  v2 = FIELD_F32(result, 28);
  v3 = *a2;
  if ( v2 >= *a2 )
  {
    v3 = FIELD_F32(result, 28);
    if ( v2 > (float)(a2[2] - FIELD_F32(result, 20)) )
      v3 = a2[2] - FIELD_F32(result, 20);
  }
  FIELD_F32(result, 28) = v3;
  return result;
}
