/* CollisionActor__getRuntimeTypeInfo_const
 * address: 0x60003F20   size: 92   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x6000270C
// 
// Overridden by:
//   - 0x60009614 : MultiStateActor
int *CollisionActor__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7B394 & ~(1610628916 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
  {
    CollisionActor_RTTI = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B394);
  }
  return &CollisionActor_RTTI;
}
