/* sub_60690658
 * address: 0x60690658   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60690658(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)dword_60CB84C8 & ~(1617495672 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CB84C8) )
    {
      dword_60CB84C4 = (int)&off_60C12DFC;
      _cxa_guard_release(dword_60CB84C8);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CB84C4)(&dword_60CB84C4, a2);
}
