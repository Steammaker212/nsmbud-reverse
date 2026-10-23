/* Player_ctor_helper
 * address: 0x603E49B0   size: 64   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall Player_ctor_helper(sead_IDisposer *a1, int a2)
{
  sead_IDisposer *result; // r0

  result = sub_603E4258(a1);
  FIELD_U32(result, 0x0) = (int)off_60BF8DEC;
  result[1].field_8 = a2;
  LOBYTE(result[1].field_C) = 0;
  BYTE1(result[1].field_C) = 0;
  BYTE2(result[1].field_C) = 0;
  result[2].vtable = 0;
  return result;
}
