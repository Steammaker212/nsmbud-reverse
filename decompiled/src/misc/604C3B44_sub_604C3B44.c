/* sub_604C3B44
 * address: 0x604C3B44   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C3B44(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = FIELD_U32(dword_60CC6D78, 416);
  FIELD_U8(a1, 14020) = 0;
  FIELD_U8(a1, 14016) = 0;
  FIELD_U8(a1, 14023) = 0;
  FIELD_U8(a1, 14019) = 0;
  FIELD_U8(a1, 14022) = 0;
  FIELD_U8(a1, 14021) = 0;
  FIELD_U8(a1, 14015) = 0;
  FIELD_U8(a1, 14018) = 0;
  FIELD_U8(a1, 14017) = 0;
  FIELD_U8(a1, 14024) = v2 == 0;
  FIELD_U8(a1, 14025) = 1;
  sub_604C6B78(a1);
  result = FIELD_U32(a1, 13872);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
