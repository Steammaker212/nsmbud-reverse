/* sub_600AE874
 * address: 0x600AE874   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600AE874(int a1)
{
  unsigned int v1; // r1
  int v2; // r4
  char v3; // r12

  v1 = FIELD_U32(a1, 7088);
  if ( v1 )
  {
    v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v1);
    if ( ((unsigned int)&dword_60C7B364 & ~(1611327668 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v2 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) == 1 )
        FIELD_U8(v2, 19) = 1;
    }
  }
}
