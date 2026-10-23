/* Pokey__collisionPenguinSlide
 * address: 0x60382AB4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A675C
// 
// Overridden by: None
int __fastcall Pokey__collisionPenguinSlide(int a1, int a2, int a3)
{
  char v3; // r12
  unsigned __int8 *v5; // r5
  unsigned int v6; // r0
  int v7; // r1

  v5 = *(unsigned __int8 **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1614293712 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5 && (**(int (__fastcall ***)(unsigned __int8 *, int *))v5)(v5, &dword_60C7B378) == 1 )
  {
    (*(void (__fastcall **)(unsigned __int8 *, int, int))(*(_DWORD *)v5 + 1168))(v5, a1, 4);
    v6 = v5[84];
    v7 = 0;
    if ( v6 < 4 )
      v7 = (char)v6;
    *(_WORD *)(a1 + 2 * v7 + 6140) = 28;
  }
  return 1;
}
