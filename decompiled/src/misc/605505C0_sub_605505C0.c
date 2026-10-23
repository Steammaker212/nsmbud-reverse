/* sub_605505C0
 * address: 0x605505C0   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605505C0(int a1)
{
  _DWORD *v2; // r5
  char v3; // r12
  int v5; // [sp+4h] [bp-24h] BYREF
  int v6; // [sp+8h] [bp-20h] BYREF
  const char *v7; // [sp+Ch] [bp-1Ch]

  v2 = (_DWORD *)(a1 + 84);
  sub_604734E4((_DWORD *)(a1 + 84), 0);
  sub_60475C8C((int)v2);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "StaffCreditScene.bflyt";
  message_ref(v2, &v6, 0, 0, 0);
  if ( ((unsigned int)&dword_60CACFE0 & ~(1616184900 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CACFE0) )
  {
    dword_60CACFE4 = (int)&sead__SafeStringBase__vtable;
    dword_60CACFE8 = (int)"T_CoinNum_00";
    dword_60CACFEC = (int)&sead__SafeStringBase__vtable;
    dword_60CACFF0 = (int)"T_HighScoreNum_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CACFE0);
  }
  v6 = 2;
  sub_60475334((int)v2, a1 + 4, &dword_60CACFE4, &v6);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "N_Coin_00";
  v5 = 1;
  sub_6047518C((int)v2, a1 + 12, &v6, &v5);
  return (*(int (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3604)
                                                                                             + 12))(
           FIELD_U32(a1, 3604),
           sub_609909D8,
           0);
}
