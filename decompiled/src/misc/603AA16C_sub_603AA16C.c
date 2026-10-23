/* sub_603AA16C
 * address: 0x603AA16C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603AA16C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C97984 & ~(1614455172 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C97984) )
  {
    dword_60C97980 = (int)&off_60BF4A9C;
    _cxa_guard_release(dword_60C97984);
  }
  if ( a2 == &dword_60C97980 )
    return 1;
  if ( ((unsigned int)&dword_60C803D8 & ~(1614455264 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C803D8) )
    {
      dword_60C803D4 = (int)&off_60BC3194;
      _cxa_guard_release(&dword_60C803D8);
    }
  }
  return a2 == &dword_60C803D4 || sub_6004BAA8(a2);
}
