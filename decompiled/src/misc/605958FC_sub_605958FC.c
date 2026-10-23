/* sub_605958FC
 * address: 0x605958FC   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605958FC(int a1, _BYTE *a2)
{
  char v2; // r12
  _BOOL4 result; // r0
  char v6; // r12

  result = 0;
  if ( a2[533] == 1 )
  {
    if ( ((unsigned int)&dword_60C9D3DC & ~(1616468264 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3DC) )
    {
      dword_60C9D3D8 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C9D3DC);
    }
    if ( !a1 || (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60C9D3D8) != 1 )
      return 0;
    if ( ((unsigned int)&dword_60C7B37C & ~(1616468380 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    return (**(int (__fastcall ***)(_BYTE *, int *))a2)(a2, &dword_60C7B378) == 1
        && FIELD_F32(a1, 124) < 0.0
        && (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a2 + 1204))(a2) != 1;
  }
  return result;
}
