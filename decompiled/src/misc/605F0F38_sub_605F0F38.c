/* sub_605F0F38
 * address: 0x605F0F38   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F0F38(int result)
{
  float v1; // s4
  float v2; // s0

  v1 = FIELD_F32(result, 112) + 1.0;
  FIELD_F32(result, 112) = v1;
  v2 = FIELD_F32(result, 6848);
  if ( fabsf(v2 - v1) >= 80.0 )
  {
    FIELD_F32(result, 112) = v2 + 80.0;
    FIELD_U8(result, 6896) = 1;
  }
  return result;
}
