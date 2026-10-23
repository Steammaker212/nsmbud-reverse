/* TerrainEffects_vf1
 * address: 0x605A2D8C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *TerrainEffects_vf1()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAFEC0 & ~(1616522656 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFEC0) )
  {
    dword_60CAFEBC = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CAFEC0);
  }
  return &dword_60CAFEBC;
}
