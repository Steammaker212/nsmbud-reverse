/* sub_602A0120
 * address: 0x602A0120   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A0120(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C9027C & ~(1613365560 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9027C) )
  {
    dword_60C90278 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9027C);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C90278) == 1 )
    {
      v4 = 1;
      if ( !FIELD_U32(v3, 6572) )
        sub_602A3EFC(v3 + 6548, 24);
    }
  }
  return v4;
}
