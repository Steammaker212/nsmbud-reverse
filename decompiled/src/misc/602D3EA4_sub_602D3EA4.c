/* sub_602D3EA4
 * address: 0x602D3EA4   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602D3EA4(int a1)
{
  int **v2; // r6
  float v3; // s0
  float v4; // s0
  int v5; // r5
  signed int result; // r0
  int v7; // r0
  int (__fastcall *v8)(int, Vec3 *); // r2
  int v9; // r0
  int *v10; // r5
  int ResArchiveById; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  float v16; // r1
  float v17; // r1
  int v18; // r5
  Vec3 v19; // [sp+4h] [bp-64h] BYREF
  float v20; // [sp+10h] [bp-58h]
  float v21; // [sp+20h] [bp-48h]
  Vec3 v22; // [sp+34h] [bp-34h] BYREF
  Vec2 out; // [sp+40h] [bp-28h] BYREF
  Vec3 position; // [sp+48h] [bp-20h] BYREF

  v2 = (int **)(a1 + 6856);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6856));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  v5 = 0;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    v5 = 1;
    FIELD_U32(a1, 124) = 0;
  }
  result = FIELD_U32(a1, 6860);
  if ( result == 2 )
  {
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
      return (*(signed int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C91BA0, v4);
  }
  else if ( result == 1 )
  {
    if ( FIELD_F32(a1, 124) < 0.0 )
    {
      EffectData_setEffectId((EffectData *)(a1 + 6884), 645);
      v7 = **v2;
      v8 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v7 + 84);
      LODWORD(v19.x) = &sead__SafeStringBase__vtable;
      LODWORD(v19.y) = "skl_root";
      v9 = v8(v7, &v19);
      (*(void (__fastcall **)(int, int, Vec3 *))(*(_DWORD *)**v2 + 108))(**v2, v9, &v19);
      v22.x = v20;
      v22.y = v21;
      v22.z = 4500.0;
      result = sub_60237208(a1 + 6868, &v22, 0, 0);
    }
    if ( v5 )
    {
      v10 = *v2;
      ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      LODWORD(v19.x) = &sead__SafeStringBase__vtable;
      LODWORD(v19.y) = "jump_attack_stop";
      sub_60421938(v10, ResArchiveById, (int)&v19);
      v12 = (*v2)[3];
      v13 = (*v2)[17];
      if ( (*v2)[2] > v13 )
        v12 += 4 * v13;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 1);
      v14 = (*v2)[3];
      v15 = (*v2)[17];
      if ( (*v2)[2] > v15 )
        v14 += 4 * v15;
      *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
      v16 = FIELD_F32(a1, 112);
      v19.x = FIELD_F32(a1, 108);
      v19.y = v16;
      v19.z = 4500.0;
      EffectData_create(644, &v19, 0, 0);
      LODWORD(v22.x) = 15;
      LODWORD(v22.y) = unk_60C26398;
      LOBYTE(v22.z) = 0;
      v17 = FIELD_F32(a1, 112);
      v18 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v17;
      mapPositionToScreen(&out, &position);
      BasicSoundActor1_playSound(v18, "SE_EMY_MEGA_BROS_EARTHQUAKE", (int)&out, (int)&v22);
      AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
      SumoBro_StunPlayers(a1);
      FIELD_U16(a1, 6276) = 60;
      FIELD_U32(a1, 6860) = 2;
      return 2;
    }
  }
  return result;
}
