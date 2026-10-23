/* SE_SYS_PAGE_ref_4877B4
 * address: 0x604877B4   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_PAGE_ref_4877B4(int a1)
{
  char v1; // r12
  int *v3; // r5
  _DWORD *v4; // r9
  int (**v5)(); // r0
  unsigned int v6; // r6
  int v7; // r0
  int *v8; // r10
  char v9; // r12
  int (**v10)(); // r0
  unsigned int v11; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r6
  int v15; // r0
  _DWORD *v16; // r5
  int v17; // r0
  int v18; // r0
  _DWORD *v19; // r5
  int v20; // r0
  int v21; // r0
  int v22; // r5
  int (**v24)(); // [sp+4h] [bp-2Ch] BYREF
  int v25; // [sp+8h] [bp-28h]

  v3 = (int *)(a1 + 14228);
  v24 = *(int (***)())(a1 + 14228);
  v4 = (_DWORD *)(a1 + 36);
  if ( ((unsigned int)dword_60C9FD78 & ~(1615362028 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  v5 = v24;
  if ( (unsigned int)v24 >= 4 )
    v5 = 0;
  v6 = dword_60C9FDD0[(_DWORD)v5 + 15];
  v24 = &sead__SafeStringBase__vtable;
  v25 = sub_604923E4(1);
  v7 = *v3;
  if ( (unsigned int)*v3 >= 4 )
    v7 = 0;
  sub_60474420(v4, v6, &v24, *(_DWORD *)(a1 + 4 * v7 + 13784), 0);
  v8 = (int *)(a1 + 14232);
  v24 = *(int (***)())(a1 + 14232);
  if ( ((unsigned int)dword_60C9FD78 & ~(1615362244 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  v10 = v24;
  if ( (unsigned int)v24 >= 4 )
    v10 = 0;
  v11 = dword_60C9FDD0[(_DWORD)v10 + 15];
  v12 = sub_604923E4(0);
  v24 = &sead__SafeStringBase__vtable;
  v25 = v12;
  v13 = *v8;
  if ( (unsigned int)*v8 >= 4 )
    v13 = 0;
  sub_604742D0(v4, v11, &v24, *(_DWORD *)(a1 + 4 * v13 + 13784), 1.0, 0);
  sub_60502548(a1 + 3768);
  FIELD_U16(a1, 4820) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3808));
  v14 = a1 + 13800;
  v15 = *v3;
  if ( (unsigned int)*v3 >= 4 )
    v15 = 0;
  v16 = *(_DWORD **)(v14 + 4 * v15);
  v17 = sub_60492F00(1);
  v24 = &sead__SafeStringBase__vtable;
  v25 = v17;
  sub_60473DE4(v16, 4u, &v24, 0);
  v18 = *v8;
  if ( (unsigned int)*v8 >= 4 )
    v18 = 0;
  v19 = *(_DWORD **)(v14 + 4 * v18);
  v20 = sub_60492F00(0);
  v24 = &sead__SafeStringBase__vtable;
  v25 = v20;
  sub_60473DE4(v19, 4u, &v24, 0);
  v21 = sub_604912FC(0);
  v24 = &sead__SafeStringBase__vtable;
  v25 = v21;
  sub_60473DE4((_DWORD *)(a1 + 10244), 0, &v24, 0);
  v22 = FIELD_U32(a1, 4796);
  sub_6048E23C(a1, 0, v22);
  sub_6048EBD4(a1, v22);
  sub_6048F09C(a1, 0, 256);
  sub_6048EE54(a1, 0);
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_PAGE", 0, 1);
}
