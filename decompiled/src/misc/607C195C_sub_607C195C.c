/* sub_607C195C
 * address: 0x607C195C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607C195C(_DWORD *a1, int a2)
{
  int *result; // r0
  int v5; // r6
  char v6; // r12
  int v7; // r7
  char v8; // r0

  result = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 1064))(a1);
  if ( result == (int *)1 )
  {
    v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2852]);
    if ( ((unsigned int)&dword_60C7B364 & ~(1618745780 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v7 = 0;
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &StageActor_RTTI) == 1 )
    {
      FIELD_F32(v5, 636) = sub_6075F8F8((int)a1);
      v8 = 3;
      v7 = v5;
      if ( a2 )
        v8 = 7;
      FIELD_U8(v5, 538) |= v8;
      FIELD_U32(v5, 556) = a1[20];
      FIELD_U32(v5, 560) = *((char *)a1 + 84);
    }
    return Player_ReleaseCarryableEnemy(a1, v7);
  }
  return result;
}
