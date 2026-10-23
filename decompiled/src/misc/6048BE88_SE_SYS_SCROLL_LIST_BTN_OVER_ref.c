/* SE_SYS_SCROLL_LIST_BTN_OVER_ref
 * address: 0x6048BE88   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_SCROLL_LIST_BTN_OVER_ref(int a1)
{
  int v2; // r9
  int v3; // r11
  int v4; // r5
  int v5; // r8
  int v6; // r6
  int v7; // r0
  int result; // r0
  int v9; // [sp+4h] [bp-2Ch]
  int v10; // [sp+8h] [bp-28h]

  v2 = 0;
  v10 = a1 + 6260;
  v9 = a1 + 3752;
  v3 = a1 + 47800;
  v4 = a1 + 3820;
  v5 = a1 + 3768;
  do
  {
    sub_6048D43C(*(_DWORD *)(v3 + v2));
    v6 = *(_DWORD *)(v10 + v2);
    sub_6050270C(
      v5,
      v6,
      1,
      *(float *)(*(_DWORD *)(v9 + v2) + 92),
      *(float *)(*(_DWORD *)(v3 + v2) + 92),
      *(float *)(*(_DWORD *)(v9 + v2) + 92),
      *(float *)(*(_DWORD *)(v3 + v2) + 88));
    *(_DWORD *)(sub_608DE61C(v4, v6) - FIELD_U32(a1, 3832) + 176) = "SE_SYS_SCROLL_LIST_BTN_OVER";
    *(_DWORD *)(sub_608DE61C(v4, v6) - FIELD_U32(a1, 3832) + 180) = "SE_SYS_SCROLL_LIST_BTN_OVER_OFF";
    sub_605028F0(v5, v10 + v2, 0);
    v7 = sub_608DE61C(v4, *(_DWORD *)(v10 + v2));
    v2 += 4;
    result = v7 - FIELD_U32(a1, 3832);
    FIELD_U8(result, 208) = 0;
  }
  while ( v2 != 16 );
  return result;
}
