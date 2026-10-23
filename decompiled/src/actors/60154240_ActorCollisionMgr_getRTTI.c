/* ActorCollisionMgr_getRTTI
 * address: 0x60154240   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *ActorCollisionMgr_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88214 & ~(1612005972 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88214) )
  {
    dword_60C88210 = (int)&off_60BD4468;
    _cxa_guard_release(&dword_60C88214);
  }
  return &dword_60C88210;
}
