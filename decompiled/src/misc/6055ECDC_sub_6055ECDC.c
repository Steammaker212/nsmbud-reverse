/* sub_6055ECDC
 * address: 0x6055ECDC   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055ECDC(int a1)
{
  char v1; // r12
  unsigned int v3; // r5
  int v4; // r4
  unsigned int v5; // r0
  void (__fastcall *v6)(unsigned int, int *, int *); // r3
  unsigned int v7; // r6
  int v8; // r0
  int (__fastcall *v9)(unsigned int, int *, int *); // r3
  int v11; // [sp+4h] [bp-34h] BYREF
  int (**v12)(); // [sp+8h] [bp-30h] BYREF
  int v13; // [sp+Ch] [bp-2Ch]
  unsigned int v14; // [sp+10h] [bp-28h]

  if ( ((unsigned int)&dword_60CAE048[6] & ~(1616243964 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE048[6]) )
  {
    dword_60CAE074 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE078 = dword_60CADD6C;
    sub_60000288();
    _cxa_guard_release(&dword_60CAE048[6]);
  }
  v3 = 0;
  v14 = 0;
  v4 = a1 + 13756;
  sub_604734E4((_DWORD *)(a1 + 13756), 0);
  v12 = &sead__SafeStringBase__vtable;
  v13 = Pa_ArrowBtnR_00_Pa_ArrowBtnL_00_ref_560654(0);
  sub_60476388((_DWORD *)(a1 + 13756), a1 + 44, &v12);
  v5 = v14;
  if ( v14 >= 2 )
    v5 = 0;
  v6 = *(void (__fastcall **)(unsigned int, int *, int *))(*(_DWORD *)(v4 + 3540 * v5) + 8);
  v11 = 1;
  v6(v4 + 3540 * v5, &dword_60CAE074, &v11);
  v14 = 1;
  sub_604734E4((_DWORD *)(a1 + 17296), 0);
  v7 = v14;
  v8 = Pa_ArrowBtnR_00_Pa_ArrowBtnL_00_ref_560654(v14);
  v12 = &sead__SafeStringBase__vtable;
  v13 = v8;
  if ( v7 >= 2 )
    v7 = 0;
  sub_60476388((_DWORD *)(v4 + 3540 * v7), a1 + 44, &v12);
  if ( v14 < 2 )
    v3 = v14;
  v9 = *(int (__fastcall **)(unsigned int, int *, int *))(*(_DWORD *)(v4 + 3540 * v3) + 8);
  v11 = 1;
  return v9(v4 + 3540 * v3, &dword_60CAE074, &v11);
}
