/* sub_6067F870
 * address: 0x6067F870   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6067F870()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB8074 & ~(1617426564 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB8074) )
  {
    dword_60CB8070 = (int)&off_60C169DC;
    _cxa_guard_release(&dword_60CB8074);
  }
  return &dword_60CB8070;
}
