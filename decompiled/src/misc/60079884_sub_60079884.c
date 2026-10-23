/* sub_60079884
 * address: 0x60079884   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60079884(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C81758 & ~(1611110564 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C81758) )
    {
      dword_60C81754 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C81758);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C81754)(&dword_60C81754, a2);
}
