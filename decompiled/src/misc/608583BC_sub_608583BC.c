/* sub_608583BC
 * address: 0x608583BC   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608583BC(int a1, float *a2, int a3)
{
  char v3; // r12
  int v4; // r4
  int result; // r0
  char v7; // r12

  v4 = a3;
  result = 1065353216;
  *a2 = 1.0;
  a2[1] = 1.0;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)&dword_60C9DA0C & ~(1619362888 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA0C) )
      {
        if ( ((unsigned int)&dword_60C9D9D4 & ~(1619362920 << v7) & 1) == 0 )
        {
          if ( _cxa_guard_acquire(&dword_60C9D9D4) )
          {
            dword_60C9D9D0 = 0;
            _cxa_guard_release(&dword_60C9D9D4);
          }
        }
        dword_60C9DA08 = (int)&dword_60C9D9D0;
        _cxa_guard_release(&dword_60C9DA0C);
      }
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( result )
        break;
LABEL_13:
      *a2 = *a2 * FIELD_F32(v4, 48);
      a2[1] = a2[1] * FIELD_F32(v4, 52);
      v4 = FIELD_U32(v4, 12);
      if ( !v4 )
        return result;
    }
    while ( (int *)result != &dword_60C9DA08 )
    {
      result = *(_DWORD *)result;
      if ( !result )
        goto LABEL_13;
    }
  }
  return result;
}
