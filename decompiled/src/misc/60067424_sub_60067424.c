/* sub_60067424
 * address: 0x60067424   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60067424(int a1)
{
  int Resource; // r0
  int v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  float v9; // r0
  int v10; // r4
  char v11; // r12
  int v12; // r4
  char v13; // r12
  _DWORD v14[2]; // [sp+4h] [bp-24h] BYREF
  Vec3 v15[2]; // [sp+Ch] [bp-1Ch] BYREF

  v14[0] = &sead__SafeStringBase__vtable;
  LODWORD(v15[0].x) = &sead__SafeStringBase__vtable;
  v14[1] = "lkp_jump_ed";
  LODWORD(v15[0].y) = "koopa";
  Resource = LoadResource(ResourceMgrRelated_instance, v15);
  v4 = *(_DWORD **)(a1 + 7112);
  v3 = a1 + 7112;
  sub_60421938(v4, Resource, (int)v14);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 21, 3, 0, 0);
  sub_60813430(v3 - 780, "SE_BOSS_KOOPA_L_LAND", 0);
  v9 = *(float *)(v3 - 7000);
  v15[0].x = *(float *)(v3 - 7004);
  v15[0].y = v9;
  v15[0].z = 4500.0;
  EffectData_create(1097, v15, 0, v3 - 6968);
  *(_DWORD *)(v3 - 6988) = 0;
  v10 = *(_DWORD *)sub_60008598(ActorMgr__instance, 373, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81104 & ~(1611036052 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( v10 && (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C81100) == 1 )
  {
    v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 628))(v10);
    if ( ((unsigned int)&dword_60C81760 & ~(1611036188 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
    {
      dword_60C8175C = (int)&off_60BC6E94;
      _cxa_guard_release(&dword_60C81760);
    }
    if ( v12 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C8175C) == 1 )
        (*(void (__fastcall **)(int, void *))(*(_DWORD *)v12 + 192))(v12, &unk_60C81A08);
    }
  }
}
