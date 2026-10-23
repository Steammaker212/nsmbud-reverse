/* sub_609969BC
 * address: 0x609969BC   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609969BC(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r5
  unsigned int v12; // r0
  int result; // r0

  a1[4] = a3;
  v6 = sub_60853D80(a2, "TopLeft");
  a1[5] = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a3 + 12) + 48))(FIELD_U32(a3, 12), v6, 1);
  v7 = sub_60853D80(a2, "TopRight");
  a1[6] = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a3 + 12) + 48))(FIELD_U32(a3, 12), v7, 1);
  v8 = sub_60853D80(a2, "BottomLeft");
  a1[7] = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a3 + 12) + 48))(FIELD_U32(a3, 12), v8, 1);
  v9 = sub_60853D80(a2, "BottomRight");
  a1[8] = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a3 + 12) + 48))(FIELD_U32(a3, 12), v9, 1);
  v10 = *(_DWORD *)(a1[4] + 72);
  v11 = *(_DWORD *)(FIELD_U32(v10, 20) + 840);
  v12 = sub_6098BED8(v10);
  sub_6097C7B8(v11, v12, (int)a1);
  result = *(_DWORD *)(a1[4] + 72);
  FIELD_U8(result, 130) |= 4u;
  return result;
}
