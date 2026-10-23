/* sub_601D0DC0
 * address: 0x601D0DC0   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601D0DC0(int a1, int a2)
{
  int v2; // r7
  char v3; // r12
  int v4; // r8
  int v5; // r4

  v2 = sub_601693A0(885);
  v4 = *(_DWORD *)(ActorMgr__instance + 27180);
  while ( 1 )
  {
    v5 = *(_DWORD *)v2;
    if ( ((unsigned int)&dword_60C88AA0 & ~(1612516932 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
    {
      dword_60C88A9C = (int)&off_60BD4BB0;
      _cxa_guard_release(&dword_60C88AA0);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C88A9C) == 1 && FIELD_U32(v5, 240) == a2 )
      break;
    if ( v2 != v4 )
    {
      v2 = sub_601693C0(885, v2 + 4);
      if ( v2 != v4 )
        continue;
    }
    return;
  }
  sub_6018642C(a1, 93, *(_DWORD *)(*(_DWORD *)v2 + 8), 0);
}
