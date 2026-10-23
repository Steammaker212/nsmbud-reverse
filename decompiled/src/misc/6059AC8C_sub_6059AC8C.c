/* sub_6059AC8C
 * address: 0x6059AC8C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059AC8C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CAFA60 & ~(1616489636 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CAFA60) )
  {
    dword_60CAFA5C = (int)&off_60BDBC48;
    _cxa_guard_release(dword_60CAFA60);
  }
  if ( a2 == &dword_60CAFA5C )
    return 1;
  else
    return sub_6059B0CC(a2);
}
