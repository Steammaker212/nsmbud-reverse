/* sub_60479DF4
 * address: 0x60479DF4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60479DF4(int a1, _DWORD *a2)
{
  int v2; // r5
  int (__fastcall *v4)(int, _DWORD, int); // r6
  int v5; // r4
  char v6; // r12
  char v7; // r12
  int *v8; // r0

  v2 = FIELD_U32(a1, 12);
  v4 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v2 + 48);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v5 = v4(v2, a2[1], 1);
  if ( ((unsigned int)&dword_60C9D9EC & ~(1615306300 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9EC) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1615306340 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60C9D9E8 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60C9D9EC);
  }
  if ( !v5 )
    return 0;
  v8 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
  if ( !v8 )
    return 0;
  while ( v8 != &dword_60C9D9E8 )
  {
    v8 = (int *)*v8;
    if ( !v8 )
      return 0;
  }
  return v5;
}
