/* TerrainActor_getRTTI
 * address: 0x605A56F0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *TerrainActor_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C82850 & ~(1616533252 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C82850) )
  {
    dword_60C8284C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C82850);
  }
  return &dword_60C8284C;
}
