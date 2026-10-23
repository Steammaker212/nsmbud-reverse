/* ParaGoomba__getRuntimeTypeInfo_const
 * address: 0x60364198   size: 92   group: misc
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
int *ParaGoomba__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C95934 & ~(1614168492 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C95934) )
  {
    dword_60C95930 = (int)&off_60BC9028;
    _cxa_guard_release(dword_60C95934);
  }
  return &dword_60C95930;
}
