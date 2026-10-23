/* BgCenter__getRuntimeTypeInfo_const
 * address: 0x6082D294   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002FF8
// 
// Overridden by: None
int *BgCenter__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8D90C & ~(1619186344 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D90C) )
  {
    dword_60C8D908 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C8D90C);
  }
  return &dword_60C8D908;
}
