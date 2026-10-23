/* sub_60445768
 * address: 0x60445768   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60445768(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // r8
  _DWORD *v6; // r7
  char v7; // r12
  int v8; // r5

  result = FIELD_U32(a1, 56);
  if ( result )
  {
    v5 = 4 * result;
    v6 = *(_DWORD **)(a1 + 64);
    do
    {
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v6 + 40))(*v6);
      if ( result == 1 )
      {
        v8 = *v6;
        if ( ((unsigned int)&dword_60C80408 & ~(1615091700 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C80408) )
        {
          dword_60C80404 = (int)&off_60BC3234;
          _cxa_guard_release(&dword_60C80408);
        }
        result = (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C80404);
        if ( v8 )
        {
          result ^= 1u;
          if ( !result )
            result = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)v8 + 156))(v8, a2, a3, a1);
        }
      }
      v5 -= 4;
      ++v6;
    }
    while ( v5 );
  }
  return result;
}
