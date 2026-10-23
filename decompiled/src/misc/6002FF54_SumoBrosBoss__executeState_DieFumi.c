/* SumoBrosBoss__executeState_DieFumi
 * address: 0x6002FF54   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600260D8
// 
// Overridden by: None
signed int __fastcall SumoBrosBoss__executeState_DieFumi(CollisionActor *a1)
{
  int v2; // r0
  char *v3; // r6
  float x; // r0
  int v5; // r0
  char v6; // r0
  signed int result; // r0
  int speed; // [sp+4h] [bp-24h] BYREF
  Vec3 target[2]; // [sp+8h] [bp-20h] BYREF

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  v3 = &a1[1].collisionMgr[715];
  v2 = (unsigned __int8)a1[1].collisionMgr[715];
  if ( v2 == 2 )
  {
    if ( !LOWORD(a1[1]._.aCollider.activeNode.prev) )
    {
      v5 = FIELD_U32(EnemyCounterMaybe_instance, 24);
      if ( v5 )
      {
        FIELD_U8(v5, 6103) = 1;
LABEL_13:
        v6 = *v3 + 1;
LABEL_16:
        *v3 = v6;
      }
    }
  }
  else
  {
    if ( v2 == 1 )
    {
      if ( FIELD_U32(a1, 0x0).position.y >= (float)(FIELD_F32(dword_60CC6484, 132) + -100.0) )
        goto LABEL_17;
      FIELD_U32(a1, 0x0).speed.y = 0.0;
      LOWORD(a1[1]._.aCollider.activeNode.prev) = 65;
      v6 = 2;
      goto LABEL_16;
    }
    if ( !a1[1].collisionMgr[715] )
    {
      CollisionMgr_process(FIELD_U8(a1, 0x288));
      if ( FIELD_U32(a1, 0x0).speed.y < 0.0 && (FIELD_U8(a1, 0x288)[2224] & 1) != 0 && !sub_6014B69C(FIELD_U8(a1, 0x288)) )
      {
        FIELD_U32(a1, 0x0).speed.x = 1.0;
        FIELD_U32(a1, 0x0).speed.y = 2.5;
        FIELD_U32(a1, 0x0).speed.z = 0.0;
        if ( FIELD_U32(a1, 0x0).direction == 1 )
          FIELD_U32(a1, 0x0).speed.x = -1.0;
        x = FIELD_U32(a1, 0x0).position.x;
        target[0].y = FIELD_U32(a1, 0x0).position.y;
        target[0].x = x;
        target[0].z = 4500.0;
        EffectData_create(971, target, 0, 0);
        sub_60813430(&a1[1]._.aCollider.field_50, "SE_BOSS_KK_FALL", 0);
        *(_DWORD *)&FIELD_U8(a1, 0x288)[2532] &= ~4u;
        *(_DWORD *)&FIELD_U8(a1, 0x288)[2540] &= ~4u;
        *(_DWORD *)&FIELD_U8(a1, 0x288)[2556] &= ~4u;
        goto LABEL_13;
      }
    }
  }
LABEL_17:
  result = (unsigned __int8)a1[1].collisionMgr[721];
  if ( a1[1].collisionMgr[721] )
  {
    LODWORD(target[0].x) = (int)(float)((float)(2147500000.0 * 35.0) / 180.0) * byte_60AFE3F4[FIELD_U32(a1, 0x0).direction];
    speed = 0x8000000;
    result = moveValueTo(&FIELD_U32(a1, 0x0).rotation.y, (int *)target, &speed);
    if ( result == 1 )
    {
      a1[1].collisionMgr[721] = 0;
      return 0;
    }
  }
  return result;
}
