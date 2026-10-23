/* SE_SYS_PAGE_ref_4873C4
 * address: 0x604873C4   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_PAGE_ref_4873C4(_DWORD *a1)
{
  char v1; // r12
  int *v3; // r7
  _DWORD *v4; // r8
  int (**v5)(); // r0
  unsigned int v6; // r6
  int v7; // r0
  int *v8; // r4
  char v9; // r12
  int (**v10)(); // r0
  unsigned int v11; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r4
  int v16; // r0
  int (**v18)(); // [sp+4h] [bp-2Ch] BYREF
  int v19; // [sp+8h] [bp-28h]

  v3 = a1 + 3557;
  v18 = (int (**)())a1[3557];
  v4 = a1 + 9;
  if ( ((unsigned int)dword_60C9FD78 & ~(1615361020 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  v5 = v18;
  if ( (unsigned int)v18 >= 4 )
    v5 = 0;
  v6 = dword_60C9FDD0[(_DWORD)v5 + 15];
  v18 = &sead__SafeStringBase__vtable;
  v19 = sub_604923E4(0);
  v7 = *v3;
  if ( (unsigned int)*v3 >= 4 )
    v7 = 0;
  sub_60474420(v4, v6, &v18, a1[v7 + 3446], 0);
  v8 = a1 + 3558;
  v18 = (int (**)())a1[3558];
  if ( ((unsigned int)dword_60C9FD78 & ~(1615361236 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  v10 = v18;
  if ( (unsigned int)v18 >= 4 )
    v10 = 0;
  v11 = dword_60C9FDD0[(_DWORD)v10 + 15];
  v12 = sub_604923E4(1);
  v18 = &sead__SafeStringBase__vtable;
  v19 = v12;
  v13 = *v8;
  if ( (unsigned int)*v8 >= 4 )
    v13 = 0;
  sub_604742D0(v4, v11, &v18, a1[v13 + 3446], 1.0, 0);
  v14 = *v3;
  if ( (unsigned int)*v3 >= 4 )
    v14 = 0;
  v15 = (_DWORD *)a1[v14 + 3450];
  v16 = sub_60492F00(1);
  v18 = &sead__SafeStringBase__vtable;
  v19 = v16;
  sub_60473DE4(v15, 4u, &v18, 0);
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_PAGE", 0, 1);
}
