/* Iggy__checkDerivedRuntimeTypeInfo_const
 * address: 0x600A0E84   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B7D60
// 
// Overridden by: None
int __fastcall Iggy__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C82830 & ~(1611271836 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C82830) )
  {
    dword_60C8282C = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C82830);
  }
  if ( a2 == &dword_60C8282C )
    return 1;
  else
    return sub_600A1528(a2);
}
