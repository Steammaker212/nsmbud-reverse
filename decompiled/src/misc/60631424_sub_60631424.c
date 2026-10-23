/* sub_60631424
 * address: 0x60631424   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60631424(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB4234 & ~(1617105980 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB4234) )
  {
    dword_60CB4230 = (int)&off_60C126F8;
    _cxa_guard_release(&dword_60CB4234);
  }
  if ( a2 == &dword_60CB4230 )
    return 1;
  if ( ((unsigned int)&dword_60CB423C & ~(1617106072 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB423C) )
  {
    dword_60CB4238 = (int)&off_60C12704;
    _cxa_guard_release(&dword_60CB423C);
  }
  if ( a2 == &dword_60CB4238 )
    return 1;
  if ( ((unsigned int)&dword_60CB4244 & ~(1617106164 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB4244) )
    {
      dword_60CB4240 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB4244);
    }
  }
  return a2 == &dword_60CB4240 || sub_60027FB0(a2);
}
