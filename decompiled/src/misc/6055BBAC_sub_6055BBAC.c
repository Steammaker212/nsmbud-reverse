/* sub_6055BBAC
 * address: 0x6055BBAC   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055BBAC(int a1)
{
  int v2; // r0
  int v3; // r0
  int v5; // [sp+0h] [bp-40h] BYREF
  const char *v6; // [sp+4h] [bp-3Ch]
  _DWORD v7[2]; // [sp+8h] [bp-38h] BYREF
  _DWORD v8[2]; // [sp+10h] [bp-30h] BYREF
  _DWORD v9[10]; // [sp+18h] [bp-28h] BYREF

  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = &byte_60B3BA34;
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = &byte_60B3BA34;
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = &byte_60B3BA34;
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = (const char *)sub_6055C594(0);
  sead__SafeStringBase__operator_assign((int)v7, (int)&v5);
  v2 = sub_6055C594(1);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = (const char *)v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v8[0] + 8))(v8, &v5);
  v3 = sub_6055C594(2);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = (const char *)v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v9[0] + 8))(v9, &v5);
  v5 = 3;
  sub_604756E0(a1 + 36, a1 + 3584, v7, &v5);
  FIELD_U32(a1, 3596) = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(a1 + 3584) + 48))(
                             FIELD_U32(a1, 3584),
                             "B_Btn_00",
                             1);
  FIELD_U32(a1, 3600) = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(a1 + 3588) + 48))(
                             FIELD_U32(a1, 3588),
                             "B_Btn_00",
                             1);
  FIELD_U32(a1, 3604) = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(a1 + 3592) + 48))(
                             FIELD_U32(a1, 3592),
                             "B_Btn_00",
                             1);
  v5 = 2;
  sub_60502210(a1 + 3608, &v5, 9);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = "VSModeSelect";
  sead__SafeStringBase__operator_assign(a1 + 4620, (int)&v5);
  v5 = 0;
  sub_605029FC(a1 + 3608, &v5, (int)"SE_SYS_BACK");
  *(_DWORD *)(sub_608DE61C(a1 + 3660, v5) - FIELD_U32(a1, 3672) + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(a1 + 3660, v5) - FIELD_U32(a1, 3672) + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  *(_DWORD *)(sub_608DE61C(a1 + 3660, v5) - FIELD_U32(a1, 3672) + 204) = 0;
  sub_605028F0(a1 + 3608, &v5, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 3660, v5) - FIELD_U32(a1, 3672) + 208) = 0;
  v5 = 2;
  *(_DWORD *)(sub_608DE61C(a1 + 3660, 2) - FIELD_U32(a1, 3672) + 192) = 0;
  v5 = 1;
  *(_DWORD *)(sub_608DE61C(a1 + 3660, 1) - FIELD_U32(a1, 3672) + 192) = 0;
  FIELD_U8(a1, 4653) = 1;
  return 4653;
}
