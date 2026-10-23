/* sub_607CCF04
 * address: 0x607CCF04   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CCF04(int a1)
{
  int v2; // r4
  int v3; // r6
  char v4; // r12
  int v5; // r0

  v2 = 0;
  if ( sub_60766AA0(a1) && FIELD_U32(a1, 11360) )
  {
    v3 = sub_607CFB50(a1);
    if ( ((unsigned int)&dword_60C7B374 & ~(1618792264 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 252))(v3);
    v5 = sub_607D6C28(a1);
    if ( v5 && (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 252))(v5) == 1 )
    {
      Player_changeState(a1, (StateBase *)&dword_60CC5614, 0);
      return 1;
    }
  }
  return v2;
}
