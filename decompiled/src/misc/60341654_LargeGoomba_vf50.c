/* LargeGoomba_vf50
 * address: 0x60341654   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf50(int a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r4
  int v8; // r6

  v7 = 0;
  if ( FIELD_U32(a3, 136) != 15 )
  {
    v8 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1614026376 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v8
      && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) == 1
      && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 1164))(v8, a2, a3) == 1 )
    {
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 632))(a1, v8);
      return 1;
    }
  }
  return v7;
}
