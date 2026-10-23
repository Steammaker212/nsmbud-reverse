/* BoomBoomW1__getRuntimeTypeInfo_const
 * address: 0x6004F01C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BoomBoomBase : 0x60053840
// 
// Overridden by: None
int *BoomBoomW1__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8057C & ~(1610936368 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8057C) )
  {
    dword_60C80578 = (int)&off_60BC3768;
    _cxa_guard_release(&dword_60C8057C);
  }
  return &dword_60C80578;
}
