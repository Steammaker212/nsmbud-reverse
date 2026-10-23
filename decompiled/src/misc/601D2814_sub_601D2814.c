/* sub_601D2814
 * address: 0x601D2814   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D2814(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C8AE9C & ~(1612523572 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8AE9C) )
    {
      dword_60C8AE98 = (int)&off_60BD4E08;
      _cxa_guard_release(&dword_60C8AE9C);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C8AE98)(&dword_60C8AE98, a2);
}
