/* sub_60210FD4
 * address: 0x60210FD4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60210FD4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8CF5C & ~(1612779500 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8CF5C) )
  {
    dword_60C8CF58 = (int)&off_60BD4EC8;
    _cxa_guard_release(&dword_60C8CF5C);
  }
  return a2 == &dword_60C8CF58 || sub_601767E8(a2);
}
