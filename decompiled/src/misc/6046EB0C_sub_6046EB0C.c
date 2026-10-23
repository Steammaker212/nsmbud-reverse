/* sub_6046EB0C
 * address: 0x6046EB0C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6046EB0C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9D7E4 & ~(1615260452 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D7E4) )
  {
    dword_60C9D7E0 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C9D7E4);
  }
  if ( a2 == &dword_60C9D7E0 )
    return 1;
  if ( ((unsigned int)&dword_60C7B36C & ~(1615260544 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B36C) )
    {
      Actor_RTTI = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C7B36C);
    }
  }
  return a2 == &Actor_RTTI;
}
