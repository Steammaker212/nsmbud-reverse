/* BossBase__collisionPenguinSlide
 * address: 0x60025368   size: 212   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A675C
// 
// Overridden by:
//   - 0x600C6354 : Bowser
//   - 0x600B1C10 : KoopalingBase
signed int __fastcall BossBase__collisionPenguinSlide(BossBase *a1, int a2, int a3)
{
  char v3; // r12
  unsigned __int8 *v7; // r6
  int v8; // r1
  unsigned int v9; // r0

  v7 = *(unsigned __int8 **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1610765196 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v7 && (**(int (__fastcall ***)(unsigned __int8 *, int *))v7)(v7, &dword_60C7B378) == 1 )
  {
    (*(void (__fastcall **)(unsigned __int8 *, _DWORD, int))(*(_DWORD *)v7 + 0x490))(v7, FIELD_U32(a2, 64), 4);
    v8 = 0;
    FIELD_U8(a3, 110) |= 2u;
    v9 = v7[84];
    if ( v9 < 4 )
      v8 = (char)v9;
    *(&FIELD_U32(a1, 0x17FC) + v8) = 32;
  }
  return 1;
}
