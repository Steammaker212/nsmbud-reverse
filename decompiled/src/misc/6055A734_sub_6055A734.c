/* sub_6055A734
 * address: 0x6055A734   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055A734(_BYTE *a1)
{
  int result; // r0

  nullsub_20();
  a1[4037] = 1;
  a1[4039] = 0;
  a1 += 4039;
  a1[5] = 0;
  a1[4] = 0;
  a1[3] = 0;
  a1[2] = 0;
  a1[1] = 0;
  FIELD_U32(dword_60C99DD4, 1376) |= 2u;
  result = *(_DWORD *)(a1 - 19);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
