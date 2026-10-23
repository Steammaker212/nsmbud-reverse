/* sub_6056A434
 * address: 0x6056A434   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6056A434(int *a1)
{
  char v1; // r12

  if ( ((unsigned int)&dword_60CAE664 & ~(1616290892 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE664) )
  {
    dword_60CAE660 = (int)&off_60C012E8;
    _cxa_guard_release(&dword_60CAE664);
  }
  if ( a1 == &dword_60CAE660 )
    return 1;
  if ( ((unsigned int)&dword_60CAE2F4 & ~(1616290984 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE2F4) )
  {
    dword_60CAE2F0 = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60CAE2F4);
  }
  if ( a1 == &dword_60CAE2F0 )
    return 1;
  if ( ((unsigned int)&dword_60C88A68 & ~(1616291076 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  if ( a1 == &dword_60C88A64 )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1616291168 << v1) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  return a1 == &dword_60C7B380 || sub_60026DC8(a1);
}
