/* FireBros__getRuntimeTypeInfo_const
 * address: 0x602AA028   size: 92   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60267424
// 
// Overridden by: None
int *FireBros__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C909FC & ~(1613406268 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C909FC) )
  {
    dword_60C909F8 = (int)&off_60BD20E4;
    _cxa_guard_release(&dword_60C909FC);
  }
  return &dword_60C909F8;
}
