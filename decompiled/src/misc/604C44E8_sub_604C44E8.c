/* sub_604C44E8
 * address: 0x604C44E8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C44E8(int a1)
{
  int result; // r0

  FIELD_U8(a1, 14169) = 0;
  FIELD_U8(a1, 5103) = 0;
  *(_BYTE *)(FIELD_U32(a1, 13868) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13872) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13876) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13880) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13884) + 64) |= 1u;
  result = FIELD_U32(a1, 13888);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
