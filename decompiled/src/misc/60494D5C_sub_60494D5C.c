/* sub_60494D5C
 * address: 0x60494D5C   size: 1328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60494D5C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  char v10; // r12
  char v11; // r12
  int result; // r0
  int v13; // [sp+4h] [bp-74h] BYREF
  const char *v14; // [sp+8h] [bp-70h]
  int v15; // [sp+Ch] [bp-6Ch] BYREF
  _DWORD v16[26]; // [sp+10h] [bp-68h] BYREF

  v15 = 0;
  v16[0] = &sead__SafeStringBase__vtable;
  v16[1] = &byte_60B3BA34;
  v16[2] = &sead__SafeStringBase__vtable;
  v16[3] = &byte_60B3BA34;
  v16[4] = &sead__SafeStringBase__vtable;
  v16[5] = &byte_60B3BA34;
  v16[6] = &sead__SafeStringBase__vtable;
  v16[7] = &byte_60B3BA34;
  v16[8] = &sead__SafeStringBase__vtable;
  v16[9] = &byte_60B3BA34;
  v16[10] = &sead__SafeStringBase__vtable;
  v16[11] = &byte_60B3BA34;
  v16[12] = &sead__SafeStringBase__vtable;
  v16[13] = &byte_60B3BA34;
  v16[14] = &sead__SafeStringBase__vtable;
  v16[15] = &byte_60B3BA34;
  v16[16] = &sead__SafeStringBase__vtable;
  v16[17] = &byte_60B3BA34;
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = (const char *)sub_60496D2C(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v16, &v13);
  v15 = 1;
  v2 = sub_60496D2C(1);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = (const char *)v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[2 * v15] + 8))(&v16[2 * v15], &v13);
  v15 = 2;
  v3 = sub_60496D2C(2);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = (const char *)v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[2 * v15] + 8))(&v16[2 * v15], &v13);
  v15 = 3;
  v4 = sub_60496D2C(3);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = (const char *)v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[2 * v15] + 8))(&v16[2 * v15], &v13);
  v15 = 4;
  v5 = sub_60496D2C(4);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = (const char *)v5;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[2 * v15] + 8))(&v16[2 * v15], &v13);
  v15 = 5;
  v6 = sub_60496D2C(5);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = (const char *)v6;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[2 * v15] + 8))(&v16[2 * v15], &v13);
  v15 = 6;
  v7 = sub_60496D2C(6);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = (const char *)v7;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[2 * v15] + 8))(&v16[2 * v15], &v13);
  v15 = 7;
  v8 = sub_60496D2C(7);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = (const char *)v8;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[2 * v15] + 8))(&v16[2 * v15], &v13);
  v15 = 8;
  v9 = sub_60496D2C(8);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = (const char *)v9;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[2 * v15] + 8))(&v16[2 * v15], &v13);
  v13 = 9;
  sub_604756E0((int)(a1 + 9), (int)(a1 + 946), v16, &v13);
  v13 = 0;
  sub_60502210(a1 + 964, &v13, 14);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = "ChallengeSelectWindow";
  sead__SafeStringBase__operator_assign((int)(a1 + 1217), (int)&v13);
  a1[1228] = 2;
  a1[1229] = 2;
  a1[1230] = 2;
  a1[1231] = 2;
  a1[1232] = 2;
  a1[1233] = 2;
  a1[1234] = 2;
  a1[1235] = 2;
  if ( ((unsigned int)dword_60CA0480 & ~(1615417380 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60CA0480) )
  {
    dword_60CA04C0 = 0;
    dword_60CA04C4 = 1;
    dword_60CA04C8 = 2;
    dword_60CA04CC = 3;
    _cxa_guard_release(dword_60CA0480);
  }
  v13 = dword_60CA04C0;
  v15 = dword_60CA04C0;
  sub_605029FC(a1 + 964, &v15, "SE_SYS_COURSE_IN");
  v13 = dword_60CA04C4;
  v15 = dword_60CA04C4;
  sub_605029FC(a1 + 964, &v15, "SE_SYS_COURSE_IN");
  v13 = dword_60CA04C8;
  v15 = dword_60CA04C8;
  sub_605029FC(a1 + 964, &v15, "SE_SYS_COURSE_IN");
  v13 = dword_60CA04CC;
  v15 = dword_60CA04CC;
  sub_605029FC(a1 + 964, &v15, "SE_SYS_COURSE_IN");
  if ( ((unsigned int)&dword_60CA0480[1] & ~(1615417600 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CA0480[1]) )
  {
    dword_60CA04D0 = 4;
    dword_60CA04D4 = 5;
    dword_60CA04D8 = 6;
    dword_60CA04DC = 7;
    _cxa_guard_release(&dword_60CA0480[1]);
  }
  v13 = dword_60CA04D0;
  v15 = dword_60CA04D0;
  sub_605029FC(a1 + 964, &v15, "SE_SYS_GOTO_MOVIE");
  v13 = dword_60CA04D4;
  v15 = dword_60CA04D4;
  sub_605029FC(a1 + 964, &v15, "SE_SYS_GOTO_MOVIE");
  v13 = dword_60CA04D8;
  v15 = dword_60CA04D8;
  sub_605029FC(a1 + 964, &v15, "SE_SYS_GOTO_MOVIE");
  v13 = dword_60CA04DC;
  v15 = dword_60CA04DC;
  sub_605029FC(a1 + 964, &v15, "SE_SYS_GOTO_MOVIE");
  v13 = 8;
  sub_605029FC(a1 + 964, &v13, "SE_SYS_BACK");
  *(_DWORD *)(sub_608DE61C(a1 + 977, v13) - a1[980] + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(a1 + 977, v13) - a1[980] + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  *(_DWORD *)(sub_608DE61C(a1 + 977, v13) - a1[980] + 204) = 0;
  sub_605028F0(a1 + 964, &v13, 1);
  result = sub_608DE61C(a1 + 977, v13) - a1[980];
  FIELD_U8(result, 208) = 0;
  return result;
}
