/* GoombaBase__getRuntimeTypeInfo_const
 * address: 0x6033E4C8   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602851F4
// 
// Overridden by:
//   - 0x6033B558 : Goomba
//   - 0x60364198 : ParaGoomba
int *GoombaBase__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C830E0 & ~(1614013660 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C830E0) )
  {
    dword_60C830DC = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C830E0);
  }
  return &dword_60C830DC;
}
