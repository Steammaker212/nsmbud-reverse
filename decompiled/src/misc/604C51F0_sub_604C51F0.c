/* sub_604C51F0
 * address: 0x604C51F0   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C51F0(_DWORD *a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // t1
  int result; // r0
  _DWORD v7[8]; // [sp+0h] [bp-20h] BYREF

  v1 = a1;
  v2 = a1 + 1014;
  sub_60502210(a1 + 1014, &unk_60B02EC0, 4);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "CourseSelectGuide";
  sead__SafeStringBase__operator_assign((int)(v1 + 1267), (int)v7);
  sub_605029FC(v2, &unk_60B02EC0, "SE_SYS_MAP_VIEW_MODE");
  sub_605029FC(v2, &unk_60B02EC4, "SE_SYS_MAP_VIEW_QUIT");
  v3 = v1 + 1027;
  v4 = sub_608DE61C(v1 + 1027, 1);
  v5 = v1[1030];
  v1 += 1030;
  *(_DWORD *)(v4 - v5 + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(v3, 1) - *v1 + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  *(_DWORD *)(sub_608DE61C(v3, 2) - *v1 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 4) - *v1 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 4) - *v1 + 196) = 15;
  *(_DWORD *)(sub_608DE61C(v3, 4) - *v1 + 200) = 15;
  *(_DWORD *)(sub_608DE61C(v3, 5) - *v1 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 5) - *v1 + 196) = 15;
  result = sub_608DE61C(v3, 5) - *v1;
  FIELD_U32(result, 200) = 15;
  return result;
}
