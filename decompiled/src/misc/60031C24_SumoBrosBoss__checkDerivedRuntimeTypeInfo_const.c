/* SumoBrosBoss__checkDerivedRuntimeTypeInfo_const
 * address: 0x60031C24   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600261A8
// 
// Overridden by: None
int __fastcall SumoBrosBoss__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C7FBEC & ~(1610816572 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FBEC) )
  {
    dword_60C7FBE8 = (int)&off_60BC1FB4;
    _cxa_guard_release(&dword_60C7FBEC);
  }
  if ( a2 == &dword_60C7FBE8 )
    return 1;
  else
    return sub_60032268(a2);
}
