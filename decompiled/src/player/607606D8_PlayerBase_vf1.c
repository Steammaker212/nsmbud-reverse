/* PlayerBase_vf1
 * address: 0x607606D8   size: 92   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *PlayerBase_vf1()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7B37C & ~(1618347756 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  return &dword_60C7B378;
}
