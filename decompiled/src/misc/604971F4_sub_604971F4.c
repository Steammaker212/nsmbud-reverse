/* sub_604971F4
 * address: 0x604971F4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_604971F4()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60CA047C & ~(1615426056 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CA047C) )
  {
    if ( ((unsigned int)&dword_60CA0474 & ~(1615426096 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA0474) )
    {
      dword_60CA0470 = 0;
      _cxa_guard_release(&dword_60CA0474);
    }
    dword_60CA0478 = (int)&dword_60CA0470;
    _cxa_guard_release(&dword_60CA047C);
  }
  return &dword_60CA0478;
}
