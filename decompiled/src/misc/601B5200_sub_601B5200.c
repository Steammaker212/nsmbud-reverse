/* sub_601B5200
 * address: 0x601B5200   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B5200(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C88AB0 & ~(1612403224 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
  {
    dword_60C88AAC = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C88AB0);
  }
  if ( a2 == &dword_60C88AAC )
    return 1;
  else
    return sub_601B553C(a2);
}
