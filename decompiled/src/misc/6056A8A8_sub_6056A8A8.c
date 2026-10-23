/* sub_6056A8A8
 * address: 0x6056A8A8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6056A8A8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAE684 & ~(1616292028 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE684) )
  {
    dword_60CAE680 = (int)&off_60C026F8;
    _cxa_guard_release(&dword_60CAE684);
  }
  return &dword_60CAE680;
}
