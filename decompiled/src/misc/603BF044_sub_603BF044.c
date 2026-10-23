/* sub_603BF044
 * address: 0x603BF044   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603BF044(int a1, int a2, int a3)
{
  char v3; // r12
  unsigned __int8 *v7; // r7
  int (__fastcall ***v8)(_DWORD, int *); // r5
  int v9; // r6
  unsigned int result; // r0

  v7 = *(unsigned __int8 **)(a3 + 64);
  v8 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C86B40 & ~(1614540908 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B40) )
  {
    dword_60C86B3C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C86B40);
  }
  if ( v8 )
  {
    v9 = (**v8)(v8, &dword_60C86B3C);
    if ( v9 )
      v9 = (int)v8;
  }
  else
  {
    v9 = 0;
  }
  result = v7[533] - 1;
  if ( result <= 1 )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1614541052 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    result = (**(int (__fastcall ***)(unsigned __int8 *, int *))v7)(v7, &dword_60C7B378);
    if ( result == 1 )
    {
      if ( (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v7 + 1156))(v7) == 1 )
      {
        result = FIELD_U32(a2, 92) & 0xFFFFFFFE;
        FIELD_U32(a2, 92) = result;
      }
      else
      {
        Enemy__collisionPlayer(a1, a2, a3);
        FIELD_U8(v9, 6692) = 1;
        return 6692;
      }
    }
  }
  return result;
}
