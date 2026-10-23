/* sub_60002988
 * address: 0x60002988   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60002988(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C7B38C & ~(1610623400 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B38C) )
    {
      MultiStateActor_RTTI = (int)&off_60BC00D4;
      _cxa_guard_release(&dword_60C7B38C);
    }
  }
  return (*(int (__fastcall **)(int *, int))MultiStateActor_RTTI)(&MultiStateActor_RTTI, a2);
}
