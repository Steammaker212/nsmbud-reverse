/* sub_6085257C
 * address: 0x6085257C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085257C(int result, float a2)
{
  FIELD_U32(result, 36) = 0;
  FIELD_F32(result, 16) = a2;
  FIELD_U32(result, 44) &= 0xFFFFFFF8;
  return result;
}
