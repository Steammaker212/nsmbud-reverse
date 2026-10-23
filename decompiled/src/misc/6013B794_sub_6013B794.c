/* sub_6013B794
 * address: 0x6013B794   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6013B794()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C823BC & ~(1611904936 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C823BC) )
  {
    dword_60C823B8 = (int)&off_60BC7C24;
    _cxa_guard_release(&dword_60C823BC);
  }
  return &dword_60C823B8;
}
