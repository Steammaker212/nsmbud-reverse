/* sub_6049E5D4
 * address: 0x6049E5D4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049E5D4(int a1)
{
  sub_60502548(a1 + 3636);
  FIELD_U16(a1, 4688) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3676));
  *(_BYTE *)(FIELD_U32(a1, 20204) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20208) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20212) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20216) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20252) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20256) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20260) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20264) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20268) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20272) + 64) &= ~1u;
  FIELD_U8(a1, 12980) = 1;
  FIELD_U8(a1, 12983) = 1;
  return 12983;
}
