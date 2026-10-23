/* sub_60418238
 * address: 0x60418238   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60418238(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C9BAE4 & ~(1614905944 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9BAE4) )
    {
      dword_60C9BAE0 = (int)&off_60BF9D2C;
      _cxa_guard_release(&dword_60C9BAE4);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C9BAE0)(&dword_60C9BAE0, a2);
}
