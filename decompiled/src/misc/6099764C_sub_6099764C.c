/* sub_6099764C
 * address: 0x6099764C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6099764C()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60CD0D68 & ~(1620670048 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0D68) )
  {
    if ( ((unsigned int)&dword_60CD0C74 & ~(1620670088 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C74) )
    {
      dword_60CD0C70 = 0;
      _cxa_guard_release(&dword_60CD0C74);
    }
    dword_60CD0D64 = (int)&dword_60CD0C70;
    _cxa_guard_release(&dword_60CD0D68);
  }
  return &dword_60CD0D64;
}
