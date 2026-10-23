/* sub_60465628
 * address: 0x60465628   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60465628(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C7B374 & ~(1615222344 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C7B370)(&dword_60C7B370, a2);
}
