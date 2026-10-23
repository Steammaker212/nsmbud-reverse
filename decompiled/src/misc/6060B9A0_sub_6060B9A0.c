/* sub_6060B9A0
 * address: 0x6060B9A0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6060B9A0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CB2D58 & ~(1616951736 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB2D58) )
  {
    dword_60CB2D54 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60CB2D58);
  }
  return a2 == &dword_60CB2D54 || sub_60027FB0(a2);
}
