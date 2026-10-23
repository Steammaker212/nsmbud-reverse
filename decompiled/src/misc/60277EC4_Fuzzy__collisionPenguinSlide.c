/* Fuzzy__collisionPenguinSlide
 * address: 0x60277EC4   size: 176   group: misc
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
int __fastcall Fuzzy__collisionPenguinSlide(int a1, int a2, int a3)
{
  char v3; // r12
  int v6; // r6

  if ( FIELD_U32(a3, 136) != 15 )
  {
    v6 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613201136 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1 )
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 1164))(v6, a2, a3);
  }
  return 1;
}
