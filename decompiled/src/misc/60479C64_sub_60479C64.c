/* sub_60479C64
 * address: 0x60479C64   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60479C64(int a1, _DWORD *a2)
{
  int v2; // r5
  int (__fastcall *v4)(int, _DWORD, int); // r6
  int v5; // r4
  char v6; // r12
  char v7; // r12
  char v8; // r12
  int *v9; // r0

  v2 = FIELD_U32(a1, 12);
  v4 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v2 + 48);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v5 = v4(v2, a2[1], 1);
  if ( ((unsigned int)&dword_60C9D9DC & ~(1615305900 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9DC) )
  {
    if ( ((unsigned int)&dword_60C9D9E4 & ~(1615305940 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9E4) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1615305980 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
      {
        dword_60C9D9D0 = 0;
        _cxa_guard_release(&dword_60C9D9D4);
      }
      dword_60C9D9E0 = (int)&dword_60C9D9D0;
      _cxa_guard_release(&dword_60C9D9E4);
    }
    dword_60C9D9D8 = (int)&dword_60C9D9E0;
    _cxa_guard_release(&dword_60C9D9DC);
  }
  if ( !v5 )
    return 0;
  v9 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
  if ( !v9 )
    return 0;
  while ( v9 != &dword_60C9D9D8 )
  {
    v9 = (int *)*v9;
    if ( !v9 )
      return 0;
  }
  return v5;
}
