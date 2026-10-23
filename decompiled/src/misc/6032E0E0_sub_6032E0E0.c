/* sub_6032E0E0
 * address: 0x6032E0E0   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032E0E0(int a1)
{
  int v2; // r6
  _DWORD *v3; // r1
  unsigned int v4; // r0
  int v5; // r5
  int v6; // r0
  _BYTE *v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int *v10; // r7
  _DWORD *v11; // r5
  int v12; // r1
  int v13; // r2
  float v14; // s0
  signed int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  int result; // r0
  ActorBuildInfo v19; // [sp+0h] [bp-60h] BYREF
  int speed; // [sp+2Ch] [bp-34h] BYREF
  int target; // [sp+30h] [bp-30h] BYREF
  Vec3i v22[3]; // [sp+34h] [bp-2Ch] BYREF

  FIELD_U8(a1, 6316) = 0;
  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
  {
    v5 = FIELD_U32(a1, 6364);
    memset(&v19.settings2, 0, 40);
    v6 = 48;
    if ( !v5 )
      v6 = 16;
    v19.settings1 = v6;
    v19.parentId = 0;
    v19.profile = Profile__get(0x314u);
    v19.position = *(Vec3 *)(a1 + 108);
    v19.field_1C = FIELD_U32(a1, 160);
    v19.field_20 = 0;
    v7 = ActorMgr__create((void *)ActorMgr__instance, &v19, 0);
    *((_DWORD *)v7 + 4136) = FIELD_U32(a1, 8);
    FIELD_U32(a1, 7108) = *((_DWORD *)v7 + 2);
  }
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
    v8 += 4 * v9;
  if ( *(float *)(*(_DWORD *)v8 + 20) <= 74.0 )
  {
    v11 = (_DWORD *)(a1 + 80);
    v10 = (int *)(a1 + 6320);
  }
  else
  {
    EffectData_setEffectId((EffectData *)(a1 + 6488), 692);
    v19.parentId = FIELD_U32(a1, 6328);
    v19.settings2 = FIELD_U32(a1, 6324);
    v10 = (int *)(a1 + 6320);
    v19.settings1 = FIELD_U32(a1, 6320);
    v22[0].x = 0;
    v22[0].y = 0x40000000;
    v22[0].z = 0;
    v11 = (_DWORD *)(a1 + 80);
    if ( FIELD_U32(a1, 80) == 1 )
      v22[0].y = -1073741824;
    sub_60237208(a1 + 6472, (Vec3 *)&v19, v22, 0);
  }
  v12 = v10[1];
  v13 = v10[2];
  v19.settings1 = *v10;
  v19.settings2 = v12;
  v19.parentId = v13;
  v22[0].x = 0;
  v22[0].y = 0x40000000;
  v22[0].z = 0;
  if ( *v11 == 1 )
    v22[0].y = -1073741824;
  sub_60237208(a1 + 6368, (Vec3 *)&v19, v22, 0);
  CollisionMgr_process((_BYTE *)(a1 + 648), v14);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v15 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v15;
  target = dword_60AF20A0[v15];
  speed = 0x4000000;
  moveValueTo((int *)(a1 + 160), &target, &speed);
  v16 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v17 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v17 )
    v16 += 4 * v17;
  result = *(unsigned __int8 *)(*(_DWORD *)v16 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93E00);
  return result;
}
