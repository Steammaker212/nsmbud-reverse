/* sub_604CCEB4
 * address: 0x604CCEB4   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CCEB4(int a1)
{
  char v1; // r12
  int v3; // r7
  _DWORD *v4; // r5
  int v5; // r11
  unsigned int v6; // r0
  void (__fastcall *v7)(_DWORD *, int *, int *); // r3
  unsigned int v8; // r4
  int v9; // r0
  unsigned int v10; // r0
  void (__fastcall *v11)(_DWORD *, int *, int *); // r3
  unsigned int v12; // r4
  int v13; // r0
  unsigned int v14; // r0
  void (__fastcall *v15)(_DWORD *, int *, int *); // r3
  unsigned int v16; // r4
  int v17; // r0
  unsigned int v18; // r0
  int v19; // r0
  void (__fastcall *v20)(_DWORD *, int *, int *); // r3
  int v22; // [sp+4h] [bp-34h] BYREF
  int (**v23)(); // [sp+8h] [bp-30h] BYREF
  int v24; // [sp+Ch] [bp-2Ch]
  unsigned int v25; // [sp+10h] [bp-28h]

  if ( ((unsigned int)&dword_60CA4D00[1] & ~(1615646420 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D00[1]) )
  {
    dword_60CA4D80 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4D84 = dword_60CA4D6C;
    sub_60000288();
    _cxa_guard_release(&dword_60CA4D00[1]);
  }
  v3 = a1;
  v25 = 0;
  v4 = (_DWORD *)(a1 + 5880);
  sub_604734E4(v4, 0);
  v5 = v3 + 40;
  v23 = &sead__SafeStringBase__vtable;
  v24 = sub_604DA9CC(0);
  sub_60476388(v4, v3 + 40, &v23);
  v6 = v25;
  if ( v25 >= 4 )
    v6 = 0;
  v7 = *(void (__fastcall **)(_DWORD *, int *, int *))(v4[885 * v6] + 8);
  v22 = 1;
  v7(&v4[885 * v6], &dword_60CA4D80, &v22);
  v25 = 1;
  sub_604734E4(v4 + 885, 0);
  v8 = v25;
  v9 = sub_604DA9CC(v25);
  v23 = &sead__SafeStringBase__vtable;
  v24 = v9;
  if ( v8 >= 4 )
    v8 = 0;
  sub_60476388(&v4[885 * v8], v5, &v23);
  v10 = v25;
  if ( v25 >= 4 )
    v10 = 0;
  v11 = *(void (__fastcall **)(_DWORD *, int *, int *))(v4[885 * v10] + 8);
  v22 = 1;
  v11(&v4[885 * v10], &dword_60CA4D80, &v22);
  v25 = 2;
  sub_604734E4(v4 + 1770, 0);
  v12 = v25;
  v13 = sub_604DA9CC(v25);
  v23 = &sead__SafeStringBase__vtable;
  v24 = v13;
  if ( v12 >= 4 )
    v12 = 0;
  sub_60476388(&v4[885 * v12], v5, &v23);
  v14 = v25;
  if ( v25 >= 4 )
    v14 = 0;
  v15 = *(void (__fastcall **)(_DWORD *, int *, int *))(v4[885 * v14] + 8);
  v22 = 1;
  v15(&v4[885 * v14], &dword_60CA4D80, &v22);
  v25 = 3;
  sub_604734E4(v4 + 2655, 0);
  v16 = v25;
  v17 = sub_604DA9CC(v25);
  v23 = &sead__SafeStringBase__vtable;
  v24 = v17;
  if ( v16 >= 4 )
    v16 = 0;
  sub_60476388(&v4[885 * v16], v5, &v23);
  v18 = v25;
  if ( v25 >= 4 )
    v18 = 0;
  v19 = 885 * v18;
  v20 = *(void (__fastcall **)(_DWORD *, int *, int *))(v4[v19] + 8);
  v22 = 1;
  v20(&v4[v19], &dword_60CA4D80, &v22);
  return (*(int (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(v3 + 3560)
                                                                                             + 12))(
           FIELD_U32(v3, 3560),
           sub_609909D8,
           0);
}
