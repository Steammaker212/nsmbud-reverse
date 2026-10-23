/* sub_601447C4
 * address: 0x601447C4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601447C4(int a1, int a2)
{
  int v2; // r2
  _DWORD *result; // r0
  int v4; // r1

  v2 = FIELD_U32(a1, 36);
  FIELD_F32(v2, 120) = flt_60AF1F10[FIELD_U32(v2, 80)] + (float)(FIELD_F32(a2, 120) * 0.5);
  FIELD_U32(v2, 124) = 1076677837;
  FIELD_U32(v2, 128) = 0;
  *(_BYTE *)(FIELD_U32(a1, 36) + 6100) = 0;
  *(_DWORD *)(FIELD_U32(a1, 36) + 100) = -1103940813;
  *(_DWORD *)(FIELD_U32(a1, 36) + 132) = dword_60AF1F18[*(_DWORD *)(FIELD_U32(a1, 36) + 80)];
  *(_DWORD *)(FIELD_U32(a1, 36) + 96) = -1065353216;
  *(_DWORD *)(FIELD_U32(a1, 36) + 136) = -1065353216;
  *(_DWORD *)(FIELD_U32(a1, 36) + 104) = 1025758986;
  result = *(_DWORD **)(a1 + 36);
  v4 = result[20];
  result[39] = -536870912;
  result[40] = dword_60AF1EC0[v4];
  result[41] = 0;
  return result;
}
