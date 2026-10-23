/* sub_6055D3B8
 * address: 0x6055D3B8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055D3B8(int a1)
{
  int result; // r0

  FIELD_U8(a1, 13754) = 0;
  FIELD_U8(a1, 4735) = 0;
  FIELD_U8(a1, 4732) = 1;
  FIELD_U8(a1, 4736) = 1;
  *(_BYTE *)(FIELD_U32(a1, 13564) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13568) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13572) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13576) + 64) |= 1u;
  result = FIELD_U32(a1, 13580);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
