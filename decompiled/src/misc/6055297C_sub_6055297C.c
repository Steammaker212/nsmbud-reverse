/* sub_6055297C
 * address: 0x6055297C   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055297C(int a1)
{
  char v1; // r12
  char v3; // r12
  void (__fastcall *v4)(int, int *, int *); // r3
  int v6; // [sp+4h] [bp-1Ch] BYREF

  if ( ((unsigned int)&dword_60CAD1A0[1] & ~(1616193948 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD1A0[1]) )
  {
    dword_60CAD258 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD25C = dword_60CAD044;
    dword_60CAD260 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD264 = dword_60CAD04C;
    dword_60CAD268 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD26C = dword_60CAD054;
    dword_60CAD270 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD274 = dword_60CAD05C;
    sub_60000288();
    _cxa_guard_release(&dword_60CAD1A0[1]);
  }
  sub_604734E4((_DWORD *)(a1 + 3652), 0);
  sub_60476388((_DWORD *)(a1 + 3652), a1 + 44, &dword_60CAD258);
  sub_604734E4((_DWORD *)(a1 + 7192), 0);
  sub_60476388((_DWORD *)(a1 + 7192), a1 + 44, &dword_60CAD260);
  sub_604734E4((_DWORD *)(a1 + 10732), 0);
  sub_60476388((_DWORD *)(a1 + 10732), a1 + 44, &dword_60CAD268);
  sub_604734E4((_DWORD *)(a1 + 14272), 0);
  sub_60476388((_DWORD *)(a1 + 14272), a1 + 44, &dword_60CAD270);
  if ( ((unsigned int)&dword_60CAD1A0[2] & ~(1616194304 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD1A0[2]) )
  {
    dword_60CAD1E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD1E4 = dword_60CAD004;
    dword_60CAD1E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD1EC = dword_60CAD00C;
    sub_60000288();
    _cxa_guard_release(&dword_60CAD1A0[2]);
  }
  v4 = *(void (__fastcall **)(int, int *, int *))(FIELD_U32(a1, 3652) + 8);
  v6 = 2;
  v4(a1 + 3652, &dword_60CAD1E0, &v6);
  return (*(int (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3564)
                                                                                             + 12))(
           FIELD_U32(a1, 3564),
           sub_609909D8,
           0);
}
