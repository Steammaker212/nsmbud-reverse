/* CoinEditScene_bflyt_ref
 * address: 0x604B3370   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CoinEditScene_bflyt_ref(int a1)
{
  sead_IDisposer *v2; // r0
  sead_IDisposer *v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  char v6; // r12
  int v7; // r0
  int (__fastcall *v8)(int, int *, int *); // r3
  int v10; // [sp+8h] [bp-18h] BYREF
  const char *v11; // [sp+Ch] [bp-14h]

  v2 = (sead_IDisposer *)operator_new(0xE90u);
  FIELD_U32(v2, 0x0) = (int)&off_60BFE000;
  v3 = sub_60475900(v2, (int)&v2[220].field_8, 10);
  FIELD_U32(v3, 0x0) = (int)&off_60BFE000;
  v3[220].field_8 = 0;
  v3[220].field_C = (int)&sead__SafeStringBase__vtable;
  v3[221].vtable = (int)&byte_60B3BA34;
  v3[221].containingHeap = 0;
  LOBYTE(v3[221].field_8) = 0;
  v3[221].field_C = 0;
  v3[222].vtable = (int)&sead__SafeStringBase__vtable;
  v3[222].containingHeap = (int)&byte_60B3BA34;
  v3[222].field_8 = 0;
  LOBYTE(v3[222].field_C) = 0;
  v3[223].vtable = 0;
  v3[223].containingHeap = (int)&sead__SafeStringBase__vtable;
  v3[223].field_8 = (int)&byte_60B3BA34;
  v3[223].field_C = 0;
  LOBYTE(v3[224].vtable) = 0;
  v3[224].containingHeap = 0;
  v3[224].field_8 = (int)&sead__SafeStringBase__vtable;
  v3[224].field_C = (int)&byte_60B3BA34;
  v3[225].vtable = 0;
  LOBYTE(v3[225].containingHeap) = 0;
  v3[225].field_8 = 0;
  v3[225].field_C = (int)&sead__SafeStringBase__vtable;
  v3[226].vtable = (int)&byte_60B3BA34;
  v3[226].containingHeap = 0;
  LOBYTE(v3[226].field_8) = 0;
  v3[226].field_C = 0;
  v3[227].vtable = (int)&sead__SafeStringBase__vtable;
  v3[227].containingHeap = (int)&byte_60B3BA34;
  v3[227].field_8 = 0;
  LOBYTE(v3[227].field_C) = 0;
  v3[228].vtable = 0;
  v3[228].containingHeap = (int)&sead__SafeStringBase__vtable;
  v3[228].field_8 = (int)&byte_60B3BA34;
  v3[228].field_C = 0;
  LOBYTE(v3[229].vtable) = 0;
  v3[229].containingHeap = 0;
  v3[229].field_8 = (int)&sead__SafeStringBase__vtable;
  v3[229].field_C = (int)&byte_60B3BA34;
  v3[230].vtable = 0;
  LOBYTE(v3[230].containingHeap) = 0;
  v3[230].field_8 = 0;
  v3[230].field_C = (int)&sead__SafeStringBase__vtable;
  v3[231].vtable = (int)&byte_60B3BA34;
  v3[231].containingHeap = 0;
  LOBYTE(v3[231].field_8) = 0;
  v3[231].field_C = 0;
  v3[232].vtable = (int)&sead__SafeStringBase__vtable;
  v3[232].containingHeap = (int)&byte_60B3BA34;
  v3[232].field_8 = 0;
  LOBYTE(v3[232].field_C) = 0;
  FIELD_U32(a1, 4) = v3;
  sub_604734E4(v3, 0);
  v4 = FIELD_U32(a1, 4);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = "Game";
  sub_60475C8C(v4);
  v5 = *(_DWORD **)(a1 + 4);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = "CoinEditScene.bflyt";
  message_ref(v5, &v10, a1 + 24, 0, 0);
  if ( ((unsigned int)dword_60CA1BE0 & ~(1615541484 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60CA1BE0) )
  {
    dword_60CA1C80 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C84 = dword_60CA1B48;
    dword_60CA1C88 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C8C = dword_60CA1B50;
    dword_60CA1C90 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C94 = dword_60CA1B58;
    dword_60CA1C98 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C9C = dword_60CA1B60;
    dword_60CA1CA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1CA4 = dword_60CA1B68;
    dword_60CA1CA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1CAC = dword_60CA1B70;
    dword_60CA1CB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1CB4 = dword_60CA1B78;
    dword_60CA1CB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1CBC = dword_60CA1B80;
    dword_60CA1CC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1CC4 = dword_60CA1B88;
    sub_60000288();
    _cxa_guard_release(dword_60CA1BE0);
  }
  v7 = FIELD_U32(a1, 4);
  v8 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v7 + 8);
  v10 = 9;
  return v8(v7, &dword_60CA1C80, &v10);
}
