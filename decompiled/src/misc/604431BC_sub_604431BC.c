/* sub_604431BC
 * address: 0x604431BC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604431BC(_DWORD *a1, int a2, unsigned int a3)
{
  char v3; // r12
  int result; // r0

  if ( ((unsigned int)&dword_60C81740 & ~(1615081948 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( a2 )
  {
    result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)a2 + 8))(a2, &dword_60C8173C);
    if ( result )
      result = a2;
  }
  else
  {
    result = 0;
  }
  a1[73] = result;
  if ( a3 <= 3 )
  {
    a1[74] = dword_60AF28A4[a3];
    result = dword_60AF28B4[a3];
    a1[75] = result;
  }
  return result;
}
