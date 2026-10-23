/* sub_60852A98
 * address: 0x60852A98   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60852A98()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12

  if ( ((unsigned int)&dword_60CC7F34 & ~(1619339952 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F34) )
  {
    if ( ((unsigned int)&dword_60CC7F24 & ~(1619339992 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F24) )
    {
      if ( ((unsigned int)&dword_60CC7F1C & ~(1619340032 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F1C) )
      {
        dword_60CC7F18 = 0;
        _cxa_guard_release(&dword_60CC7F1C);
      }
      dword_60CC7F20 = (int)&dword_60CC7F18;
      _cxa_guard_release(&dword_60CC7F24);
    }
    dword_60CC7F30 = (int)&dword_60CC7F20;
    _cxa_guard_release(&dword_60CC7F34);
  }
  return &dword_60CC7F30;
}
