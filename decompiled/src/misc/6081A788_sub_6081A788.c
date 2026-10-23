/* sub_6081A788
 * address: 0x6081A788   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081A788(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CC6C0C & ~(1619109800 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CC6C0C) )
    {
      dword_60CC6C08 = (int)&off_60C2A38C;
      _cxa_guard_release(&dword_60CC6C0C);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CC6C08)(&dword_60CC6C08, a2);
}
