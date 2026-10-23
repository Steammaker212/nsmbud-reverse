/* sub_607C9370
 * address: 0x607C9370   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607C9370(_DWORD *a1, int a2)
{
  int v2; // r2
  int v3; // r12
  int v4; // r2
  int v5; // r3
  int v6; // r4

  v2 = a1[3778];
  v3 = a1[3776];
  if ( v2 < v3 )
  {
    a1[3778] = v2 + 1;
    v4 = a1[3777] + v2;
    v5 = v4 - v3;
    if ( v4 < v3 )
      v5 = v4;
    *(_DWORD *)(a1[3775] + 4 * v5) = a2;
  }
  v6 = a1[2840];
  if ( ((unsigned int)&dword_60CBF6E0 & ~(1618777036 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CBF6E0) )
  {
    dword_60CBF6DC = (int)&off_60C23E4C;
    _cxa_guard_release(&dword_60CBF6E0);
  }
  if ( v6 )
  {
    if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 8))(v6, &dword_60CBF6DC) == 1 )
      sub_607C9D34(v6);
  }
}
