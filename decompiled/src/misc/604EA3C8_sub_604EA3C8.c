/* sub_604EA3C8
 * address: 0x604EA3C8   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EA3C8(int a1)
{
  char v1; // r12
  int v3; // r1
  int v4; // r0
  int v6; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CA5E90[1] & ~(1615766504 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5E90[1]) )
  {
    dword_60CA5EF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5EF4 = (int)"N_Time_00";
    dword_60CA5EF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5EFC = (int)"N_CoinCount_00";
    dword_60CA5F00 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F04 = (int)"N_CoinLost_00";
    dword_60CA5F08 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F0C = (int)"N_1UPCount_00";
    dword_60CA5F10 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F14 = (int)"N_EnemyLost_00";
    dword_60CA5F18 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F1C = (int)"N_Timer_00";
    dword_60CA5F20 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F24 = (int)"N_Score_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA5E90[1]);
  }
  v3 = operator_new_8DE09C(0x1Cu);
  FIELD_U32(a1, 8) = v3;
  v4 = FIELD_U32(a1, 4);
  v6 = 7;
  return sub_6047518C(v4, v3, &dword_60CA5EF0, &v6);
}
