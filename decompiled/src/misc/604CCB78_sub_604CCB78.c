/* sub_604CCB78
 * address: 0x604CCB78   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604CCB78(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  char v5; // r12
  int v7; // [sp+0h] [bp-50h] BYREF
  const char *v8; // [sp+4h] [bp-4Ch]
  int v9; // [sp+8h] [bp-48h] BYREF
  _DWORD v10[17]; // [sp+Ch] [bp-44h] BYREF

  v9 = 0;
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = &byte_60B3BA34;
  v10[2] = &sead__SafeStringBase__vtable;
  v10[3] = &byte_60B3BA34;
  v10[4] = &sead__SafeStringBase__vtable;
  v10[5] = &byte_60B3BA34;
  v10[6] = &sead__SafeStringBase__vtable;
  v10[7] = &byte_60B3BA34;
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = (const char *)sub_604DA618(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v10, &v7);
  v9 = 1;
  v2 = sub_604DA618(1);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = (const char *)v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v10[2 * v9] + 8))(&v10[2 * v9], &v7);
  v9 = 2;
  v3 = sub_604DA618(2);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = (const char *)v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v10[2 * v9] + 8))(&v10[2 * v9], &v7);
  v9 = 3;
  v4 = sub_604DA618(3);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = (const char *)v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v10[2 * v9] + 8))(&v10[2 * v9], &v7);
  v7 = 4;
  sub_604756E0(a1 + 40, a1 + 3784, v10, &v7);
  v7 = 0;
  sub_60502210(a1 + 3800, &v7, 11);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = "CourseSelectVS";
  sead__SafeStringBase__operator_assign(a1 + 4812, (int)&v7);
  if ( ((unsigned int)dword_60CA4D00 & ~(1615645932 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60CA4D00) )
  {
    dword_60CA4E0C = 0;
    dword_60CA4E10 = 3;
    dword_60CA4E14 = 2;
    _cxa_guard_release(dword_60CA4D00);
  }
  v7 = dword_60CA4E0C;
  v9 = dword_60CA4E0C;
  sub_605028F0(a1 + 3800, &v9, 0);
  *(_BYTE *)(sub_608DE61C(a1 + 3852, v9) - FIELD_U32(a1, 3864) + 208) = 0;
  v7 = dword_60CA4E10;
  v9 = dword_60CA4E10;
  sub_605028F0(a1 + 3800, &v9, 0);
  *(_BYTE *)(sub_608DE61C(a1 + 3852, v9) - FIELD_U32(a1, 3864) + 208) = 0;
  v7 = dword_60CA4E14;
  v9 = dword_60CA4E14;
  sub_605028F0(a1 + 3800, &v9, 0);
  *(_BYTE *)(sub_608DE61C(a1 + 3852, v9) - FIELD_U32(a1, 3864) + 208) = 0;
  v7 = 0;
  v9 = 0;
  sub_605029FC(a1 + 3800, &v9, "SE_SYS_PAUSE");
  v7 = 1;
  v9 = 1;
  sub_605029FC(a1 + 3800, &v9, "SE_SYS_CURSOR");
  v7 = 3;
  v9 = 3;
  sub_605029FC(a1 + 3800, &v9, "SE_SYS_PAGE");
  v7 = 2;
  v9 = 2;
  sub_605029FC(a1 + 3800, &v9, "SE_SYS_PAGE");
  FIELD_U16(a1, 4852) = 0;
  return sub_6047EABC((_DWORD *)(a1 + 3840));
}
