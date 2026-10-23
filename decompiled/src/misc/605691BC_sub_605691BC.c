/* sub_605691BC
 * address: 0x605691BC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605691BC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAE5C0 & ~(1616286164 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE5C0) )
  {
    dword_60CAE5BC = (int)&off_60C01FFC;
    _cxa_guard_release(&dword_60CAE5C0);
  }
  if ( a2 != &dword_60CAE5BC )
    JUMPOUT(0x605632C0);
  return 1;
}
