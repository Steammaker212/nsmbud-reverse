/* sub_602883A8
 * address: 0x602883A8   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602883A8(int a1)
{
  int v2; // r0
  int result; // r0
  _BYTE *v4; // r5
  float v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r0
  int speed; // [sp+4h] [bp-2Ch] BYREF
  CollisionMgr_Sensor sensor; // [sp+8h] [bp-28h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( FIELD_U8(a1, 6607) )
  {
    v2 = FIELD_U32(a1, 80);
    sensor.a = 1.5046e-36;
    if ( moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v2], (int *)&sensor) )
      FIELD_U8(a1, 6607) = 0;
  }
  v4 = (_BYTE *)(a1 + 6605);
  result = FIELD_S8(a1, 6605);
  if ( result != 2 )
  {
    if ( result == 1 )
    {
      CollisionActor__handleGravity((CollisionActor *)a1);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      CollisionActor__sub_600034C8((CollisionActor *)a1);
      if ( (FIELD_U8(a1, 2872) & 1) != 0 )
        FIELD_U32(a1, 124) = 0;
      result = a1 + 6588;
      v7 = FIELD_U32(a1, 6588);
      if ( v7 )
      {
        *(_DWORD *)result = v7 - 1;
        return result;
      }
      FIELD_U32(a1, 124) = 0x40000000;
      v8 = (unsigned __int8)*v4;
    }
    else
    {
      if ( FIELD_U8(a1, 6605) || (FIELD_U8(a1, 2872) & 1) == 0 )
        return result;
      if ( (FIELD_U8(a1, 2880) & 1) == 0 )
      {
        FIELD_U32(a1, 6568) = FIELD_U32(a1, 108);
        v5 = FIELD_F32(a1, 108);
        sensor.b = FIELD_F32(a1, 112);
        sensor.a = v5;
        sensor.c = 4500.0;
        EffectWrapper_update((EffectWrapper *)(a1 + 6452), 661, (Vec3 *)&sensor, 0, 0);
        result = a1 + 6604;
        v6 = FIELD_U8(a1, 6604);
        if ( v6 == 1 )
        {
          FIELD_U32(a1, 124) = 1065353216;
        }
        else if ( FIELD_U8(a1, 6604) )
        {
          FIELD_U32(a1, 6588) = 10;
          ++*v4;
        }
        else
        {
          FIELD_U32(a1, 124) = 1071644672;
          FIELD_U8(a1, 6609) = 0;
        }
        *(_BYTE *)result = v6 + 1;
        return result;
      }
      v8 = 0;
      FIELD_U32(a1, 6588) = 10;
    }
    result = v8 + 1;
    *v4 = result;
    return result;
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  speed = 0x8000000;
  sensor.a = 0.0;
  moveValueTo((int *)(a1 + 156), (int *)&sensor, &speed);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 304) = 0;
    FIELD_U32(a1, 308) = 1098907648;
    FIELD_U32(a1, 312) = 1094713344;
    FIELD_U32(a1, 316) = 1098907648;
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFDEE4, 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFDEF0, 0);
    sensor.b = 28.0;
    sensor.a = 12.0;
    sensor.c = -12.0;
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &sensor, 1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F20C);
  }
  return result;
}
