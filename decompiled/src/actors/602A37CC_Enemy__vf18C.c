/* Enemy__vf18C
 * address: 0x602A37CC   size: 192   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
void __fastcall Enemy__vf18C(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v2; // r12
  _DWORD v4[4]; // [sp+0h] [bp-28h] BYREF
  Vec3 v5; // [sp+10h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60C7B37C & ~(1613379560 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( a2 )
  {
    if ( (**a2)(a2, &dword_60C7B378) == 1 )
    {
      sub_6075FEE4(a2, v4);
      LODWORD(v5.y) = v4[1];
      LODWORD(v5.x) = v4[0];
      v5.z = 4500.0;
      EffectData_create(21, &v5, 0, 0);
    }
  }
}
