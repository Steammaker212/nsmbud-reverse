/* sub_60475054
 * address: 0x60475054   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60475054(int a1, _DWORD *a2)
{
  int v3; // r5
  int (__fastcall *v4)(int, _DWORD, int); // r6
  int v5; // r4
  char v6; // r12
  char v7; // r12
  int *v8; // r0

  v3 = *(_DWORD *)(FIELD_U32(a1, 16) + 12);
  v4 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 48);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v5 = v4(v3, a2[1], 1);
  if ( ((unsigned int)&dword_60C9DA0C & ~(1615286432 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA0C) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1615286472 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60C9DA08 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60C9DA0C);
  }
  if ( !v5 )
    return 0;
  v8 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
  if ( !v8 )
    return 0;
  while ( v8 != &dword_60C9DA08 )
  {
    v8 = (int *)*v8;
    if ( !v8 )
      return 0;
  }
  return v5;
}
