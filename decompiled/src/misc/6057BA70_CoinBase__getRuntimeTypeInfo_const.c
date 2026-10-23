/* CoinBase__getRuntimeTypeInfo_const
 * address: 0x6057BA70   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MovementBlockCoinBase : 0x605D0BB4
// 
// Overridden by: None
int *CoinBase__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88A60 & ~(1616362116 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A60) )
  {
    dword_60C88A5C = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60C88A60);
  }
  return &dword_60C88A5C;
}
