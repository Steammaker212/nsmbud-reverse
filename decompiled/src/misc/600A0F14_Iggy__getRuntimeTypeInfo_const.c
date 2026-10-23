/* Iggy__getRuntimeTypeInfo_const
 * address: 0x600A0F14   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B7DF0
// 
// Overridden by: None
int *Iggy__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C82830 & ~(1611271976 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C82830) )
  {
    dword_60C8282C = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C82830);
  }
  return &dword_60C8282C;
}
