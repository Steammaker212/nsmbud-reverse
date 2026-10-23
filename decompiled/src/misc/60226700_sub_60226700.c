/* sub_60226700
 * address: 0x60226700   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60226700(int a1, int *a2)
{
  char v2; // r12
  int v3; // r2
  int v4; // r1
  int (__fastcall ****v5)(_DWORD, int *); // r10
  int v6; // r11
  int (__fastcall ***v7)(_DWORD, int *); // r4
  int (__fastcall ***v8)(_DWORD, int *); // r8
  int v9; // r0

  v3 = 0;
  v4 = FIELD_U32(a1, 28);
  if ( v4 )
  {
    v5 = *(int (__fastcall *****)(_DWORD, int *))(a1 + 36);
    v6 = 4 * v4;
    while ( 1 )
    {
      v7 = *v5;
      if ( ((unsigned int)&dword_60C8968C & ~(1612867512 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8968C) )
      {
        dword_60C89688 = (int)&off_60BD5510;
        _cxa_guard_release(&dword_60C8968C);
      }
      if ( !v7 || !(**v7)(v7, &dword_60C89688) )
      {
        v8 = *v5;
        if ( ((unsigned int)&dword_60C89684 & ~(1612867600 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C89684) )
        {
          dword_60C89680 = (int)&off_60BC00A4;
          _cxa_guard_release(&dword_60C89684);
        }
        v9 = (**v8)(v8, &dword_60C89680);
        if ( v8 )
        {
          if ( v9 == 1 && (*v8)[13](v8, a2) )
            break;
        }
      }
      v6 -= 4;
      ++v5;
      if ( !v6 )
        return 0;
    }
    return 1;
  }
  return v3;
}
