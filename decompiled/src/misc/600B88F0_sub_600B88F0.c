/* sub_600B88F0
 * address: 0x600B88F0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600B88F0()
{
  int result; // r0

  FIELD_U8(dword_60C9CF0C, 1393) = 0;
  FIELD_U32(dword_60C99DD4, 1376) &= ~2u;
  FIELD_U32(PlayerMgr_instance, 140) = 0;
  result = dword_60C99D88;
  FIELD_U8(dword_60C99D88, 31) = 1;
  FIELD_U32(result, 32) = 0;
  return result;
}
