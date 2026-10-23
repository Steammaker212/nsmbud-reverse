/* sub_6055B64C
 * address: 0x6055B64C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055B64C(int a1)
{
  int result; // r0

  sub_60502548(a1 + 3608);
  FIELD_U16(a1, 4660) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3648));
  FIELD_U32(a1, 4636) = 2;
  FIELD_U8(a1, 4651) = 0;
  FIELD_U8(a1, 4648) = 1;
  FIELD_U8(a1, 4652) = 1;
  *(_BYTE *)(FIELD_U32(a1, 3596) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 3600) + 64) |= 1u;
  result = FIELD_U32(a1, 3604);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
