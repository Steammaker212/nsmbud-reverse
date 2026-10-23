/* sub_6010C1FC
 * address: 0x6010C1FC   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6010C1FC(int a1, unsigned int a2)
{
  bool *v2; // r5
  int v3; // r4
  char v4; // r12
  int v5; // r1
  int v6; // [sp+0h] [bp-18h] BYREF
  int speed; // [sp+4h] [bp-14h] BYREF

  if ( a2 >= 3 )
    a2 = 0;
  v2 = (bool *)(a1 + a2 + 8136);
  if ( !*v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)(a1 + 4 * a2 + 8120));
    if ( ((unsigned int)&dword_60C7B364 & ~(1611711072 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1 )
    {
      v5 = -1073741824;
      speed = 11930464;
      if ( !FIELD_U32(v3, 80) )
        v5 = 0x40000000;
      v6 = v5;
      *v2 = moveValueTo((int *)(v3 + 160), &v6, &speed);
    }
  }
}
