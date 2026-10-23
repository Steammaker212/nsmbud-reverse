/* sub_601A71B0
 * address: 0x601A71B0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A71B0(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C8A25C & ~(1612345808 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8A25C) )
    {
      dword_60C8A258 = (int)&off_60BD4EC8;
      _cxa_guard_release(&dword_60C8A25C);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C8A258)(&dword_60C8A258, a2);
}
