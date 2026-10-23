/* sub_6080686C
 * address: 0x6080686C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6080686C(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r6
  int v5; // r0

  v3 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 28);
  if ( ((unsigned int)&dword_60CC64A4 & ~(1619028116 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC64A4) )
  {
    dword_60CC64A0 = (int)off_60C28008;
    _cxa_guard_release(&dword_60CC64A4);
  }
  v4 = (int)(v3 + 114);
  if ( !(**v3)(v3, &dword_60CC64A0) )
    v4 = 456;
  v5 = sub_608DC930(*(_DWORD *)v4);
  return (unsigned int)sub_608A9AA4(v5, a1) >> 31;
}
