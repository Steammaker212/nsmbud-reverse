/* sub_6055E394
 * address: 0x6055E394   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055E394(int a1)
{
  int v2; // r5
  int result; // r0
  _DWORD v4[10]; // [sp+0h] [bp-28h] BYREF

  v2 = a1 + 3692;
  sub_60502210(a1 + 3692, &dword_60B040C4, 1);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "WarpSelectWindow";
  sead__SafeStringBase__operator_assign(a1 + 4704, (int)v4);
  sub_605029FC(v2, &dword_60B040CC, (int)"SE_SYS_PAGE");
  sub_605029FC(v2, &dword_60B040C8, (int)"SE_SYS_PAGE");
  sub_605029FC(v2, &dword_60B040D0, (int)"SE_SYS_BACK");
  *(_DWORD *)(sub_608DE61C(a1 + 3744, 4) - FIELD_U32(a1, 3756) + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(a1 + 3744, 4) - FIELD_U32(a1, 3756) + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  sub_605028F0(v2, &dword_60B040CC, 1);
  sub_605028F0(v2, &dword_60B040C8, 1);
  sub_605028F0(v2, &dword_60B040D0, 1);
  result = sub_608DE61C(a1 + 3744, 0) - FIELD_U32(a1, 3756);
  FIELD_U32(result, 192) = 0;
  return result;
}
