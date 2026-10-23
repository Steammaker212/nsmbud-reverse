/* sub_604F145C
 * address: 0x604F145C   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F145C(int a1)
{
  char v1; // r12
  void (__fastcall *v3)(int, int *, int *); // r3
  int v4; // r7
  _DWORD *v5; // r6
  int (__fastcall *v6)(_DWORD *, int *, int *); // r3
  int result; // r0
  int v8; // [sp+4h] [bp-2Ch] BYREF
  int v9; // [sp+8h] [bp-28h] BYREF

  if ( ((unsigned int)&dword_60CA6580[1] & ~(1615795324 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6580[1]) )
  {
    dword_60CA65BC = (int)&sead__SafeStringBase__vtable;
    dword_60CA65C0 = dword_60CA62E8;
    dword_60CA65C4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA65C8 = dword_60CA6300;
    sub_60000288();
    _cxa_guard_release(&dword_60CA6580[1]);
  }
  if ( ((unsigned int)&dword_60CA6580[2] & ~(1615795464 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6580[2]) )
  {
    dword_60CA6608 = (int)&sead__SafeStringBase__vtable;
    dword_60CA660C = dword_60CA6318;
    dword_60CA6610 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6614 = dword_60CA6320;
    dword_60CA6618 = (int)&sead__SafeStringBase__vtable;
    dword_60CA661C = dword_60CA6328;
    dword_60CA6620 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6624 = dword_60CA6330;
    dword_60CA6628 = (int)&sead__SafeStringBase__vtable;
    dword_60CA662C = dword_60CA6338;
    dword_60CA6630 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6634 = dword_60CA6340;
    dword_60CA6638 = (int)&sead__SafeStringBase__vtable;
    dword_60CA663C = dword_60CA6348;
    dword_60CA6640 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6644 = dword_60CA6350;
    dword_60CA6648 = (int)&sead__SafeStringBase__vtable;
    dword_60CA664C = dword_60CA6358;
    dword_60CA6650 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6654 = dword_60CA6360;
    sub_60000288();
    _cxa_guard_release(&dword_60CA6580[2]);
  }
  sub_604734E4((_DWORD *)(a1 + 4), 0);
  sub_60476388((_DWORD *)(a1 + 4), a1 + 42520, dword_60CA630C);
  v3 = *(void (__fastcall **)(int, int *, int *))(FIELD_U32(a1, 4) + 8);
  v9 = 2;
  v3(a1 + 4, &dword_60CA65BC, &v9);
  v4 = 2;
  v5 = (_DWORD *)(a1 + 3544);
  do
  {
    sub_604734E4(v5, 0);
    sub_60476388(v5, a1 + 42520, &dword_60CA66C0[v4]);
    v6 = *(int (__fastcall **)(_DWORD *, int *, int *))(*v5 + 8);
    v8 = 10;
    result = v6(v5, &dword_60CA6608, &v8);
    v4 += 2;
    v5 += 885;
  }
  while ( v4 != 22 );
  return result;
}
