/* sub_606C5AA0
 * address: 0x606C5AA0   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C5AA0(int a1)
{
  int v1; // r6
  int v2; // r4
  char v3; // r12
  int v4; // r5
  int v5; // r0
  bool v6; // zf

  v1 = FIELD_U8(a1, 5);
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)a1);
  if ( ((unsigned int)&dword_60C7B364 & ~(1617713884 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v4 = 0;
  if ( v2 )
  {
    v5 = (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI);
    v6 = v5 == 1;
    if ( v5 == 1 )
      v6 = FIELD_U8(v2, 533) == 1;
    if ( v6 && FIELD_U8(v2, 84) <= 3u )
      v4 = sub_60760184(v2);
  }
  return v4 + v1;
}
