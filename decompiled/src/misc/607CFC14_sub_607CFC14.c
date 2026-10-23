/* sub_607CFC14
 * address: 0x607CFC14   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CFC14(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  char v4; // r12
  int v5; // r0
  int v6; // r0

  v2 = (_DWORD *)(a1 + 11356);
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618803796 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1 )
    {
      v5 = FIELD_U32(v3, 620);
      if ( v5 )
      {
        FIELD_U32(v5, 8) = 0;
        FIELD_U32(v5, 12) = 0;
      }
    }
  }
  v6 = sub_607CBC00(a1);
  if ( v6 )
    FIELD_U32(v6, 324) = 0;
  *v2 = 0;
  return 0;
}
