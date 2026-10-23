/* sub_60224CC8
 * address: 0x60224CC8   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60224CC8(int a1, int a2)
{
  char v2; // r12
  int v4; // r1
  int *v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r0

  v4 = FIELD_U32(a1, 28);
  if ( !v4 )
    return 0;
  v5 = *(int **)(a1 + 36);
  v6 = 4 * v4;
  while ( 1 )
  {
    v7 = *v5;
    if ( ((unsigned int)&dword_60C8D808 & ~(1612860720 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D808) )
    {
      dword_60C8D804 = (int)&off_60BD9320;
      _cxa_guard_release(&dword_60C8D808);
    }
    v8 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8D804);
    if ( v7 )
    {
      if ( v8 == 1 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 52))(v7, a2) )
        break;
    }
    v6 -= 4;
    ++v5;
    if ( !v6 )
      return 0;
  }
  return v7;
}
