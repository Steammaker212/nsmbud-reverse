/* sub_60760110
 * address: 0x60760110   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60760110(int a1)
{
  int v1; // r1
  float result; // s0
  unsigned int v3; // r1

  v1 = FIELD_U32(a1, 1220);
  if ( (v1 & 2) == 0 || (result = FIELD_F32(a1, 124), result > 0.0) )
  {
    v3 = v1 & 0xFFFFFFFE;
LABEL_4:
    FIELD_U32(a1, 1220) = v3;
    return result;
  }
  if ( (v1 & 1) == 0 )
  {
    result = FIELD_F32(a1, 112);
    if ( result <= FIELD_F32(a1, 10020) )
    {
      v3 = v1 | 1;
      goto LABEL_4;
    }
  }
  return result;
}
