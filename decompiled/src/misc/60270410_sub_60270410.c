/* sub_60270410
 * address: 0x60270410   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60270410(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C8E914 & ~(1613169704 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8E914) )
  {
    dword_60C8E910 = (int)&off_60BDC818;
    _cxa_guard_release(dword_60C8E914);
  }
  if ( a2 == &dword_60C8E910 )
    return 1;
  if ( ((unsigned int)&dword_60C8E87C & ~(1613169796 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8E87C) )
    {
      dword_60C8E878 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C8E87C);
    }
  }
  return a2 == &dword_60C8E878 || sub_60026DC8(a2);
}
