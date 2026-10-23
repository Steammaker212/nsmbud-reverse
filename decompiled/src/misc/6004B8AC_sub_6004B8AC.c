/* sub_6004B8AC
 * address: 0x6004B8AC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6004B8AC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C803D8 & ~(1610922180 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D8) )
  {
    dword_60C803D4 = (int)&off_60BC3194;
    _cxa_guard_release(&dword_60C803D8);
  }
  if ( a2 == &dword_60C803D4 )
    return 1;
  else
    return sub_6004BAA8(a2);
}
