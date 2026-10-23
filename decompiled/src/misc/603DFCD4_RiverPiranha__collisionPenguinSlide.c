/* RiverPiranha__collisionPenguinSlide
 * address: 0x603DFCD4   size: 176   group: misc
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
int __fastcall RiverPiranha__collisionPenguinSlide(int a1, int a2, int a3)
{
  char v3; // r12
  _DWORD *v5; // r4

  v5 = *(_DWORD **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1614675184 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5
    && (*(int (__fastcall **)(_DWORD *, int *))*v5)(v5, &dword_60C7B378) == 1
    && (*(int (__fastcall **)(_DWORD *, int, int))(*v5 + 1168))(v5, a1, 4) == 1 )
  {
    v5[2394] = 16;
  }
  return 1;
}
