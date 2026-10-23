/* sub_6049D3D0
 * address: 0x6049D3D0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049D3D0(int a1)
{
  _DWORD *v2; // r5
  int result; // r0

  v2 = (_DWORD *)(a1 + 44);
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA0B64, 0);
  sub_604741D8(v2, 1u, &dword_60CA0B8C, 0);
  FIELD_U8(a1, 20308) = 1;
  FIELD_U8(a1, 20309) = 1;
  FIELD_U8(a1, 22501) = 1;
  result = FIELD_U32(a1, 20276);
  FIELD_U8(result, 2698) = 0;
  return result;
}
