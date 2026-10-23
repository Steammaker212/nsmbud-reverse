/* sub_60001050
 * address: 0x60001050   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void sub_60001050()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7B3B4 & ~(1610616944 << v0) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B3B4) )
    {
      unk_60C7B3B8 = 0x4140000041100000LL;
      _cxa_guard_release(&dword_60C7B3B4);
    }
  }
  JUMPOUT(0x600010DC);
}
