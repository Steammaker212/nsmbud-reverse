/* HammerBros__getRuntimeTypeInfo_const
 * address: 0x602CCEF0   size: 92   group: projectile
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
int *HammerBros__getRuntimeTypeInfo()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C91948 & ~(1613549316 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C91948) )
  {
    dword_60C91944 = (int)&off_60BD20E4;
    _cxa_guard_release(dword_60C91948);
  }
  return &dword_60C91944;
}
