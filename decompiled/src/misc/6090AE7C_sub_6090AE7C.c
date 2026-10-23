/* sub_6090AE7C
 * address: 0x6090AE7C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090AE7C(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C9CD0C & ~(1620094620 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9CD0C) )
    {
      dword_60C9CD08 = (int)&off_60BFAD80;
      _cxa_guard_release(&dword_60C9CD0C);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C9CD08)(&dword_60C9CD08, a2);
}
