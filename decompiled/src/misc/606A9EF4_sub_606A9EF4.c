/* sub_606A9EF4
 * address: 0x606A9EF4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A9EF4(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)dword_60CB9D44 & ~(1617600276 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CB9D44) )
    {
      dword_60CB9D40 = (int)&off_60C158E4;
      _cxa_guard_release(dword_60CB9D44);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CB9D40)(&dword_60CB9D40, a2);
}
