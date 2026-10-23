/* sub_601BD120
 * address: 0x601BD120   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601BD120(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8AB28 & ~(1612435768 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AB28) )
  {
    dword_60C8AB24 = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C8AB28);
  }
  return a2 == &dword_60C8AB24 || sub_601B553C(a2);
}
