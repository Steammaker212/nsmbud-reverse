/* sub_60683618
 * address: 0x60683618   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60683618(int a1, int a2)
{
  char v2; // r12
  int v5; // r6
  _DWORD *result; // r0

  v5 = FIELD_U32(a2, 64);
  result = (_DWORD *)(FIELD_U8(v5, 533) - 1);
  if ( (unsigned int)result <= 1 )
  {
    result = *(_DWORD **)(a2 + 136);
    if ( result != (_DWORD *)15 )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1617442388 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v5 )
      {
        result = (_DWORD *)(**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378);
        if ( result )
          result = (_DWORD *)v5;
      }
      else
      {
        result = 0;
      }
      if ( result[330] == 3 )
        return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int, int))(*result + 1164))(result, a1, a2);
    }
  }
  return result;
}
