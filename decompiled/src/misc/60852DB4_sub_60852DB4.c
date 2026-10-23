/* sub_60852DB4
 * address: 0x60852DB4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60852DB4(int a1, float *a2)
{
  _BOOL4 result; // r0
  float v4; // s0

  result = 0;
  if ( FIELD_U32(a1, 64) && FIELD_F32(a1, 68) <= *a2 && *a2 <= FIELD_F32(a1, 76) )
  {
    v4 = a2[1];
    if ( FIELD_F32(a1, 72) <= v4 )
      return v4 <= FIELD_F32(a1, 80);
  }
  return result;
}
