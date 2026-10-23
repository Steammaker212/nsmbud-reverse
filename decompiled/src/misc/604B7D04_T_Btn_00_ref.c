/* T_Btn_00_ref
 * address: 0x604B7D04   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall T_Btn_00_ref(int a1)
{
  int v2; // r5
  char v3; // r12
  int v5; // [sp+8h] [bp-28h] BYREF
  int v6; // [sp+Ch] [bp-24h] BYREF

  v6 = 2;
  v2 = a1 + 4;
  sub_604753A8(a1 + 4, a1 + 3660, dword_60CA2470, &v6);
  if ( ((unsigned int)&dword_60CA2440 & ~(1615560004 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2440) )
  {
    dword_60CA245C = (int)&sead__SafeStringBase__vtable;
    dword_60CA2460 = (int)"T_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2440);
  }
  v5 = 1;
  sub_60475570(v2, a1 + 3668, &dword_60CA2500, (int)&dword_60CA245C, &v5);
  v5 = 1;
  sub_60475570(v2, a1 + 3672, &dword_60CA2508, (int)&dword_60CA245C, &v5);
  v5 = 1;
  sub_60475570(v2, a1 + 3676, &dword_60CA2510, (int)&dword_60CA245C, &v5);
  v5 = 1;
  sub_60475570(v2, a1 + 3680, &dword_60CA2518, (int)&dword_60CA245C, &v5);
  v5 = 1;
  sub_60475570(v2, a1 + 3684, &dword_60CA2520, (int)&dword_60CA245C, &v5);
  v5 = 1;
  sub_60475570(v2, a1 + 3688, &dword_60CA2528, (int)&dword_60CA245C, &v5);
  v5 = 1;
  sub_60475570(v2, a1 + 3692, &dword_60CA2530, (int)&dword_60CA245C, &v5);
  v5 = 1;
  sub_60475570(v2, a1 + 3696, &dword_60CA2538, (int)&dword_60CA245C, &v5);
  v5 = 1;
  sub_60475570(v2, a1 + 3700, &dword_60CA2540, (int)&dword_60CA245C, &v5);
  v5 = 1;
  sub_60475570(v2, a1 + 3704, &dword_60CA2548, (int)&dword_60CA245C, &v5);
  v5 = 1;
  sub_60475570(v2, a1 + 3708, &dword_60CA2550, (int)&dword_60CA245C, &v5);
  v5 = 1;
  return sub_60475570(v2, a1 + 3712, &dword_60CA2558, (int)&dword_60CA245C, &v5);
}
