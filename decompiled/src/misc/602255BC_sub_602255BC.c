/* sub_602255BC
 * address: 0x602255BC   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602255BC(int a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r1
  int v6; // r3
  int v7; // r8
  int **i; // r6
  int *v9; // r5
  int v10; // r0
  int v11; // r0

  v5 = FIELD_U32(a1, 28);
  v6 = 0;
  if ( v5 )
  {
    v7 = 4 * v5;
    for ( i = *(int ***)(a1 + 36); ; ++i )
    {
      v9 = *i;
      if ( ((unsigned int)&dword_60C89674 & ~(1612863020 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C89674) )
      {
        dword_60C89670 = (int)&off_60BD5504;
        _cxa_guard_release(&dword_60C89674);
      }
      v10 = (*(int (__fastcall **)(int *, int *))*v9)(v9, &dword_60C89670);
      if ( v9 )
      {
        if ( v10 == 1 && (*(int (__fastcall **)(int *, int))(*v9 + 52))(v9, a2) )
          break;
      }
      v7 -= 4;
      if ( !v7 )
        return 0;
    }
    v11 = *v9;
    if ( a3 == 1 )
      (*(void (__fastcall **)(int *))(v11 + 48))(v9);
    else
      (*(void (__fastcall **)(int *))(v11 + 44))(v9);
    return 1;
  }
  return v6;
}
