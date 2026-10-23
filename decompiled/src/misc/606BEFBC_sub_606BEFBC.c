/* sub_606BEFBC
 * address: 0x606BEFBC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606BEFBC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBA820 & ~(1617686480 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA820) )
  {
    dword_60CBA81C = (int)&off_60BDE360;
    _cxa_guard_release(&dword_60CBA820);
  }
  return &dword_60CBA81C;
}
