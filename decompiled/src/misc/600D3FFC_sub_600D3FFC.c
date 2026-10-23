/* sub_600D3FFC
 * address: 0x600D3FFC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600D3FFC()
{
  int result; // r0

  FIELD_U32(dword_60C99DD4, 1376) &= ~2u;
  FIELD_U32(PlayerMgr_instance, 140) = 0;
  result = dword_60C99D88;
  FIELD_U8(dword_60C99D88, 31) = 1;
  return result;
}
