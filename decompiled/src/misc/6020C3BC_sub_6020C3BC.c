/* sub_6020C3BC
 * address: 0x6020C3BC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6020C3BC()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C8CC00 & ~(1612760016 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C8CC00) )
  {
    dword_60C8CBFC = (int)&off_60BD60CC;
    _cxa_guard_release(dword_60C8CC00);
  }
  return &dword_60C8CBFC;
}
