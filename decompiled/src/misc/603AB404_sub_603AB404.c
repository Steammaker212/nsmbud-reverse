/* sub_603AB404
 * address: 0x603AB404   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603AB404(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C97B0C & ~(1614459932 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C97B0C) )
  {
    dword_60C97B08 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C97B0C);
  }
  return a2 == &dword_60C97B08 || sub_60027FB0(a2);
}
