/* sub_60079754
 * address: 0x60079754   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60079754(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C81748 & ~(1611110260 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C81748) )
    {
      dword_60C81744 = (int)&off_60BC6E7C;
      _cxa_guard_release(&dword_60C81748);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C81744)(&dword_60C81744, a2);
}
