/* sub_60092A2C
 * address: 0x60092A2C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60092A2C(int a1)
{
  int v1; // r4
  char v2; // r12

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  if ( ((unsigned int)&dword_60C81760 & ~(1611213392 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
  {
    dword_60C8175C = (int)&off_60BC6E94;
    _cxa_guard_release(&dword_60C81760);
  }
  return v1
      && (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C8175C) == 1
      && FIELD_U8(v1, 7248)
      && FIELD_U8(v1, 6220) != 0;
}
