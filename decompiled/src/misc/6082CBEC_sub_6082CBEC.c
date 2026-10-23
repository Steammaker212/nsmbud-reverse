/* sub_6082CBEC
 * address: 0x6082CBEC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6082CBEC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CC6E3C & ~(1619184644 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6E3C) )
  {
    dword_60CC6E38 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60CC6E3C);
  }
  if ( a2 == &dword_60CC6E38 )
    return 1;
  if ( ((unsigned int)&dword_60C7B36C & ~(1619184736 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B36C) )
    {
      Actor_RTTI = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C7B36C);
    }
  }
  return a2 == &Actor_RTTI;
}
