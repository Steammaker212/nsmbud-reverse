/* T_Kinopio_ref
 * address: 0x604FA23C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall T_Kinopio_ref(int a1)
{
  char v2; // r12
  int v4; // [sp+4h] [bp-14h] BYREF

  sub_604FA344();
  sub_604FA500(a1);
  if ( ((unsigned int)&dword_60CA702C & ~(1615831656 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA702C) )
  {
    dword_60CA7030 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7034 = (int)"T_Kinopio_00";
    dword_60CA7038 = (int)&sead__SafeStringBase__vtable;
    dword_60CA703C = (int)"T_Kinopio_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CA702C);
  }
  v4 = 2;
  sub_60475334(a1 + 40, a1 + 3660, &dword_60CA7030, &v4);
  sub_6045BF58(a1 + 3692, 0);
  return Pa_KeyAssign_02_ref(a1);
}
