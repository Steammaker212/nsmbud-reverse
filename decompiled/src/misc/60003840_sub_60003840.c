/* sub_60003840
 * address: 0x60003840   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60003840(int a1)
{
  float result; // s0

  if ( !FIELD_U32(a1, 6060) && FIELD_U8(a1, 6059) && (FIELD_U8(a1, 2872) & 1) == 0 )
  {
    FIELD_U32(a1, 6060) = 1;
    result = FIELD_F32(a1, 180) + FIELD_F32(a1, 6032);
    FIELD_F32(a1, 6000) = result;
  }
  return result;
}
