/* sub_60989FE8
 * address: 0x60989FE8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60989FE8()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12

  if ( ((unsigned int)&dword_60CD0BDC & ~(1620615164 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BDC) )
  {
    if ( ((unsigned int)&dword_60CC7F24 & ~(1620615204 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F24) )
    {
      if ( ((unsigned int)&dword_60CC7F1C & ~(1620615244 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F1C) )
      {
        dword_60CC7F18 = 0;
        _cxa_guard_release(&dword_60CC7F1C);
      }
      dword_60CC7F20 = (int)&dword_60CC7F18;
      _cxa_guard_release(&dword_60CC7F24);
    }
    dword_60CD0BD8 = (int)&dword_60CC7F20;
    _cxa_guard_release(&dword_60CD0BDC);
  }
  return &dword_60CD0BD8;
}
