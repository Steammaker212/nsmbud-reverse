/* StageActor__checkDerivedRuntimeTypeInfo_const
 * address: 0x6000260C   size: 208   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F74
// 
// Overridden by:
//   - 0x60003DAC : CollisionActor
bool __fastcall StageActor__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C7B364 & ~(1610622500 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( a2 == &StageActor_RTTI )
    return 1;
  if ( ((unsigned int)&dword_60C7B36C & ~(1610622592 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B36C) )
    {
      Actor_RTTI = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C7B36C);
    }
  }
  return a2 == &Actor_RTTI;
}
