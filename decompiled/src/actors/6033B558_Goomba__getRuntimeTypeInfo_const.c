/* Goomba__getRuntimeTypeInfo_const
 * address: 0x6033B558   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033E4C8
// 
// Overridden by: None
int *Goomba__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C830D8 & ~(1614001516 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C830D8) )
  {
    dword_60C830D4 = (int)&off_60BC9028;
    _cxa_guard_release(&dword_60C830D8);
  }
  return &dword_60C830D4;
}
