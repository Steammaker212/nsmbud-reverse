/* sub_60460C0C
 * address: 0x60460C0C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60460C0C(_DWORD *a1)
{
  _DWORD *v1; // r4
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  char v4; // r12

  v1 = (_DWORD *)a1[155];
  if ( v1 )
  {
    if ( v1[3] == 2 )
    {
      (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C9D2D8);
    }
    else
    {
      v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1567]);
      if ( ((unsigned int)&dword_60C7B408 & ~(1615203444 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      if ( v2 && (**v2)(v2, &dword_60C7B404) == 1 )
      {
        if ( ((unsigned int)&dword_60C7B364 & ~(1615203560 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( !(**v2)(v2, &StageActor_RTTI) )
          v2 = 0;
        (*(void (__fastcall **)(_DWORD *, int (__fastcall ***)(_DWORD, int *)))(*v1 + 40))(v1, v2);
      }
    }
  }
}
