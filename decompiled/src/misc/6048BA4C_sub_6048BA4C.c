/* sub_6048BA4C
 * address: 0x6048BA4C   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048BA4C(_DWORD *a1)
{
  char v1; // r12
  int (***v3)(); // r5
  _DWORD *v4; // r8
  int (**v5)(); // r0
  int (**v6)(); // r7
  unsigned int v7; // r6
  int (**v8)(); // r0
  char v9; // r12
  unsigned int v10; // r0
  _DWORD *v11; // r3
  int v12; // r0
  int (**v14)(); // [sp+8h] [bp-20h] BYREF
  int v15; // [sp+Ch] [bp-1Ch]

  v3 = (int (***)())(a1 + 3557);
  v14 = (int (**)())a1[3557];
  v4 = a1 + 9;
  if ( ((unsigned int)dword_60C9FD78 & ~(1615379076 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  v5 = v14;
  v6 = 0;
  if ( (unsigned int)v14 >= 4 )
    v5 = 0;
  v7 = dword_60C9FDD0[(_DWORD)v5 + 15];
  v14 = &sead__SafeStringBase__vtable;
  v15 = sub_604923E4(0);
  v8 = *v3;
  if ( (unsigned int)*v3 >= 4 )
    v8 = 0;
  sub_604742D0(v4, v7, &v14, a1[(_DWORD)v8 + 3446], 1.0, 0);
  v14 = *v3;
  if ( ((unsigned int)dword_60C9FD78 & ~(1615379288 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  if ( (unsigned int)v14 < 4 )
    v6 = v14;
  v10 = dword_60C9FDD0[(_DWORD)v6 + 15];
  v11 = (_DWORD *)a1[887];
  if ( a1[886] > v10 )
    v11 += 5 * v10;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v11 + 108))(*v11);
  v12 = sub_604923E4(3);
  v14 = &sead__SafeStringBase__vtable;
  v15 = v12;
  return sub_60473DE4(v4, 5u, &v14, 1);
}
