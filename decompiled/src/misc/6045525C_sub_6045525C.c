/* sub_6045525C
 * address: 0x6045525C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045525C(int a1, int a2, __int16 a3, __int16 a4)
{
  FIELD_U8(a1, 310) = 0;
  FIELD_U32(a1, 272) = a3 & 0x3FFF;
  FIELD_U16(a1, 308) = a4;
  return sub_60909158();
}
