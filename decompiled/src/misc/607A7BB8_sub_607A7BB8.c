/* sub_607A7BB8
 * address: 0x607A7BB8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A7BB8(int a1)
{
  FIELD_U32(a1, 9720) = 0;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 1);
  FIELD_U32(a1, 1224) &= ~0x100000u;
  FIELD_U32(a1, 1204) &= 0xFF8FBFFF;
  FIELD_U8(a1, 12013) = 0;
  return 12013;
}
