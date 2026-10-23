/* sub_6008FC08
 * address: 0x6008FC08   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6008FC08(int a1)
{
  _DWORD *v1; // r4
  char v2; // r12

  v1 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  if ( ((unsigned int)&dword_60C81760 & ~(1611201580 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
  {
    dword_60C8175C = (int)&off_60BC6E94;
    _cxa_guard_release(&dword_60C81760);
  }
  if ( v1 )
  {
    if ( (*(int (__fastcall **)(_DWORD *, int *))*v1)(v1, &dword_60C8175C) == 1 )
      sub_60088B68(v1);
  }
}
