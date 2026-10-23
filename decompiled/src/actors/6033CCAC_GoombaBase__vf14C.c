/* GoombaBase__vf14C
 * address: 0x6033CCAC   size: 188   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7138
// 
// Overridden by: None
int __fastcall GoombaBase__vf14C(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r7
  int v5; // r0

  v4 = FIELD_U32(a2, 64);
  if ( v4 )
  {
    if ( ((unsigned int)&dword_60C830E0 & ~(1614007512 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C830E0) )
    {
      dword_60C830DC = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C830E0);
    }
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C830DC) == 1 )
    {
      v5 = FIELD_U32(v4, 6376);
      if ( v5 )
        ++FIELD_U32(v5, 6960);
    }
  }
  return Enemy__vf14C();
}
