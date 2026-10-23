/* ShellEnemy__getRuntimeTypeInfo_const
 * address: 0x603A527C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : 0x60273700
// 
// Overridden by: None
int *ShellEnemy__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C830F8 & ~(1614434960 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C830F8) )
  {
    dword_60C830F4 = (int)&off_60BC321C;
    _cxa_guard_release(&dword_60C830F8);
  }
  return &dword_60C830F4;
}
