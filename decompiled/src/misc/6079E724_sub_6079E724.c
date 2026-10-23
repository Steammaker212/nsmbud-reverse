/* sub_6079E724
 * address: 0x6079E724   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079E724(_DWORD *a1)
{
  int result; // r0
  unsigned int v3; // r1
  int v4; // r5
  char v5; // r12
  int v6; // r6

  result = 11408;
  v3 = a1[2852];
  if ( v3 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( ((unsigned int)&dword_60C7B364 & ~(1618601832 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v6 = 0;
    if ( v4 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1 )
      {
        (*(void (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)v4 + 84))(v4, a1, 20);
        v6 = v4;
        FIELD_U8(v4, 538) |= 1u;
        FIELD_U32(v4, 556) = a1[20];
      }
    }
    return (int)Player_ReleaseCarryableEnemy(a1, v6);
  }
  return result;
}
