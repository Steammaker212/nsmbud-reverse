/* sub_602FC160
 * address: 0x602FC160   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FC160(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C92AD0 & ~(1613742464 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C92AD0) )
    {
      dword_60C92ACC = (int)&off_60BE7F9C;
      _cxa_guard_release(&dword_60C92AD0);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C92ACC)(&dword_60C92ACC, a2);
}
