/* sub_605EBCAC
 * address: 0x605EBCAC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605EBCAC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB1D44 & ~(1616821444 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1D44) )
  {
    dword_60CB1D40 = (int)&off_60C0B7A4;
    _cxa_guard_release(&dword_60CB1D44);
  }
  if ( a2 == &dword_60CB1D40 )
    return 1;
  if ( ((unsigned int)&dword_60CB1D4C & ~(1616821536 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB1D4C) )
    {
      dword_60CB1D48 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB1D4C);
    }
  }
  return a2 == &dword_60CB1D48 || sub_60026DC8(a2);
}
