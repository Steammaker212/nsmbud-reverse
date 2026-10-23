/* sub_60999E40
 * address: 0x60999E40   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60999E40()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12

  if ( ((unsigned int)&dword_60CC7FA0 & ~(1620680276 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7FA0) )
  {
    if ( ((unsigned int)dword_60CC7FA8 & ~(1620680316 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CC7FA8) )
    {
      if ( ((unsigned int)&dword_60CC7F14 & ~(1620680356 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F14) )
      {
        dword_60CC7F10 = 0;
        _cxa_guard_release(&dword_60CC7F14);
      }
      dword_60CC7FA4 = (int)&dword_60CC7F10;
      _cxa_guard_release(dword_60CC7FA8);
    }
    dword_60CC7F9C = (int)&dword_60CC7FA4;
    _cxa_guard_release(&dword_60CC7FA0);
  }
  return &dword_60CC7F9C;
}
