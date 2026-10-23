/* sub_60294F44
 * address: 0x60294F44   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60294F44(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8FB5C & ~(1613320028 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FB5C) )
  {
    dword_60C8FB58 = (int)&off_60BDFC9C;
    _cxa_guard_release(&dword_60C8FB5C);
  }
  if ( a2 != &dword_60C8FB58 )
    JUMPOUT(0x60293C10);
  return 1;
}
