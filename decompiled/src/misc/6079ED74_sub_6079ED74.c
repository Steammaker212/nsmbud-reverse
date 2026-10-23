/* sub_6079ED74
 * address: 0x6079ED74   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6079ED74(int *a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12

  a1[307] &= ~0x400u;
  a1[304] &= ~0x2000u;
  a1[3039] = 1065353216;
  a1[40] = sub_60773F3C((int)a1, a1[20]);
  a1[3025] = 0;
  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2852]);
  if ( ((unsigned int)&dword_60C7B410 & ~(1618603508 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
  {
    dword_60C7B40C = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60C7B410);
  }
  if ( v2 )
  {
    if ( (**v2)(v2, &dword_60C7B40C) == 1 )
    {
      sub_60794640(a1[2840]);
      sub_6079E154(a1, a1[2852], 1);
    }
  }
}
