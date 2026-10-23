/* sub_6022A3E8
 * address: 0x6022A3E8   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022A3E8(int result, float a2)
{
  FIELD_F32(result, 40) = a2 * 0.04;
  FIELD_F32(result, 44) = a2;
  return result;
}
