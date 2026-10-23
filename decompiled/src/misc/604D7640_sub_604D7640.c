/* sub_604D7640
 * address: 0x604D7640   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D7640(int a1)
{
  int v2; // r0
  int v3; // r0
  int v5; // [sp+4h] [bp-44h] BYREF
  const char *v6; // [sp+8h] [bp-40h]
  int v7; // [sp+Ch] [bp-3Ch]
  _DWORD v8[14]; // [sp+10h] [bp-38h] BYREF

  v7 = 0;
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = &byte_60B3BA34;
  v8[2] = &sead__SafeStringBase__vtable;
  v8[3] = &byte_60B3BA34;
  v8[4] = &sead__SafeStringBase__vtable;
  v8[5] = &byte_60B3BA34;
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = (const char *)Pa_Return_00_Pa_BtnLB_00_Pa_BtnRB_00_ref(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v8, &v5);
  v7 = 1;
  v2 = Pa_Return_00_Pa_BtnLB_00_Pa_BtnRB_00_ref(1);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = (const char *)v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v8[2 * v7] + 8))(&v8[2 * v7], &v5);
  v7 = 2;
  v3 = Pa_Return_00_Pa_BtnLB_00_Pa_BtnRB_00_ref(2);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = (const char *)v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v8[2 * v7] + 8))(&v8[2 * v7], &v5);
  v5 = 3;
  sub_604756E0(a1 + 40, a1 + 3616, v8, &v5);
  v5 = 0;
  sub_60502210(a1 + 3640, &v5, 13);
  FIELD_U32(a1, 3628) = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(a1 + 3616) + 48))(
                             FIELD_U32(a1, 3616),
                             "B_Btn_00",
                             1);
  FIELD_U32(a1, 3632) = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(a1 + 3620) + 48))(
                             FIELD_U32(a1, 3620),
                             "B_Btn_00",
                             1);
  FIELD_U32(a1, 3636) = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(a1 + 3624) + 48))(
                             FIELD_U32(a1, 3624),
                             "B_Btn_00",
                             1);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = "CourseSelVSConfirm";
  sead__SafeStringBase__operator_assign(a1 + 4652, (int)&v5);
  *(_DWORD *)(sub_608DE61C(a1 + 3692, 1) - FIELD_U32(a1, 3704) + 192) = 0;
  *(_DWORD *)(sub_608DE61C(a1 + 3692, 2) - FIELD_U32(a1, 3704) + 192) = 0;
  v5 = 0;
  sub_605029FC(a1 + 3640, &v5, "SE_SYS_BACK");
  *(_DWORD *)(sub_608DE61C(a1 + 3692, v5) - FIELD_U32(a1, 3704) + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(a1 + 3692, v5) - FIELD_U32(a1, 3704) + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  *(_DWORD *)(sub_608DE61C(a1 + 3692, v5) - FIELD_U32(a1, 3704) + 204) = 0;
  sub_605028F0(a1 + 3640, &v5, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 3692, v5) - FIELD_U32(a1, 3704) + 208) = 0;
  FIELD_U8(a1, 4685) = 1;
  return 4685;
}
