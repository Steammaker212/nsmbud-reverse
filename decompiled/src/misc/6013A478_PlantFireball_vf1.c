/* PlantFireball_vf1
 * address: 0x6013A478   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *PlantFireball_vf1()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C87B2C & ~(1611900044 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C87B2C) )
  {
    dword_60C87B28 = (int)&off_60BC7C24;
    _cxa_guard_release(&dword_60C87B2C);
  }
  return &dword_60C87B28;
}
