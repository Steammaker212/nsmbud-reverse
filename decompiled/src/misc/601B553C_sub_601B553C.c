/* sub_601B553C
 * address: 0x601B553C   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601B553C(int *a1)
{
  char v1; // r12
  int v3; // r5

  if ( ((unsigned int)&dword_60C88AB8 & ~(1612404052 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB8) )
  {
    dword_60C88AB4 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88AB8);
  }
  v3 = 1;
  if ( a1 != &dword_60C88AB4 )
  {
    if ( ((unsigned int)&dword_60C88AA0 & ~(1612404148 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
    {
      dword_60C88A9C = (int)&off_60BD4BB0;
      _cxa_guard_release(&dword_60C88AA0);
    }
    if ( a1 != &dword_60C88A9C )
    {
      if ( ((unsigned int)&dword_60C88A90 & ~(1612404240 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A90) )
      {
        dword_60C88A8C = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C88A90);
      }
      if ( a1 != &dword_60C88A8C )
      {
        if ( ((unsigned int)&dword_60C7B36C & ~(1612404332 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
        {
          Actor_RTTI = (int)&off_60BC00A4;
          _cxa_guard_release(&dword_60C7B36C);
        }
        return a1 == &Actor_RTTI;
      }
    }
  }
  return v3;
}
