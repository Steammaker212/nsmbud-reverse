/* sub_606AD028
 * address: 0x606AD028   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AD028(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBA128 & ~(1617612864 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA128) )
  {
    dword_60CBA124 = (int)&off_60C1AACC;
    _cxa_guard_release(&dword_60CBA128);
  }
  if ( a2 != &dword_60CBA124 )
    JUMPOUT(0x606ACDF0);
  return 1;
}
