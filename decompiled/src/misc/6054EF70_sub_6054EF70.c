/* sub_6054EF70
 * address: 0x6054EF70   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054EF70(int a1)
{
  int v2; // r5
  char v3; // r12
  int result; // r0
  float v5; // s2
  float v6; // s0

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 3848));
  if ( v2 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1616179120 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    result = (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI);
    if ( result == 1 )
    {
      result = FIELD_U8(a1, 3823);
      if ( FIELD_U8(a1, 3823) )
      {
        v5 = FIELD_F32(v2, 112);
        result = FIELD_U32(v2, 116);
        v6 = (float)FIELD_S32(dword_60C9A1E8, 231428);
        FIELD_U32(a1, 3720) = FIELD_U32(v2, 108);
        FIELD_F32(a1, 3724) = v5 + v6;
        FIELD_U32(a1, 3728) = result;
      }
    }
  }
  else
  {
    StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CACD8C);
    FIELD_U32(a1, 3800) = 0;
    return 0;
  }
  return result;
}
