/* ActorCollisionMgr_checkRTTI
 * address: 0x60154140   size: 208   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall ActorCollisionMgr_checkRTTI(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C88214 & ~(1612005720 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88214) )
  {
    dword_60C88210 = (int)&off_60BD4468;
    _cxa_guard_release(&dword_60C88214);
  }
  if ( a2 == &dword_60C88210 )
    return 1;
  if ( ((unsigned int)&dword_60C881FC & ~(1612005812 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C881FC) )
    {
      dword_60C881F8 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C881FC);
    }
  }
  return a2 == &dword_60C881F8;
}
