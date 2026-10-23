/* sub_601472B0
 * address: 0x601472B0   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601472B0(CollisionActor *a1)
{
  float v2; // s0
  int result; // r0
  float v4; // s18
  float v5; // s20
  float v6; // s16
  float v7; // s0
  int v8; // r5
  float v9; // s6
  float x; // s2
  float v11; // s0
  int v12; // [sp+0h] [bp-30h] BYREF
  float y; // [sp+4h] [bp-2Ch] BYREF

  y = FIELD_U32(a1, 0x0).position.y;
  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  FIELD_U32(a1, 0x0).speed.y = FIELD_U32(a1, 0x0).field_64 + FIELD_U32(a1, 0x0).speed.y;
  CollisionActor__handleSpeed(a1);
  if ( FIELD_U32(a1, 0x0).speed.y > 0.0 )
  {
    ((void (__fastcall *)(int *, float *, Vec3 *, _DWORD))checkLiquidCollisions)(
      &v12,
      &y,
      &FIELD_U32(a1, 0x0).position,
      (unsigned __int8)FIELD_U32(a1, 0x0).field_56);
    v2 = y;
    if ( y < FIELD_U32(a1, 0x0).position.y )
    {
      FIELD_U32(a1, 0x0).speed.y = 0.0;
      FIELD_U32(a1, 0x0).position.y = v2;
    }
  }
  result = (int)&dword_60B3B95C;
  v4 = 0.0 - FIELD_U32(a1, 0x0).scale.y;
  v5 = 0.0 - FIELD_U32(a1, 0x0).scale.x;
  v6 = 0.0 - FIELD_U32(a1, 0x0).scale.z;
  v7 = sqrtf((float)((float)(v4 * v4) + (float)(v5 * v5)) + (float)(v6 * v6));
  if ( v7 <= 0.02 )
  {
    result = (int)&FIELD_U32(a1, 0x0).scale;
    v8 = 1;
    FIELD_U32(a1, 0x0).scale.x = 0.0;
    FIELD_U32(a1, 0x0).scale.y = 0.0;
    FIELD_U32(a1, 0x0).scale.z = 0.0;
    x = FIELD_U32(a1, 0x0).scale.x;
    v11 = FIELD_U32(a1, 0x0).scale.y;
  }
  else
  {
    v8 = 0;
    v9 = v6 * (float)(1.0 / v7);
    x = FIELD_U32(a1, 0x0).scale.x + (float)((float)(v5 * (float)(1.0 / v7)) * 0.02);
    FIELD_U32(a1, 0x0).scale.x = x;
    v11 = FIELD_U32(a1, 0x0).scale.y + (float)((float)(v4 * (float)(1.0 / v7)) * 0.02);
    FIELD_U32(a1, 0x0).scale.y = v11;
    FIELD_U32(a1, 0x0).scale.z = FIELD_U32(a1, 0x0).scale.z + (float)(v9 * 0.02);
  }
  FIELD_U32(a1, 0x0).aCollider.info.distToEdge.x = x * 9.5;
  FIELD_U32(a1, 0x0).aCollider.info.distToEdge.y = v11 * 9.5;
  if ( x < 0.7 )
    result = (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 72))(a1);
  if ( v8 == 1 )
  {
    FIELD_U32(a1, 0x0)._.isDeleted = 1;
    return 1;
  }
  return result;
}
