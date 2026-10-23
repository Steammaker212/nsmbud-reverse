/* sub_606751CC
 * address: 0x606751CC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606751CC(_DWORD *a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v2; // r12
  int v5; // r0
  int v6; // s0

  if ( ((unsigned int)&dword_60CB7458 & ~(1617383912 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB7458) )
  {
    dword_60CB7454 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB7458);
  }
  if ( a2 )
  {
    v5 = (**a2)(a2, &dword_60CB7454);
    if ( v5 )
      v5 = (int)a2;
  }
  else
  {
    v5 = 0;
  }
  v6 = (int)(float)(sub_606AE1F0(v5, 0) * 65536.0);
  a1[1546] = v6 << 9;
  a1[1563] = -512 * v6;
  a1[1580] = v6 << 10;
  a1[1597] = -1024 * v6;
  return -1024 * v6;
}
