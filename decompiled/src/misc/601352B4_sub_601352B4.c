/* sub_601352B4
 * address: 0x601352B4   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601352B4(_DWORD *a1)
{
  _DWORD *v2; // r6
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  int v5; // r1

  v2 = a1 + 1532;
  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                              ActorMgr__instance + 27168,
                                              *(_DWORD *)(a1[1532] + 8));
  if ( ((unsigned int)&dword_60C7B364 & ~(1611879160 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &StageActor_RTTI);
    if ( v5 )
      v5 = (int)v3;
  }
  else
  {
    v5 = 0;
  }
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v2 + 8))(*v2, v5);
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 196))(a1);
}
