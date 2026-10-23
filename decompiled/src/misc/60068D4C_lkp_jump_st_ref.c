/* lkp_jump_st_ref
 * address: 0x60068D4C   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_jump_st_ref(int a1)
{
  void (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int Resource; // r0
  int v5; // r4
  _DWORD *v6; // t1
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  _DWORD v12[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v13[6]; // [sp+8h] [bp-18h] BYREF

  v2 = *(void (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                 ActorMgr__instance,
                                                 373,
                                                 *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81104 & ~(1611042192 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( v2 )
    (**v2)(v2, &dword_60C81100);
  v12[0] = &sead__SafeStringBase__vtable;
  v13[0] = &sead__SafeStringBase__vtable;
  v12[1] = "lkp_jump_st";
  v13[1] = "koopa";
  Resource = LoadResource(ResourceMgrRelated_instance, v13);
  v6 = *(_DWORD **)(a1 + 7112);
  v5 = a1 + 7112;
  sub_60421938(v6, Resource, (int)v12);
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v8 )
    v7 += 4 * v8;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 0);
  v9 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v10 )
    v9 += 4 * v10;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 1065353216;
  *(_DWORD *)(v5 - 6992) = 0;
  *(_DWORD *)(v5 - 6988) = 0;
  *(_DWORD *)(v5 - 6984) = 0;
  return -6984;
}
