/* sub_60909504
 * address: 0x60909504   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60909504(int result, float a2, float a3)
{
  if ( a2 >= a3 )
  {
    FIELD_F32(result, 236) = a2;
    FIELD_F32(result, 244) = a3;
  }
  return result;
}
