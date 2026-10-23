/* sub_6099ABA8
 * address: 0x6099ABA8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6099ABA8()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)dword_60CC7FA8 & ~(1620683708 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CC7FA8) )
  {
    if ( ((unsigned int)&dword_60CC7F14 & ~(1620683748 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F14) )
    {
      dword_60CC7F10 = 0;
      _cxa_guard_release(&dword_60CC7F14);
    }
    dword_60CC7FA4 = (int)&dword_60CC7F10;
    _cxa_guard_release(dword_60CC7FA8);
  }
  return &dword_60CC7FA4;
}
