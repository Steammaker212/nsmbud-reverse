/* ChallengeGameScene_bflyt_ref
 * address: 0x604EA114   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ChallengeGameScene_bflyt_ref(int a1)
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

  v2 = (sead_IDisposer *)operator_new(0xE40u);
  FIELD_U32(v2, 0x0) = (int)&off_60BFE0D8;
  v3 = sub_60475900(v2, (int)&v2[220].field_8, 6);
  FIELD_U32(v3, 0x0) = (int)&off_60BFE0D8;
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
  FIELD_U32(a1, 4) = v3;
  sub_604734E4(v3, 0);
  v4 = FIELD_U32(a1, 4);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = "Game";
  sub_60475C8C(v4);
  v5 = *(_DWORD **)(a1 + 4);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = "ChallengeGameScene.bflyt";
  message_ref(v5, &v10, 0, 0, 0);
  if ( ((unsigned int)dword_60CA5E90 & ~(1615766080 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60CA5E90) )
  {
    dword_60CA5F30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F34 = dword_60CA5CC8;
    dword_60CA5F38 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F3C = dword_60CA5CD0;
    dword_60CA5F40 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F44 = dword_60CA5CD8;
    dword_60CA5F48 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F4C = dword_60CA5CE0;
    dword_60CA5F50 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F54 = dword_60CA5CE8;
    dword_60CA5F58 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F5C = dword_60CA5CF0;
    dword_60CA5F60 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F64 = dword_60CA5CF8;
    dword_60CA5F68 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F6C = dword_60CA5D00;
    dword_60CA5F70 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F74 = dword_60CA5D08;
    sub_60000288();
    _cxa_guard_release(dword_60CA5E90);
  }
  v7 = FIELD_U32(a1, 4);
  v8 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v7 + 8);
  v10 = 9;
  return v8(v7, &dword_60CA5F30, &v10);
}
