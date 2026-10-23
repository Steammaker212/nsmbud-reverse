/* Pa_Item_ref
 * address: 0x604F83CC   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_Item_ref(int a1, int a2)
{
  char v2; // r12
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0

  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U8(a1, 48) = 0;
  if ( ((unsigned int)&dword_60CA6C60[11] & ~(1615823868 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[11]) )
  {
    dword_60CA6DD0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DD4 = (int)"Pa_Item_00";
    dword_60CA6DD8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DDC = (int)"Pa_Item_01";
    dword_60CA6DE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DE4 = (int)"Pa_Item_02";
    dword_60CA6DE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DEC = (int)"Pa_Item_03";
    dword_60CA6DF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DF4 = (int)"Pa_Item_04";
    dword_60CA6DF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DFC = (int)"Pa_Item_05";
    dword_60CA6E00 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E04 = (int)"Pa_Item_06";
    dword_60CA6E08 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E0C = (int)"Pa_Item_07";
    dword_60CA6E10 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E14 = (int)"Pa_Item_08";
    dword_60CA6E18 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E1C = (int)"Pa_Item_09";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6C60[11]);
  }
  v5 = operator_new(0xE10u);
  *(_DWORD *)a1 = sub_604F7F5C(v5, a2, &dword_60CA6DD0);
  v6 = operator_new(0xE10u);
  FIELD_U32(a1, 4) = sub_604F7F5C(v6, a2, &dword_60CA6DD8);
  v7 = operator_new(0xE10u);
  FIELD_U32(a1, 8) = sub_604F7F5C(v7, a2, &dword_60CA6DE0);
  v8 = operator_new(0xE10u);
  FIELD_U32(a1, 12) = sub_604F7F5C(v8, a2, &dword_60CA6DE8);
  v9 = operator_new(0xE10u);
  FIELD_U32(a1, 16) = sub_604F7F5C(v9, a2, &dword_60CA6DF0);
  v10 = operator_new(0xE10u);
  FIELD_U32(a1, 20) = sub_604F7F5C(v10, a2, &dword_60CA6DF8);
  v11 = operator_new(0xE10u);
  FIELD_U32(a1, 24) = sub_604F7F5C(v11, a2, &dword_60CA6E00);
  v12 = operator_new(0xE10u);
  FIELD_U32(a1, 28) = sub_604F7F5C(v12, a2, &dword_60CA6E08);
  v13 = operator_new(0xE10u);
  FIELD_U32(a1, 32) = sub_604F7F5C(v13, a2, &dword_60CA6E10);
  v14 = operator_new(0xE10u);
  FIELD_U32(a1, 36) = sub_604F7F5C(v14, a2, &dword_60CA6E18);
  return a1;
}
