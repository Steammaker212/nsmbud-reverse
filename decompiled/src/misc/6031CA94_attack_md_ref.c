/* attack_md_ref
 * address: 0x6031CA94   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall attack_md_ref(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  unsigned int v9; // r0
  unsigned int v10; // r1
  int v11; // r4
  char v12; // r12
  _DWORD v13[6]; // [sp+0h] [bp-18h] BYREF

  FIELD_U16(a1, 6276) = 16;
  v3 = (_DWORD *)(a1 + 7124);
  v2 = *(_DWORD **)(a1 + 7124);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "attack_md";
  sub_60421938(v2, ResArchiveById, (int)v13);
  v5 = *(_DWORD *)(*v3 + 12);
  v6 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*v3 + 12);
  v8 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v8 )
    v7 += 4 * v8;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v7 + 4));
  v9 = v3[1366] - 1;
  if ( v9 <= 3 )
  {
    v10 = *(_DWORD *)(a1 + 4 * v9 + 6336);
    if ( v10 )
    {
      v11 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v10);
      if ( ((unsigned int)&dword_60C7B364 & ~(1613876124 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v11 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v11)(v11, &StageActor_RTTI) == 1 )
          FIELD_U8(v11, 6140) = 1;
      }
    }
  }
}
