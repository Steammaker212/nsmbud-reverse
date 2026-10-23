/* sub_603390BC
 * address: 0x603390BC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603390BC(_DWORD *a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r0
  int result; // r0

  v3 = (int (__fastcall ***)(_DWORD, int *))a1[14];
  if ( ((unsigned int)&dword_60C8DCF4 & ~(1613992152 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DCF4) )
  {
    dword_60C8DCF0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8DCF4);
  }
  v4 = 0;
  if ( v3 )
  {
    v4 = (**v3)(v3, &dword_60C8DCF0);
    if ( v4 )
      v4 = (int)v3;
  }
  a1[1719] = v4;
  result = FIELD_U32(v4, 8);
  a1[1720] = result;
  a1[40] = 0;
  return result;
}
