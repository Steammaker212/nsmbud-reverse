/* Pokey__getRuntimeTypeInfo_const
 * address: 0x603849CC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602851F4
// 
// Overridden by: None
int *Pokey__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C96AA0 & ~(1614301664 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C96AA0) )
  {
    dword_60C96A9C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C96AA0);
  }
  return &dword_60C96A9C;
}
