/* sub_60733B80
 * address: 0x60733B80   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60733B80(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CBDD5C & ~(1618164632 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD5C) )
  {
    dword_60CBDD58 = (int)&off_60C22808;
    _cxa_guard_release(&dword_60CBDD5C);
  }
  v4 = 1;
  if ( a2 != &dword_60CBDD58 )
  {
    if ( ((unsigned int)&dword_60C99D80 & ~(1618164728 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C99D80) )
    {
      dword_60C99D7C = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C99D80);
    }
    if ( a2 != &dword_60C99D7C )
    {
      if ( ((unsigned int)&dword_60C7B36C & ~(1618164820 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
      {
        Actor_RTTI = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C7B36C);
      }
      return a2 == &Actor_RTTI;
    }
  }
  return v4;
}
