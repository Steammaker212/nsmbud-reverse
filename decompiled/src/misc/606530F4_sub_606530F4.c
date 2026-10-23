/* sub_606530F4
 * address: 0x606530F4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606530F4(int a1, int a2)
{
  char v2; // r12
  int v4; // r4

  v4 = 0;
  if ( a2 )
  {
    if ( ((unsigned int)&dword_60CB62B8 & ~(1617244440 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB62B8) )
    {
      dword_60CB62B4 = (int)&off_60BCFCD8;
      _cxa_guard_release(&dword_60CB62B8);
    }
    if ( a1 && (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60CB62B4) == 1 && !FIELD_U8(a1, 6572) )
      return 1;
  }
  return v4;
}
