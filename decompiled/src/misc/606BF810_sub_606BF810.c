/* sub_606BF810
 * address: 0x606BF810   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606BF810()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBA840 & ~(1617688612 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA840) )
  {
    dword_60CBA83C = (int)&off_60C09BC4;
    _cxa_guard_release(&dword_60CBA840);
  }
  return &dword_60CBA83C;
}
