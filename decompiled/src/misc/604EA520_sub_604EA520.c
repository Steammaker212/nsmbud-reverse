/* sub_604EA520
 * address: 0x604EA520   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EA520(int a1)
{
  char v1; // r12
  int v3; // r1
  int v4; // r0
  int v6; // [sp+4h] [bp-14h] BYREF

  if ( ((unsigned int)&dword_60CA5E90[2] & ~(1615766848 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5E90[2]) )
  {
    dword_60CA5EC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5EC4 = (int)"T_Time_00";
    dword_60CA5EC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5ECC = (int)"T_CoinCount_00";
    dword_60CA5ED0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5ED4 = (int)"T_1UP_00";
    dword_60CA5ED8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5EDC = (int)"T_UP_00";
    dword_60CA5EE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5EE4 = (int)"T_Timer_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA5E90[2]);
  }
  v3 = operator_new_8DE09C(0x14u);
  FIELD_U32(a1, 12) = v3;
  v4 = FIELD_U32(a1, 4);
  v6 = 5;
  return sub_60475334(v4, v3, &dword_60CA5EC0, &v6);
}
