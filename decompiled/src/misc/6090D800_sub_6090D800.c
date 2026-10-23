/* sub_6090D800
 * address: 0x6090D800   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6090D800(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8D9FC & ~(1620105240 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9FC) )
  {
    dword_60C8D9F8 = (int)&off_60BD9634;
    _cxa_guard_release(&dword_60C8D9FC);
  }
  if ( a2 == &dword_60C8D9F8 )
    return 1;
  if ( ((unsigned int)&dword_60C8D9EC & ~(1620105332 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8D9EC) )
    {
      dword_60C8D9E8 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C8D9EC);
    }
  }
  return a2 == &dword_60C8D9E8;
}
