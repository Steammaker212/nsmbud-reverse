/* sub_603189E4
 * address: 0x603189E4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603189E4(int a1)
{
  int result; // r0

  FIELD_U8(a1, 6404) = 0;
  FIELD_U16(a1, 6276) = 32;
  sub_60237610((EffectData *)(a1 + 6808), 713, (__int64 *)(a1 + 6336), 0);
  result = FIELD_U32(a1, 6308);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
