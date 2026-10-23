/* sub_607339CC
 * address: 0x607339CC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607339CC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C99D80 & ~(1618164196 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C99D80) )
  {
    dword_60C99D7C = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C99D80);
  }
  if ( a2 == &dword_60C99D7C )
    return 1;
  if ( ((unsigned int)&dword_60C7B36C & ~(1618164288 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B36C) )
    {
      Actor_RTTI = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C7B36C);
    }
  }
  return a2 == &Actor_RTTI;
}
