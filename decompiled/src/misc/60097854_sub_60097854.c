/* sub_60097854
 * address: 0x60097854   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60097854(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C823C4 & ~(1611233396 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C823C4) )
    {
      FireballBase_RTTI = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C823C4);
    }
  }
  return (*(int (__fastcall **)(int *, int))FireballBase_RTTI)(&FireballBase_RTTI, a2);
}
