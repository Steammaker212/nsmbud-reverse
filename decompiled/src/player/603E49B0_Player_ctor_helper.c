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
  FIELD_U32(result + (1) * 16, 0x8) = a2;
  LOBYTE(FIELD_U32(result + (1) * 16, 0xC)) = 0;
  BYTE1(FIELD_U32(result + (1) * 16, 0xC)) = 0;
  BYTE2(FIELD_U32(result + (1) * 16, 0xC)) = 0;
  FIELD_U32(result + (2) * 16, 0x0) = 0;
  return result;
}
