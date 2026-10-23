/* sub_6063159C
 * address: 0x6063159C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6063159C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB4234 & ~(1617106352 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB4234) )
  {
    dword_60CB4230 = (int)&off_60C126F8;
    _cxa_guard_release(&dword_60CB4234);
  }
  return &dword_60CB4230;
}
