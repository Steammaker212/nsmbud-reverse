/* sub_604D8F88
 * address: 0x604D8F88   size: 928   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D8F88(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  char v6; // r12
  int result; // r0
  int v8; // [sp+0h] [bp-58h] BYREF
  const char *v9; // [sp+4h] [bp-54h]
  int v10; // [sp+8h] [bp-50h] BYREF
  _DWORD v11[19]; // [sp+Ch] [bp-4Ch] BYREF

  v10 = 0;
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = &byte_60B3BA34;
  v11[2] = &sead__SafeStringBase__vtable;
  v11[3] = &byte_60B3BA34;
  v11[4] = &sead__SafeStringBase__vtable;
  v11[5] = &byte_60B3BA34;
  v11[6] = &sead__SafeStringBase__vtable;
  v11[7] = &byte_60B3BA34;
  v11[8] = &sead__SafeStringBase__vtable;
  v11[9] = &byte_60B3BA34;
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = (const char *)sub_604DD72C(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v11, &v8);
  v10 = 1;
  v2 = sub_604DD72C(1);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = (const char *)v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v11[2 * v10] + 8))(&v11[2 * v10], &v8);
  v10 = 2;
  v3 = sub_604DD72C(2);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = (const char *)v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v11[2 * v10] + 8))(&v11[2 * v10], &v8);
  v10 = 3;
  v4 = sub_604DD72C(3);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = (const char *)v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v11[2 * v10] + 8))(&v11[2 * v10], &v8);
  v10 = 4;
  v5 = sub_604DD72C(4);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = (const char *)v5;
  (*(void (__fastcall **)(_DWORD *, int *))(v11[2 * v10] + 8))(&v11[2 * v10], &v8);
  v8 = 5;
  sub_604756E0(a1 + 44, a1 + 3672, v11, &v8);
  v8 = 0;
  sub_60502210(a1 + 3692, &v8, 14);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = "CourseSelVSRandom";
  sead__SafeStringBase__operator_assign(a1 + 4704, (int)&v8);
  v8 = 1;
  sub_605029FC(a1 + 3692, &v8, "SE_SYS_COURSE_IN");
  v8 = 0;
  sub_605029FC(a1 + 3692, &v8, "SE_SYS_BACK");
  *(_DWORD *)(sub_608DE61C(a1 + 3744, v8) - FIELD_U32(a1, 3756) + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(a1 + 3744, v8) - FIELD_U32(a1, 3756) + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  *(_DWORD *)(sub_608DE61C(a1 + 3744, v8) - FIELD_U32(a1, 3756) + 204) = 0;
  sub_605028F0(a1 + 3692, &v8, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 3744, v8) - FIELD_U32(a1, 3756) + 208) = 0;
  if ( ((unsigned int)&dword_60CA4D40[2] & ~(1615696384 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D40[2]) )
  {
    *(_QWORD *)&dword_60CA4DC8 = 0x400000003LL;
    _cxa_guard_release(&dword_60CA4D40[2]);
  }
  v8 = dword_60CA4DC8;
  v10 = dword_60CA4DC8;
  sub_605028F0(a1 + 3692, &v10, 0);
  *(_BYTE *)(sub_608DE61C(a1 + 3744, v10) - FIELD_U32(a1, 3756) + 208) = 0;
  v8 = dword_60CA4DCC;
  v10 = dword_60CA4DCC;
  sub_605028F0(a1 + 3692, &v10, 0);
  *(_BYTE *)(sub_608DE61C(a1 + 3744, v10) - FIELD_U32(a1, 3756) + 208) = 0;
  FIELD_U8(a1, 4737) = 1;
  v8 = 2;
  *(_DWORD *)(sub_608DE61C(a1 + 3744, 2) - FIELD_U32(a1, 3756) + 192) = 0;
  v8 = 3;
  *(_DWORD *)(sub_608DE61C(a1 + 3744, 3) - FIELD_U32(a1, 3756) + 192) = 0;
  v8 = 4;
  result = sub_608DE61C(a1 + 3744, 4) - FIELD_U32(a1, 3756);
  FIELD_U32(result, 192) = 0;
  return result;
}
