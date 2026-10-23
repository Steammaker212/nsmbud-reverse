/* sub_607C690C
 * address: 0x607C690C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C690C(int a1)
{
  int result; // r0

  FIELD_U32(a1, 1208) &= 0xEFFFFFEF;
  FIELD_U32(a1, 1224) &= 0xFFFFFBBB;
  FIELD_U16(a1, 6690) &= ~2u;
  FIELD_U32(a1, 11392) = 0;
  FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
  FIELD_U32(a1, 12080) = 8;
  FIELD_U8(a1, 12916) = 0;
  result = FIELD_U32(a1, 12144);
  FIELD_U32(a1, 80) = result;
  return result;
}
