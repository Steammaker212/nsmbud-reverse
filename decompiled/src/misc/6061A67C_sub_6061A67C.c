/* sub_6061A67C
 * address: 0x6061A67C   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061A67C(int a1)
{
  float v2; // s0
  unsigned int v3; // r1
  int v4; // r5
  char v5; // r12
  _BYTE *v6; // r7
  int v7; // r8
  int v8; // r0
  int v9; // r5
  float v10; // r0
  Vec2 v12; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  v3 = FIELD_U32(a1, 6864);
  if ( v3 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( !v4 )
    {
LABEL_9:
      FIELD_U32(a1, 6864) = 0;
      goto LABEL_10;
    }
    if ( ((unsigned int)&dword_60C958D4 & ~(1617012452 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C958D4) )
    {
      dword_60C958D0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C958D4);
    }
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C958D0) == 1 && FIELD_U32(v4, 6784) )
    {
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6796) + 12) + 24) = 1065353216;
      goto LABEL_9;
    }
  }
LABEL_10:
  v6 = (_BYTE *)(a1 + 6844);
  if ( sub_60003460(a1) == 1 )
  {
    if ( !*v6 )
    {
      v7 = **(_DWORD **)(FIELD_U32(a1, 6796) + 12);
      LODWORD(position.x) = &sead__SafeStringBase__vtable;
      LODWORD(position.y) = "block_ice_hard";
      v8 = LoadResource(ResourceMgrRelated_instance, &position);
      LODWORD(v12.x) = &sead__SafeStringBase__vtable;
      LODWORD(v12.y) = "chakuchi";
      SkeletalAnim_play(v7, v8, (const char **)&v12);
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6796) + 12) + 24) = 1065353216;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6796) + 12) + 4), 0);
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6796) + 12) + 4));
      v9 = Global_BasicSoundActor2;
      v10 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      position.y = v10;
      mapPositionToScreen(&v12, &position);
      BasicSoundActor2_play(v9, "SE_OBJ_ICE_BLOCK_LAND", &v12.x, 0);
    }
    *v6 = 1;
    FIELD_U32(a1, 124) = 0;
    return 0;
  }
  else
  {
    *v6 = 0;
    return 0;
  }
}
