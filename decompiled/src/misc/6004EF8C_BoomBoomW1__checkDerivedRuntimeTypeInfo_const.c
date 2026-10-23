/* BoomBoomW1__checkDerivedRuntimeTypeInfo_const
 * address: 0x6004EF8C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BoomBoomBase : 0x600537B0
// 
// Overridden by: None
int __fastcall BoomBoomW1__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8057C & ~(1610936228 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8057C) )
  {
    dword_60C80578 = (int)&off_60BC3768;
    _cxa_guard_release(&dword_60C8057C);
  }
  if ( a2 == &dword_60C80578 )
    return 1;
  else
    return sub_6004F7C8(a2);
}
