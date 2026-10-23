/* sub_6031C8CC
 * address: 0x6031C8CC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_6031C8CC(int a1, unsigned int a2))(_DWORD, int *)
{
  int v2; // r4
  unsigned int v3; // r1
  int (__fastcall ***v4)(_DWORD, int *); // r5
  char v5; // r12

  v2 = 0;
  if ( a2 <= 3 )
  {
    v3 = *(_DWORD *)(a1 + 4 * a2 + 6336);
    if ( v3 )
    {
      v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
      if ( ((unsigned int)&dword_60C7B364 & ~(1613875484 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v4 )
      {
        v2 = (**v4)(v4, &StageActor_RTTI);
        if ( v2 )
          return v4;
      }
    }
  }
  return (int (__fastcall ***)(_DWORD, int *))v2;
}
