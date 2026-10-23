/* sub_60094B08
 * address: 0x60094B08   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60094B08(_DWORD *a1)
{
  int result; // r0
  int v3; // r5
  char v4; // r12
  unsigned int v5; // r0
  _DWORD *v6; // r1

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 908))(a1);
  if ( result == 1 )
  {
    v3 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, *(_DWORD *)(ActorMgr__instance + 27172));
    if ( ((unsigned int)&dword_60C81738 & ~(1611221856 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
    {
      dword_60C81734 = (int)&off_60BC1FA8;
      _cxa_guard_release(&dword_60C81738);
    }
    if ( v3
      && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C81734) == 1
      && (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 716))(v3) == 1 )
    {
      a1[3823] = 0;
      return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C85EB4);
    }
    else
    {
      v5 = sub_600085D0(ActorMgr__instance, 728);
      v6 = a1 + 3823;
      if ( v5 >= 0x1E || *v6 )
      {
        *v6 = 0;
        return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C85EB4);
      }
      else
      {
        *v6 = 2;
        return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C822A0);
      }
    }
  }
  return result;
}
