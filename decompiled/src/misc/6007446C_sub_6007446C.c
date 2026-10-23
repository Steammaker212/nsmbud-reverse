/* sub_6007446C
 * address: 0x6007446C   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6007446C(int a1)
{
  int v2; // r5
  char v3; // r12
  unsigned int result; // r0
  int v5; // r6
  Vec2 v6; // [sp+0h] [bp-18h] BYREF

  v2 = *(_DWORD *)sub_60008598(ActorMgr__instance, 373, FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C81104 & ~(1611089072 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( v2
    && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81100) == 1
    && (result = FIELD_U32(v2, 15240), result <= 3) )
  {
    FIELD_U32(a1, 25368) = result;
  }
  else
  {
    result = StageActor__distanceToPlayer((StateActor *)a1, &v6);
    FIELD_U32(a1, 25368) = result;
    if ( result == -1 )
    {
      v5 = 0;
      if ( sub_60789F84(PlayerMgr_instance, 0) == 1
        || (v5 = 1, sub_60789F84(PlayerMgr_instance, 1))
        || (v5 = 2, sub_60789F84(PlayerMgr_instance, 2))
        || (v5 = 3, (result = sub_60789F84(PlayerMgr_instance, 3)) != 0) )
      {
        FIELD_U32(a1, 25368) = v5;
        return a1 + 25368;
      }
    }
  }
  return result;
}
