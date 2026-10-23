/* SE_BOSS_ROY_LIFT_APPEAR_ref
 * address: 0x6010C31C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_ROY_LIFT_APPEAR_ref(int a1)
{
  char v1; // r12
  Actor **v2; // r9
  Actor **i; // r8
  Actor *v4; // r4
  int v5; // r0
  bool v6; // zf

  v2 = *(Actor ***)(ActorMgr__instance + 27172);
  for ( i = *(Actor ***)(ActorMgr__instance + 27180); i != v2; ++v2 )
  {
    v4 = *v2;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611711468 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v4
      && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v4, 0x0))(v4, &StageActor_RTTI) == 1
      && Actor__getProfileId(v4) == 708 )
    {
      if ( ((unsigned int)dword_60C866F0 & ~(1611711572 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C866F0) )
      {
        dword_60C866EC = (int)&off_60BC00BC;
        _cxa_guard_release(dword_60C866F0);
      }
      v5 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v4, 0x0))(v4, &dword_60C866EC);
      v6 = v5 == 1;
      if ( v5 == 1 )
        v6 = FIELD_U8(v4, 0x13) == 0;
      if ( v6 )
        sub_60110240((unsigned int)v4);
    }
  }
  return sub_608134CC(a1 + 6332, "SE_BOSS_ROY_LIFT_APPEAR", FIELD_S16(a1, 6640), 0);
}
