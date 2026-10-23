/* Thwomp__collisionPenguinSlide
 * address: 0x6029E258   size: 184   group: misc
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
int __fastcall Thwomp__collisionPenguinSlide(int a1, int a2, int a3)
{
  char v3; // r12
  char *v5; // r5
  unsigned int v6; // r0

  v5 = *(char **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613357684 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5 )
  {
    if ( (**(int (__fastcall ***)(char *, int *))v5)(v5, &dword_60C7B378) == 1 )
    {
      (*(void (__fastcall **)(char *, int, int))(*(_DWORD *)v5 + 1172))(v5, a1, 4);
      v6 = v5[84];
      if ( v6 <= 3 )
        *(_WORD *)(a1 + 2 * v6 + 6140) = 32;
    }
  }
  return 1;
}
