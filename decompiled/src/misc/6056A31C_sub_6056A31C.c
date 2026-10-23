/* sub_6056A31C
 * address: 0x6056A31C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6056A31C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAE65C & ~(1616290608 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE65C) )
  {
    dword_60CAE658 = (int)&off_60C02538;
    _cxa_guard_release(&dword_60CAE65C);
  }
  return &dword_60CAE658;
}
