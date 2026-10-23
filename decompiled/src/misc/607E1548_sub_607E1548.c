/* sub_607E1548
 * address: 0x607E1548   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E1548(int a1, int *a2)
{
  char v2; // r12
  int *v5; // r0
  int v6; // r6
  int v7; // r1
  int result; // r0

  v5 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 6u )
    v5 += 6;
  v6 = *v5;
  if ( ((unsigned int)&dword_60C81740 & ~(1618875780 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( v6 )
  {
    v7 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 8))(v6, &dword_60C8173C);
    if ( v7 )
      v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  result = *a2;
  if ( !*a2 )
  {
    sub_604431BC(DrawMgr_instance, v7, 3u);
    sub_60521348(a1 + 2972);
    return sub_60443298((int)DrawMgr_instance);
  }
  return result;
}
