/* sub_604C2818
 * address: 0x604C2818   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C2818(int a1)
{
  int result; // r0

  FIELD_U8(a1, 14024) = 0;
  FIELD_U8(a1, 14023) = 0;
  FIELD_U8(a1, 14020) = 0;
  FIELD_U8(a1, 14016) = 0;
  FIELD_U8(a1, 14025) = 0;
  FIELD_U8(a1, 14019) = 0;
  FIELD_U8(a1, 14022) = 0;
  FIELD_U8(a1, 14021) = 0;
  FIELD_U8(a1, 14015) = 0;
  FIELD_U8(a1, 14018) = 0;
  FIELD_U8(a1, 14017) = 0;
  sub_604C7964(a1);
  sub_604C6B78(a1);
  FIELD_U8(a1, 14173) = 0;
  *(_BYTE *)(FIELD_U32(a1, 13868) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 13872) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 13876) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 13880) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 13884) + 64) &= ~1u;
  result = FIELD_U32(a1, 13888);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
