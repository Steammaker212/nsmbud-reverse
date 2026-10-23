/* sub_607C2700
 * address: 0x607C2700   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C2700(int a1)
{
  __int16 v2; // t1

  FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
  FIELD_U32(a1, 1212) &= ~0x2000u;
  FIELD_U32(a1, 1236) &= ~0x10000u;
  FIELD_U32(a1, 1216) &= 0xFFF9FFFF;
  FIELD_U32(a1, 1224) &= ~0x20u;
  v2 = FIELD_U16(a1, 6690);
  FIELD_U16(a1, 6690) = v2 & 0xFFFE;
  return v2 & 0xFFFE;
}
