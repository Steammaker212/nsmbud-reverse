/* KoopalingBase__collisionPenguinSlide
 * address: 0x600B1C10   size: 184   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60025368
// 
// Overridden by: None
int __fastcall KoopalingBase__collisionPenguinSlide(int a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r5
  int v6; // r6

  v5 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1611340844 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  v6 = 0;
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 )
  {
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1168))(v5, a1, (~FIELD_U32(a1, 7176) & 2) + 2);
    return 1;
  }
  return v6;
}
