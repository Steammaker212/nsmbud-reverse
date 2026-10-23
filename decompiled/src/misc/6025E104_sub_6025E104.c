/* sub_6025E104
 * address: 0x6025E104   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6025E104(int a1, int a2)
{
  char v2; // r12
  _DWORD *v5; // r6
  char v6; // r12
  int v7; // r7

  if ( (FIELD_U32(a2, 136) | 2) == 2 )
  {
    v5 = *(_DWORD **)(a2 + 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613095220 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v5 && (*(int (__fastcall **)(_DWORD *, int *))*v5)(v5, &dword_60C7B378) == 1 )
    {
      v7 = FIELD_U32(a1, 64);
      if ( v7 )
      {
        if ( ((unsigned int)&dword_60C803F0 & ~(1613095348 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F0) )
        {
          dword_60C803EC = (int)&off_60BC321C;
          _cxa_guard_release(&dword_60C803F0);
        }
        if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C803EC) == 1
          && FIELD_U8(v7, 7060)
          && !(*(int (__fastcall **)(_DWORD *))(*v5 + 1156))(v5) )
        {
          sub_6025E2A8(v7);
        }
      }
      if ( v5[329] == 5 )
        (*(void (__fastcall **)(_DWORD *, int, int))(*v5 + 1164))(v5, a1, a2);
      else
        (*(void (__fastcall **)(_DWORD *, int, _DWORD))(*v5 + 1168))(v5, v7, 0);
    }
  }
}
