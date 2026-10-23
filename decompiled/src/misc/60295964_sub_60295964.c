/* sub_60295964
 * address: 0x60295964   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60295964(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8FBE0 & ~(1613322620 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FBE0) )
  {
    dword_60C8FBDC = (int)&off_60BE065C;
    _cxa_guard_release(&dword_60C8FBE0);
  }
  if ( a2 != &dword_60C8FBDC )
    JUMPOUT(0x60294C48);
  return 1;
}
