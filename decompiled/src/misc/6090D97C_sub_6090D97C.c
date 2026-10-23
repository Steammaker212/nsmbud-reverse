/* sub_6090D97C
 * address: 0x6090D97C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6090D97C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCF470 & ~(1620105620 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCF470) )
  {
    dword_60CCF46C = (int)&off_60BD9634;
    _cxa_guard_release(&dword_60CCF470);
  }
  if ( a2 == &dword_60CCF46C )
    return 1;
  if ( ((unsigned int)&dword_60C8D9EC & ~(1620105712 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8D9EC) )
    {
      dword_60C8D9E8 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C8D9EC);
    }
  }
  return a2 == &dword_60C8D9E8;
}
