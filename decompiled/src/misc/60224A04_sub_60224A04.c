/* sub_60224A04
 * address: 0x60224A04   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60224A04(_DWORD *a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r0
  int v6; // r8
  int *v7; // r5
  int v8; // r6
  int v9; // r0
  int v10; // r0
  int v11; // r1

  v5 = a1[7];
  if ( v5 )
  {
    v6 = 4 * v5;
    v7 = (int *)a1[9];
    while ( 1 )
    {
      v8 = *v7;
      if ( ((unsigned int)&dword_60C8968C & ~(1612860024 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8968C) )
      {
        dword_60C89688 = (int)&off_60BD5510;
        _cxa_guard_release(&dword_60C8968C);
      }
      v9 = (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C89688);
      if ( v8 )
      {
        if ( v9 == 1 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v8 + 52))(v8, a3) )
          break;
      }
      v6 -= 4;
      ++v7;
      if ( !v6 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v10 = sub_60229DE0(a1, a2, a3);
    if ( v10 )
    {
      v11 = a1[7];
      if ( v11 < a1[8] )
      {
        *(_DWORD *)(a1[9] + 4 * v11) = v10;
        ++a1[7];
      }
    }
  }
  return 0;
}
