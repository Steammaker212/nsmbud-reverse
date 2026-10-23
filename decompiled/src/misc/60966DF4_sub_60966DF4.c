/* sub_60966DF4
 * address: 0x60966DF4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60966DF4(int result, _DWORD *a2)
{
  FIELD_U32(result, 60) = (*a2 + 7) & 0xFFFFFFF8;
  FIELD_U32(result, 76) = (a2[1] + 7) & 0xFFFFFFF8;
  return result;
}
