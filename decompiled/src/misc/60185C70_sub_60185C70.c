/* sub_60185C70
 * address: 0x60185C70   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60185C70(Actor *a1, unsigned __int8 *a2)
{
  Actor *result; // r0

  result = sub_60168634(a1, (int)a2);
  FIELD_U32(result, 0x0) = (int)off_60BD5200;
  FIELD_U32(result + (2) * 80, 0x3C) = 1065353216;
  FIELD_U32(result + (2) * 80, 0x40) = 1065353216;
  FIELD_U32(result + (2) * 80, 0x44) = 1065353216;
  FIELD_U32(result + (2) * 80, 0x48) = 0;
  FIELD_U32(result + (2) * 80, 0x4C) = 0;
  FIELD_U32(result + (3) * 80, 0x0) = a2[34];
  FIELD_U32(result + (3) * 80, 0x4) = a2[32];
  FIELD_U32(result + (3) * 80, 0x8) = a2[36];
  FIELD_U32(result + (3) * 80, 0xC) = (Profile *)a2[33];
  *(_DWORD *)&FIELD_U8(result + (3) * 80, 0x10) = 0;
  LOBYTE(FIELD_U32(result + (3) * 80, 0x14)) = 0;
  return result;
}
