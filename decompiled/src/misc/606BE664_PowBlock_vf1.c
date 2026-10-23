/* PowBlock_vf1
 * address: 0x606BE664   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *PowBlock_vf1()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBA758 & ~(1617684088 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBA758) )
  {
    dword_60CBA754 = (int)&off_60BDE360;
    _cxa_guard_release(dword_60CBA758);
  }
  return &dword_60CBA754;
}
