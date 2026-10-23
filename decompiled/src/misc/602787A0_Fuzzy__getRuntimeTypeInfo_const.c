/* Fuzzy__getRuntimeTypeInfo_const
 * address: 0x602787A0   size: 92   group: misc
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
int *Fuzzy__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8EDD4 & ~(1613203380 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8EDD4) )
  {
    dword_60C8EDD0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8EDD4);
  }
  return &dword_60C8EDD0;
}
