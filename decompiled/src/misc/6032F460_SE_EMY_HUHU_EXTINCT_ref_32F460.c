/* SE_EMY_HUHU_EXTINCT_ref_32F460
 * address: 0x6032F460   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_HUHU_EXTINCT_ref_32F460(int a1)
{
  int v2; // r7
  float v3; // s0
  int result; // r0
  float v5; // r1
  int v6; // r5
  _DWORD *v7; // r5
  int ResArchiveById; // r0
  int v9; // r1
  unsigned int v10; // r0
  int *v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  _DWORD *v14; // r5
  int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  Vec2 v18; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  if ( Actor__getProfileId((Actor *)a1) == 787 )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
    CollisionMgr_process((_BYTE *)(a1 + 648), v3);
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      FIELD_U32(a1, 124) = 0;
  }
  result = FIELD_U32(a1, 7100) - 1;
  FIELD_U32(a1, 7100) = result;
  if ( !result )
  {
    v5 = FIELD_F32(a1, 112);
    v6 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&v18, &position);
    BasicSoundActor1_playSound(v6, "SE_EMY_HUHU_EXTINCT", (int)&v18, 0);
    v7 = *(_DWORD **)v2;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    LODWORD(position.x) = &sead__SafeStringBase__vtable;
    LODWORD(position.y) = "touch";
    sub_60421938(v7, ResArchiveById, (int)&position);
    v9 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v10 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v10 )
      v9 += 4 * v10;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 0);
    v11 = *(int **)(*(_DWORD *)v2 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v12 )
      v11 += v12;
    v13 = *v11;
    FIELD_U32(v13, 24) = -1082130432;
    sub_6041838C((ModelAnimation *)(v13 + 4));
    v14 = **(_DWORD ***)(*(_DWORD *)v2 + 28);
    v15 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    LODWORD(position.x) = &sead__SafeStringBase__vtable;
    LODWORD(position.y) = "touch";
    ShuAnim_play(v14, v15, (int)&position);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v2 + 28) + 4), 0);
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v2 + 28) + 24) = -1082130432;
    sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v2 + 28) + 4));
    result = FIELD_U32(a1, 7100);
  }
  if ( result < 0 )
  {
    v16 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v17 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v17 )
      v16 += 4 * v17;
    result = *(unsigned __int8 *)(*(_DWORD *)v16 + 28);
    if ( (result & 0x20) != 0 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93DC0);
  }
  return result;
}
