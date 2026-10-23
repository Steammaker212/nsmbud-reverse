/* sub_607FAAD4
 * address: 0x607FAAD4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607FAAD4(int a1)
{
  float result; // s0

  result = (float)(FIELD_F32(a1, 8) + -1.0) / 1.4;
  if ( result < 0.0 )
    return 0.0;
  if ( result > 1.0 )
    return 1.0;
  return result;
}
