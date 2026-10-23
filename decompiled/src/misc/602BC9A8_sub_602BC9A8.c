/* sub_602BC9A8
 * address: 0x602BC9A8   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BC9A8(int a1, _BYTE *a2)
{
  char v2; // r12
  int v5; // r6
  char v6; // r12
  bool v7; // zf

  if ( ((unsigned int)&dword_60C7B37C & ~(1613482436 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  v5 = 0;
  if ( a2 && (**(int (__fastcall ***)(_BYTE *, int *))a2)(a2, &dword_60C7B378) == 1 )
  {
    if ( ((unsigned int)&dword_60C911C0 & ~(1613482556 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C911C0) )
    {
      dword_60C911BC = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C911C0);
    }
    if ( a1 && (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60C911BC) == 1 )
    {
      v7 = FIELD_U8(a1, 7008) == 0;
      if ( FIELD_U8(a1, 7008) )
        v7 = (a2[6912] & 1) == 0;
      if ( !v7 )
      {
        (*(void (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)a2 + 1168))(a2, a1, 15);
        return 1;
      }
    }
  }
  return v5;
}
