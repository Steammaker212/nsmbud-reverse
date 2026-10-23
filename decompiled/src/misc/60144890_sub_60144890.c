/* sub_60144890
 * address: 0x60144890   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60144890(int a1, int a2)
{
  int v2; // r2
  _DWORD *v3; // r1
  int v4; // r2
  int v5; // r3
  _DWORD *v6; // r1
  int result; // r0
  int v8; // r2
  int v9; // r3

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
  v3 = *(_DWORD **)(a1 + 36);
  v4 = v3[20];
  v3[39] = -536870912;
  v5 = a1 + 12;
  v3[40] = dword_60AF1EC0[v4];
  v3[41] = 0;
  v6 = *(_DWORD **)(a1 + 36);
  result = FIELD_U32(a1, 12);
  v8 = FIELD_U32(v5, 4);
  v9 = FIELD_U32(v5, 8);
  v6 += 36;
  *v6 = result;
  v6[1] = v8;
  v6[2] = v9;
  return result;
}
