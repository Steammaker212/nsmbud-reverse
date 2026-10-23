/* sub_606E37B0
 * address: 0x606E37B0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E37B0(int result)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(result, 20);
  FIELD_U8(result, 6916) = (v1 & 0xF00000) == 0;
  FIELD_U32(result, 6912) = HIBYTE(v1) & 7;
  return result;
}
