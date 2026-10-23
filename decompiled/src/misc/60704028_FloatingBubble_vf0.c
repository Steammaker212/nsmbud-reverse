/* FloatingBubble_vf0
 * address: 0x60704028   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall FloatingBubble_vf0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CBC824 & ~(1617969216 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBC824) )
  {
    dword_60CBC820 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60CBC824);
  }
  return a2 == &dword_60CBC820 || sub_60027FB0(a2);
}
