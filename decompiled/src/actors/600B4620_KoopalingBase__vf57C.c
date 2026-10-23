/* KoopalingBase__vf57C
 * address: 0x600B4620   size: 560   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6009F9C0 : Iggy
int __fastcall KoopalingBase__vf57C(CollisionActor *a1)
{
  char *v2; // r6
  _DWORD *v3; // r0
  char *v4; // r7
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r5
  int ResArchiveById; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r1
  float v17; // s16
  float v18; // r5
  int v19; // r7
  float v20; // s0
  unsigned int direction; // r0
  float x; // s4
  unsigned int v23; // r2
  float v24; // s8
  float v25; // s6
  float v26; // s0
  float v27; // s4
  float v28; // s0

  v2 = &a1[1].collisionMgr[396];
  if ( **(_BYTE **)(*(_DWORD *)&a1[1].collisionMgr[396] + 28) )
  {
    v4 = &a1[1].collisionMgr[384];
    v3 = *(_DWORD **)&a1[1].collisionMgr[384];
    v5 = (int *)v3[3];
    v6 = v3[2];
    v7 = v3[17];
    if ( v6 > v7 )
      v5 += v7;
    v8 = *v5;
    ResArchiveById = Profile__getResArchiveById(FIELD_U32(a1, 0xC), 0);
    SkeletalAnim_play(v8, ResArchiveById, *(_DWORD *)v2 + 24);
    v10 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v11 )
      v10 += 4 * v11;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 0);
    v12 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v13 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v13 )
      v12 += 4 * v13;
    *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
  }
  if ( (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 716))(a1) == 1 )
  {
    v14 = *(_DWORD *)v2 + 48;
  }
  else
  {
    v15 = (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 720))(a1);
    v16 = *(_DWORD *)v2;
    if ( v15 == 1 )
      v14 = v16 + 48;
    else
      v14 = v16 + 64;
  }
  v17 = *(float *)v14;
  v18 = FIELD_F32(v14, 4);
  v19 = byte_60AFE3F4[FIELD_U32(a1, 0x50)];
  v20 = (*(float (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 1148))(a1);
  direction = FIELD_U32(a1, 0x50);
  x = FIELD_F32(a1, 0x6C);
  v23 = direction;
  if ( direction >= 2 )
    v23 = 0;
  v24 = x + (float)((float)(v20 + 4.0) * (float)byte_60AFE3F4[direction]);
  v25 = FIELD_F32(dword_60CC6484, 116) + *(float *)&a1[1].collisionMgr[4 * v23 + 776];
  if ( direction )
  {
    if ( v24 > v25 )
    {
      v26 = 1.0;
      goto LABEL_24;
    }
  }
  else if ( v24 < v25 )
  {
    v26 = 1.0;
    goto LABEL_24;
  }
  v27 = fabsf(v25 - x);
  if ( v27 >= 16.0 )
    v26 = v27 / v20;
  else
    v26 = -1.0;
LABEL_24:
  FIELD_F32(a1, 0x78) = v17 * (float)((float)v19 * v26);
  FIELD_F32(a1, 0x7C) = v18;
  CollisionActor__handleGravity(a1);
  v28 = CollisionActor__handleSpeed(a1);
  (*(void (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0) + 1232))(a1, v28);
  return (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 1284))(a1);
}
