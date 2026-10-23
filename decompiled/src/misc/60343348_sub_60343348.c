/* sub_60343348
 * address: 0x60343348   size: 1084   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60343348(int a1)
{
  ActiveColliderMgr *v2; // r5
  ActiveColliderMgr *v3; // r8
  signed int v4; // r0
  _BOOL4 v5; // r0
  float v6; // s0
  _BOOL4 v7; // r5
  int v8; // r0
  int result; // r0
  int v10; // r1
  float v11; // s0
  int v12; // r0
  ActiveColliderMgr *v13; // r5
  int v14; // r1
  int v15; // r0
  ActiveColliderMgr *v16; // r5
  int v17; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v18[4]; // [sp+8h] [bp-28h] BYREF
  int speed[9]; // [sp+Ch] [bp-24h] BYREF

  if ( FIELD_U32(a1, 7104) )
  {
    if ( !FIELD_U8(a1, 7108) && !FIELD_U32(a1, 7064) )
    {
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6312));
      v2 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
      }
      FIELD_U32(a1, 7084) = 1094189056;
      FIELD_U32(a1, 7064) = 1;
    }
    goto LABEL_35;
  }
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 12));
  if ( !FIELD_U8(a1, 7108) && !FIELD_U32(a1, 7064) )
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6312));
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
    }
    FIELD_U32(a1, 7084) = 1094189056;
    FIELD_U32(a1, 7064) = 1;
  }
  v4 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v4;
  speed[0] = 0x4000000;
  v5 = moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v4], speed);
  v6 = FIELD_F32(a1, 112);
  v7 = v5;
  v8 = FIELD_U32(a1, 116);
  speed[0] = FIELD_U32(a1, 108);
  *(float *)&speed[1] = v6 + 18.0;
  speed[2] = v8;
  ((void (__fastcall *)(int *, _BYTE *, int *, _DWORD))checkLiquidCollisions)(
    &v17,
    v18,
    speed,
    FIELD_U8(a1, 86));
  if ( v17 == 1 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C947EC);
  v10 = FIELD_U32(a1, 7092);
  if ( v10 == 1 )
  {
    v12 = FIELD_U32(a1, 7088);
    FIELD_U32(a1, 7088) = v12 - 1;
    if ( v12 <= 1 && v7 )
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C9478C);
    goto LABEL_35;
  }
  if ( !v10 )
  {
    v11 = FIELD_F32(a1, 7068) + FIELD_F32(a1, 7080);
    FIELD_F32(a1, 7080) = v11;
    if ( v11 >= 5.0 )
    {
      FIELD_U32(a1, 7080) = 1084227584;
      FIELD_U32(a1, 7088) = 20;
      FIELD_U32(a1, 7092) = 1;
    }
    else if ( v11 < 3.0 )
    {
      goto LABEL_35;
    }
    if ( FIELD_U8(a1, 7108) )
    {
      v13 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v13, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v13, (ActiveCollider *)(a1 + 188));
      }
      v14 = 1091567616;
      v15 = 7084;
    }
    else
    {
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6312));
      v16 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v16, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v16, (ActiveCollider *)(a1 + 188));
      }
      FIELD_U32(a1, 7084) = 1094189056;
      v15 = 7064;
      v14 = 1;
    }
    *(_DWORD *)(a1 + v15) = v14;
  }
LABEL_35:
  FIELD_F32(a1, 6976) = FIELD_F32(a1, 7080) + 22.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 7128), (CollisionMgr_Sensor *)(a1 + 6968), 2);
  nullsub_7();
  result = FIELD_U32(a1, 9352) & 0x10400;
  if ( result == 1024 )
  {
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C947EC);
    FIELD_U32(a1, 7068) = -1086324736;
    FIELD_U32(a1, 7076) = -1073741824;
    FIELD_U8(a1, 7111) = 1;
    return sub_60345A00(a1, 6);
  }
  return result;
}
