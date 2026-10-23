/* sub_6024DBD4
 * address: 0x6024DBD4   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024DBD4(int a1)
{
  int v2; // r8
  _DWORD *v3; // r5
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  float v9; // r1
  int v10; // r5
  _DWORD *v11; // r0
  int *v12; // r1
  int *v13; // r2
  unsigned int v14; // r3
  unsigned int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r2
  unsigned int v20; // r0
  int *v21; // r1
  unsigned int v22; // r0
  int v23; // r0
  int v24; // r1
  unsigned int v25; // r0
  int v26; // r1
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  v2 = a1 + 6308;
  if ( FIELD_U32(a1, 6336) )
  {
    v3 = *(_DWORD **)v2;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    LODWORD(position.x) = &sead__SafeStringBase__vtable;
    LODWORD(position.y) = "eye_fall";
    sub_60421938(v3, ResArchiveById, (int)&position);
    v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
    v7 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  }
  v9 = FIELD_F32(a1, 112);
  v10 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v9;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v10, "SE_EMY_BASABASA_SING", (int)&out, 0);
  v12 = (int *)(a1 + 6300);
  v11 = *(_DWORD **)(a1 + 6300);
  v13 = (int *)v11[3];
  v14 = v11[2];
  v15 = v11[17];
  if ( v14 > v15 )
    v13 += v15;
  v16 = *v13;
  FIELD_U32(v16, 20) = 0;
  FIELD_U32(v16, 28) |= 2u;
  v17 = *v12;
  v18 = *(_DWORD *)(*v12 + 12);
  v19 = FIELD_U32(v17, 8);
  v20 = FIELD_U32(v17, 68);
  if ( v19 > v20 )
    v18 += 4 * v20;
  *(_DWORD *)(*(_DWORD *)v18 + 24) = 0;
  v21 = *(int **)(*(_DWORD *)v2 + 12);
  v22 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v22 )
    v21 += v22;
  v23 = *v21;
  FIELD_U32(v23, 20) = 0;
  FIELD_U32(v23, 28) |= 2u;
  v24 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v25 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v25 )
    v24 += 4 * v25;
  *(_DWORD *)(*(_DWORD *)v24 + 24) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 160) = 0x80000000;
  FIELD_F32(a1, 96) = -4.0 * 0.5;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U8(a1, 6456) = 0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFD7A4, 0, 0);
  v26 = FIELD_U32(a1, 3204) | 0x204;
  FIELD_U32(a1, 3200) |= 0x41800000u;
  FIELD_U32(a1, 3204) = v26;
  position.x = -4.0;
  position.y = 4.0;
  position.z = -8.0;
  CollisionMgr_init((CollisionMgr *)(a1 + 6464), (StateActor *)a1, (CollisionMgr_Sensor *)&position, 0, 0);
  FIELD_U32(a1, 11936) = 0;
  FIELD_U32(a1, 11940) = 1090519040;
  FIELD_U32(a1, 11944) = 1090519040;
  FIELD_U32(a1, 11948) = 1092616192;
  return 11948;
}
