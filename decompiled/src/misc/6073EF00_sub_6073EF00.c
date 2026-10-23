/* sub_6073EF00
 * address: 0x6073EF00   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6073EF00(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBE26C & ~(1618210584 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
  {
    dword_60CBE268 = (int)&off_60BDBC48;
    _cxa_guard_release(&dword_60CBE26C);
  }
  return a2 == &dword_60CBE268 || sub_6059B0CC(a2);
}
