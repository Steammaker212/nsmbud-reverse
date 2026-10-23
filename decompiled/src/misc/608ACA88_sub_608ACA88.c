/* sub_608ACA88
 * address: 0x608ACA88   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608ACA88(int a1, int a2)
{
  float v4; // s16
  float result; // s0

  if ( !a2 )
    return FIELD_F32(a1, 68);
  if ( a2 <= 3 )
    return *(float *)(a1 + 4 * a2 + 68);
  v4 = 0.0;
  if ( FIELD_U32(a1, 84) && sub_608B0F28() == 1 )
  {
    sub_608B0EF4(FIELD_U32(a1, 84), a2);
    return result;
  }
  return v4;
}
