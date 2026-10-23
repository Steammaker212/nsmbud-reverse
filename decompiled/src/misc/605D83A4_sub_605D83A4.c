/* sub_605D83A4
 * address: 0x605D83A4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605D83A4(int a1, int a2, float result)
{
  FIELD_U32(a1, 6264) |= 0x80000000;
  FIELD_F32(a1, 116) = result;
  if ( a2 == 1 )
  {
    result = result + (float)((float)FIELD_U32(a1, 6800) * 16.0);
    FIELD_F32(a1, 116) = result;
  }
  return result;
}
