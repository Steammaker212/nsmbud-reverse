/* N_ConfirmWinPos_00_ref
 * address: 0x604F5730   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall N_ConfirmWinPos_00_ref(int a1)
{
  char v2; // r12
  int v3; // r0
  int v4; // r0
  int v5; // r5
  char v6; // r12
  int (__fastcall *v7)(int, int, int); // r7
  int v8; // r6
  int v9; // r5
  int v10; // r4
  int v12; // [sp+4h] [bp-1Ch] BYREF

  sub_604F5A4C();
  sub_604734E4((_DWORD *)(a1 + 3596), 0);
  sub_60476388((_DWORD *)(a1 + 3596), a1 + 40, &dword_60CA67E4);
  if ( ((unsigned int)dword_60CA6C60 & ~(1615812480 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CA6C60) )
  {
    dword_60CA6CE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6CE4 = dword_60CA67F0;
    dword_60CA6CE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6CEC = dword_60CA67F8;
    sub_60000288();
    _cxa_guard_release(dword_60CA6C60);
  }
  v12 = 2;
  sub_60474848(a1 + 3596, &dword_60CA6CE0, &v12);
  v3 = operator_new(0x34u);
  FIELD_U32(a1, 9628) = Pa_Item_ref(v3, a1 + 40);
  v4 = operator_new(0x48u);
  FIELD_U32(a1, 9632) = sub_604F863C(v4, a1 + 40);
  (*(void (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3560) + 12))(
    FIELD_U32(a1, 3560),
    sub_609909D8,
    0);
  v5 = sub_60473B4C(a1 + 40);
  if ( ((unsigned int)&dword_60CA6C60[1] & ~(1615812740 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[1]) )
  {
    dword_60CA6CA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6CA8 = (int)"N_ConfirmWinPos_00";
    _cxa_guard_release(&dword_60CA6C60[1]);
  }
  v7 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6CA4 + 12))(&dword_60CA6CA4);
  v8 = v7(v5, dword_60CA6CA8, 1);
  v9 = operator_new(0x16B0u);
  *(_DWORD *)v9 = &off_60BFD114;
  sub_60475900((sead_IDisposer *)v9, v9 + 3528, 1);
  *(_DWORD *)v9 = &off_60BFD114;
  FIELD_U32(v9, 3528) = 0;
  FIELD_U32(v9, 3532) = &sead__SafeStringBase__vtable;
  FIELD_U32(v9, 3536) = &byte_60B3BA34;
  FIELD_U32(v9, 3540) = 0;
  FIELD_U8(v9, 3544) = 0;
  SE_SYS_DECIDE_ref_50208C(v9 + 3720);
  FIELD_U32(v9, 5800) = v8;
  sub_604F8D20(v9);
  sub_604F8E9C(v9);
  sub_604F9090(v9);
  sub_604F92D4(v9);
  sub_604F9430(v9);
  FIELD_U32(a1, 9636) = v9;
  sub_604F6738(a1);
  sub_604F68D8(a1);
  v10 = a1 + 7144;
  sub_6045BF58(v10, 0);
  return sub_609094C4(v10, 240, 40, 5);
}
