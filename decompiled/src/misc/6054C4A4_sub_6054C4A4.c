/* sub_6054C4A4
 * address: 0x6054C4A4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054C4A4(int a1)
{
  char v2; // r12
  int v4; // [sp+4h] [bp-14h] BYREF

  sub_6054C5C0();
  sub_6054C77C(a1);
  if ( ((unsigned int)&dword_60CACB3C & ~(1616168144 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CACB3C) )
  {
    dword_60CACB70 = (int)&sead__SafeStringBase__vtable;
    dword_60CACB74 = (int)"T_Sign_00";
    dword_60CACB78 = (int)&sead__SafeStringBase__vtable;
    dword_60CACB7C = (int)"T_W9_00";
    dword_60CACB80 = (int)&sead__SafeStringBase__vtable;
    dword_60CACB84 = (int)"T_W9_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CACB3C);
  }
  v4 = 3;
  sub_60475334(a1 + 40, a1 + 3660, &dword_60CACB70, &v4);
  sub_6045BF58(a1 + 3692, 0);
  return Pa_KeyAssign_02_ref_2(a1);
}
