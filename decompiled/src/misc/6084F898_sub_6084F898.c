/* sub_6084F898
 * address: 0x6084F898   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6084F898()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60CC7F04 & ~(1619327148 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F04) )
  {
    if ( ((unsigned int)&dword_60CC7EDC & ~(1619327188 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7EDC) )
    {
      dword_60CC7ED8 = 0;
      _cxa_guard_release(&dword_60CC7EDC);
    }
    dword_60CC7F00 = (int)&dword_60CC7ED8;
    _cxa_guard_release(&dword_60CC7F04);
  }
  return &dword_60CC7F00;
}
