/* sub_6085EF08
 * address: 0x6085EF08   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6085EF08()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60CC7F98 & ~(1619390236 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F98) )
  {
    if ( ((unsigned int)&dword_60CA0474 & ~(1619390276 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA0474) )
    {
      dword_60CA0470 = 0;
      _cxa_guard_release(&dword_60CA0474);
    }
    dword_60CC7F94 = (int)&dword_60CA0470;
    _cxa_guard_release(&dword_60CC7F98);
  }
  return &dword_60CC7F94;
}
