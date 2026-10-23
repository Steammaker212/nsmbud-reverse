/* sub_606431CC
 * address: 0x606431CC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606431CC(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CB5A60 & ~(1617179116 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB5A60) )
    {
      dword_60CB5A5C = (int)&off_60C13490;
      _cxa_guard_release(&dword_60CB5A60);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CB5A5C)(&dword_60CB5A5C, a2);
}
