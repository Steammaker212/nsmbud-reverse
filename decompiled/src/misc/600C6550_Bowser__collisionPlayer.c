/* Bowser__collisionPlayer
 * address: 0x600C6550   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60024E78
// 
// Overridden by: None
void __fastcall Bowser__collisionPlayer(int a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r5
  int v6; // r2

  v5 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1611425132 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1156))(v5) == 1 )
      v6 = 4;
    else
      v6 = 2;
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1172))(v5, a1, v6);
  }
}
