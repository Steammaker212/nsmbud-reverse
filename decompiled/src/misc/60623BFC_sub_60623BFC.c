/* sub_60623BFC
 * address: 0x60623BFC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60623BFC(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4
  int v4; // r5

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)dword_60CB3AE0 & ~(1617050644 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB3AE0) )
  {
    dword_60CB3ADC = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60CB3AE0);
  }
  v4 = 0;
  if ( v3 && (**v3)(v3, &dword_60CB3ADC) == 1 )
  {
    SE_OBJ_ICICLE_BREAK_ref_623CB0(v3, 1048577);
    return 1;
  }
  return v4;
}
