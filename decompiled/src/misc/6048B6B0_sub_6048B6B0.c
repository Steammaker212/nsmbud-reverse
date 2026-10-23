/* sub_6048B6B0
 * address: 0x6048B6B0   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048B6B0(_DWORD *a1)
{
  char v1; // r12
  int v3; // r8
  int v4; // r6
  char v5; // r12
  unsigned int v6; // r0
  unsigned int v7; // r7
  int v8; // r6
  int v9; // r0
  int v10; // r0
  char v11; // r12
  int v12; // r6
  int v13; // r0
  int v14; // r0
  char v15; // r12
  unsigned int v16; // r0
  int v17; // r6
  int v18; // r0
  int v19; // r0
  int result; // r0
  int (**v21)(); // [sp+4h] [bp-2Ch] BYREF
  int v22; // [sp+8h] [bp-28h]
  int (**v23)(); // [sp+Ch] [bp-24h] BYREF
  int v24; // [sp+10h] [bp-20h]
  unsigned int v25; // [sp+14h] [bp-1Ch]

  v25 = 0;
  v3 = (int)(a1 + 9);
  if ( ((unsigned int)dword_60C9FD78 & ~(1615378140 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  v4 = dword_60C9FDD0[v25 + 15];
  v23 = &sead__SafeStringBase__vtable;
  v24 = sub_604923E4(1);
  v21 = &sead__SafeStringBase__vtable;
  v22 = sub_60492798(v4);
  a1[3446] = sub_604746E4(v3, &v23, &v21);
  v25 = 1;
  if ( ((unsigned int)dword_60C9FD78 & ~(1615378340 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  v6 = v25;
  v7 = 0;
  if ( v25 >= 4 )
    v6 = 0;
  v8 = dword_60C9FDD0[v6 + 15];
  v9 = sub_604923E4(1);
  v23 = &sead__SafeStringBase__vtable;
  v24 = v9;
  v10 = sub_60492798(v8);
  v21 = &sead__SafeStringBase__vtable;
  v22 = v10;
  a1[3447] = sub_604746E4(v3, &v23, &v21);
  v25 = 2;
  if ( ((unsigned int)dword_60C9FD78 & ~(1615378544 << v11) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  if ( v25 < 4 )
    v7 = v25;
  v12 = dword_60C9FDD0[v7 + 15];
  v13 = sub_604923E4(1);
  v23 = &sead__SafeStringBase__vtable;
  v24 = v13;
  v14 = sub_60492798(v12);
  v21 = &sead__SafeStringBase__vtable;
  v22 = v14;
  a1[3448] = sub_604746E4(v3, &v23, &v21);
  v25 = 3;
  if ( ((unsigned int)dword_60C9FD78 & ~(1615378744 << v15) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  v16 = v25;
  if ( v25 >= 4 )
    v16 = 0;
  v17 = dword_60C9FDD0[v16 + 15];
  v18 = sub_604923E4(1);
  v23 = &sead__SafeStringBase__vtable;
  v24 = v18;
  v19 = sub_60492798(v17);
  v21 = &sead__SafeStringBase__vtable;
  v22 = v19;
  result = sub_604746E4(v3, &v23, &v21);
  a1[3449] = result;
  return result;
}
