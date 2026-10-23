/* Enemy__vfC8
 * address: 0x602A20E0   size: 184   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602D6548 : SledgeBro
//   - 0x6033D62C : GoombaBase
//   - 0x60264E40 : BrosBase
int __fastcall Enemy__vfC8(Enemy *this, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int v7; // r0

  v6 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613373696 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v6 )
  {
    v7 = (**v6)(v6, &dword_60C7B378);
    if ( v7 )
      v7 = (int)v6;
  }
  else
  {
    v7 = 0;
  }
  if ( FIELD_U32(a3, 136) == 15 )
    return 0;
  else
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 1164))(v7, a2, a3);
}
