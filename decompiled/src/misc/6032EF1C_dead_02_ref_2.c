/* dead_02_ref_2
 * address: 0x6032EF1C   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall dead_02_ref_2(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  float v9; // r1
  float v10; // r2
  int *v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  _DWORD *v16; // r5
  int v17; // r0
  int v18; // r0
  int v19; // r0
  float v20; // r1
  int v21; // r5
  Vec3 v23; // [sp+0h] [bp-40h] BYREF
  Vec2 out; // [sp+Ch] [bp-34h] BYREF
  Vec3 position; // [sp+14h] [bp-2Ch] BYREF

  v3 = a1 + 6300;
  v2 = *(_DWORD **)(a1 + 6300);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(v23.x) = &sead__SafeStringBase__vtable;
  LODWORD(v23.y) = "dead_02";
  sub_60421938(v2, ResArchiveById, (int)&v23);
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
  v9 = FIELD_F32(a1, 112);
  v10 = FIELD_F32(a1, 116);
  v23.x = FIELD_F32(a1, 108);
  v23.y = v9;
  v23.z = v10;
  EffectData_create(694, &v23, 0, 0);
  FIELD_U8(a1, 6680) = 1;
  v11 = *(int **)(*(_DWORD *)v3 + 12);
  v12 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v12 )
    v11 += v12;
  v13 = *v11;
  FIELD_U32(v13, 20) = 0;
  FIELD_U32(v13, 28) |= 2u;
  v14 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v15 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v15 )
    v14 += 4 * v15;
  *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
  v16 = **(_DWORD ***)(*(_DWORD *)v3 + 28);
  v17 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "dead_02";
  ShuAnim_play(v16, v17, (int)&position);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 28) + 4), 0);
  v18 = **(_DWORD **)(*(_DWORD *)v3 + 28);
  FIELD_U32(v18, 20) = 0;
  FIELD_U32(v18, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 28) + 24) = 1065353216;
  FIELD_U8(a1, 6316) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v19 = FIELD_U32(a1, 160) >> 31;
  FIELD_U32(a1, 80) = v19;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v19];
  v20 = FIELD_F32(a1, 112);
  v21 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v20;
  mapPositionToScreen(&out, &position);
  return BasicSoundActor1_playSound(v21, "SE_EMY_HUHU_EXTINCT", (int)&out, 0);
}
