/* GoombaBase__collisionGroundPoundYoshi
 * address: 0x6033CB84   size: 252   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A65D4
// 
// Overridden by:
//   - 0x60363C00 : ParaGoomba
int __fastcall GoombaBase__collisionGroundPoundYoshi(int a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r7
  int v8; // r0

  v7 = FIELD_U32(a2, 64);
  if ( v7 )
  {
    if ( ((unsigned int)&dword_60C830E0 & ~(1614007216 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C830E0) )
    {
      dword_60C830DC = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C830E0);
    }
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C830DC) == 1 )
    {
      v8 = FIELD_U32(v7, 6376);
      if ( v8 )
        ++FIELD_U32(v8, 6960);
      if ( Actor__getProfileId((Actor *)v7) == 467 && !FIELD_U8(v7, 6705) )
        sub_603FFD60(dword_60C99DD4 + 852);
    }
  }
  return Enemy__collisionGroundPoundYoshi(a1, a2, a3);
}
