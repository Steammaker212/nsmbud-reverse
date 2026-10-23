/* sub_607F6B7C
 * address: 0x607F6B7C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F6B7C(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CC5820 & ~(1618963356 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CC5820) )
    {
      dword_60CC581C = (int)&off_60C266E0;
      _cxa_guard_release(&dword_60CC5820);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CC581C)(&dword_60CC581C, a2);
}
