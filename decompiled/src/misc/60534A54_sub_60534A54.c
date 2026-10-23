/* sub_60534A54
 * address: 0x60534A54   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60534A54(int a1)
{
  FIELD_U16(a1, 16752) = 0;
  sub_6047EABC((_DWORD *)(a1 + 15740));
  *(_BYTE *)(FIELD_U32(a1, 52600) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52604) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52608) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52612) + 64) &= ~1u;
  FIELD_U8(a1, 52511) = 1;
  FIELD_U8(a1, 83625) = 0;
  return 83625;
}
