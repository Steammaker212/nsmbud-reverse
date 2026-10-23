/* sub_60702854
 * address: 0x60702854   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60702854(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CBC690 & ~(1617963124 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CBC690) )
    {
      dword_60CBC68C = (int)&off_60C20A40;
      _cxa_guard_release(&dword_60CBC690);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CBC68C)(&dword_60CBC68C, a2);
}
