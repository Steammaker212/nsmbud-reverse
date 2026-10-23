/* torpedobase_fire_ref
 * address: 0x603C0720   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall torpedobase_fire_ref(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0
  const char *v5; // r1
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6352));
  if ( ((unsigned int)&dword_60C7B364 & ~(1614546784 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) == 1 )
  {
    v4 = FIELD_U32(a1, 6304);
    if ( FIELD_U32(v2, 80) == 1 )
    {
      v6[0] = &sead__SafeStringBase__vtable;
      v5 = "torpedobase_fire_l";
    }
    else
    {
      v6[0] = &sead__SafeStringBase__vtable;
      v5 = "torpedobase_fire_r";
    }
    v6[1] = v5;
    sub_6040F4B8(v4, v6, 0);
  }
}
