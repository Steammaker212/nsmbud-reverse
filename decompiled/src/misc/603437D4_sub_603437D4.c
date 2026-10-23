/* sub_603437D4
 * address: 0x603437D4   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603437D4(int a1)
{
  int result; // r0
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r5
  signed int v5; // r0
  _BOOL4 v6; // r0
  float v7; // s0
  _BOOL4 v8; // r5
  int v9; // r0
  int v10; // r1
  int v11; // r0
  bool v12; // cc
  int v13; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v14[4]; // [sp+8h] [bp-28h] BYREF
  int speed[9]; // [sp+Ch] [bp-24h] BYREF

  if ( FIELD_U32(a1, 7104) )
  {
    result = FIELD_U8(a1, 7108);
    if ( !FIELD_U8(a1, 7108) )
    {
      result = FIELD_U32(a1, 7064);
      if ( !result )
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
        return 1;
      }
    }
  }
  else
  {
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 12));
    if ( !FIELD_U8(a1, 7108) && !FIELD_U32(a1, 7064) )
    {
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6312));
      v4 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
      }
      FIELD_U32(a1, 7084) = 1094189056;
      FIELD_U32(a1, 7064) = 1;
    }
    v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    FIELD_U32(a1, 80) = v5;
    speed[0] = 0x4000000;
    v6 = moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v5], speed);
    v7 = FIELD_F32(a1, 112);
    v8 = v6;
    v9 = FIELD_U32(a1, 116);
    speed[0] = FIELD_U32(a1, 108);
    *(float *)&speed[1] = v7 + 18.0;
    speed[2] = v9;
    ((void (__fastcall *)(int *, _BYTE *, int *, _DWORD))checkLiquidCollisions)(
      &v13,
      v14,
      speed,
      FIELD_U8(a1, 86));
    if ( v13 == 1 )
    {
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C947EC);
    }
    else
    {
      result = a1 + 7092;
      v10 = FIELD_U32(a1, 7092);
      if ( v10 == 1 )
      {
        v11 = FIELD_U32(a1, 7088);
        v12 = v11 <= 1;
        result = v11 - 1;
        FIELD_U32(a1, 7088) = result;
        if ( v12 )
        {
          result = !v8;
          if ( v8 )
            return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C947AC);
        }
      }
      else if ( !v10 )
      {
        FIELD_U32(a1, 7088) = 75;
        *(_DWORD *)result = 1;
      }
    }
  }
  return result;
}
