/* sub_601901CC
 * address: 0x601901CC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601901CC(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C8967C & ~(1612251628 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8967C) )
    {
      dword_60C89678 = (int)&off_60BD5510;
      _cxa_guard_release(&dword_60C8967C);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C89678)(&dword_60C89678, a2);
}
