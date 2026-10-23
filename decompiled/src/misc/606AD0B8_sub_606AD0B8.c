/* sub_606AD0B8
 * address: 0x606AD0B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606AD0B8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBA128 & ~(1617613004 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA128) )
  {
    dword_60CBA124 = (int)&off_60C1AACC;
    _cxa_guard_release(&dword_60CBA128);
  }
  return &dword_60CBA124;
}
