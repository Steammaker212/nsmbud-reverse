/* sub_60595760
 * address: 0x60595760   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60595760(int a1, int a2)
{
  int v2; // r4
  _BYTE *v3; // r5
  char v4; // r12
  char v5; // r12

  v2 = FIELD_U32(a1, 144);
  v3 = (_BYTE *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 2);
  if ( v3[533] == 1 )
  {
    if ( ((unsigned int)&dword_60C9D3DC & ~(1616467876 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3DC) )
    {
      dword_60C9D3D8 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C9D3DC);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C9D3D8) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1616467992 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v3
        && (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C7B378) == 1
        && FIELD_F32(v2, 124) < 0.0
        && (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v3 + 1204))(v3) == 1
        && (*(_BYTE *)((*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v3 + 80))(v3) + 2224) & 1) != 0 )
      {
        FIELD_U8(v2, 8208) = 1;
      }
    }
  }
}
