/* Seaweed_vf1
 * address: 0x606D54CC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *Seaweed_vf1()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBB65C & ~(1617777888 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB65C) )
  {
    dword_60CBB658 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CBB65C);
  }
  return &dword_60CBB658;
}
