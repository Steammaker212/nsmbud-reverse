/* sub_60852130
 * address: 0x60852130   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60852130()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60CC7F24 & ~(1619337540 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F24) )
  {
    if ( ((unsigned int)&dword_60CC7F1C & ~(1619337580 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F1C) )
    {
      dword_60CC7F18 = 0;
      _cxa_guard_release(&dword_60CC7F1C);
    }
    dword_60CC7F20 = (int)&dword_60CC7F18;
    _cxa_guard_release(&dword_60CC7F24);
  }
  return &dword_60CC7F20;
}
