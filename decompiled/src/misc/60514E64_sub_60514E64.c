/* sub_60514E64
 * address: 0x60514E64   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60514E64(int a1)
{
  int v2; // r5
  int v3; // r0
  int result; // r0
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v2 = a1 + 3596;
  FIELD_U32(a1, 12892) = sub_60502E60(a1 + 3596, dword_60CA86D0);
  FIELD_U32(a1, 12896) = sub_60502E60(v2, &dword_60CA86D8);
  FIELD_U32(a1, 12900) = sub_60502E60(v2, &dword_60CA86E0);
  FIELD_U32(a1, 12904) = sub_60502E60(v2, &dword_60CA86E8);
  FIELD_U32(a1, 12908) = sub_60502E60(v2, &dword_60CA86F0);
  FIELD_U32(a1, 12912) = sub_60502E60(v2, &dword_60CA86F8);
  FIELD_U32(a1, 12916) = sub_60502E60(v2, &dword_60CA8700);
  FIELD_U32(a1, 12920) = sub_60502E60(v2, &dword_60CA8708);
  FIELD_U8(a1, 4650) = 1;
  sub_60502210(v2, (_DWORD *)(a1 + 12896), 17);
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = v3;
  sead__SafeStringBase__operator_assign(a1 + 4608, (int)v5);
  sub_6050292C(v2, 15);
  sub_60502960(v2, 15);
  sub_60502994(v2, 15);
  sub_605029C8(v2, 15);
  sub_605029FC(v2, (_DWORD *)(a1 + 12892), (int)"SE_SYS_BACK");
  sub_605028F0(v2, (_DWORD *)(a1 + 12892), 1);
  *(_DWORD *)(sub_608DE61C(a1 + 3648, FIELD_U32(a1, 12892)) - FIELD_U32(a1, 3660) + 176) = "SE_SYS_BACK_BTN_OVER";
  result = sub_608DE61C(a1 + 3648, FIELD_U32(a1, 12892)) - FIELD_U32(a1, 3660);
  FIELD_U32(result, 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  return result;
}
