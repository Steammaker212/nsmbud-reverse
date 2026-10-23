/* sub_6000941C
 * address: 0x6000941C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000941C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C7B3A4 & ~(1610650676 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C7B3A4) )
  {
    dword_60C7B3A0 = (int)&off_60BC00D4;
    _cxa_guard_release(dword_60C7B3A4);
  }
  if ( a2 == &dword_60C7B3A0 )
    return 1;
  else
    return sub_60009904(a2);
}
