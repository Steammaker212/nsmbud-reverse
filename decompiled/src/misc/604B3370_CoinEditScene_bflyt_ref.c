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
  v3 = sub_60475900(v2, (int)&FIELD_U32(v2 + (220) * 16, 0x8), 10);
  FIELD_U32(v3, 0x0) = (int)&off_60BFE000;
  FIELD_U32(v3 + (220) * 16, 0x8) = 0;
  FIELD_U32(v3 + (220) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (221) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (221) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(v3 + (221) * 16, 0x8)) = 0;
  FIELD_U32(v3 + (221) * 16, 0xC) = 0;
  FIELD_U32(v3 + (222) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (222) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (222) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(v3 + (222) * 16, 0xC)) = 0;
  FIELD_U32(v3 + (223) * 16, 0x0) = 0;
  FIELD_U32(v3 + (223) * 16, 0x4) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (223) * 16, 0x8) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (223) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(v3 + (224) * 16, 0x0)) = 0;
  FIELD_U32(v3 + (224) * 16, 0x4) = 0;
  FIELD_U32(v3 + (224) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (224) * 16, 0xC) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (225) * 16, 0x0) = 0;
  LOBYTE(FIELD_U32(v3 + (225) * 16, 0x4)) = 0;
  FIELD_U32(v3 + (225) * 16, 0x8) = 0;
  FIELD_U32(v3 + (225) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (226) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (226) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(v3 + (226) * 16, 0x8)) = 0;
  FIELD_U32(v3 + (226) * 16, 0xC) = 0;
  FIELD_U32(v3 + (227) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (227) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (227) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(v3 + (227) * 16, 0xC)) = 0;
  FIELD_U32(v3 + (228) * 16, 0x0) = 0;
  FIELD_U32(v3 + (228) * 16, 0x4) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (228) * 16, 0x8) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (228) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(v3 + (229) * 16, 0x0)) = 0;
  FIELD_U32(v3 + (229) * 16, 0x4) = 0;
  FIELD_U32(v3 + (229) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (229) * 16, 0xC) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (230) * 16, 0x0) = 0;
  LOBYTE(FIELD_U32(v3 + (230) * 16, 0x4)) = 0;
  FIELD_U32(v3 + (230) * 16, 0x8) = 0;
  FIELD_U32(v3 + (230) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (231) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (231) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(v3 + (231) * 16, 0x8)) = 0;
  FIELD_U32(v3 + (231) * 16, 0xC) = 0;
  FIELD_U32(v3 + (232) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (232) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(v3 + (232) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(v3 + (232) * 16, 0xC)) = 0;
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
