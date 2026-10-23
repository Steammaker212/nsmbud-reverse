/* sub_600D26A0
 * address: 0x600D26A0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600D26A0(_DWORD *result)
{
  int v1; // r1

  FIELD_U32(dword_60C99D88, 32) = 1;
  result[1531] = 1;
  v1 = dword_60CC6484;
  result[1580] = FIELD_U32(dword_60CC6484, 116);
  result[1583] = FIELD_U32(v1, 112);
  return result;
}
