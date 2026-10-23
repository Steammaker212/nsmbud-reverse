/* sub_604B0C24
 * address: 0x604B0C24   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B0C24(int a1)
{
  int result; // r0

  sub_60502548(a1 + 3608);
  FIELD_U16(a1, 4660) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3648));
  *(_BYTE *)(FIELD_U32(a1, 6168) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6172) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6176) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6180) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6184) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6188) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6192) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6196) + 64) &= ~1u;
  result = FIELD_U32(a1, 6200);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
