/* sub_606C6EA4
 * address: 0x606C6EA4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606C6EA4()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB0898 & ~(1617718968 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB0898) )
  {
    dword_60CB0894 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60CB0898);
  }
  return &dword_60CB0894;
}
