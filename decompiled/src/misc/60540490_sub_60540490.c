/* sub_60540490
 * address: 0x60540490   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60540490(int a1)
{
  sub_60473DE4((_DWORD *)(a1 + 28128), 0, &dword_60CABA8C, 0);
  FIELD_U8(a1, 34724) = 1;
  *(_BYTE *)(FIELD_U32(a1, 31728) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31732) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31700) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31716) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31744) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31748) + 64) |= 1u;
  sub_60541DF8(a1, FIELD_U32(a1, 34716), 4);
  sub_605324A4(a1 + 16052, FIELD_U32(a1, 34716));
  sub_60541DF8(a1, FIELD_U32(a1, 34720), 5);
  sub_605324A4(a1 + 20064, FIELD_U32(a1, 34720));
  sub_60502548(a1 + 31800);
  FIELD_U16(a1, 32852) = 0;
  return sub_6047EABC((_DWORD *)(a1 + 31840));
}
