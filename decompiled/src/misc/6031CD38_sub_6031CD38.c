/* sub_6031CD38
 * address: 0x6031CD38   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6031CD38(int a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r1
  int v3; // r4
  char v4; // r12

  FIELD_U16(a1, 6276) = 16;
  v1 = FIELD_U32(a1, 12592) - 1;
  if ( v1 <= 3 )
  {
    v2 = *(_DWORD *)(a1 + 4 * v1 + 6336);
    if ( v2 )
    {
      v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
      if ( ((unsigned int)&dword_60C7B364 & ~(1613876636 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v3 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1 )
          FIELD_U8(v3, 6142) = 1;
      }
    }
  }
}
