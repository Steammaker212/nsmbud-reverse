/* sub_606707F8
 * address: 0x606707F8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606707F8(int a1)
{
  char v1; // r12

  if ( ((unsigned int)&dword_60CB724C & ~(1617365008 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB724C) )
  {
    dword_60CB7248 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB724C);
  }
  return a1 && (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60CB7248) == 1 && FIELD_U8(a1, 8241) == 2;
}
