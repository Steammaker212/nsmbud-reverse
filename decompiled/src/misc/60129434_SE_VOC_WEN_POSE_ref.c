/* SE_VOC_WEN_POSE_ref
 * address: 0x60129434   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_WEN_POSE_ref(CollisionActor *a1)
{
  char *v2; // r5
  _DWORD *v3; // r1
  unsigned int v4; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r0
  float y; // s0
  int v8; // r1
  unsigned int v9; // r0
  int result; // r0
  int v11; // r0
  Vec3 v12; // [sp+4h] [bp-1Ch] BYREF

  v2 = &a1[1].collisionMgr[384];
  j_ModelWrapper_updateAnims(*(_DWORD *)&a1[1].collisionMgr[384]);
  Animation_update(**(_DWORD **)(*(_DWORD *)v2 + 20));
  (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 1364))(a1);
  (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 1320))(a1);
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  v3 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
    sub_608134CC(&a1[1]._.aCollider.field_50, "SE_VOC_WEN_POSE", SLOWORD(a1[1]._.effectOffset.y), 0);
  v5 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += v6;
  if ( sub_60418548(*v5 + 4) )
  {
    y = FIELD_F32(a1, 0x70);
    v12.x = FIELD_F32(a1, 0x6C);
    v12.y = y + -2.0;
    v12.z = 4500.0;
    EffectData_create(788, &v12, 0, 0);
    (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 1288))(a1);
  }
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
    v8 += 4 * v9;
  result = *(unsigned __int8 *)(*(_DWORD *)v8 + 28);
  if ( (result & 0x20) != 0 )
  {
    v11 = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( v11 )
      FIELD_U8(v11, 6136) = 1;
    return (*(int (__fastcall **)(CollisionActor *, void *))(FIELD_U32(a1, 0x0) + 192))(a1, &unk_60C87020);
  }
  return result;
}
