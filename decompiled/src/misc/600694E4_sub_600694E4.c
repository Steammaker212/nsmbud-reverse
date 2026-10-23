/* sub_600694E4
 * address: 0x600694E4   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600694E4(int a1)
{
  float *v1; // r4
  _DWORD *v2; // t1
  int v3; // r1
  unsigned int v4; // r0
  int v5; // r5
  int Resource; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  float v11; // r0
  _DWORD v13[2]; // [sp+4h] [bp-24h] BYREF
  Vec3 v14[2]; // [sp+Ch] [bp-1Ch] BYREF

  v2 = *(_DWORD **)(a1 + 7112);
  v1 = (float *)(a1 + 7112);
  v3 = v2[3];
  v4 = v2[17];
  if ( v2[2] > v4 )
    v3 += 4 * v4;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 24);
  v13[0] = &sead__SafeStringBase__vtable;
  LODWORD(v14[0].x) = &sead__SafeStringBase__vtable;
  v13[1] = "lkp_jump_ed";
  LODWORD(v14[0].y) = "koopa";
  Resource = LoadResource(ResourceMgrRelated_instance, v14);
  sub_60421938(*(_DWORD **)v1, Resource, (int)v13);
  v7 = *(_DWORD *)(*(_DWORD *)v1 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v8 )
    v7 += 4 * v8;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 0);
  v9 = *(_DWORD *)(*(_DWORD *)v1 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v10 )
    v9 += 4 * v10;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = v5;
  *(v1 - 1748) = 0.0;
  *(v1 - 1747) = 0.0;
  *(v1 - 1746) = 0.0;
  sub_60813430(v1 - 195, "SE_BOSS_KOOPA_L_LAND", 0);
  v11 = *(v1 - 1750);
  v14[0].x = *(v1 - 1751);
  v14[0].y = v11;
  v14[0].z = 4500.0;
  EffectData_create(1097, v14, 0, (int)(v1 - 1742));
  return AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 21, 2, 0, 0);
}
