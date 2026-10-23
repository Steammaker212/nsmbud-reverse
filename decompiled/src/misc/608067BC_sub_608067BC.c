/* sub_608067BC
 * address: 0x608067BC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***sub_608067BC())(_DWORD, int *)
{
  char v0; // r12
  int (__fastcall ***v1)(_DWORD, int *); // r4
  int (__fastcall ***result)(_DWORD, int *); // r0

  v1 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 28);
  if ( ((unsigned int)&dword_60CC64A4 & ~(1619027936 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC64A4) )
  {
    dword_60CC64A0 = (int)off_60C28008;
    _cxa_guard_release(&dword_60CC64A4);
  }
  if ( !v1 )
    return 0;
  result = (int (__fastcall ***)(_DWORD, int *))(**v1)(v1, &dword_60CC64A0);
  if ( result )
    return v1;
  return result;
}
