/* sub_6059D6CC
 * address: 0x6059D6CC   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6059D6CC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAFBE0 & ~(1616500452 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFBE0) )
  {
    dword_60CAFBDC = (int)&off_60C07AAC;
    _cxa_guard_release(&dword_60CAFBE0);
  }
  if ( a2 == &dword_60CAFBDC )
    return 1;
  if ( ((unsigned int)&dword_60CAFB34 & ~(1616500544 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFB34) )
  {
    dword_60CAFB30 = (int)&off_60C07994;
    _cxa_guard_release(&dword_60CAFB34);
  }
  if ( a2 == &dword_60CAFB30 )
    return 1;
  if ( ((unsigned int)&dword_60CAFB3C & ~(1616500636 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CAFB3C) )
    {
      dword_60CAFB38 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CAFB3C);
    }
  }
  return a2 == &dword_60CAFB38 || sub_60027FB0(a2);
}
